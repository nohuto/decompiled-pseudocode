/*
 * XREFs of KeFlushTb @ 0x140252130
 * Callers:
 *     MI_FLUSH_ENTIRE_TB @ 0x140251974 (MI_FLUSH_ENTIRE_TB.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxSetTimeStampBusy @ 0x140252AF4 (KxSetTimeStampBusy.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140252B78 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402F38FC (HvlpFastFlushAddressSpaceTbEx.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     KiIsFlushEntire @ 0x14041DD34 (KiIsFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeFlushTb(_KPROCESS *i, volatile _KAFFINITY_EX *ActiveProcessors, unsigned __int64 a3)
{
  int v3; // edi
  unsigned int v4; // ebp
  volatile _KAFFINITY_EX *v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int8 v10; // bl
  _KPROCESS *v11; // rcx
  _ULARGE_INTEGER v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int8 v15; // r14
  unsigned __int8 v16; // bl
  _ULARGE_INTEGER DueTime; // rcx
  __int64 v18; // rsi
  volatile LONG *v19; // rcx
  unsigned __int8 v20; // bl
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _KPROCESS *Process; // rcx
  _KPROCESS_SECURE_STATE v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-B8h] BYREF
  char v26[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-90h]

  v3 = (int)i;
  v4 = (unsigned int)ActiveProcessors;
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_38;
  v5 = 0LL;
  if ( (HvlEnlightenments & 2) == 0 && ((HvlEnlightenments & 0x800000) == 0 || !(unsigned __int8)KiIsFlushEntire(i)) )
  {
    if ( (_DWORD)KeNumberProcessors_0 != 1 )
    {
      if ( v4 )
        goto LABEL_46;
      _InterlockedOr(v25, 0);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 12 )
        __writecr8(0xCuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
      CurrentPrcb = KeGetCurrentPrcb();
      ActiveProcessors = CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
      for ( i = 0LL; (unsigned __int16)i < ActiveProcessors->Count; LOWORD(i) = (_WORD)i + 1 )
      {
        a3 = ActiveProcessors->Bitmap[(unsigned __int16)i];
        if ( a3 && ((_WORD)i != CurrentPrcb->Group || a3 != CurrentPrcb->GroupSetMember) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          goto LABEL_46;
        }
      }
      if ( KiKvaShadow )
      {
        if ( v3 != 3 && !v3 )
          goto LABEL_42;
        if ( !KiFlushPcid )
          goto LABEL_19;
        v21 = __readcr3();
        __writecr3(v21);
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          goto LABEL_21;
      }
      else
      {
        if ( v3 == 1 )
          goto LABEL_42;
        if ( !KiFlushPcid )
        {
LABEL_19:
          v8 = __readcr4();
          if ( (v8 & 0x20080) != 0 )
          {
            __writecr4(v8 ^ 0x80);
            __writecr4(v8);
LABEL_21:
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            goto LABEL_24;
          }
LABEL_42:
          v13 = __readcr3();
          __writecr3(v13);
          goto LABEL_21;
        }
        v22 = __readcr3();
        __writecr3(v22);
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          goto LABEL_21;
      }
      KiSetUserTbFlushPending();
      goto LABEL_21;
    }
LABEL_38:
    if ( !KiKvaShadow )
    {
      if ( v3 != 1 )
      {
        result = KxFlushEntireTb(v4);
        goto LABEL_28;
      }
      KxFlushNonGlobalTb(v4);
LABEL_25:
      result = (__int64)KeGetCurrentThread();
      if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 368LL) )
      {
        memset_0(v26, 0, 0x68uLL);
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 2u )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v24.EntireField = (unsigned __int64)Process->SecureState;
          LOBYTE(Process) = 2;
          v27 = v24.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
          result = VslpEnterIumSecureMode(Process, 256LL, 0LL, v26);
        }
      }
      goto LABEL_28;
    }
    if ( v3 == 2 || v3 == 1 )
      result = KxFlushEntireTb(v4);
    else
      result = KxFlushNonGlobalTb(v4);
    goto LABEL_24;
  }
LABEL_46:
  if ( KiKvaShadow )
  {
    if ( v3 )
    {
LABEL_48:
      v14 = 0LL;
      v15 = 1;
      goto LABEL_49;
    }
    v14 = 0LL;
    v15 = 0;
  }
  else
  {
    if ( v3 != 1 )
      goto LABEL_48;
    i = KeGetCurrentThread()->ApcState.Process;
    v14 = i->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    v15 = 0;
  }
LABEL_49:
  if ( !v4 )
  {
    _InterlockedOr(v25, 0);
    i = KeGetCurrentThread()->ApcState.Process;
    v5 = i->ActiveProcessors;
  }
  if ( v14 )
  {
    if ( v5 )
      goto LABEL_53;
    goto LABEL_54;
  }
  if ( v5 )
  {
LABEL_53:
    if ( !(unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(i, ActiveProcessors, a3, v14) )
      goto LABEL_54;
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTbEx(v14);
    else
      result = HvlpFastFlushAddressSpaceTbEx(v14);
LABEL_24:
    if ( v3 != 1 )
      goto LABEL_28;
    goto LABEL_25;
  }
  if ( v3 == 1 )
  {
LABEL_54:
    if ( (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTb(v14, v5, v15);
    else
      result = HvlpFastFlushAddressSpaceTb(v14, v5, v15);
    goto LABEL_24;
  }
  v16 = KeGetCurrentIrql();
  if ( v16 != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v16, 12LL);
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    if ( (HvlEnlightenments & 0x80u) == 0 )
      HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v15);
    else
      HvlpFastFlushAddressSpaceTb(0LL, 0LL, v15);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  result = v16;
  __writecr8(v16);
LABEL_28:
  if ( v3 == 1 )
  {
    if ( VmTbFlushEnabled )
    {
      result = (__int64)KeGetCurrentThread();
      v18 = *(_QWORD *)(result + 184);
      v19 = *(volatile LONG **)(v18 + 1648);
      if ( v19 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 > 2u )
        {
          __int2c();
          result = VmpFlushTb(v19);
        }
        else
        {
          if ( v20 < 2u )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 != 2 )
            {
              __writecr8(2uLL);
              v19 = *(volatile LONG **)(v18 + 1648);
            }
            if ( KiIrqlFlags )
            {
              LOBYTE(ActiveProcessors) = 2;
              KiRaiseIrqlProcessIrqlFlags(v20, ActiveProcessors);
              v19 = *(volatile LONG **)(v18 + 1648);
            }
          }
          result = VmpFlushTb(v19);
          if ( v20 < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
            result = v20;
            __writecr8(v20);
          }
        }
      }
    }
  }
  if ( ExTbFlushActive )
  {
    v10 = KeGetCurrentIrql();
    if ( v10 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(ActiveProcessors) = 15;
      KiRaiseIrqlProcessIrqlFlags(v10, ActiveProcessors);
    }
    v11 = KeGetCurrentThread()->ApcState.Process;
    if ( v3 != 1 )
    {
      DueTime = ExSaPageGroupDescriptorArrayLock.Timer.DueTime;
      goto LABEL_72;
    }
    v12 = (_ULARGE_INTEGER)v11[4].Padding[1];
    if ( v11[3].ActiveGroupPadding[1] )
    {
      guard_dispatch_icall_no_overrides(v11[3].ActiveGroupPadding[1], 0LL, 0LL);
      if ( v12.QuadPart )
        goto LABEL_71;
    }
    else if ( v12.QuadPart )
    {
LABEL_71:
      DueTime = v12;
LABEL_72:
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
        (_ULARGE_INTEGER)DueTime.QuadPart,
        0LL,
        0LL);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    result = v10;
    __writecr8(v10);
  }
  return result;
}
