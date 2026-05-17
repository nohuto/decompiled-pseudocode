/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x180145520
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x180114E70 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18007DF18 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011FA10 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x180158280 (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  unsigned __int16 HeapInterceptorIndex; // ax
  int v8; // r10d
  __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8

  v2 = 24LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 144LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = *(_DWORD *)(v2 + a1);
    if ( v5 )
      RtlpCallInterceptRoutine(v5, a1, 0LL, 7);
    v6 = (__int64 (__fastcall *)())RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_12;
  }
  HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(v6);
  if ( HeapInterceptorIndex )
  {
    if ( v8 == -571548178 )
      RtlpHpHeapSetInterceptor(a1, HeapInterceptorIndex);
    else
      *(_DWORD *)(a1 + 144) = HeapInterceptorIndex;
  }
LABEL_12:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && (v9 = *(_QWORD *)(a1 + 408)) != 0
      || (RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 418) == 2) && (v9 = *(_QWORD *)(a1 + 408)) != 0 )
    {
      v10 = (_BYTE *)(v9 + 679);
      v11 = 129LL;
      do
      {
        v12 = *(_QWORD *)(a2 + 24);
        if ( !v12 && !*(_QWORD *)(a2 + 32)
          || (v13 = *(unsigned __int16 *)(v10 - 3), v13 >= v12 >> 4) && v13 <= *(_QWORD *)(a2 + 32) >> 4 )
        {
          *v10 ^= (*v10 ^ (2 * *(_BYTE *)(a2 + 12))) & 6;
        }
        v10 += 4;
        --v11;
      }
      while ( v11 );
    }
  }
  return 0LL;
}
