/*
 * XREFs of ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140464990
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rax
  int v8; // r10d
  _WORD *v9; // r11
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // di
  __int64 result; // rax
  _DWORD *v14; // r9
  unsigned int v15; // ecx

  v4 = *(_QWORD *)(a1 + 1368);
  v8 = *(unsigned __int16 *)(v4 + 2LL * a2);
  v9 = (_WORD *)(v4 + 2LL * a2);
  v10 = a2;
  v11 = (unsigned __int64)(unsigned __int16)*v9 >> 13;
  v12 = v8 & 0x1FFF;
  result = (unsigned int)(a3 + v8);
  *v9 = a3 + v8;
  v14 = (_DWORD *)(a1 + 16 * (v11 + 89));
  *(_DWORD *)(a1 + 8 * v11 + 1996) += a3;
  if ( *v14 != a2 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 800) + 1) >> 1;
    v15 = *v9 & 0x1FFF;
    if ( v12 < (unsigned int)result && v12 )
    {
      if ( v15 >= (unsigned int)result || (*v9 & 0x1FFF) == 0 )
      {
        --*(_DWORD *)(a1 + 1408);
        result = a2 & 7;
        *(_BYTE *)(*(_QWORD *)(a1 + 1400) + (v10 >> 3)) |= 1 << result;
      }
    }
    else if ( v15 < (unsigned int)result && (*v9 & 0x1FFF) != 0 )
    {
      result = a2 & 7;
      *(_BYTE *)(*(_QWORD *)(a1 + 1400) + (v10 >> 3)) &= ~(1 << result);
      ++*(_DWORD *)(a1 + 1408);
    }
  }
  if ( a3 > 0 )
  {
    if ( a2 == *v14 )
      v14[1] += a3;
  }
  else if ( (*v9 & 0x1FFF) == 0 && a2 != *v14 && !a4 )
  {
    return ST_STORE<SM_TRAITS>::StReleaseRegion(a1, a2);
  }
  return result;
}
