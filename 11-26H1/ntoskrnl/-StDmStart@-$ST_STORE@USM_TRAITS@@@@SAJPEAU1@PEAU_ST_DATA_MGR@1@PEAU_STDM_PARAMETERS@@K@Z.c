/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403EDA98
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403ED790 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     SmHpChunkHeapCleanup @ 0x1403E9DB0 (SmHpChunkHeapCleanup.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1403EDCD4 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     SmHpChunkHeapInitialize @ 0x140492670 (SmHpChunkHeapInitialize.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmStart(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // eax
  _DWORD *v8; // rbx
  __int128 v9; // xmm0
  bool v10; // zf
  __int64 v11; // rcx
  __int64 Pool3; // rdx
  __int64 v13; // rdx
  __int64 result; // rax
  _DWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+38h] [rbp-28h]
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-20h]
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-18h]
  __int64 (__fastcall *v19)(); // [rsp+50h] [rbp-10h]
  int v20; // [rsp+80h] [rbp+20h] BYREF
  int v21; // [rsp+84h] [rbp+24h]

  v4 = *a3;
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  v8 = (_DWORD *)(a1 + 12);
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  v9 = *(_OWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 824) = v4;
  *(_OWORD *)(a2 + 808) = v9;
  v10 = (*(_DWORD *)(a2 + 776) & 0x20000) == 0;
  v11 = *(_QWORD *)(a1 + 2160);
  *(_QWORD *)(a2 + 888) = v11;
  *(_QWORD *)(a2 + 1960) = *(_QWORD *)(a1 + 2208);
  *(_QWORD *)(a2 + 2064) = a1 + 2216;
  *(_DWORD *)(a2 + 1360) = *(_DWORD *)(a1 + 2176);
  *(_QWORD *)(a2 + 1320) = a2 + 24;
  *(_QWORD *)(a2 + 1328) = a2 + 88;
  *(_QWORD *)(a2 + 912) = v11;
  if ( !v10 )
  {
    Pool3 = ExAllocatePool3(
              64LL,
              4 * (((unsigned __int64)(unsigned int)*v8 + 31) >> 5),
              1951624563LL,
              &stru_140E27C48.Header.WaitListHead.Blink,
              1);
    if ( !Pool3 )
      return 3221225626LL;
    *(_DWORD *)(a2 + 832) = *v8;
    *(_QWORD *)(a2 + 840) = Pool3;
    RtlSetAllBits((PRTL_BITMAP)(a2 + 832));
  }
  v13 = ExAllocatePool3(
          64LL,
          4 * (((unsigned __int64)(unsigned int)*v8 + 31) >> 5),
          1951624563LL,
          &stru_140E27C48.Header.WaitListHead.Blink,
          1);
  if ( !v13 )
    return 3221225626LL;
  *(_DWORD *)(a2 + 1392) = *v8;
  *(_QWORD *)(a2 + 1400) = v13;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1392));
  v10 = (*(_DWORD *)(a2 + 776) & 0x100000) == 0;
  *(_QWORD *)(a2 + 1368) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 848) = a4;
  if ( !v10 )
  {
    v20 = 12;
    v21 = 2;
    SmHpChunkHeapCleanup(a2 + 192);
    SmHpChunkHeapInitialize(a2 + 192, &v20);
  }
  v15[1] = 0;
  v16 = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v15[0] = -1;
  v17 = HalSystemVectorDispatchEntry;
  v18 = xHalUnmaskInterrupt;
  v19 = xHalTimerWatchdogStop;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1552), (struct NP_CONTEXT::_NP_PARAMETERS *)v15);
  if ( (int)result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1688), (struct NP_CONTEXT::_NP_PARAMETERS *)v15);
    if ( (int)result >= 0 )
    {
      result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1824), (struct NP_CONTEXT::_NP_PARAMETERS *)v15);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
