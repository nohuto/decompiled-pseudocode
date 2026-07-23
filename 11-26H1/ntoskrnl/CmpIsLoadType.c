/*
 * XREFs of CmpIsLoadType @ 0x140CF5DD8
 * Callers:
 *     CmpFindDrivers @ 0x140CF5190 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x140AC518C (CmpFindSubKeyByName.c)
 *     CmpGetNodeName @ 0x140CF5B38 (CmpGetNodeName.c)
 */

char CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter3a,
        __int64 a7,
        ...)
{
  char v7; // bl
  unsigned int ValueByName; // r15d
  bool v10; // zf
  ULONG_PTR v11; // r14
  __int64 CellPaged; // rax
  __int64 v13; // r12
  ULONG_PTR v14; // rsi
  const WCHAR *NodeName; // rax
  __int64 v16; // r13
  unsigned int SubKeyByName; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r14d
  ULONG_PTR v21; // rax
  _DWORD *v22; // r14
  __int64 *v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rax
  ULONG_PTR CellFlat; // rax
  _DWORD *v27; // rsi
  char v28; // al
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+40h] BYREF
  int v33; // [rsp+94h] [rbp+44h]
  int v34; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+58h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+78h] BYREF
  va_list va; // [rsp+C8h] [rbp+78h]
  __int64 v38; // [rsp+D0h] [rbp+80h] BYREF
  va_list va1; // [rsp+D0h] [rbp+80h]
  __int64 v40; // [rsp+D8h] [rbp+88h] BYREF
  va_list va2; // [rsp+D8h] [rbp+88h]
  va_list va3; // [rsp+E0h] [rbp+90h] BYREF

  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v36 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  va_arg(va3, _QWORD);
  v35 = a4;
  v34 = a3;
  v7 = 0;
  a5 = 0xFFFFFFFFLL;
  v40 = 0xFFFFFFFFLL;
  ValueByName = -1;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v11 = 0LL;
  v32 = -1;
  v30 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v38 = 0xFFFFFFFFLL;
  LODWORD(v35) = 0;
  v33 = 0;
  DestinationString = 0LL;
  LOWORD(v34) = 0;
  if ( v10 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, (unsigned int *)va2);
  v13 = CellPaged;
  if ( !CellPaged )
    return CellPaged;
  v14 = BugCheckParameter3a;
  if ( BugCheckParameter3a && a7 )
  {
    NodeName = CmpGetNodeName(BugCheckParameter3, CellPaged, &v34);
    v16 = (__int64)NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(v14, a7, &DestinationString.Length);
        if ( SubKeyByName != -1 )
        {
          v18 = (*(_BYTE *)(v14 + 140) & 1) != 0
              ? HvpGetCellFlat(v14, SubKeyByName, &v32)
              : HvpGetCellPaged(v14, SubKeyByName);
          if ( v18 )
          {
            v11 = v14;
            ValueByName = CmpFindValueByName(v14, v18, (unsigned __int16 *)&CmpStartString);
            if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v14, (__int64)&v32);
            else
              HvpReleaseCellPaged(v14, &v32);
          }
        }
      }
      guard_dispatch_icall_no_overrides(v16, (unsigned __int16)v34);
      if ( ValueByName != -1 )
        goto LABEL_42;
    }
    v19 = CmpFindValueByName(BugCheckParameter3, v13, L"\b\n");
    v20 = v19;
    if ( v19 == -1 )
      goto LABEL_58;
    v21 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v19, (unsigned int *)va)
        : HvpGetCellPaged(BugCheckParameter3, v19);
    if ( !v21 )
      goto LABEL_58;
    v22 = CmpValueToData(BugCheckParameter3, v20, v21, (__int64)&v35, (__int64)&v30);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)va);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va);
    if ( !v22 )
      goto LABEL_58;
    v10 = (*v22 & 0xB) == 0;
    v23 = &CmpDriverWildcardString;
    if ( v10 )
      v23 = &CmpServiceWildcardString;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v30);
    v24 = CmpFindSubKeyByName(v14, a7, (unsigned __int16 *)v23);
    if ( v24 != -1 )
    {
      v25 = (*(_BYTE *)(v14 + 140) & 1) != 0 ? HvpGetCellFlat(v14, v24, &v32) : HvpGetCellPaged(v14, v24);
      if ( v25 )
      {
        v11 = v14;
        ValueByName = CmpFindValueByName(v14, v25, (unsigned __int16 *)&CmpStartString);
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v14, (__int64)&v32);
        else
          HvpReleaseCellPaged(v14, &v32);
        if ( ValueByName != -1 )
          goto LABEL_42;
      }
    }
  }
  v11 = BugCheckParameter3;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v13, (unsigned __int16 *)&CmpStartString);
  if ( ValueByName != -1 )
  {
LABEL_42:
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v11, ValueByName, (unsigned int *)va1);
    else
      CellFlat = HvpGetCellPaged(v11, ValueByName);
    if ( CellFlat )
    {
      v27 = CmpValueToData(v11, ValueByName, CellFlat, (__int64)&v35, (__int64)&a5);
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v11, (__int64)va1);
      else
        HvpReleaseCellPaged(v11, (unsigned int *)va1);
      if ( v27 )
      {
        v28 = *(_BYTE *)(v11 + 140) & 1;
        if ( *v27 == 1 )
        {
          if ( v28 )
            HvpReleaseCellFlat(v11, (__int64)&a5);
          else
            HvpReleaseCellPaged(v11, (unsigned int *)&a5);
          v7 = 1;
        }
        else if ( v28 )
        {
          HvpReleaseCellFlat(v11, (__int64)&a5);
        }
        else
        {
          HvpReleaseCellPaged(v11, (unsigned int *)&a5);
        }
      }
    }
  }
LABEL_58:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)va2);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)va2);
  LOBYTE(CellPaged) = v7;
  return CellPaged;
}
