/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x140A141BC
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x140A14034 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140A14478 (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlInterlockedCompareExchange32ToUser @ 0x140781EAC (RtlInterlockedCompareExchange32ToUser.c)
 *     RtlInterlockedCompareExchange64ToUser @ 0x140781F00 (RtlInterlockedCompareExchange64ToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     EtwpFreeUserBufferSpace @ 0x1408361C8 (EtwpFreeUserBufferSpace.c)
 *     EtwpFindUserBufferSpace @ 0x140A14940 (EtwpFindUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  _KPROCESS **v6; // r15
  unsigned int ULongFromUser; // eax
  __int64 v8; // rcx
  int UserBufferSpace; // esi
  unsigned int *v10; // r12
  _QWORD *v11; // r13
  __int64 ULong64FromUser; // r14
  __int64 v13; // rbx
  signed __int64 v14; // rax
  _DWORD *v15; // r13
  int v16; // ebx
  unsigned int v17; // eax
  void *v19; // [rsp+20h] [rbp-A8h] BYREF
  int v20; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+30h] [rbp-98h]
  signed __int64 v22; // [rsp+38h] [rbp-90h]
  __int64 v23; // [rsp+40h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-80h]
  char *v25; // [rsp+50h] [rbp-78h]
  _OWORD v26[3]; // [rsp+58h] [rbp-70h] BYREF

  v24 = a2;
  v23 = a3;
  memset(v26, 0, sizeof(v26));
  v19 = 0LL;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    ++*(_DWORD *)(a2 + 84);
    if ( (a1[3] & 0x10000000) != 0 || *(_DWORD *)(a2 + 84) > 2u )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  v6 = (_KPROCESS **)(a2 + 24);
  v21 = a2 + 24;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 488LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*v6, 0, (__int64)v26);
  RtlWriteULongToUser(*(_DWORD **)(a2 + 136), a1[60]);
  RtlWriteULongToUser(*(_DWORD **)(a2 + 144), a1[65]);
  ULongFromUser = RtlReadULongFromUser(*(unsigned int **)(a2 + 64));
  v8 = (unsigned int)(4 * a1[59]);
  if ( ULongFromUser < (unsigned int)v8 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v8, a2, *(unsigned int *)(a3 + 48), &v19);
    if ( UserBufferSpace >= 0 )
    {
      RtlCopyToUser(v19, (void *)a3, *(unsigned int *)(a3 + 48));
      v10 = *(unsigned int **)(a2 + 72);
      v11 = v19;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v15 = (char *)v19 + 32;
        v25 = (char *)v19 + 32;
        LODWORD(ULong64FromUser) = RtlReadULongFromUser(v10);
        do
        {
          RtlWriteULongToUser(v15, ULong64FromUser);
          v16 = ULong64FromUser;
          v17 = RtlInterlockedCompareExchange32ToUser(v10, (signed __int32)v15, ULong64FromUser);
          ULong64FromUser = v17;
        }
        while ( v17 != v16 );
        v22 = v17;
      }
      else
      {
        ULong64FromUser = RtlReadULong64FromUser(v10);
        do
        {
          RtlWriteULong64ToUser(v11 + 4, ULong64FromUser);
          v13 = ULong64FromUser;
          v14 = RtlInterlockedCompareExchange64ToUser(v10, (signed __int64)(v11 + 4), ULong64FromUser);
          ULong64FromUser = v14;
        }
        while ( v14 != v13 );
        v22 = v14;
      }
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !ULong64FromUser )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
    v20 = -1073741764;
  }
  KiUnstackDetachProcess((__int64)v26, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&(*v6)[1].ProfileListHead.Blink);
  return (unsigned int)UserBufferSpace;
}
