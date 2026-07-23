/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x180092130
 * Callers:
 *     RtlQueryHeapInformation @ 0x180076310 (RtlQueryHeapInformation.c)
 *     RtlpQueryMemoryUsageInformation @ 0x18011E5A4 (RtlpQueryMemoryUsageInformation.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180061700 (RtlLockHeap.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlpIsProtectedHeap @ 0x18007653C (RtlpIsProtectedHeap.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800925A0 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180092C70 (RtlpQueryExtendedInformationHeap.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int ExtendedInformationHeap; // edi
  int v9; // ecx
  unsigned int v10; // esi
  NTSTATUS v12; // edi
  void *v13; // rcx
  int v14; // eax
  __int64 (__fastcall *v15)(); // r13
  unsigned __int64 v16; // r15
  unsigned int i; // eax
  unsigned __int64 v18; // r15
  char *v19; // rbx
  unsigned __int64 v20; // rcx
  int IsProtectedHeap; // esi
  unsigned __int64 v22; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+78h] [rbp-88h]
  _QWORD *v29; // [rsp+80h] [rbp-80h]
  _QWORD *v30; // [rsp+88h] [rbp-78h]
  _QWORD v31[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-18h]
  _QWORD Buffer[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  unsigned int v38; // [rsp+118h] [rbp+18h]
  unsigned int v39; // [rsp+190h] [rbp+90h]
  HANDLE SectionHandle; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_thunk_772440563353939046(v31, 0, 0x60uLL);
  v27[1] = 0;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
  if ( *(_QWORD *)a1 == -1LL )
  {
    v27[0] = *(_DWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v28 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v31[0] = a1;
      v33 = a1 + 40;
      v34 = a1 + a2;
      v6 = v31;
      v32 = a1;
      v28 = RtlpExtendedHeapInformationGenerator;
    }
    v29 = v6;
    RtlpAcquireHeapListLock();
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      IsProtectedHeap = RtlpIsProtectedHeap(v7);
      if ( !IsProtectedHeap )
        RtlLockHeap(*(PVOID *)(a1 + 8));
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8));
      if ( !IsProtectedHeap )
        RtlUnlockHeap(*(PVOID *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(v27);
    }
    RtlpReleaseHeapListLock(0);
    v9 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v9 = ExtendedInformationHeap;
    v10 = v9;
    if ( v28 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v9 >= 0 )
      {
        v22 = v33;
        if ( a3 )
          *a3 = v33 - v32;
        if ( v22 > v34 )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v10;
  }
  else
  {
    BaseAddress = 0LL;
    for ( MaximumSize.QuadPart = 0x10000LL; ; MaximumSize.QuadPart = (v37 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
    {
      SectionHandle = 0LL;
      v12 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v12 < 0 )
        break;
      memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
      v13 = *(void **)a1;
      Buffer[2] = *(_QWORD *)(a1 + 8);
      v36 = *(_DWORD *)(a1 + 16);
      Buffer[1] = MaximumSize.QuadPart;
      Buffer[0] = SectionHandle;
      v14 = RtlpHeapPerformCrossProcessQuery(v13, Buffer);
      v12 = v14;
      if ( v14 != -1073741789 )
      {
        if ( v14 >= 0 )
        {
          ViewSize = 0x10000LL;
          v12 = ZwMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0x10000uLL,
                  &SectionOffset,
                  &ViewSize,
                  ViewUnmap,
                  0,
                  4u);
          if ( v12 >= 0 )
          {
            v15 = *(__int64 (__fastcall **)())(a1 + 24);
            v16 = 0LL;
            if ( v15 )
            {
              v30 = *(_QWORD **)(a1 + 32);
            }
            else
            {
              v31[0] = a1;
              v33 = a1 + 40;
              v15 = RtlpExtendedHeapInformationGenerator;
              v32 = a1;
              v34 = a1 + a2;
              v30 = v31;
            }
            for ( i = 0; ; i = v39 + 1 )
            {
              v39 = i;
              if ( i >= v38 )
                break;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v18 >= MaximumSize.QuadPart
                || v18 >= 2 * ViewSize
                || (__int64)(ViewSize + SectionOffset.QuadPart) > MaximumSize.QuadPart )
              {
                v12 = -1073741762;
                break;
              }
              v19 = (char *)BaseAddress + v18;
              if ( v18 + 16 >= ViewSize || !*(_DWORD *)v19 )
              {
                NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                SectionOffset.QuadPart += ViewSize;
                BaseAddress = 0LL;
                v12 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        ViewSize,
                        &SectionOffset,
                        &ViewSize,
                        ViewUnmap,
                        0,
                        4u);
                if ( v12 < 0 )
                  break;
                v19 = (char *)BaseAddress;
                v18 = 0LL;
              }
              v12 = ((__int64 (__fastcall *)(char *, _QWORD *))v15)(v19, v30);
              if ( v12 < 0 )
                break;
              v16 = *((_QWORD *)v19 + 1) + v18;
            }
            if ( v15 == RtlpExtendedHeapInformationGenerator )
            {
              if ( v12 >= 0 )
              {
                v20 = v33;
                if ( a3 )
                  *a3 = v33 - v32;
                if ( v20 > v34 )
                  v12 = -1073741789;
              }
            }
            else if ( a3 )
            {
              *a3 = 88LL;
            }
          }
        }
        break;
      }
      NtClose(SectionHandle);
    }
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
    return (unsigned int)v12;
  }
}
