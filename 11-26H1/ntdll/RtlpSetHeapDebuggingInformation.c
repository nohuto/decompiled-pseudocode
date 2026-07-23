/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1801453D0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x180114660 (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18006C604 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011F7C0 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x180158150 (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
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

  v2 = 6LL;
  if ( HeapHandle[4] != -571548178 )
    v2 = 36LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = HeapHandle[v2];
    if ( v5 )
      RtlpCallInterceptRoutine(v5, (__int64)HeapHandle, 0LL, 7u, 0LL);
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
      RtlpHpHeapSetInterceptor(HeapHandle, HeapInterceptorIndex);
    else
      HeapHandle[36] = HeapInterceptorIndex;
  }
LABEL_12:
  if ( HeapHandle[4] != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    if ( *((_BYTE *)HeapHandle + 418) == 2 && (v9 = *((_QWORD *)HeapHandle + 51)) != 0
      || (RtlpActivateLowFragmentationHeap((PRTL_CRITICAL_SECTION *)HeapHandle), *((_BYTE *)HeapHandle + 418) == 2)
      && (v9 = *((_QWORD *)HeapHandle + 51)) != 0 )
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
