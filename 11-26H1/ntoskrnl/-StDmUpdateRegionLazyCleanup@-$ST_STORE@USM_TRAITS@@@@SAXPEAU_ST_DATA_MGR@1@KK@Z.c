/*
 * XREFs of ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404EAAB4
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1404C6C64 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140202D0C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

char __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(__int64 a1, unsigned int a2, int a3)
{
  const signed __int64 *v3; // r11
  int v5; // eax
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // r8
  int v9; // eax
  unsigned __int64 v10; // rax

  v3 = *(const signed __int64 **)(a1 + 840);
  if ( a3 )
  {
    LOBYTE(v5) = _bittest64(v3, a2);
    if ( (_BYTE)v5 )
    {
      LOBYTE(v7) = 1;
      v8 = (volatile signed __int32 *)v3 + ((unsigned __int64)a2 >> 5);
      if ( (unsigned __int64)(a2 & 0x1F) + 1 <= 0x20 )
      {
        _InterlockedAnd(v8, ~(1 << (a2 & 0x1F)));
      }
      else
      {
        v9 = a2 & 0x1F;
        if ( (a2 & 0x1F) == 0 )
          goto LABEL_7;
        _InterlockedAnd(v8++, ~(((1 << (32 - v9)) - 1) << (a2 & 0x1F)));
        v7 = 1 - (32 - v9);
        if ( v7 >= 0x20 )
        {
          v10 = (unsigned __int64)v7 >> 5;
          do
          {
            *v8 = 0;
            v7 -= 32;
            ++v8;
            --v10;
          }
          while ( v10 );
        }
        if ( v7 )
LABEL_7:
          _InterlockedAnd(v8, -1 << v7);
      }
      LOBYTE(v5) = ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 856);
    }
  }
  else
  {
    v6 = (unsigned __int64)a2 >> 3;
    v5 = *((char *)v3 + v6) | (1 << (a2 & 7));
    *((_BYTE *)v3 + v6) = v5;
  }
  return v5;
}
