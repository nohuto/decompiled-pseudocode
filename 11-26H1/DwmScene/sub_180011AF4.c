/*
 * XREFs of sub_180011AF4 @ 0x180011AF4
 * Callers:
 *     sub_180012A50 @ 0x180012A50 (sub_180012A50.c)
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 *     sub_18004C300 @ 0x18004C300 (sub_18004C300.c)
 *     sub_1800509FC @ 0x1800509FC (sub_1800509FC.c)
 *     sub_18005DAB4 @ 0x18005DAB4 (sub_18005DAB4.c)
 *     sub_180097F14 @ 0x180097F14 (sub_180097F14.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180011AF4(__int64 *a1, _QWORD *a2, _QWORD *a3)
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
    if ( (unsigned __int64)v4[4] >= *a3 )
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
