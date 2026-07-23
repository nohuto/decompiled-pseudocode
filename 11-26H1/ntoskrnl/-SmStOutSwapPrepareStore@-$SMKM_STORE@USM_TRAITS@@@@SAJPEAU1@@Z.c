/*
 * XREFs of ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EE060
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403EDFBC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(__int64 a1)
{
  __int64 Pool3; // rax
  signed __int64 v3; // rsi

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 3040), -1LL, 0LL) )
    return 3221226614LL;
  Pool3 = ExAllocatePool3(
            64LL,
            4 * (((unsigned __int64)*(unsigned int *)(a1 + 2644) + 31) >> 5) + 24,
            2001956211LL,
            &stru_140E27C48.Header.WaitListHead.Blink,
            1);
  v3 = Pool3;
  if ( Pool3 )
  {
    *(_OWORD *)Pool3 = 0LL;
    *(_QWORD *)(Pool3 + 16) = 0LL;
    *(_DWORD *)(Pool3 + 8) = *(_DWORD *)(a1 + 2644);
    *(_QWORD *)(Pool3 + 16) = Pool3 + 24;
    RtlSetAllBits((PRTL_BITMAP)(Pool3 + 8));
    _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 3040), v3, -1LL);
    return 0LL;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 3040), 0LL);
    return 3221225626LL;
  }
}
