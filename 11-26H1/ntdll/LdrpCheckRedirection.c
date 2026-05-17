/*
 * XREFs of LdrpCheckRedirection @ 0x1800838D8
 * Callers:
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     LdrpHashAsciizString @ 0x1800849D8 (LdrpHashAsciizString.c)
 *     LdrpCompareRedirectedFunction @ 0x180084A0C (LdrpCompareRedirectedFunction.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebp
  __int64 v9; // r12
  __int128 v10; // xmm0
  unsigned __int64 v11; // rbx
  unsigned int v12; // esi
  wchar_t *v13; // r8
  int v14; // edi
  int v15; // eax
  char *v16; // rax
  __int64 v17; // rdx
  char v18; // cl
  bool v19; // sf
  unsigned __int64 v20; // rax
  _QWORD **v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *i; // rcx
  int Format; // [rsp+20h] [rbp-78h]
  _UNICODE_STRING RedirectionDllName; // [rsp+50h] [rbp-48h] BYREF
  __int128 v27; // [rsp+60h] [rbp-38h]

  *(_QWORD *)&RedirectionDllName.Length = 0LL;
  v5 = -4530927LL;
  v6 = LdrpHashAsciizString(a3, a2, a3, a2);
  v8 = *(_DWORD *)(v7 + 264);
  v9 = v7 + 88;
  v10 = *(_OWORD *)(v7 + 88);
  v11 = LdrpRedirectionTree;
  v12 = v6;
  *(_QWORD *)&RedirectionDllName.Length = __PAIR64__(v8, v6);
  RedirectionDllName.Buffer = v13;
  v27 = v10;
  if ( (qword_1801CB5C0 & 1) != 0 && LdrpRedirectionTree )
    v11 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
  v14 = qword_1801CB5C0 & 1;
  while ( v11 )
  {
    v15 = *(_DWORD *)(v11 + 24) - v12;
    if ( v15 )
      goto LABEL_11;
    v15 = *(_DWORD *)(v11 + 28) - v8;
    if ( v15 )
      goto LABEL_11;
    v16 = *(char **)(v11 + 32);
    v17 = a3 - (_QWORD)v16;
    while ( 1 )
    {
      v18 = *v16;
      if ( *v16 != v16[v17] )
        break;
      ++v16;
      if ( !v18 )
      {
        v15 = 0;
        goto LABEL_9;
      }
    }
    v15 = (unsigned __int8)*v16 < (unsigned __int8)v16[v17] ? -1 : 1;
LABEL_9:
    v19 = v15 < 0;
    if ( !v15 )
    {
      LOBYTE(Format) = 1;
      v15 = RtlCompareUnicodeStrings(
              *(_QWORD *)(v11 + 48),
              (unsigned __int64)*(unsigned __int16 *)(v11 + 40) >> 1,
              *((_QWORD *)&v27 + 1),
              (unsigned __int64)(unsigned __int16)v27 >> 1,
              Format);
LABEL_11:
      v19 = v15 < 0;
    }
    if ( v19 )
    {
      v20 = *(_QWORD *)v11;
    }
    else
    {
      if ( v15 <= 0 )
        break;
      v20 = *(_QWORD *)(v11 + 8);
    }
    if ( v14 && v20 )
      v11 ^= v20;
    else
      v11 = v20;
  }
  while ( v11 && !(unsigned int)LdrpCompareRedirectedFunction(&RedirectionDllName, v11) )
  {
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(v11 + 64)) )
    {
      v5 = *(_QWORD *)(v11 + 56);
      RedirectionDllName = NtCurrentPeb()->ProcessParameters->RedirectionDllName;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrredirect.c",
        296,
        (__int64)"LdrpCheckRedirection",
        2,
        "Import Redirection: %wZ %wZ!%s redirected to %wZ\n",
        a1 + 88,
        v9,
        a3,
        &RedirectionDllName);
      return v5;
    }
    v22 = *(_QWORD ***)(v11 + 8);
    v23 = v11;
    if ( v22 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      for ( i = *v22; i; i = (_QWORD *)*i )
        v11 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v11 || *(_QWORD *)v11 == v23 )
          break;
        v23 = v11;
      }
    }
  }
  return v5;
}
