/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x18014FCC0
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x180122180 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800926EC (RtlpHeapPerformCrossProcessQuery.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  SIZE_T v1; // rsi
  NTSTATUS v3; // ebx
  int v4; // eax
  PVOID v5; // rdx
  signed __int64 v6; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Buffer[3]; // [rsp+60h] [rbp-29h] BYREF
  int v12; // [rsp+78h] [rbp-11h]
  ULONG_PTR v13; // [rsp+80h] [rbp-9h]
  char v14; // [rsp+B8h] [rbp+2Fh]
  PVOID BaseAddress; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+100h] [rbp+77h] BYREF
  ULONG_PTR ViewSize; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = 0x10000LL;
  ViewSize = 0LL;
  MaximumSize.QuadPart = 0x10000LL;
  SectionOffset.QuadPart = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  while ( 1 )
  {
    memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
    if ( *(_BYTE *)(a1 + 32) == 2 )
    {
      v3 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v3 < 0 )
        goto LABEL_22;
      Buffer[0] = SectionHandle;
      Buffer[1] = (HANDLE)MaximumSize.QuadPart;
      v12 = 0x20000000;
    }
    else
    {
      v12 = 0x8000000;
    }
    v4 = RtlpHeapPerformCrossProcessQuery(*(HANDLE *)(a1 + 8), Buffer);
    v3 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_22;
    NtClose(SectionHandle);
    MaximumSize.QuadPart = (v13 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  }
  if ( (v14 & 1) != 0 )
    *(_BYTE *)(a1 + 33) |= 1u;
  if ( *(_BYTE *)(a1 + 32) == 1 )
  {
LABEL_22:
    v5 = BaseAddress;
    goto LABEL_23;
  }
  v5 = BaseAddress;
  v6 = 0LL;
  v7 = 0LL;
  ViewSize = 0x10000LL;
  while ( v6 < MaximumSize.QuadPart && v7 < v13 )
  {
    v3 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           v1,
           &SectionOffset,
           &ViewSize,
           ViewUnmap,
           0,
           4u);
    if ( v3 < 0 )
      goto LABEL_22;
    v8 = SectionOffset.QuadPart + ViewSize <= v13 ? ViewSize : v13 - SectionOffset.QuadPart;
    v3 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR, _QWORD))(a1 + 16))(BaseAddress, v8, *(_QWORD *)(a1 + 24));
    if ( v3 < 0 )
      goto LABEL_22;
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    v5 = 0LL;
    v1 = ViewSize;
    v6 = ViewSize + SectionOffset.QuadPart;
    BaseAddress = 0LL;
    SectionOffset.QuadPart = v6;
    v7 = v6;
  }
  v3 = 0;
LABEL_23:
  if ( v5 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return (unsigned int)v3;
}
