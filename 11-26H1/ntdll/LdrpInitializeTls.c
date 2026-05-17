/*
 * XREFs of LdrpInitializeTls @ 0x18009299C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpAllocateTlsEntry @ 0x180081D90 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x180092430 (RtlSetBits.c)
 *     LdrpInitializeTlsHeap @ 0x180092B70 (LdrpInitializeTlsHeap.c)
 *     RtlClearBits @ 0x1800941F0 (RtlClearBits.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 result; // rax
  __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  _DWORD *v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  void *Heap_0; // rax
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( LdrpActiveThreadCount )
    return 0LL;
  result = LdrpInitializeTlsHeap();
  if ( (int)result >= 0 )
  {
    v1 = (__int64 *)qword_1801CB890;
    v2 = 1LL;
    v8 = 0;
    while ( v1 != &qword_1801CB890 )
    {
      v3 = (__int64)v1;
      v1 = (__int64 *)*v1;
      if ( *(_DWORD *)(v3 + 268) != 9 )
      {
        RtlImageNtHeaderEx(3, *(_QWORD *)(v3 + 48), 0LL, &v10);
        if ( *(_WORD *)(v10 + 24) == 523 )
        {
          v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(v3 + 48), 1, 9u, &v9);
          v5 = (__int64)v4;
          if ( v4 )
          {
            LdrpLogInternal(
              (int)"minkernel\\ldr\\ldrtls.c",
              669,
              (__int64)"LdrpInitializeTls",
              2,
              "DLL \"%wZ\" has TLS information at %p\n",
              v3 + 72,
              v4);
            result = LdrpAllocateTlsEntry(v5, v3, (int *)&v8, 0LL, 0LL);
            if ( (int)result < 0 )
              return result;
            *(_WORD *)(v3 + 110) = -1;
          }
        }
      }
    }
    v6 = v8;
    if ( v8 )
    {
      if ( v8 + 8 > 0x20 )
      {
        v2 = ((unsigned __int64)(v8 + 8) + 31) >> 5;
        Heap_0 = (void *)RtlAllocateHeap_0();
        if ( !Heap_0 )
          return 3221225495LL;
      }
      else
      {
        Heap_0 = &LdrpStaticTlsBitmapVector;
      }
      LdrpActualBitmapSize = v2;
      LdrpTlsBitmap = v6 + 8;
      qword_1801CB6C8 = Heap_0;
      RtlSetBits((__int64)&LdrpTlsBitmap, 0, v6);
      RtlClearBits(&LdrpTlsBitmap, v6, 8LL);
    }
    else
    {
      LdrpTlsBitmap = 0;
      qword_1801CB6C8 = 0LL;
    }
    return LdrpAllocateTls();
  }
  return result;
}
