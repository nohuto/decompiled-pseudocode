/*
 * XREFs of ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14002B4FC
 * Callers:
 *     xxxWaitForInputIdle @ 0x1401FAC5C (xxxWaitForInputIdle.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxRemoveQueueCompletion @ 0x140020350 (xxxRemoveQueueCompletion.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x1400211C4 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A520 (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ClientDeliverUserApc @ 0x1401A3EC4 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall xxxPollAndWaitForSingleObject(PVOID Object, void *a2, unsigned int a3)
{
  struct tagTHREADINFO *v6; // rsi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v10; // ebx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h]
  char v20; // [rsp+A8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v6 = PtiCurrent();
  if ( !*((_QWORD *)v6 + 116) )
  {
    v15 = Win32AllocPoolNonPagedZInit(24LL, 1819308885LL);
    *((_QWORD *)v6 + 116) = v15;
    if ( !v15 )
      return 0xFFFFFFFFLL;
  }
  v7 = PtiCurrent();
  v18[0] = *((_QWORD *)v7 + 48);
  *((_QWORD *)v7 + 48) = v18;
  v19 = UserDereferenceObject;
  v18[1] = Object;
  if ( Object )
    ObfReferenceObject(Object);
  ClearQueueServerEvent(64LL, v8);
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  do
  {
    if ( a3 <= 0x1F4 )
    {
      v10 = a3;
LABEL_7:
      a3 = 0;
      goto LABEL_8;
    }
    v10 = 500;
    if ( a3 != -1 )
    {
      v16 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v9;
      LODWORD(v9) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v16 >= a3 )
        goto LABEL_7;
      a3 -= v16;
    }
LABEL_8:
    Timeout.QuadPart = -10000LL * v10;
    **((_QWORD **)v6 + 116) = Object;
    *(_QWORD *)(*((_QWORD *)v6 + 116) + 8LL) = *((_QWORD *)v6 + 201);
    *(_QWORD *)(*((_QWORD *)v6 + 116) + 16LL) = a2;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v20, 1);
    v11 = KeWaitForMultipleObjects((a2 != 0LL) + 2, *((PVOID **)v6 + 116), WaitAny, WrUserRequest, 1, 0, &Timeout, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v20);
    if ( v11 == 1 )
    {
      xxxRemoveQueueCompletion(v13, v12);
    }
    else
    {
      if ( v11 >= 0 )
      {
        if ( v11 != 192 )
          goto LABEL_11;
        ClientDeliverUserApc();
      }
      v11 = -1;
    }
LABEL_11:
    if ( (INTERLOCKEDINT::operator int(*((_QWORD *)v6 + 61) + 4LL) & 0x40) != 0 )
      xxxReceiveMessages(v6);
    if ( v11 != 258 && v11 != 1 )
      goto LABEL_17;
  }
  while ( a3 );
  if ( v11 == 1 )
    v11 = 258;
LABEL_17:
  if ( v19 != -1 )
    PopAndFreeW32ThreadLock(v18);
  return (unsigned int)v11;
}
