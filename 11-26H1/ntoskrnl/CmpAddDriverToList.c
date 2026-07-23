/*
 * XREFs of CmpAddDriverToList @ 0x140CF493C
 * Callers:
 *     CmpFindDrivers @ 0x140CF5190 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmpFindTagIndex @ 0x140CF5804 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x140CF5B38 (CmpGetNodeName.c)
 */

char __fastcall CmpAddDriverToList(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        int a4,
        PCUNICODE_STRING Source,
        __int64 *a6,
        char a7)
{
  int TagIndex; // r14d
  bool v9; // zf
  __int64 v10; // r15
  __int64 v11; // rdi
  char v12; // r12
  __int64 CellPaged; // rax
  __int64 v14; // r13
  const WCHAR *NodeName; // rax
  __int64 v16; // rsi
  void *v17; // rax
  unsigned __int16 v18; // cx
  _WORD *v19; // r12
  PCUNICODE_STRING v20; // rax
  unsigned int ValueByName; // esi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  ULONG_PTR CellFlat; // rax
  PVOID v27; // r14
  size_t v28; // rsi
  wchar_t *v29; // rax
  const UNICODE_STRING *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // esi
  ULONG_PTR v36; // rax
  _DWORD *v37; // rsi
  unsigned int v38; // esi
  ULONG_PTR v39; // rax
  unsigned __int16 v40; // ax
  unsigned int v41; // esi
  ULONG_PTR v42; // rax
  unsigned __int16 v43; // ax
  size_t Size; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v46[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v47; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v48[2]; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-41h] BYREF
  __int64 v50; // [rsp+68h] [rbp-31h] BYREF
  __int64 v51; // [rsp+70h] [rbp-29h] BYREF
  __int64 v52; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING v53; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int16 v55; // [rsp+E8h] [rbp+4Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+F8h] [rbp+5Fh]
  int v57; // [rsp+100h] [rbp+67h]

  v57 = a4;
  BugCheckParameter3a = a3;
  TagIndex = -1;
  v48[0] = -1;
  v52 = 0xFFFFFFFFLL;
  v48[1] = 0;
  v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v10 = 0LL;
  v11 = 0LL;
  LODWORD(Size) = 0;
  v12 = 0;
  v46[1] = 0;
  v55 = 0;
  a7 = 0;
  v51 = 0xFFFFFFFFLL;
  v50 = 0xFFFFFFFFLL;
  v47 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  v46[0] = -1;
  Destination = 0LL;
  v53 = 0LL;
  if ( v9 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, v48);
  v14 = CellPaged;
  if ( !CellPaged )
    goto LABEL_14;
  NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, CellPaged, &v55);
  v16 = (__int64)NodeName;
  if ( !NodeName )
    goto LABEL_14;
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
    || (v17 = (void *)guard_dispatch_icall_no_overrides(144LL, 0LL), (v11 = (__int64)v17) == 0) )
  {
    guard_dispatch_icall_no_overrides(v16, v55);
    goto LABEL_14;
  }
  memset_0(v17, 0, 0x90uLL);
  v18 = v55;
  v19 = (_WORD *)(v11 + 120);
  v20 = Source;
  *(_QWORD *)(v11 + 64) = BugCheckParameter3;
  v10 = v11;
  *(UNICODE_STRING *)(v11 + 72) = *v20;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_QWORD *)(v11 + 128) = v16;
  *(_WORD *)(v11 + 120) = v18 - 2;
  *(_WORD *)(v11 + 122) = v18;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v14, (unsigned __int16 *)&CmpImagePathString);
  if ( ValueByName == -1 )
  {
    v22 = (unsigned int)(unsigned __int16)*v19 + 46;
    Destination.MaximumLength = *v19 + 46;
    Destination.Buffer = (wchar_t *)guard_dispatch_icall_no_overrides(v22, 0LL);
    if ( !Destination.Buffer )
    {
      v12 = 0;
      goto LABEL_14;
    }
    if ( RtlAppendUnicodeToString(&Destination, L"System32\\Drivers\\") < 0
      || RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v11 + 120)) < 0
      || RtlAppendUnicodeToString(&Destination, L".sys") < 0 )
    {
      goto LABEL_13;
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, ValueByName, v46);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, ValueByName);
    if ( !CellFlat )
      goto LABEL_13;
    v27 = CmpValueToData(BugCheckParameter3, ValueByName, CellFlat, (__int64)&Size, (__int64)&v47);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v46);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v46);
    if ( !v27 )
      goto LABEL_13;
    v28 = (unsigned int)Size;
    v29 = (wchar_t *)guard_dispatch_icall_no_overrides((unsigned int)Size, 0LL);
    Destination.Buffer = v29;
    if ( !v29 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v47);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
      goto LABEL_13;
    }
    memmove(v29, v27, v28);
    v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    Destination.Length = v28;
    Destination.MaximumLength = v28;
    if ( v9 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
    else
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v47);
    TagIndex = -1;
  }
  v30 = Source;
  v53.MaximumLength = *v19 + Source->Length + 94;
  v53.Buffer = (wchar_t *)guard_dispatch_icall_no_overrides(v53.MaximumLength, 0LL);
  if ( !v53.Buffer
    || RtlAppendUnicodeStringToString(&v53, &CmpRegistryRootKeyPath) < 0
    || RtlAppendUnicodeStringToString(&v53, v30) < 0
    || RtlAppendUnicodeStringToString(&v53, &CmpServicesSubKeyPath) < 0
    || (v12 = 0, RtlAppendUnicodeStringToString(&v53, (PCUNICODE_STRING)(v11 + 120)) < 0) )
  {
LABEL_13:
    v12 = a7;
    goto LABEL_14;
  }
  v31 = *(_QWORD *)(v11 + 24);
  if ( v31 )
    guard_dispatch_icall_no_overrides(v31, *(unsigned __int16 *)(v11 + 16));
  v32 = *(_QWORD *)(v11 + 40);
  *(UNICODE_STRING *)(v11 + 16) = Destination;
  Destination = 0LL;
  if ( v32 )
    guard_dispatch_icall_no_overrides(v32, *(unsigned __int16 *)(v11 + 32));
  v33 = a6;
  *(UNICODE_STRING *)(v11 + 32) = v53;
  v34 = *v33;
  v53 = 0LL;
  if ( *(__int64 **)(v34 + 8) != v33 )
    __fastfail(3u);
  *(_QWORD *)v11 = v34;
  *(_QWORD *)(v11 + 8) = v33;
  *(_QWORD *)(v34 + 8) = v11;
  v10 = 0LL;
  *v33 = v11;
  v35 = CmpFindValueByName(BugCheckParameter3, v14, (unsigned __int16 *)&CmpErrorControlString);
  if ( v35 == -1 )
  {
    *(_DWORD *)(v11 + 140) = 1;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v36 = HvpGetCellFlat(BugCheckParameter3, v35, v46);
    else
      v36 = HvpGetCellPaged(BugCheckParameter3, v35);
    if ( !v36 )
      goto LABEL_14;
    v37 = CmpValueToData(BugCheckParameter3, v35, v36, (__int64)&Size, (__int64)&v50);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v46);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v46);
    if ( !v37 )
      goto LABEL_14;
    *(_DWORD *)(v11 + 140) = *v37;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v50);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v50);
  }
  v38 = CmpFindValueByName(BugCheckParameter3, v14, (unsigned __int16 *)&CmpGroupString);
  if ( v38 == -1 )
  {
    *(_DWORD *)(v11 + 104) = 0;
    *(_QWORD *)(v11 + 112) = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v39 = HvpGetCellFlat(BugCheckParameter3, v38, v46);
    else
      v39 = HvpGetCellPaged(BugCheckParameter3, v38);
    if ( !v39 )
      goto LABEL_14;
    *(_QWORD *)(v11 + 112) = CmpValueToData(BugCheckParameter3, v38, v39, (__int64)&Size, (__int64)&v51);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v46);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v46);
    if ( !*(_QWORD *)(v11 + 112) )
      goto LABEL_14;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v51);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v51);
    v40 = Size - 2;
    *(_WORD *)(v11 + 104) = Size - 2;
    if ( v40 > (unsigned __int16)Size )
      goto LABEL_14;
    *(_WORD *)(v11 + 106) = v40;
  }
  v41 = CmpFindValueByName(BugCheckParameter3, v14, (unsigned __int16 *)&CmpDriverDependencyString);
  if ( v41 == -1 )
  {
    *(_DWORD *)(v11 + 88) = 0;
    *(_QWORD *)(v11 + 96) = 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v42 = HvpGetCellFlat(BugCheckParameter3, v41, v46);
    else
      v42 = HvpGetCellPaged(BugCheckParameter3, v41);
    if ( !v42 )
      goto LABEL_14;
    *(_QWORD *)(v11 + 96) = CmpValueToData(BugCheckParameter3, v41, v42, (__int64)&Size, (__int64)&v52);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v46);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v46);
    if ( !*(_QWORD *)(v11 + 96) )
      goto LABEL_14;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v52);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v52);
    v43 = Size - 2;
    *(_WORD *)(v11 + 88) = Size - 2;
    if ( v43 > (unsigned __int16)Size )
      goto LABEL_14;
    *(_WORD *)(v11 + 90) = v43;
  }
  if ( (unsigned int)CmpFindValueByName(BugCheckParameter3, v14, (unsigned __int16 *)&CmpTagString) != -1 )
    TagIndex = CmpFindTagIndex(BugCheckParameter3a);
  v12 = 1;
  *(_DWORD *)(v11 + 136) = TagIndex;
LABEL_14:
  if ( Destination.Buffer )
    guard_dispatch_icall_no_overrides((__int64)Destination.Buffer, Destination.Length);
  if ( v53.Buffer )
    guard_dispatch_icall_no_overrides((__int64)v53.Buffer, v53.Length);
  if ( v10 )
  {
    v23 = *(_QWORD *)(v10 + 24);
    if ( v23 )
      guard_dispatch_icall_no_overrides(v23, *(unsigned __int16 *)(v10 + 16));
    v24 = *(_QWORD *)(v10 + 40);
    if ( v24 )
      guard_dispatch_icall_no_overrides(v24, *(unsigned __int16 *)(v10 + 32));
    v25 = *(_QWORD *)(v11 + 128);
    if ( v25 )
      guard_dispatch_icall_no_overrides(v25, *(unsigned __int16 *)(v11 + 120));
    guard_dispatch_icall_no_overrides(v11, 144LL);
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v48);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v48);
  }
  return v12;
}
