/*
 * XREFs of sub_140011C48 @ 0x140011C48
 * Callers:
 *     sub_140011A70 @ 0x140011A70 (sub_140011A70.c)
 * Callees:
 *     sub_140011CD4 @ 0x140011CD4 (sub_140011CD4.c)
 */

__int64 __fastcall sub_140011C48(__int64 a1, int *a2, __int64 a3)
{
  int v5; // r9d
  __int64 v6; // rdx
  __int64 i; // r8

  v5 = *a2;
  v6 = (unsigned int)*a2 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6); i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_DWORD *)(i + 40) == v5 && *(_QWORD *)i == *(_QWORD *)a2 )
      {
        *(_OWORD *)(i + 8) = *(_OWORD *)a3;
        *(_QWORD *)(i + 24) = *(_QWORD *)(a3 + 16);
        return i;
      }
    }
  }
  i = sub_140011CD4(a1, a2, (unsigned int)v6);
  *(_OWORD *)(i + 8) = *(_OWORD *)a3;
  *(_QWORD *)(i + 24) = *(_QWORD *)(a3 + 16);
  return i;
}
