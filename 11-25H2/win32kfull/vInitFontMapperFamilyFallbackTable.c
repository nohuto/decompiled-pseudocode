/*
 * XREFs of vInitFontMapperFamilyFallbackTable @ 0x1403EE018
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     PREALLOCMEM2 @ 0x14020E9A0 (PREALLOCMEM2.c)
 */

int __fastcall vInitFontMapperFamilyFallbackTable(int a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  unsigned int v4; // edx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  unsigned int Context; // [rsp+B0h] [rbp+67h] BYREF

  Context = 0;
  QueryTable.Flags = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontMapperFamilyFallbackListRoutine;
  memset(&QueryTable.Name, 0, 20);
  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  LODWORD(v3) = RtlQueryRegistryValues(3u, L"FontMapperFamilyFallbackDeprecated", &QueryTable, &Context, 0LL);
  v4 = *(_DWORD *)(v2 + 19700);
  if ( Context > v4 )
  {
    v3 = PREALLOCMEM2(*(void **)(v2 + 19688), v4 << 7, v4 << 7, 0x46464D47u);
    if ( v3 )
      *(_QWORD *)(v2 + 19688) = v3;
  }
  return (int)v3;
}
