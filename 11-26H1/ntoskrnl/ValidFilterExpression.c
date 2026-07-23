/*
 * XREFs of ValidFilterExpression @ 0x1404B7C48
 * Callers:
 *     ValidFilter @ 0x140AD9910 (ValidFilter.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 */

_BOOL8 __fastcall ValidFilterExpression(__int64 a1)
{
  _BOOL8 result; // rax
  int v2; // eax
  int v3; // eax

  result = 0;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)a1 == 1 )
      return 1;
    if ( *(_DWORD *)a1 == 65537 )
      return 1;
    v2 = *(_DWORD *)(a1 + 40);
    if ( !v2 )
      return 1;
    v3 = v2 - 1;
    if ( !v3
      || (unsigned int)(v3 - 18) >= 2
      && *(_QWORD *)(a1 + 48)
      && !(unsigned int)PnpValidatePropertyData(*(STRSAFE_PCUNZWCH *)(a1 + 48), *(_DWORD *)(a1 + 44)) )
    {
      return 1;
    }
  }
  return result;
}
