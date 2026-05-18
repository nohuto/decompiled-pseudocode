/*
 * XREFs of sub_18002EB58 @ 0x18002EB58
 * Callers:
 *     sub_18002E584 @ 0x18002E584 (sub_18002E584.c)
 *     sub_18002F3F4 @ 0x18002F3F4 (sub_18002F3F4.c)
 *     sub_1800380E0 @ 0x1800380E0 (sub_1800380E0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002EB58(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  int v7; // eax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    if ( (int)_std_type_info_compare(v6[4] + 8, *a3 + 8LL) >= 0 )
    {
      a2[2] = v6;
      v7 = 1;
    }
    else
    {
      v6 += 2;
      v7 = 0;
    }
    *((_DWORD *)a2 + 2) = v7;
  }
  return a2;
}
