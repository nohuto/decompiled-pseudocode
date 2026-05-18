/*
 * XREFs of sub_1800C1A00 @ 0x1800C1A00
 * Callers:
 *     sub_1800C0664 @ 0x1800C0664 (sub_1800C0664.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800C1A00(__int64 *a1, _QWORD *a2, unsigned int *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  unsigned int v5; // r10d
  char v6; // r8

  v3 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      if ( v5 >= *((_DWORD *)v4 + 8) )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        v3 = v4;
      }
      if ( !v6 )
        v4 += 2;
      v4 = (__int64 *)*v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  *a2 = v3;
  return a2;
}
