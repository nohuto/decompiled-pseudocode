/*
 * XREFs of RtlCopyAffinityEx @ 0x18013F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_WORD *)(a1 + 2);
  if ( *a2 <= v2 )
    v2 = *a2;
  *(_WORD *)a1 = v2;
  v5 = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; v5 < v2; *(_QWORD *)(a1 + 8 * v6 + 8) = result )
  {
    v6 = v5++;
    result = *(_QWORD *)&a2[4 * v6 + 4];
  }
  while ( v5 < *(_WORD *)(a1 + 2) )
  {
    result = v5++;
    *(_QWORD *)(a1 + 8 * result + 8) = 0LL;
  }
  return result;
}
