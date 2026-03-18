/*
 * XREFs of ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x14033ACB4
 * Callers:
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
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
  __int64 v5; // r10
  __int64 v6; // r8
  struct _TRIVERTEX *v7; // r10
  struct _TRIVERTEX *v8; // rax
  struct _TRIVERTEX *v9; // rax
  struct _TRIVERTEX *v10; // rax
  struct _TRIVERTEX *v11; // rax
  struct _TRIVERTEX *v12; // rax

  if ( a3 > 1 )
  {
    v5 = a3;
    v6 = 0LL;
    v7 = &a1[v5 - 1];
    if ( a5 < 2 )
    {
      while ( (unsigned int)v6 < a4 )
      {
        v11 = &a1[a2[2 * v6]];
        if ( v11 < a1 )
          return 0LL;
        if ( v11 > v7 )
          return 0LL;
        v12 = &a1[a2[2 * v6 + 1]];
        if ( v12 < a1 || v12 > v7 )
          return 0LL;
        v6 = (unsigned int)(v6 + 1);
      }
      return 1LL;
    }
    if ( a5 == 2 )
    {
      while ( (unsigned int)v6 < a4 )
      {
        v8 = &a1[a2[3 * v6]];
        if ( v8 < a1 )
          return 0LL;
        if ( v8 > v7 )
          return 0LL;
        v9 = &a1[a2[3 * v6 + 1]];
        if ( v9 < a1 )
          return 0LL;
        if ( v9 > v7 )
          return 0LL;
        v10 = &a1[a2[3 * v6 + 2]];
        if ( v10 < a1 || v10 > v7 )
          return 0LL;
        v6 = (unsigned int)(v6 + 1);
      }
      return 1LL;
    }
  }
  return 0LL;
}
