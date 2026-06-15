/*
 * XREFs of sub_14004E7F0 @ 0x14004E7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020354 @ 0x140020354 (sub_140020354.c)
 *     sub_140020480 @ 0x140020480 (sub_140020480.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004E7F0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // r9

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( (unsigned int)sub_140020480(a2) )
  {
    *v6 = v7;
    sub_1400B6010(v7);
  }
  else
  {
    return (unsigned int)sub_140020354(v7 + 24, v5, v6);
  }
  return v3;
}
