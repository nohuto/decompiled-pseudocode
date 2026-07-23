/*
 * XREFs of KasanUnloadInfoCompare @ 0x1405E0390
 * Callers:
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KasanUnloadInfoCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL);
  if ( a1 >= v2 )
    return a1 != v2;
  else
    return 0xFFFFFFFFLL;
}
