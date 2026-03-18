/*
 * XREFs of HasLighting @ 0x180145A5C
 * Callers:
 *     GetExpectedVertexShaderDesc @ 0x180145E5C (GetExpectedVertexShaderDesc.c)
 * Callees:
 *     ??$?9$$CBW4ShaderLinkingArgument@@$0A@@?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@QEBA_NAEBV012@@Z @ 0x180146E80 (--$-9$$CBW4ShaderLinkingArgument@@$0A@@-$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall HasLighting(__int64 *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // rax
  _WORD *v3; // rcx
  _WORD *i; // rax
  unsigned __int128 v5; // xmm0
  char v6; // al
  char v7; // cl
  unsigned __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  _WORD *v10; // [rsp+30h] [rbp-30h]
  unsigned __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-10h]

  if ( *((_WORD *)a1 + 22) == 11 )
    return 1;
  v1 = (_WORD *)a1[1];
  v2 = *a1;
  *(_QWORD *)&v9 = v1;
  v3 = &v1[v2];
  *((_QWORD *)&v9 + 1) = v3;
  if ( v1 > v3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  for ( i = v1; i != v3; ++i )
  {
    if ( *i == 2 )
      break;
  }
  v5 = v9;
  v10 = v3;
  v9 = __PAIR128__((unsigned __int64)v3, (unsigned __int64)v1);
  v11 = v5;
  v12 = i;
  v6 = gsl::details::span_iterator<enum ShaderLinkingArgument const>::operator!=<enum ShaderLinkingArgument const,0>(
         &v11,
         &v9);
  v7 = 0;
  if ( v6 )
    return 1;
  return v7;
}
