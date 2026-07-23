/*
 * XREFs of ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140395F94
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 result; // rax
  bool v9; // zf
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 2648);
  v4 = a2;
  if ( *(_QWORD *)(v2 + 8LL * a2) )
    return 0LL;
  v14 = 0LL;
  v5 = *(unsigned int *)(a1 + 2640);
  v12 = 0LL;
  v11[0] = 0LL;
  v11[1] = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 3212);
  v6 = *(unsigned __int8 *)(a1 + 2469);
  DWORD2(v12) = v5;
  v7 = *(_QWORD *)(a1 + 3200);
  HIDWORD(v12) = (v6 >> 6) & 1;
  v13 = 0LL;
  *(_QWORD *)&v12 = v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
             a1,
             2LL,
             v11,
             4LL);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v14;
    if ( (int)v14 >= 0 )
    {
      v9 = (BYTE8(v13) & 1) == 0;
      v10 = v13;
      *(_QWORD *)(v2 + 8 * v4) = v13;
      if ( !v9 )
        *(_QWORD *)(v2 + 8 * v4) = v10 | 0x8000000000000000uLL;
      return 0LL;
    }
  }
  return result;
}
