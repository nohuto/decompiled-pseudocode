/*
 * XREFs of HalpContinueProcessingWaitQueue @ 0x14043ECA0
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x14043EB30 (IoFreeAdapterChannelV3.c)
 *     HalPutScatterGatherListV3 @ 0x14043ED84 (HalPutScatterGatherListV3.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043E70C (HalpAllocateDmaResourcesInternal.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14043EB84 (IoFreeAdapterChannelV3Internal.c)
 *     HalpDmaGetNextWcb @ 0x14043ECFC (HalpDmaGetNextWcb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpContinueProcessingWaitQueue(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 NextWcb; // rcx
  __int64 v6; // r9
  char v8; // bp
  char v9; // r14
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v3 = 0;
  NextWcb = ((__int64 (*)(void))HalpDmaGetNextWcb)();
  if ( NextWcb )
  {
    while ( 1 )
    {
      *(_QWORD *)(a1 + 352) = NextWcb;
      v8 = 0;
      *(_DWORD *)(a1 + 248) = *(_DWORD *)(NextWcb + 40);
      *(_DWORD *)(a1 + 388) = *(_DWORD *)(NextWcb + 16);
      *(_DWORD *)(a1 + 624) = 0;
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v4) = 2;
          LOBYTE(NextWcb) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(NextWcb, v4);
        }
        v8 = 1;
      }
      v10 = 1;
      v9 = HalpAllocateDmaResourcesInternal(a1, 0, &v10, v6);
      if ( !v9 || v10 == 1 )
        goto LABEL_15;
      if ( v10 == 2 )
        goto LABEL_14;
      if ( v10 == 3 )
        break;
LABEL_15:
      if ( v8 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( v9 )
      {
        ++v3;
        NextWcb = HalpDmaGetNextWcb(a1);
        if ( NextWcb )
          continue;
      }
      return v3;
    }
    *(_DWORD *)(a1 + 248) = 0;
LABEL_14:
    IoFreeAdapterChannelV3Internal(a1);
    goto LABEL_15;
  }
  return v3;
}
