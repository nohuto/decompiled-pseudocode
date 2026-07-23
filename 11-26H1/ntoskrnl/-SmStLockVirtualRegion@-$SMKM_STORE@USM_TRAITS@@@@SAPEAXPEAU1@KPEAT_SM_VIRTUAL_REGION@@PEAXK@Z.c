/*
 * XREFs of ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x140395C2C
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140396060 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmLogConsumedPoison @ 0x1404F7904 (SmLogConsumedPoison.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h]
  __int128 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-10h]

  v7 = a2;
  if ( (__int64)*a3 < 0 )
  {
    v15 = a4;
    goto LABEL_15;
  }
  v9 = *(_QWORD *)(a1 + 3048);
  if ( v9 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v9, 0LL) )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 2656);
  v11 = v10 + 8LL * ((a5 >> 8) & 7);
  while ( v11 < v10 + 80 )
  {
    if ( !*(_QWORD *)v11 || !*(_QWORD *)(*(_QWORD *)v11 + 32LL) )
      goto LABEL_10;
    if ( v11 < v10 + 64 )
      v11 = v10 + 64;
    else
      v11 += 8LL;
  }
  v11 = 0LL;
LABEL_10:
  *(_QWORD *)(a1 + 3048) = a3;
  v22 = 0LL;
  v19 = *(unsigned int *)(a1 + 2640);
  v18 = a4;
  v20 = 0LL;
  LODWORD(v20) = (a5 >> 8) & 7;
  v21 = 0LL;
  if ( (a5 & 1) != 0 )
    DWORD1(v20) |= 1u;
  v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
          a1,
          4LL,
          &v18,
          (a5 & 0x20 | 0x10) >> 2);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741536 )
    {
      *(_QWORD *)(a1 + 3048) = 0LL;
      return 0LL;
    }
    return 3LL;
  }
  else
  {
    v13 = v22;
    *(_QWORD *)(a1 + 3048) = 0LL;
    if ( v13 >= 0 )
    {
      v14 = v21;
      *(_QWORD *)v11 = v21;
      v15 = *(_QWORD *)(v14 + 24);
LABEL_15:
      v16 = *(_QWORD *)(a1 + 3040);
      if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        *(_BYTE *)((v7 >> 3) + *(_QWORD *)(v16 + 16)) &= ~(1 << (v7 & 7));
      if ( (*(_BYTE *)(a1 + 2469) & 0x20) != 0 && (__int64)*a3 >= 0 )
      {
        v19 = *(unsigned int *)(a1 + 2640);
        v20 = 0LL;
        v22 = 0LL;
        v18 = a4;
        v21 = 0LL;
        ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
          a1,
          6LL,
          &v18,
          8LL);
      }
      return v15;
    }
    v15 = 0LL;
    if ( v13 == -1073740749 )
    {
      v15 = 1LL;
      *(_WORD *)a3 |= 0x4000u;
    }
    else if ( v13 == -1073740574 )
    {
      *(_WORD *)a3 |= 0x4000u;
      SmLogConsumedPoison(*a3, *(unsigned int *)(a1 + 2640), a1 + 72);
      return 4LL;
    }
  }
  return v15;
}
