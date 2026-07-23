/*
 * XREFs of RtlpGetMUIRedirectedFilePath @ 0x1800202D0
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 * Callees:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18001E730 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePath(
        UNICODE_STRING *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        _DWORD *a4,
        char a5,
        char a6,
        void *a7)
{
  WCHAR *v11; // rbx
  NTSTATUS OverlayFilePathUsingChecksum; // eax
  int MUIRedirectedFilePathInternal; // edi
  wchar_t *Heap_0; // rax
  unsigned int Size[4]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t BaseAddress[264]; // [rsp+50h] [rbp-B0h] BYREF

  memset_thunk_772440563353939046(BaseAddress, 0, 0x208uLL);
  Size[0] = 520;
  v11 = BaseAddress;
  if ( !a6 )
    goto LABEL_5;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, a2, 0LL, 0LL, Size, BaseAddress);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Size[0]);
    v11 = Heap_0;
    if ( !Heap_0 )
    {
LABEL_5:
      Source = *a1;
      MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, a2, a3, a4, a5, a7);
      goto LABEL_6;
    }
    OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(a1->Buffer, a2, 0LL, 0LL, Size, Heap_0);
  }
  if ( OverlayFilePathUsingChecksum < 0 )
    goto LABEL_5;
  Source = *a1;
  MUIRedirectedFilePathInternal = RtlpGetMUIRedirectedFilePathInternal(&Source, v11, a3, a4, a5, a7);
  if ( MUIRedirectedFilePathInternal < 0 )
    goto LABEL_5;
LABEL_6:
  if ( v11 != BaseAddress && v11 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)MUIRedirectedFilePathInternal;
}
