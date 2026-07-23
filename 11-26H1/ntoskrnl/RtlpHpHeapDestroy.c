/*
 * XREFs of RtlpHpHeapDestroy @ 0x14063B6F8
 * Callers:
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 *     ExpPoolHeapDestroy @ 0x14084C92C (ExpPoolHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x140354540 (RtlpHpMetadataFree.c)
 *     RtlpHpVsContextCleanup @ 0x140354A48 (RtlpHpVsContextCleanup.c)
 *     ExSaFree @ 0x14045C8AC (ExSaFree.c)
 *     RtlpHpRegisterEnvironment @ 0x14063B9E0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextCleanup @ 0x14063C134 (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhBucketCleanup @ 0x14063C62C (RtlpHpLfhBucketCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14063D8E0 (RtlpHpLargeAllocationDestroy.c)
 */

__int64 __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rsi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // ebp
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  char v9; // al
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int16 v15; // ax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v19 = a1;
  v1 = a1 + 72;
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)v4;
        v7 = (_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
        {
          v7 = (_QWORD *)(v4 + 8);
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
        }
        if ( v5 )
          v4 ^= v6;
        else
          v4 = v6;
        *v7 = 0LL;
      }
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  v9 = *(_BYTE *)(a1 + 80);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(a1 + 80) = 1;
  RtlpHpVsContextCleanup((_WORD *)(a1 + 704));
  v10 = *(_DWORD *)(a1 + 980);
  if ( v10 )
    ExSaFree(v10, 8u);
  RtlpHpLfhContextSlotStandbyProcess(a1 + 896, 1LL);
  v11 = (__int64 *)(a1 + 1344);
  v12 = 128LL;
  do
  {
    v13 = 0LL;
    if ( (*v11 & 1) == 0 )
      v13 = *v11;
    if ( v13 )
      RtlpHpLfhBucketCleanup(a1 + 896);
    ++v11;
    --v12;
  }
  while ( v12 );
  RtlpHpSegContextCleanup(a1 + 320);
  RtlpHpSegContextCleanup(a1 + 512);
  v14 = *(_OWORD *)a1;
  v20 = *(_QWORD *)(a1 + 264) - a1;
  v15 = *(_WORD *)(a1 + 30);
  v18 = v14;
  v17 = *(_OWORD *)a1;
  if ( (v15 & 1) != 0 )
    RtlpHpMetadataFree(a1, &v17);
  else
    RtlpHpFreeVA((unsigned __int64 *)&v19, (unsigned __int64 *)&v20, 0x8000LL, &v17);
  return RtlpHpRegisterEnvironment(&v18, 0LL);
}
