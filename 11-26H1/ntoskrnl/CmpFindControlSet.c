/*
 * XREFs of CmpFindControlSet @ 0x14086542C
 * Callers:
 *     CmpAcquireSystemDriverHiveContext @ 0x140CEF738 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     sprintf_s @ 0x14053E940 (sprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 CellFlat; // rax
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int ValueByName; // esi
  __int64 CellPaged; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 *v18; // rdx
  _DWORD *v19; // rsi
  __int64 v20; // rax
  NTSTATUS v21; // eax
  char v22; // cl
  bool v23; // zf
  __int64 v24; // rax
  ULONG_PTR v25; // rcx
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int v29; // edi
  __int64 v30; // rax
  _DWORD *v31; // rcx
  unsigned int v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h]
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  ANSI_STRING SourceString; // [rsp+70h] [rbp-90h] BYREF
  char DstBuf[128]; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+100h] [rbp+0h] BYREF

  v35[1] = 0;
  v35[0] = -1;
  v34 = 0xFFFFFFFFLL;
  v39 = 0xFFFFFFFFLL;
  v33[0] = -1;
  v38 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  SourceString = 0LL;
  v37 = 0;
  v33[1] = 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, v33);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"select");
  v36 = 0;
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v33);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v33);
  v9 = v36;
  if ( v36 == -1 )
    return 0xFFFFFFFFLL;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v36, v33)
      : HvpGetCellPaged(BugCheckParameter3);
  v11 = v10;
  if ( !v10 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"AutoSelect");
  ValueByName = CmpFindValueByName(BugCheckParameter3, v11, &DestinationString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v33);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v33);
  if ( ValueByName == -1 )
  {
    *a4 = 1;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, ValueByName, v35);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    if ( !CellPaged )
      return 0xFFFFFFFFLL;
    v14 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v38);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v35);
    if ( !v14 )
      return 0xFFFFFFFFLL;
    *a4 = *v14;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v38);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v38);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v15 = HvpGetCellFlat(BugCheckParameter3, v9, v33);
  else
    v15 = HvpGetCellPaged(BugCheckParameter3);
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v16 = CmpFindValueByName(BugCheckParameter3, v15, a3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v33);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v33);
  if ( v16 == -1 )
    return 0xFFFFFFFFLL;
  v17 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v16, v35)
      : HvpGetCellPaged(BugCheckParameter3);
  if ( !v17 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v17 + 12) != 4 )
  {
    v18 = (__int64 *)v35;
LABEL_76:
    v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    goto LABEL_77;
  }
  v19 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v34);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v35);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v35);
  if ( !v19 )
    return 0xFFFFFFFFLL;
  sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v19);
  v20 = -1LL;
  do
    ++v20;
  while ( DstBuf[v20] );
  SourceString.MaximumLength = v20;
  SourceString.Length = v20;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  SourceString.Buffer = DstBuf;
  DestinationString.Buffer = (wchar_t *)&v43;
  v21 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
  v22 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( v21 < 0 )
  {
    v18 = &v34;
    v23 = v22 == 0;
LABEL_77:
    v25 = BugCheckParameter3;
LABEL_78:
    if ( v23 )
      HvpReleaseCellPaged(v25, v18);
    else
      HvpReleaseCellFlat(v25, v18);
    return 0xFFFFFFFFLL;
  }
  if ( v22 )
    v24 = HvpGetCellFlat(BugCheckParameter3, a2, v33);
  else
    v24 = HvpGetCellPaged(BugCheckParameter3);
  v25 = BugCheckParameter3;
  if ( !v24 )
  {
    v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v18 = &v34;
    goto LABEL_78;
  }
  v36 = 0;
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v33);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v33);
  v25 = BugCheckParameter3;
  v26 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( v36 == -1 )
  {
    v18 = &v34;
    v23 = v26 == 0;
    goto LABEL_78;
  }
  if ( v26 )
    v27 = HvpGetCellFlat(BugCheckParameter3, v9, v33);
  else
    v27 = HvpGetCellPaged(BugCheckParameter3);
  v28 = v27;
  if ( !v27 )
  {
LABEL_75:
    v18 = &v34;
    goto LABEL_76;
  }
  RtlInitUnicodeString(&DestinationString, L"Current");
  v29 = CmpFindValueByName(BugCheckParameter3, v28, &DestinationString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v33);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v33);
  if ( v29 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v30 = HvpGetCellFlat(BugCheckParameter3, v29, v35);
    else
      v30 = HvpGetCellPaged(BugCheckParameter3);
    if ( !v30 )
      goto LABEL_75;
    if ( *(_DWORD *)(v30 + 12) == 4 )
    {
      v31 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v39);
      if ( !v31 )
        goto LABEL_75;
      *v31 = *v19;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v39);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v39);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v35);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v34);
  return v36;
}
