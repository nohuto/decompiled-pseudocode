/*
 * XREFs of sub_1800425BC @ 0x1800425BC
 * Callers:
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_18007F6A4 @ 0x18007F6A4 (sub_18007F6A4.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 *     sub_1800BF0A0 @ 0x1800BF0A0 (sub_1800BF0A0.c)
 *     sub_1800C0664 @ 0x1800C0664 (sub_1800C0664.c)
 *     sub_1800C0B9C @ 0x1800C0B9C (sub_1800C0B9C.c)
 *     sub_1800C1830 @ 0x1800C1830 (sub_1800C1830.c)
 *     sub_1800C1880 @ 0x1800C1880 (sub_1800C1880.c)
 *     sub_1800CE6C0 @ 0x1800CE6C0 (sub_1800CE6C0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800425BC(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_DWORD *)v4 + 8) >= *a3 )
    {
      a2[2] = v4;
      v5 = 1;
    }
    else
    {
      v4 += 2;
      v5 = 0;
    }
    *((_DWORD *)a2 + 2) = v5;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
