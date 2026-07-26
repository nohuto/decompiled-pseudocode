/*
 * XREFs of NdisOpenNDKAdapter @ 0x1400BCA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisOpenNDKAdapter(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 (__fastcall *v3)(_QWORD); // r10
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 3760);
  v3 = *(__int64 (__fastcall **)(_QWORD))(v2 + 808);
  if ( !v3 )
    return 3221225659LL;
  if ( !*(_QWORD *)(v2 + 816) )
    return 3221225659LL;
  v4 = *(_QWORD *)(v1 + 4104);
  if ( !v4 )
    return 3221225659LL;
  if ( *(_BYTE *)(v4 + 24) )
    return v3(*(_QWORD *)(a1 + 56));
  return 3221291025LL;
}
