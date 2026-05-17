/*
 * XREFs of RtlpHpHeapDestroy @ 0x18008E4B4
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeDestroy @ 0x18007E840 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x180089CA4 (RtlpHpSegContextCleanup.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpRegisterEnvironment @ 0x18008D258 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVsContextCleanup @ 0x18008EBDC (RtlpHpVsContextCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18008ED18 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLfhContextCleanup @ 0x180093938 (RtlpHpLfhContextCleanup.c)
 *     RtlpLogHeapDestroyEvent @ 0x18010E640 (RtlpLogHeapDestroyEvent.c)
 */

unsigned int *__fastcall RtlpHpHeapDestroy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  bool v2; // zf
  unsigned __int64 v4; // rcx
  int v5; // r14d
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  char v9; // al
  __m128i v10; // xmm0
  __int16 v11; // ax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __m128i v17; // [rsp+20h] [rbp-20h] BYREF
  __m128i v18; // [rsp+30h] [rbp-10h] BYREF
  __m128i *v19; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+40h] BYREF

  v19 = (__m128i *)a1;
  v1 = a1 + 72;
  v20 = 0LL;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
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
  RtlpHpVsContextCleanup(&v19[44]);
  RtlpHpLfhContextCleanup(&v19[56]);
  RtlpHpSegContextCleanup((__int64)v19[20].m128i_i64);
  RtlpHpSegContextCleanup((__int64)v19[32].m128i_i64);
  v10 = *v19;
  v20 = v19[16].m128i_i64[1] - (_QWORD)v19;
  v11 = v19[1].m128i_i16[7];
  v18 = v10;
  if ( (v11 & 1) != 0 )
  {
    v17 = *v19;
    RtlpHpMetadataFree((__int64)v19, &v17);
  }
  else
  {
    v12 = (unsigned __int64)v19->m128i_u64
        + v20
        - (((unsigned __int64)&v19[0xFFFF].m128i_u64[1] + 7) & 0xFFFFFFFFFFF00000uLL);
    v19 = (__m128i *)(((unsigned __int64)&v19[0xFFFF].m128i_u64[1] + 7) & 0xFFFFFFFFFFF00000uLL);
    v20 = v12;
    if ( v12 )
    {
      RtlpHpVaMgrCtxFree((__int64)&unk_1801C7908, (unsigned __int64 *)&v19, (__int64 *)&v20);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
        RtlpHpTlLogVAChange(0x8000, v20, (__int64)v19, 0LL);
    }
  }
  RtlpHpRegisterEnvironment(&v18, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeDestroy((__int64)v19);
  result = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v16 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v16 = 2147353472LL;
  }
  if ( *(_BYTE *)v16 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      return (unsigned int *)RtlpLogHeapDestroyEvent(v19, *(unsigned __int8 *)v15);
    }
  }
  return result;
}
