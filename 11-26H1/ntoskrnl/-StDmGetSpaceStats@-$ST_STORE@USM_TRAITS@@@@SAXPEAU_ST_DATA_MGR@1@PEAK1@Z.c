/*
 * XREFs of ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x14047671C
 * Callers:
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14064256C (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmGetSpaceStats(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *v4; // rcx
  __int64 v5; // r10
  unsigned int *v6; // r9
  __int64 result; // rax

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v4 = (unsigned int *)(a1 + 1992);
  v5 = 8LL;
  v6 = (unsigned int *)(a1 + 1996);
  do
  {
    if ( a2 )
    {
      result = *v4;
      *a2 += result;
    }
    if ( a3 )
    {
      result = *v6;
      *a3 += result;
    }
    v6 += 2;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
