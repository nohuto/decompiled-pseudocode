/*
 * XREFs of sub_14007A380 @ 0x14007A380
 * Callers:
 *     sub_14007A400 @ 0x14007A400 (sub_14007A400.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14007A380(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_1400CBAF0;
    v6[1] = xmmword_1400C6688;
    v6[2] = xmmword_1400CBB20;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
