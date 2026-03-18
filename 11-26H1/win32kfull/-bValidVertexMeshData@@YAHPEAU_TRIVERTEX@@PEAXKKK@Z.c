/*
 * XREFs of ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x14032C578
 * Callers:
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidVertexMeshData(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // r10
  __int64 v7; // r8
  struct _TRIVERTEX *v8; // r10
  struct _TRIVERTEX *v9; // rdx
  struct _TRIVERTEX *v10; // rdx
  struct _TRIVERTEX *v11; // rdx
  struct _TRIVERTEX *v12; // rdx
  struct _TRIVERTEX *v13; // rdx

  if ( a3 > 1 )
  {
    v6 = a3;
    v7 = 0LL;
    v8 = &a1[v6 - 1];
    if ( a5 < 2 )
    {
      while ( (unsigned int)v7 < a4 )
      {
        v12 = &a1[a2[2 * v7]];
        if ( v12 < a1 )
          return 0LL;
        if ( v12 > v8 )
          return 0LL;
        v13 = &a1[a2[2 * v7 + 1]];
        if ( v13 < a1 || v13 > v8 )
          return 0LL;
        v7 = (unsigned int)(v7 + 1);
      }
      return 1LL;
    }
    if ( a5 == 2 )
    {
      while ( (unsigned int)v7 < a4 )
      {
        v9 = &a1[a2[3 * v7]];
        if ( v9 < a1 )
          return 0LL;
        if ( v9 > v8 )
          return 0LL;
        v10 = &a1[a2[3 * v7 + 1]];
        if ( v10 < a1 )
          return 0LL;
        if ( v10 > v8 )
          return 0LL;
        v11 = &a1[a2[3 * v7 + 2]];
        if ( v11 < a1 || v11 > v8 )
          return 0LL;
        v7 = (unsigned int)(v7 + 1);
      }
      return 1LL;
    }
  }
  return 0LL;
}
