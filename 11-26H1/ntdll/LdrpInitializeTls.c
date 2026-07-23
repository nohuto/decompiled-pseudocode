/*
 * XREFs of LdrpInitializeTls @ 0x180073B08
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlClearBits @ 0x1800733C0 (RtlClearBits.c)
 *     LdrpInitializeTlsHeap @ 0x180073CDC (LdrpInitializeTlsHeap.c)
 *     RtlSetBits @ 0x180073DE0 (RtlSetBits.c)
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpAllocateTlsEntry @ 0x180079130 (LdrpAllocateTlsEntry.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 result; // rax
  __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 *v3; // rsi
  PVOID v4; // rax
  int v5; // ebp
  ULONG v6; // edi
  unsigned int *Heap_0; // rax
  ULONG NumberToSet; // [rsp+60h] [rbp+8h] BYREF
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+18h] BYREF

  OutHeaders = 0LL;
  if ( LdrpActiveThreadCount )
    return 0LL;
  result = LdrpInitializeTlsHeap();
  if ( (int)result >= 0 )
  {
    v1 = (__int64 *)qword_1801CA8D0;
    v2 = 1LL;
    NumberToSet = 0;
    while ( v1 != &qword_1801CA8D0 )
    {
      v3 = v1;
      v1 = (__int64 *)*v1;
      if ( *((_DWORD *)v3 + 67) != 9 )
      {
        RtlImageNtHeaderEx(3u, (PVOID)v3[6], 0LL, &OutHeaders);
        if ( OutHeaders->OptionalHeader.Magic == 523 )
        {
          v4 = RtlImageDirectoryEntryToData((PVOID)v3[6], 1u, 9u, &Size);
          v5 = (int)v4;
          if ( v4 )
          {
            LdrpLogInternal(
              "minkernel\\ldr\\ldrtls.c",
              669,
              (__int64)"LdrpInitializeTls",
              2,
              "DLL \"%wZ\" has TLS information at %p\n",
              v3 + 9,
              v4);
            result = LdrpAllocateTlsEntry(v5, (_DWORD)v3, (unsigned int)&NumberToSet, 0, 0LL);
            if ( (int)result < 0 )
              return result;
            *((_WORD *)v3 + 55) = -1;
          }
        }
      }
    }
    v6 = NumberToSet;
    if ( NumberToSet )
    {
      if ( NumberToSet + 8 > 0x20 )
      {
        v2 = ((unsigned __int64)(NumberToSet + 8) + 31) >> 5;
        Heap_0 = (unsigned int *)RtlAllocateHeap_0(LdrpTlsHeap, NtdllBaseTag + 786432, 4 * v2);
        if ( !Heap_0 )
          return 3221225495LL;
      }
      else
      {
        Heap_0 = (unsigned int *)&LdrpStaticTlsBitmapVector;
      }
      LdrpActualBitmapSize = v2;
      LdrpTlsBitmap.SizeOfBitMap = v6 + 8;
      LdrpTlsBitmap.Buffer = Heap_0;
      RtlSetBits(&LdrpTlsBitmap, 0, v6);
      RtlClearBits(&LdrpTlsBitmap, v6, 8u);
    }
    else
    {
      LdrpTlsBitmap.SizeOfBitMap = 0;
      LdrpTlsBitmap.Buffer = 0LL;
    }
    return LdrpAllocateTls();
  }
  return result;
}
