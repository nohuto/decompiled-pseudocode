/*
 * XREFs of NativeFenceUmdHandleCompareFunction @ 0x140056494
 * Callers:
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchInsertNativeFenceUmdHandle @ 0x1400568C0 (VidSchInsertNativeFenceUmdHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NativeFenceUmdHandleCompareFunction(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a2 - 16);
  if ( *a1 == v2 )
    return 0LL;
  else
    return *a1 < v2 ? -1 : 1;
}
