/*
 * XREFs of ExpPoolHeapCreate @ 0x14084C84C
 * Callers:
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlHpEnvContextCreate @ 0x14041CB90 (RtlHpEnvContextCreate.c)
 *     KasanIsEnabled @ 0x14050FFE0 (KasanIsEnabled.c)
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 *     ExHeapLookasideSet @ 0x1406D69B8 (ExHeapLookasideSet.c)
 *     RtlpDynamicLookasideInitialize @ 0x140724064 (RtlpDynamicLookasideInitialize.c)
 */

__int64 __fastcall ExpPoolHeapCreate(int a1, __int64 a2, char a3, __int64 *a4)
{
  __int128 v5; // xmm6
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r10d
  __int64 v9; // rdi
  unsigned int v10; // ebx
  char *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_OWORD *)RtlHpEnvContextCreate((__int64)&v15, a2, a1, a3, 0);
  v15 = v5;
  v9 = RtlpHpHeapCreate(v8, v6, v7, &v15);
  if ( !v9 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)KasanIsEnabled() )
  {
LABEL_9:
    *a4 = v9;
    return 0;
  }
  v15 = v5;
  v11 = (char *)RtlpHpMetadataAlloc(0x1040uLL, 0x1040uLL, 0, &v15);
  v12 = (__int64)v11;
  if ( v11 )
  {
    RtlpDynamicLookasideInitialize(v11);
    ExHeapLookasideSet(v9, v12);
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(v9 + 56);
  v10 = -1073741670;
  if ( v13 )
  {
    v15 = v5;
    RtlpHpMetadataFree(v13, &v15);
  }
  RtlpHpHeapDestroy(v9);
  return v10;
}
