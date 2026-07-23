/*
 * XREFs of RtlGetAcesBufferSize @ 0x1800E8800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetAcesBufferSize(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    v4 = *(unsigned __int16 *)(a1 + 4);
    do
    {
      v5 = *(unsigned __int16 *)(v3 + 2);
      v2 += v5;
      v3 += v5;
      --v4;
    }
    while ( v4 );
  }
  *a2 = v2;
  return 0LL;
}
