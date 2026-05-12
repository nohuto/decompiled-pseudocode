/*
 * XREFs of StorpFlushDataBufferMdl @ 0x14005CB8C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpFlushDataBufferMdl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  if ( !a2 )
    return 3238002694LL;
  v2 = 96LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v2 = 48LL;
  v3 = *(_QWORD *)(v2 + a2);
  if ( !v3 )
    return 3238002694LL;
  if ( *(_DWORD *)v3 != 523124044 )
    return 3238002694LL;
  v4 = *(_QWORD *)(v3 + 144);
  if ( !v4 )
  {
    v4 = *(_QWORD *)(v3 + 104);
    if ( !v4 )
      return 3238002694LL;
  }
  if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
  {
    LOBYTE(v3) = 1;
    KeFlushIoBuffers(v4, 0LL, v3);
  }
  return 0LL;
}
