/*
 * XREFs of KxFlushEntireTb @ 0x140252BEC
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     KeFlushEntireTb @ 0x1405F3530 (KeFlushEntireTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140230FF0 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxSetTimeStampBusy @ 0x140252AF4 (KxSetTimeStampBusy.c)
 *     KiIpiWaitForRequestBarrier @ 0x140252F00 (KiIpiWaitForRequestBarrier.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KxFlushEntireTb(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // bl
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  struct _KPRCB *v10; // rbp
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 1;
  v4 = 3LL;
  if ( (_DWORD)a1 == 1 )
  {
    v4 = 2147483651LL;
  }
  else if ( !(_DWORD)a1 )
  {
    v3 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  v6 = 12LL;
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  if ( v3 )
  {
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp, v6, a3) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      {
        if ( KiFlushPcid )
        {
          v18 = __readcr3();
          __writecr3(v18);
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v17 = __readcr4();
          if ( (v17 & 0x20080) != 0 )
          {
            __writecr4(v17 ^ 0x80);
            __writecr4(v17);
          }
          else
          {
            v19 = __readcr3();
            __writecr3(v19);
          }
        }
      }
      else
      {
        KiIpiSendRequest((_DWORD)CurrentPrcb, 1, 0, 0, v4);
        if ( KiFlushPcid )
        {
          v13 = __readcr3();
          __writecr3(v13);
          if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            KiSetUserTbFlushPending();
        }
        else
        {
          v8 = __readcr4();
          if ( (v8 & 0x20080) != 0 )
          {
            __writecr4(v8 ^ 0x80);
            __writecr4(v8);
          }
          else
          {
            v15 = __readcr3();
            __writecr3(v15);
          }
        }
        KiIpiWaitForRequestBarrier(CurrentPrcb);
      }
      _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
    }
  }
  else
  {
    _InterlockedOr(v23, 0);
    v10 = KeGetCurrentPrcb();
    ActiveProcessors = (struct _KAFFINITY_EX *)v10->CurrentThread->ApcState.Process->ActiveProcessors;
    *(_QWORD *)&v10->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&v10->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v10->StaticAffinity.KeRcuAffinity.8));
    RtlpCopyAffinityEx(
      &v10->StaticAffinity.KeFlushTbAffinity,
      v10->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    KeRemoveProcessorAffinityEx(&v10->StaticAffinity, v10->Number);
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                         (__int64)v10,
                         &v10->StaticAffinity.KeFlushTbAffinity.Count) )
    {
      KiIpiSendRequest((_DWORD)v10, 0, (_DWORD)v10 + 11704, 0, v4);
      if ( KiFlushPcid )
      {
        v14 = __readcr3();
        __writecr3(v14);
        if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          KiSetUserTbFlushPending();
      }
      else
      {
        v12 = __readcr4();
        if ( (v12 & 0x20080) != 0 )
        {
          __writecr4(v12 ^ 0x80);
          __writecr4(v12);
        }
        else
        {
          v16 = __readcr3();
          __writecr3(v16);
        }
      }
      KiIpiWaitForRequestBarrier(v10);
    }
    else if ( KiFlushPcid )
    {
      v21 = __readcr3();
      __writecr3(v21);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v20 = __readcr4();
      if ( (v20 & 0x20080) != 0 )
      {
        __writecr4(v20 ^ 0x80);
        __writecr4(v20);
      }
      else
      {
        v22 = __readcr3();
        __writecr3(v22);
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
