/*
 * XREFs of SmpCreatePagingFileDescriptor @ 0x14000FE40
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpParseSwapOrPageFileArguments @ 0x1400115CC (SmpParseSwapOrPageFileArguments.c)
 */

__int64 __fastcall SmpCreatePagingFileDescriptor(__int64 a1)
{
  unsigned int v2; // ebx
  signed int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  int v7; // r14d
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // ecx
  WCHAR v11; // ax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  UNICODE_STRING String; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+78h] [rbp+28h] BYREF
  ULONG v17; // [rsp+80h] [rbp+30h] BYREF

  UnicodeString = 0LL;
  String = 0LL;
  if ( (unsigned int)SmpNumberOfPagefileDescriptors >= 0x10 )
  {
    v2 = -1073741673;
    SmLogFailureInt(
      (__int64)"SmpCreatePagingFileDescriptor",
      953,
      (unsigned int)SmpNumberOfPagefileDescriptors,
      0LL,
      -1073741673);
    return v2;
  }
  v4 = SmpParseCommandLine((_OWORD *)a1, 0LL, &UnicodeString, 0LL, &String);
  v5 = 0LL;
  v2 = v4;
  if ( v4 < 0 )
  {
    if ( a1 )
      v5 = *(_QWORD *)(a1 + 8);
    SmpLogFailureString((__int64)"SmpCreatePagingFileDescriptor", 0x3CDu, v5, v4);
    return v2;
  }
  SmpRegistrySpecifierPresent = 1;
  Value = 0;
  v17 = 0;
  if ( !String.Buffer )
    goto LABEL_13;
  v6 = SmpParseSwapOrPageFileArguments(&String, &Value, &v17);
  v2 = v6;
  if ( v6 < 0 )
  {
    SmpLogFailure((__int64)"SmpCreatePagingFileDescriptor", 1006, v6);
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&String);
    return v2;
  }
  if ( !Value || (v7 = 0, !v17) )
LABEL_13:
    v7 = 1;
  RtlFreeUnicodeString(&String);
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x60uLL);
  v9 = Heap;
  if ( !Heap )
  {
    RtlFreeUnicodeString(&UnicodeString);
    return 3221225495LL;
  }
  v10 = *((_DWORD *)Heap + 23) & 0xFFFFFFFD;
  *((_OWORD *)Heap + 2) = *(_OWORD *)a1;
  *((struct _UNICODE_STRING *)Heap + 1) = UnicodeString;
  Heap[7] = (unsigned __int64)Value << 20;
  Heap[6] = (unsigned __int64)Value << 20;
  Heap[8] = (unsigned __int64)v17 << 20;
  *((_DWORD *)Heap + 23) = (2 * v7) | v10;
  v11 = RtlUpcaseUnicodeChar(*(_WORD *)(Heap[3] + 8LL));
  *(_WORD *)(v9[3] + 8LL) = v11;
  if ( v11 == 63 )
  {
    if ( SmpAnyDriveDescriptorCreated == 1 )
    {
      SmpLogFailureString((__int64)"SmpCreatePagingFileDescriptor", 0x420u, *(_QWORD *)(a1 + 8), 0xC000000D);
      RtlFreeUnicodeString(&UnicodeString);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
      return 3221225485LL;
    }
    *((_DWORD *)v9 + 23) |= 4u;
    SmpAnyDriveDescriptorCreated = 1;
  }
  if ( (*((_BYTE *)v9 + 92) & 2) == 0 || v11 != 63 && v11 != SmpOsVolumeLetter )
  {
    v13 = (_QWORD *)qword_140032BD8;
    if ( *(PVOID **)qword_140032BD8 == &SmpPagingFileDescriptorList )
    {
      *v9 = &SmpPagingFileDescriptorList;
      v9[1] = v13;
      *v13 = v9;
      qword_140032BD8 = (__int64)v9;
      goto LABEL_28;
    }
LABEL_26:
    __fastfail(3u);
  }
  v12 = SmpPagingFileDescriptorList;
  if ( *((PVOID **)SmpPagingFileDescriptorList + 1) != &SmpPagingFileDescriptorList )
    goto LABEL_26;
  *v9 = SmpPagingFileDescriptorList;
  v9[1] = &SmpPagingFileDescriptorList;
  v12[1] = v9;
  SmpPagingFileDescriptorList = v9;
LABEL_28:
  ++SmpNumberOfPagefileDescriptors;
  return 0LL;
}
