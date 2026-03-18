/*
 * XREFs of vInitFontSubTable @ 0x1403EDAEC
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     PREALLOCMEM2 @ 0x14020E9A0 (PREALLOCMEM2.c)
 */

__int64 __fastcall vInitFontSubTable(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 i; // rcx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  unsigned int Context; // [rsp+B0h] [rbp+67h] BYREF

  v2 = 0LL;
  Context = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontSubstituteListRoutine;
  QueryTable.Flags = 0;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  *(_QWORD *)(v3 + 19680) = 0LL;
  *(_DWORD *)(v3 + 19696) = 1;
  *(_DWORD *)(v3 + 19704) = 0;
  RtlQueryRegistryValues(3u, L"FontSubstitutes", &QueryTable, &Context, 0LL);
  v4 = *(void **)(v3 + 19680);
  result = *(unsigned int *)(v3 + 19696);
  if ( v4 )
  {
    if ( Context <= (unsigned int)result )
      goto LABEL_4;
    result = (__int64)PREALLOCMEM2(v4, 196 * (int)result, 196 * (int)result, 0x62736647u);
    if ( !result )
      goto LABEL_4;
  }
  else
  {
    result = PALLOCMEM(196 * (int)result, 1651729991LL);
  }
  *(_QWORD *)(v3 + 19680) = result;
LABEL_4:
  v6 = *(_QWORD *)(v3 + 19680);
  if ( v6 )
  {
    *(_OWORD *)v6 = xmmword_140358AB0;
    *(_OWORD *)(v6 + 16) = xmmword_140358AC0;
    *(_DWORD *)(v6 + 32) = 6684777;
    *(_WORD *)(v6 + 36) = 0;
    v7 = *(_QWORD *)(v3 + 19680);
    *(_OWORD *)(v7 + 64) = xmmword_140358AF8;
    *(_OWORD *)(v7 + 80) = xmmword_140358B08;
    *(_DWORD *)(v7 + 96) = 4587593;
    *(_WORD *)(v7 + 100) = 0;
    v8 = *(_QWORD *)(v3 + 19680);
    *(_OWORD *)(v8 + 130) = xmmword_140358AD8;
    *(_QWORD *)(v8 + 146) = 0x49005200450053LL;
    *(_DWORD *)(v8 + 154) = 70;
    for ( i = 0LL; i < 2; ++i )
      *(_BYTE *)(*(_QWORD *)(v3 + 19680) + i + 128) = 1;
    do
    {
      result = *(_QWORD *)(v3 + 19680);
      *(_BYTE *)(result + v2++ + 194) = 1;
    }
    while ( v2 < 2 );
  }
  else
  {
    *(_DWORD *)(v3 + 19696) = 0;
  }
  return result;
}
