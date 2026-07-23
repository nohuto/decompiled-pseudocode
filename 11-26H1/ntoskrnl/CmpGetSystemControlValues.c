/*
 * XREFs of CmpGetSystemControlValues @ 0x140CF26DC
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFindControlSet @ 0x14086542C (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x140866560 (CmpWalkPath.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmpInitSecurityCache @ 0x140ABA1A4 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x140ABA1EC (HvHiveInitialize.c)
 *     CmpFindSubKeyByName @ 0x140AC518C (CmpFindSubKeyByName.c)
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpConvertLangId @ 0x140CF2678 (CmpConvertLangId.c)
 *     CmpGetBootValueData @ 0x140CF6804 (CmpGetBootValueData.c)
 */

__int64 __fastcall CmpGetSystemControlValues(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  int started; // eax
  unsigned int v7; // edi
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  unsigned int SubKeyByName; // r14d
  __int64 v11; // rcx
  unsigned int ControlSet; // eax
  __int64 CellPaged; // rax
  ULONG_PTR v14; // rdi
  unsigned int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int ValueByName; // esi
  unsigned int *v20; // r12
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // eax
  wchar_t *v25; // rcx
  unsigned int *v26; // rax
  unsigned int v27; // eax
  __int64 result; // rax
  __int64 v29; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v30[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v31[2]; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _KAFFINITY_EX v34; // [rsp+B8h] [rbp-50h] BYREF

  v3 = CmControlVector;
  v31[1] = 0;
  LOWORD(v29) = 0;
  v32 = 0;
  v31[0] = -1;
  v30[0] = -1;
  v30[1] = 0;
  memset(&v34, 0, 24);
  DestinationString = 0LL;
  memset_0(&v34.StaticBitmap[4], 0, 0x1A8uLL);
  CmpInitializeThreadInfo(&v34);
  memset_0(&CmControlHive, 0, 0x12E0uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  HvHiveInitialize(&CmControlHive);
  v34.StaticBitmap[3] = (unsigned __int64)&CmControlHive;
  qword_140FFF548 = (__int64)&v34.StaticBitmap[3];
  started = HvHiveStartMemoryBacked(
              (ULONG_PTR)&CmControlHive,
              4LL,
              1,
              0,
              a1,
              0LL,
              1,
              0LL,
              0,
              0LL,
              0LL,
              0LL,
              0LL,
              &v29,
              0LL,
              (__int64)&v34.StaticBitmap[3]);
  if ( started < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, started);
  qword_140FFF548 = 0LL;
  v7 = a1[9];
  if ( a3 == 1 )
  {
    if ( (byte_140FFF59C & 1) != 0 )
      CellFlat = HvpGetCellFlat((__int64)&CmControlHive, v7, v30);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v7);
    v9 = CellFlat;
    if ( !CellFlat )
      goto LABEL_72;
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive, v9, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      goto LABEL_72;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v7, (__int64)&DestinationString, (_BYTE *)&v29 + 1);
    if ( ControlSet == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
    if ( (byte_140FFF59C & 1) != 0 )
      CellPaged = HvpGetCellFlat((__int64)&CmControlHive, ControlSet, v30);
    else
      CellPaged = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ControlSet);
    v14 = CellPaged;
    if ( !CellPaged )
      goto LABEL_72;
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((ULONG_PTR)&CmControlHive, v14, &DestinationString.Length);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v14, (ULONG_PTR)&DestinationString);
  }
  if ( (byte_140FFF59C & 1) != 0 )
    HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v30);
  else
    HvpReleaseCellPaged((__int64)&CmControlHive, v30);
  while ( *v3 )
  {
    if ( a3 != 1 || *((_BYTE *)v3 + 40) )
    {
      v15 = -1;
      v16 = CmpWalkPath((ULONG_PTR)&CmControlHive, SubKeyByName, *v3);
      if ( v16 != -1 )
      {
        if ( (byte_140FFF59C & 1) != 0 )
          v17 = HvpGetCellFlat((__int64)&CmControlHive, v16, v30);
        else
          v17 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v16);
        v18 = v17;
        if ( !v17 )
          goto LABEL_72;
        RtlInitUnicodeString(&DestinationString, v3[1]);
        ValueByName = CmpFindValueByName((ULONG_PTR)&CmControlHive, v18, &DestinationString.Length);
        if ( (byte_140FFF59C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v30);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, v30);
        if ( ValueByName != -1 )
        {
          v20 = (unsigned int *)v3[3];
          if ( v20 )
            v21 = *v20;
          else
            v21 = 4;
          if ( (byte_140FFF59C & 1) != 0 )
            v22 = HvpGetCellFlat((__int64)&CmControlHive, ValueByName, v31);
          else
            v22 = HvpGetCellPaged((ULONG_PTR)&CmControlHive, ValueByName);
          v23 = v22;
          if ( !v22 )
            goto LABEL_72;
          v24 = *(_DWORD *)(v22 + 4);
          LOBYTE(v29) = v24 >= 0x80000000;
          v15 = v24 + 0x80000000;
          if ( v24 < 0x80000000 )
            v15 = v24;
          if ( v21 < v15 )
            v15 = v21;
          if ( v15 && !(unsigned __int8)CmpGetBootValueData(0x80000000LL, v23, v3[2], v15) )
          {
            if ( (byte_140FFF59C & 1) != 0 )
              HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v31);
            else
              HvpReleaseCellPaged((__int64)&CmControlHive, v31);
            goto LABEL_72;
          }
          v25 = v3[4];
          if ( v25 )
            *(_DWORD *)v25 = *(_DWORD *)(v23 + 12);
          if ( (byte_140FFF59C & 1) != 0 )
            HvpReleaseCellFlat((__int64)&CmControlHive, (__int64)v31);
          else
            HvpReleaseCellPaged((__int64)&CmControlHive, v31);
        }
      }
      v26 = (unsigned int *)v3[3];
      if ( v26 )
        *v26 = v15;
    }
    v3 += 6;
  }
  if ( CmDefaultLanguageIdType == 1 )
  {
    PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                  (__int64)CmDefaultLanguageId,
                                                  CmDefaultLanguageIdLength);
  }
  else if ( !a3 )
  {
    PsDefaultSystemLocaleId = 1033;
  }
  if ( CmInstallUILanguageIdType == 1 )
    PsInstallUILanguageId = CmpConvertLangId((__int64)CmInstallUILanguageId, CmInstallUILanguageIdLength);
  if ( !a3 )
  {
    v27 = CmSelectQualifiedInstallLanguage(v11, SubKeyByName, &v32, (unsigned __int16)PsInstallUILanguageId);
    if ( v27 )
    {
      if ( !PspSiloMonitorLock.SchedulerAssistYieldBoostCount )
        KeBugCheckEx(0x12Au, 1uLL, v27, 0LL, 0LL);
      PsInstallUILanguageId = PsDefaultSystemLocaleId;
    }
    else if ( (unsigned __int16)PsInstallUILanguageId != v32 )
    {
      PsInstallUILanguageId = v32;
      CmInstallUILanguageFallbackToOOBm = 1;
    }
  }
  HIDWORD(PspSiloMonitorLock.Timer.Header.WaitListHead.Flink) = PsDefaultSystemLocaleId;
  if ( !PsMachineUILanguageId || a3 == 1 )
    PsMachineUILanguageId = PsInstallUILanguageId;
LABEL_72:
  result = *(_QWORD *)&v34.Count;
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&v34.Count;
  return result;
}
