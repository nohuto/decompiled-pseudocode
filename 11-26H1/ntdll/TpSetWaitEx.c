/*
 * XREFs of TpSetWaitEx @ 0x18004F8E0
 * Callers:
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     TpSetWait @ 0x18004F7C0 (TpSetWait.c)
 *     RtlpWnfNotificationThread @ 0x18004F7D0 (RtlpWnfNotificationThread.c)
 *     EtwpNotificationThread @ 0x1800509C0 (EtwpNotificationThread.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800700DC (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180070714 (RtlpWnfRegisterTpNotification.c)
 *     RtlpTpWaitCheckReset @ 0x1800C0960 (RtlpTpWaitCheckReset.c)
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 *     TppRaiseHandleStatus @ 0x1800C9DE8 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160170 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCancelWaitCompletionPacket @ 0x180160210 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, volatile signed __int32 **a2, __int64 *a3, __int64 a4)
{
  int v4; // eax
  volatile signed __int32 **v6; // r10
  volatile signed __int32 *v8; // rbp
  int v9; // esi
  char *SchedulerSharedDataSlot; // r8
  __int64 v11; // r14
  unsigned int i; // ecx
  signed int v13; // edi
  _BYTE *v14; // r14
  char v15; // r12
  char v16; // al
  BOOL v17; // r15d
  __int64 v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  char v22; // al
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  volatile signed __int32 **v26; // rdx
  unsigned __int64 v27; // rax
  int v28; // ecx
  char v29; // al
  char v30; // [rsp+80h] [rbp+8h] BYREF
  volatile signed __int32 **v31; // [rsp+88h] [rbp+10h]

  v31 = a2;
  v4 = *(_DWORD *)(a1 + 168);
  v6 = a2;
  if ( (v4 & 0x10000) != 0
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !a2 && NtCurrentPeb()->Ldr->ShutdownInProgress )
      return 0LL;
  }
  else if ( !a4 )
  {
    v8 = (volatile signed __int32 *)(a1 + 240);
    v9 = 0;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    v11 = *(_QWORD *)(a1 + 144);
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        a2 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*a2 )
        {
          *a2 = v8;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v8, 0LL) )
    {
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a1 + 240), (__int64)a2);
      v6 = v31;
    }
    if ( *(_QWORD *)(a1 + 360) )
    {
      v23 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 0LL);
      if ( v23 )
      {
        if ( v23 != 259 && v23 != -1073741536 )
          TppRaiseInvalidParameter();
        v14 = (_BYTE *)(a1 + 464);
        v15 = 0;
        v29 = *(_BYTE *)(a1 + 464);
        if ( (v29 & 4) == 0 )
        {
          *v14 = v29 | 4;
          TppBarrierAdjust((signed __int64 *)(a1 + 56), 1, 0);
        }
        v6 = v31;
        v13 = 0;
      }
      else
      {
        v15 = 1;
        *(_QWORD *)(a1 + 360) = 0LL;
        v13 = -1;
        if ( (unsigned __int8)TppCancelTimer(a1, v11 + 112, 1LL) )
          v13 = -2;
        v14 = (_BYTE *)(a1 + 464);
        if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
        {
          TppBarrierAdjust((signed __int64 *)(a1 + 56), -1, 0);
          *v14 &= ~4u;
        }
        v6 = v31;
      }
    }
    else
    {
      v13 = 0;
      v14 = (_BYTE *)(a1 + 464);
      v15 = 1;
    }
    *v14 &= ~1u;
    v16 = *v14 & 0xFD;
    *v14 = v16;
    v17 = v13 != 0;
    if ( !v6 || *(_BYTE *)(a1 + 355) )
      goto LABEL_26;
    if ( !v15 )
    {
      v22 = v16 | 1;
      *(_QWORD *)(a1 + 376) = v6;
      *v14 = v22;
      if ( a3 )
      {
        *v14 = v22 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
LABEL_21:
      if ( v13 > 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)a1, v13);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
        return v17;
      }
LABEL_26:
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      if ( v13 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v13) == -v13 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      return v17;
    }
    if ( *(_QWORD *)(a1 + 360) )
      goto LABEL_26;
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *(_QWORD *)(a1 + 368);
    v30 = 0;
    *(_QWORD *)(a1 + 360) = v6;
    v20 = ZwAssociateWaitCompletionPacket(v19, *(_QWORD *)(v18 + 64), v6, a1 + 392, a1, 0, 0LL, &v30);
    if ( v20 < 0 )
    {
      v26 = v31;
      *(_QWORD *)(a1 + 360) = 0LL;
      TppRaiseHandleStatus((unsigned int)v20, v26, a1);
    }
    else
    {
      if ( a3 && !v30 )
      {
        v24 = *a3;
        if ( *a3 < 0 )
        {
          v27 = -v24;
        }
        else
        {
          if ( v24 <= MEMORY[0x7FFE0014] )
          {
            LODWORD(v25) = 0;
            goto LABEL_50;
          }
          v27 = v24 - MEMORY[0x7FFE0014];
        }
        v25 = v27 >> 16;
        v28 = 300;
        if ( v25 > 0x12C )
        {
LABEL_51:
          TppSetTimer(a1, v18 + 112, (_DWORD)a3, 0, v28);
          v9 = 2;
          goto LABEL_20;
        }
LABEL_50:
        v28 = v25;
        goto LABEL_51;
      }
      v9 = 1;
    }
LABEL_20:
    v13 += v9;
    goto LABEL_21;
  }
  TppRaiseInvalidParameter();
  return 0LL;
}
