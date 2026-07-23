/*
 * XREFs of ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140641804
 * Callers:
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140642168 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmEtwLogRegionOp @ 0x140642F34 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v4; // edi

  v2 = (unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)(SBYTE4(stru_140E27C48.InitialStack) < 0);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    if ( *(_DWORD *)(a1 + 788) )
    {
      do
      {
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * v4) & 0x1FFF) != 0 )
          SmEtwLogRegionOp(v2, 10, a1, v4);
        ++v4;
      }
      while ( v4 != *(_DWORD *)(a1 + 788) );
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
