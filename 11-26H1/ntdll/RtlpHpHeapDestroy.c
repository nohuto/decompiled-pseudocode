/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800DFE7C
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeDestroy @ 0x18006D920 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpTlLogVAChange @ 0x18006F198 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpRegisterEnvironment @ 0x180070BB8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpLfhContextCleanup @ 0x180072B10 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpSegContextCleanup @ 0x1800E00B8 (RtlpHpSegContextCleanup.c)
 *     RtlpHpVsContextCleanup @ 0x1800E0604 (RtlpHpVsContextCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800E0740 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpLogHeapDestroyEvent @ 0x18010E190 (RtlpLogHeapDestroyEvent.c)
 */

int __fastcall RtlpHpHeapDestroy(__int64 a1)
{
  __int64 v1; // rsi
  bool v2; // zf
  unsigned __int64 v4; // rcx
  int v5; // r14d
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  char v9; // al
  __m128i v10; // xmm0
  __int16 v11; // ax
  char *v12; // rdx
  __int64 v13; // rcx
  struct _PEB *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __m128i v19; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF

  v20 = (_QWORD *)a1;
  v1 = a1 + 72;
  v21 = 0LL;
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
  RtlpHpVsContextCleanup(v20 + 88);
  RtlpHpLfhContextCleanup((__int64)(v20 + 112));
  RtlpHpSegContextCleanup(v20 + 40);
  RtlpHpSegContextCleanup(v20 + 64);
  v10 = *(__m128i *)v20;
  v21 = v20[33] - (_QWORD)v20;
  v11 = *((_WORD *)v20 + 15);
  v19 = v10;
  if ( (v11 & 1) != 0 )
  {
    v18 = *(_OWORD *)v20;
    RtlpHpMetadataFree((__int64)v20, &v18);
  }
  else
  {
    v12 = (char *)v20 + v21 - (((unsigned __int64)v20 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v20 = (_QWORD *)(((unsigned __int64)v20 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v21 = (__int64)v12;
    if ( v12 )
    {
      RtlpHpVaMgrCtxFree((__int64)&unk_1801C6958, (PVOID *)&v20, (ULONG_PTR *)&v21);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
        RtlpHpTlLogVAChange(0x8000, v21, (__int64)v20, 0);
    }
  }
  RtlpHpRegisterEnvironment(&v19, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    RtlpHeapLogRangeDestroy((__int64)v20);
  LODWORD(v14) = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)v14 )
  {
    v14 = NtCurrentPeb();
    v16 = (__int64)v14->SharedData + 550;
  }
  else
  {
    v16 = 2147353472LL;
  }
  if ( *(_BYTE *)v16 )
  {
    v14 = NtCurrentPeb();
    if ( (v14->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      LODWORD(v14) = RtlpLogHeapDestroyEvent(v20, *(unsigned __int8 *)v15);
    }
  }
  return (int)v14;
}
