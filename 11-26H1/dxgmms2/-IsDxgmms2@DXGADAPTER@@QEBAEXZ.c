/*
 * XREFs of ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140032428
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14003233C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsDxgmms2(DXGADAPTER *this)
{
  unsigned __int8 result; // al

  if ( *((int *)this + 694) >= 0x2000 )
    return 1;
  result = 0;
  if ( *((_BYTE *)this + 3076) )
    return 1;
  return result;
}
