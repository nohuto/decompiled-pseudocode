/*
 * XREFs of CmSelectQualifiedInstallLanguage @ 0x140CF20A8
 * Callers:
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     DownLevelLanguageNameToLangID @ 0x1406DCFA4 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpWalkPath @ 0x140866560 (CmpWalkPath.c)
 *     CmpValueToData @ 0x140866670 (CmpValueToData.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 */

__int64 __fastcall CmSelectQualifiedInstallLanguage(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  int v6; // r15d
  char v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int ValueByName; // eax
  unsigned int v13; // esi
  ULONG_PTR v14; // rax
  PVOID v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  _DWORD *v18; // r13
  unsigned int v20; // r14d
  __int64 CellFlat; // rax
  __int64 v22; // rsi
  char v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // r15d
  ULONG_PTR v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  unsigned __int64 v30; // rax
  unsigned __int16 v31; // ax
  int v32; // esi
  char v33; // [rsp+30h] [rbp-D0h]
  char v34; // [rsp+31h] [rbp-CFh]
  unsigned int v35[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h]
  unsigned int v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+60h] [rbp-A0h]
  unsigned int v41[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v45; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Str2[88]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v48[176]; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Str1[88]; // [rsp+200h] [rbp+100h] BYREF

  v36 = a4;
  v42 = 0;
  v38[1] = 0;
  v38[0] = -1;
  v35[0] = -1;
  v41[0] = -1;
  v37[0] = -1;
  v44 = 0xFFFFFFFFLL;
  v43 = 0xFFFFFFFFLL;
  v6 = a4;
  v45 = a3;
  DestinationString = 0LL;
  v35[1] = 0;
  v7 = 0;
  v41[1] = 0;
  v37[1] = 0;
  v33 = 0;
  v34 = 0;
  v40 = 0;
  Size = 0LL;
  memset_0(v48, 0, 0xAAuLL);
  memset_0(Str2, 0, 0xAAuLL);
  memset_0(Str1, 0, 0xAAuLL);
  if ( !a3 )
    return 1LL;
  *a3 = 0;
  if ( v6 )
  {
    v8 = 70;
    if ( !(unsigned int)DownLevelLangIDToLanguageName(v6, Str1, 85, 0) )
    {
      v6 = 0;
      v36 = 0;
    }
  }
  else
  {
    v8 = 38;
  }
  v9 = CmpWalkPath((ULONG_PTR)&CmControlHive, a2, L"MUI\\Settings");
  if ( v9 != -1 )
  {
    v10 = (byte_140FFF59C & 1) != 0
        ? HvpGetCellFlat((__int64)&CmControlHive, v9, v35)
        : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v9);
    v11 = v10;
    if ( v10 )
    {
      RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
      ValueByName = CmpFindValueByName((ULONG_PTR)&CmControlHive, v11, &DestinationString.Length);
      v13 = ValueByName;
      if ( ValueByName != -1 )
      {
        v14 = (byte_140FFF59C & 1) != 0
            ? HvpGetCellFlat((__int64)&CmControlHive, ValueByName, v38)
            : HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName);
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 12) == 7 )
          {
            v15 = CmpValueToData((ULONG_PTR)&CmControlHive, v13, v14, (__int64)&Size, (__int64)&v43);
            if ( v15 )
            {
              if ( (unsigned int)Size < 0xA8 )
              {
                memmove(v48, v15, (unsigned int)Size);
                PsMachineUILanguageId = DownLevelLanguageNameToLangID(v48, 0);
              }
              if ( (byte_140FFF59C & 1) != 0 )
                HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v43);
              else
                HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v43);
            }
          }
          if ( (byte_140FFF59C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v38);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, v38);
        }
      }
      if ( (byte_140FFF59C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v35);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, v35);
    }
  }
  v16 = CmpWalkPath((ULONG_PTR)&CmControlHive, a2, L"MUI\\UILanguages");
  if ( v16 == -1 )
    return v8;
  v17 = (byte_140FFF59C & 1) != 0
      ? HvpGetCellFlat((__int64)&CmControlHive, v16, v41)
      : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v16);
  v18 = (_DWORD *)v17;
  if ( !v17 )
    return v8;
  v8 &= ~2u;
  v20 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber((ULONG_PTR)&CmControlHive, v18, v20++, (int *)&v42);
    v35[0] = v20;
    if ( v42 == -1 )
      break;
    if ( (byte_140FFF59C & 1) != 0 )
      CellFlat = HvpGetCellFlat((__int64)&CmControlHive, v42, v37);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v42);
    v22 = CellFlat;
    if ( CellFlat )
    {
      v23 = 0;
      RtlInitUnicodeString(&DestinationString, L"Type");
      v24 = CmpFindValueByName((ULONG_PTR)&CmControlHive, v22, &DestinationString.Length);
      v25 = v24;
      if ( v24 == -1 )
        goto LABEL_80;
      v26 = (byte_140FFF59C & 1) != 0
          ? HvpGetCellFlat((__int64)&CmControlHive, v24, v38)
          : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v24);
      if ( !v26 )
        goto LABEL_80;
      if ( *(_DWORD *)(v26 + 12) == 4 )
      {
        v27 = *(_DWORD *)CmpValueToData((ULONG_PTR)&CmControlHive, v25, v26, (__int64)&Size, (__int64)&v44);
        HIDWORD(Size) = v27;
        if ( (v27 & 3) != 0 && (v27 & 0x10) != 0 )
          v23 = 1;
        if ( (byte_140FFF59C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)&v44);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v44);
      }
      if ( (byte_140FFF59C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v38);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, v38);
      if ( !v23 )
        goto LABEL_80;
      v28 = *(unsigned __int16 *)(v22 + 72);
      if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
      {
        v29 = (unsigned __int16)(2 * v28);
        if ( v29 <= 0xA8 )
        {
          CmpCopyCompressedName((unsigned __int64)Str2, v29, v22 + 76, v28);
          goto LABEL_62;
        }
LABEL_80:
        if ( (byte_140FFF59C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v37);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, v37);
        v20 = v35[0];
        v6 = v36;
      }
      else
      {
        v29 = *(unsigned __int16 *)(v22 + 72);
        if ( (unsigned __int16)v28 > 0xA8u )
          goto LABEL_80;
        memmove(Str2, (const void *)(v22 + 76), *(unsigned __int16 *)(v22 + 72));
LABEL_62:
        if ( (byte_140FFF59C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v37);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, v37);
        v30 = v29 & 0xFFFFFFFE;
        if ( v30 >= 0xAA )
          _report_rangecheckfailure();
        *(wchar_t *)((char *)Str2 + v30) = 0;
        v31 = DownLevelLanguageNameToLangID(Str2, 0);
        v20 = v35[0];
        v6 = v36;
        v32 = v31;
        if ( v31 && v31 != 127 )
        {
          if ( v36 && !v34 && !wcsicmp(Str1, Str2) )
          {
            v34 = 1;
            v8 &= ~0x40u;
          }
          v20 = v35[0];
          if ( v33 )
          {
            if ( !v7 && (Size & 0x200000000LL) != 0 )
            {
              v7 = 1;
              v40 = v32;
            }
          }
          else if ( !v7 )
          {
            v40 = v32;
            if ( (Size & 0x200000000LL) != 0 )
              v7 = 1;
            else
              v33 = 1;
          }
        }
      }
    }
  }
  if ( (byte_140FFF59C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v41);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, v41);
  if ( v33 || v7 )
    v8 &= ~4u;
  if ( v34 )
  {
    *v45 = v6;
    return 0;
  }
  if ( v7 || v33 )
  {
    *v45 = v40;
    return 0;
  }
  return v8;
}
