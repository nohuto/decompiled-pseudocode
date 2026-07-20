/*
 * XREFs of SmpCreatePagingFileDescriptor @ 0x14000FA78
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpParseSwapOrPageFileArguments @ 0x140011204 (SmpParseSwapOrPageFileArguments.c)
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
  __int64 v10; // rcx
  __int64 v11; // rax
  WCHAR v12; // ax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  UNICODE_STRING String; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  ULONG Value; // [rsp+78h] [rbp+28h] BYREF
  ULONG v18; // [rsp+80h] [rbp+30h] BYREF

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
  v18 = 0;
  if ( !String.Buffer )
    goto LABEL_13;
  v6 = SmpParseSwapOrPageFileArguments(&String, &Value, &v18);
  v2 = v6;
  if ( v6 < 0 )
  {
    SmpLogFailure((__int64)"SmpCreatePagingFileDescriptor", 1006, v6);
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&String);
    return v2;
  }
  if ( !Value || (v7 = 0, !v18) )
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
  *((_OWORD *)Heap + 2) = *(_OWORD *)a1;
  *((struct _UNICODE_STRING *)Heap + 1) = UnicodeString;
  v10 = Heap[3];
  Heap[7] = (unsigned __int64)Value << 20;
  Heap[6] = (unsigned __int64)Value << 20;
  v11 = v18;
  *((_DWORD *)v9 + 23) &= ~2u;
  v9[8] = v11 << 20;
  *((_DWORD *)v9 + 23) |= 2 * v7;
  v12 = RtlUpcaseUnicodeChar(*(_WORD *)(v10 + 8));
  *(_WORD *)(v9[3] + 8LL) = v12;
  if ( v12 == 63 )
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
  if ( (*((_BYTE *)v9 + 92) & 2) == 0 || v12 != 63 && v12 != SmpOsVolumeLetter )
  {
    v14 = (_QWORD *)qword_140031BC8;
    if ( *(PVOID **)qword_140031BC8 == &SmpPagingFileDescriptorList )
    {
      *v9 = &SmpPagingFileDescriptorList;
      v9[1] = v14;
      *v14 = v9;
      qword_140031BC8 = (__int64)v9;
      goto LABEL_28;
    }
LABEL_26:
    __fastfail(3u);
  }
  v13 = SmpPagingFileDescriptorList;
  if ( *((PVOID **)SmpPagingFileDescriptorList + 1) != &SmpPagingFileDescriptorList )
    goto LABEL_26;
  *v9 = SmpPagingFileDescriptorList;
  v9[1] = &SmpPagingFileDescriptorList;
  v13[1] = v9;
  SmpPagingFileDescriptorList = v9;
LABEL_28:
  ++SmpNumberOfPagefileDescriptors;
  return 0LL;
}
