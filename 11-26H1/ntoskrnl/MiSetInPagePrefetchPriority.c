/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x1404901A4
 * Callers:
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 188);
  v3 = *(_DWORD *)(a1 + 80) & 7;
  if ( v3 >= 5 || ((*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0) <= v3 )
    v4 = v2 & 0xFFEFFFFF;
  else
    v4 = v2 | 0x100000;
  result = v4 & 0xFFFE07FF;
  *(_DWORD *)(a2 + 188) = result | ((v3 | (8 * v3)) << 11);
  return result;
}
