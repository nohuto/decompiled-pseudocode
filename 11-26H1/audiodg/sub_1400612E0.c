/*
 * XREFs of sub_1400612E0 @ 0x1400612E0
 * Callers:
 *     sub_14003D780 @ 0x14003D780 (sub_14003D780.c)
 *     sub_140061B80 @ 0x140061B80 (sub_140061B80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400612E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( !v5 )
    {
      LODWORD(v6) = *(_DWORD *)(v2 + 40) % *(_DWORD *)(a1 + 16);
      do
      {
        v6 = (unsigned int)(v6 + 1);
        v5 = 0LL;
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 16) )
          break;
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
      }
      while ( !v5 );
    }
    v3 = v5;
  }
  *a2 = v3;
  return v2;
}
