/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180078A04
 * Callers:
 *     EtwpLogger @ 0x180078000 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x180158EDC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x180011550 (RtlGetSystemTimePrecise.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180078D68 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpAddProviderTrackingInfo @ 0x180078E38 (EtwpAddProviderTrackingInfo.c)
 *     EtwpWriteRemainingCompressedData @ 0x180078EC4 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180078F90 (EtwpFinalizeRelogFileHeaderStats.c)
 *     NtReadFile @ 0x18015F000 (NtReadFile.c)
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x18015F420 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18015F860 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  int v5; // r12d
  int v6; // r13d
  unsigned int v7; // r15d
  __int64 Heap_0; // r14
  NTSTATUS v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned __int64 v14; // rdx
  int v17; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-21h] BYREF
  __int64 v19; // [rsp+68h] [rbp-19h] BYREF
  __int128 v20; // [rsp+70h] [rbp-11h] BYREF
  __int128 v21; // [rsp+80h] [rbp-1h] BYREF
  __int128 v22; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  v2 = 0;
  v19 = 0LL;
  v3 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  v23 = 0LL;
  v17 = 0;
  v20 = 0LL;
  v5 = 0;
  v6 = 0;
  v22 = 0LL;
  LODWORD(v18) = 0;
  if ( !v3 )
  {
    v9 = EtwpWriteRemainingCompressedData(a1, &v17, &v18);
    if ( v9 < 0 )
      goto LABEL_20;
    v5 = v17;
    *(_DWORD *)(a1 + 376) += v17;
    v6 = v18;
    *(_DWORD *)(a1 + 372) += v18;
  }
  if ( *(_QWORD *)(a1 + 448) != a1 + 448
    || *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 504)
    || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 192);
    goto LABEL_4;
  }
  v9 = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 128), &v20, &v22, 24LL, 3);
  if ( v9 >= 0 )
  {
    v7 = -HIDWORD(v23) & (HIDWORD(v23) + 7);
LABEL_4:
    Heap_0 = RtlAllocateHeap_0();
    if ( !Heap_0 )
    {
      v9 = -1073741801;
      return RtlNtStatusToDosError(v9);
    }
    v9 = NtReadFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v20, Heap_0, v7, &v19, 0LL);
    if ( v9 < 0 )
      goto LABEL_19;
    if ( v7 >= *(_DWORD *)Heap_0 )
      v7 = *(_DWORD *)Heap_0;
    if ( !a2 )
    {
      *(_DWORD *)(Heap_0 + 116) = *(_DWORD *)(a1 + 188);
      *(_DWORD *)(Heap_0 + 140) = *(_DWORD *)(a1 + 376);
      *(_DWORD *)(Heap_0 + 152) += *(_DWORD *)(a1 + 368);
      *(_DWORD *)(Heap_0 + 380) += *(_DWORD *)(a1 + 372);
      v10 = *(_DWORD *)(a1 + 308);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap_0, v7, v5, v6);
      }
      else
      {
        *(_QWORD *)(Heap_0 + 120) = RtlGetSystemTimePrecise();
      }
    }
    *(_DWORD *)(Heap_0 + 48) = *(_DWORD *)(Heap_0 + 4);
    EtwpAddReloggedHeaderExtensionEvents(a1, Heap_0, v7);
    EtwpAddProviderTrackingInfo(a1, Heap_0, v7);
    v11 = NtWriteFile(*(_QWORD *)(a1 + 128), 0LL, 0LL, 0LL, &v20, Heap_0, v7, &v19, 0LL);
    v9 = v11;
    if ( a2 )
      goto LABEL_19;
    if ( v11 < 0 )
      goto LABEL_19;
    v12 = *(_DWORD *)(a1 + 308);
    v13 = v12 & 0x4000000;
    if ( (v12 & 0x20) == 0 && !v13 )
      goto LABEL_19;
    v21 = 0LL;
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 344);
    }
    else
    {
      v14 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
      if ( v14 >= *(unsigned int *)(a1 + 304) * ((-(__int64)((v12 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_19:
        RtlFreeHeap_0();
        goto LABEL_20;
      }
    }
    v18 = v14;
    if ( v14 )
      v9 = ZwSetInformationFile(*(_QWORD *)(a1 + 128), &v21, &v18, 8LL, 20);
    goto LABEL_19;
  }
LABEL_20:
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v2;
}
