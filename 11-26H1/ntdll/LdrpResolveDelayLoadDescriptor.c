/*
 * XREFs of LdrpResolveDelayLoadDescriptor @ 0x180105D74
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrResolveDelayLoadsFromDll @ 0x18015C2D0 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 */

__int64 __fastcall LdrpResolveDelayLoadDescriptor(__int64 ArgList, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rdi
  __int64 v4; // r14
  char v5; // bp
  _QWORD *v6; // rax

  v2 = 0;
  v3 = (_QWORD *)(ArgList + *(unsigned int *)(a2 + 12));
  LODWORD(v4) = 0;
  v5 = ArgList;
  if ( *v3 )
  {
    v6 = (_QWORD *)(ArgList + *(unsigned int *)(a2 + 12));
    do
    {
      if ( !LdrResolveDelayLoadedAPI(v5, (__int64)v6, 0) )
        v2 = -1073740782;
      v4 = (unsigned int)(v4 + 1);
      v6 = &v3[v4];
    }
    while ( *v6 );
  }
  return v2;
}
