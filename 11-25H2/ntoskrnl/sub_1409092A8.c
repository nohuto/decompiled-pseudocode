/*
 * XREFs of sub_1409092A8 @ 0x1409092A8
 * Callers:
 *     sub_140906A80 @ 0x140906A80 (sub_140906A80.c)
 *     sub_140906F68 @ 0x140906F68 (sub_140906F68.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409092A8(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
