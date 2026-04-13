/*
 * XREFs of ?do_hash@?$collate@D@std@@MEBAJPEBD0@Z @ 0x180020100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::collate<char>::do_hash(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  v3 = 0xCBF29CE484222325uLL;
  v4 = 0LL;
  v5 = a3 - a2;
  if ( v5 )
  {
    do
    {
      v6 = *(unsigned __int8 *)(a2 + v4++);
      v3 = 0x100000001B3LL * (v6 ^ v3);
    }
    while ( v4 < v5 );
  }
  return (unsigned int)v3 ^ HIDWORD(v3);
}
