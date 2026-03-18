/*
 * XREFs of xxxMsgWaitForMultipleObjectsEx @ 0x14001F190
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x1400205D8 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140289A34 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxMsgWaitForMultipleObjectsEx(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  unsigned int v5; // r14d
  __int64 *v6; // r12
  __int64 *CurrentThreadNonPaged; // rax
  int v8; // ebp
  int v9; // esi
  bool v10; // bl
  char v11; // di
  int v12; // r15d
  BOOL v13; // r13d
  __int64 v14; // r8
  unsigned int v15; // r15d
  NTSTATUS v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // rax
  const struct tagTHREADINFO *v21; // r13
  struct tagWND *v22; // rcx
  char v23; // al
  ULONG v24; // eax
  int v25; // [rsp+20h] [rbp-B8h]
  int v26; // [rsp+28h] [rbp-B0h]
  _BYTE v27[4]; // [rsp+40h] [rbp-98h] BYREF
  BOOL v28; // [rsp+44h] [rbp-94h]
  unsigned int v29; // [rsp+48h] [rbp-90h]
  int v30; // [rsp+4Ch] [rbp-8Ch]
  int v31; // [rsp+50h] [rbp-88h] BYREF
  __int64 v32; // [rsp+58h] [rbp-80h] BYREF
  __int64 v33; // [rsp+60h] [rbp-78h]
  __int64 v34; // [rsp+68h] [rbp-70h] BYREF
  struct _FILE_IO_COMPLETION_INFORMATION v35; // [rsp+70h] [rbp-68h] BYREF
  int v36; // [rsp+E0h] [rbp+8h]

  v36 = a1;
  v5 = a3;
  v32 = 0LL;
  v6 = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v33 = *CurrentThreadNonPaged;
  else
    v33 = 0LL;
  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = a5;
  v12 = a5 & 1;
  v30 = v12;
  v13 = !(a5 & 1);
  v28 = v13;
  v29 = v36 + 1;
  while ( 1 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v27, 1);
    if ( v8 )
    {
      if ( v5 == -1 )
      {
        v6 = 0LL;
      }
      else
      {
        v6 = &v32;
        v32 = -10000LL * v5;
      }
      v8 = 0;
      v9 = v12;
      v10 = (v11 & 2) != 0;
    }
    v15 = v29;
    do
    {
      LOBYTE(v26) = v10;
      LOBYTE(v14) = 1;
      LOBYTE(v25) = 1;
      v16 = ObWaitForMultipleObjects(v15, a2, v14, v13, v25, v26, v6);
    }
    while ( v16 >= 0 && v10 && v16 == 257 );
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v27);
    v5 = a3;
    v12 = v30;
    if ( v9 || v16 != v36 )
      break;
    v20 = (_QWORD *)W32GetCurrentThreadNonPaged(v18, v17);
    v21 = v20 ? (const struct tagTHREADINFO *)*v20 : 0LL;
    v31 = 0;
    memset(&v35, 0, sizeof(v35));
    v34 = 0LL;
    LOBYTE(v26) = 0;
    if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v21 + 202), &v35, 1LL, &v31, &v34, v26) )
      break;
    if ( ((__int64)v35.ApcContext & 0x80000000) != 0 )
    {
      if ( LODWORD(v35.ApcContext) == 0x80000000 )
        ZwAssociateWaitCompletionPacket(
          *((_QWORD *)v21 + 205),
          *((_QWORD *)v21 + 202),
          *((_QWORD *)v21 + 204),
          0LL,
          0xFFFFFFFF80000000uLL,
          0,
          0LL,
          0LL);
      break;
    }
    if ( v35.ApcContext >= (PVOID)2 || (v22 = (struct tagWND *)*((_QWORD *)v21 + (__int64)v35.ApcContext + 207)) == 0LL )
    {
      BroadcastCoreMessagingApcContextError(v21, (unsigned __int64)v35.ApcContext);
      break;
    }
    xxxHandleCoreMessagingQueueCompletion(v22, &v35, 0x80000000uLL);
    v23 = INTERLOCKEDINT::operator int(*(_QWORD *)(v33 + 488) + 8LL);
    v13 = v28;
    if ( (v23 & 8) != 0 && (a4 & 8) != 0 )
      break;
    v11 = a5;
  }
  if ( v16 >= 0 )
    return (unsigned int)v16;
  v24 = RtlNtStatusToDosError(v16);
  UserSetLastError(v24);
  return 0xFFFFFFFFLL;
}
