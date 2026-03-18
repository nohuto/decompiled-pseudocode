/*
 * XREFs of sub_14000D4E0 @ 0x14000D4E0
 * Callers:
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000D4E0(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // r8

  if ( a2 != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      result = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( result && *(_DWORD *)(result + 16) == a2 )
        return result;
    }
  }
  return 0LL;
}
