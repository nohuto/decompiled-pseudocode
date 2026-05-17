/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x180035170
 * Callers:
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 * Callees:
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800335D0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        _DWORD *a4,
        char a5,
        char a6,
        void *a7)
{
  int *v11; // rbx
  int OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  wchar_t *Heap_0; // rax
  unsigned int v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v18[264]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(v18, 0, 0x208uLL);
  v16[0] = 520;
  v11 = (int *)v18;
  if ( !a6 )
    goto LABEL_5;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, v18);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v16[0]);
    v11 = (int *)Heap_0;
    if ( !Heap_0 )
    {
LABEL_5:
      *(_OWORD *)v17 = *(_OWORD *)a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal((__int64)v17, a2, a3, a4, a5, a7);
      goto LABEL_6;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(*(_QWORD *)(a1 + 8), a2, 0LL, 0LL, v16, Heap_0);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_5;
  *(_OWORD *)v17 = *(_OWORD *)a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(
                                    (__int64)v17,
                                    (const wchar_t *)v11,
                                    a3,
                                    a4,
                                    a5,
                                    a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_5;
LABEL_6:
  if ( v11 != (int *)v18 && v11 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v11);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
