/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x140A46B84
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1404D7770 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140A1510C (PiDevCfgFreeDeviceMigrationNode.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A4661C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A47478 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140AE9CA0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // r14d
  int v6; // esi
  __int64 v7; // r12
  __int64 *v8; // r13
  PVOID *v9; // r15
  NTSTATUS v10; // ebx
  ULONG v11; // edi
  WCHAR *v12; // rbx
  const UNICODE_STRING *v13; // rcx
  NTSTATUS v14; // eax
  __int16 v15; // dx
  const WCHAR *v16; // rdi
  int v17; // eax
  wchar_t **v18; // rdi
  PVOID *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // ecx
  PVOID *v23; // rax
  char *v24; // rcx
  __int64 v25; // rax
  const wchar_t *v27; // rdx
  int v28; // eax
  int v29; // esi
  wchar_t **v30; // rbx
  __int64 v31; // r13
  __int64 *v32; // r14
  __int64 v33; // rdi
  int *v34; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v36; // rdi
  int v37; // eax
  wchar_t *v38; // rbx
  int v39; // r14d
  PVOID v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  bool v43; // zf
  PVOID *v44; // rcx
  PVOID **v45; // rax
  PVOID *v46; // rsi
  unsigned int *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rdx
  int v51; // ecx
  __int64 *v52; // r13
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // ecx
  __m128i *v56; // rax
  const WCHAR *v57; // xmm0_8
  PVOID v58; // rcx
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+34h] [rbp-CCh]
  ULONG v61; // [rsp+38h] [rbp-C8h]
  PVOID Pool2; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+48h] [rbp-B8h]
  PVOID v64; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v65; // [rsp+58h] [rbp-A8h]
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  int v67; // [rsp+64h] [rbp-9Ch] BYREF
  int v68; // [rsp+68h] [rbp-98h] BYREF
  ULONG v69; // [rsp+6Ch] [rbp-94h]
  int v70; // [rsp+70h] [rbp-90h]
  int Data; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h] BYREF
  PVOID v74[2]; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 *v77; // [rsp+B8h] [rbp-48h]
  PVOID v78[2]; // [rsp+C0h] [rbp-40h] BYREF
  PCWCH String2; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING ValueName; // [rsp+D8h] [rbp-28h] BYREF
  const DEVPROPKEY *v81; // [rsp+F0h] [rbp-10h] BYREF
  int v82; // [rsp+F8h] [rbp-8h]
  int *p_DestinationString; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+108h] [rbp+8h]
  int v85; // [rsp+10Ch] [rbp+Ch]
  int v86; // [rsp+110h] [rbp+10h]
  const DEVPROPKEY *v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+120h] [rbp+20h]
  PVOID *v89; // [rsp+128h] [rbp+28h]
  int v90; // [rsp+134h] [rbp+34h]
  int v91; // [rsp+138h] [rbp+38h]
  HANDLE KeyHandle; // [rsp+140h] [rbp+40h]
  PVOID **v93; // [rsp+148h] [rbp+48h]
  GUID Guid; // [rsp+150h] [rbp+50h] BYREF
  __int128 KeyInformation; // [rsp+160h] [rbp+60h] BYREF
  __int128 v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+180h] [rbp+80h]

  v5 = 0;
  v93 = a5;
  v63 = a4;
  v97 = 0LL;
  v6 = a4;
  KeyHandle = a3;
  v65 = &v64;
  v76 = a2;
  v64 = &v64;
  v77 = a1;
  v7 = a2;
  v8 = a1;
  v73 = 0LL;
  v60 = 0;
  v68 = 0;
  v9 = 0LL;
  v67 = 0;
  KeyInformation = 0LL;
  P[0] = 0LL;
  v96 = 0LL;
  P[1] = 0LL;
  Guid = 0LL;
  v74[0] = 0LL;
  v74[1] = 0LL;
  v78[0] = 0LL;
  v78[1] = 0LL;
  LOWORD(v70) = 0;
  String2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ValueName = 0LL;
  Data = 0;
  ResultLength = 0;
  v10 = NtQueryKey(a3, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
  if ( v10 >= 0 )
  {
    if ( !DWORD1(v96) )
      goto LABEL_23;
    v11 = HIDWORD(v96) + 2 * (DWORD2(v96) + 13);
    v61 = v11;
    Pool2 = (PVOID)ExAllocatePool2(0x100uLL);
    v12 = (WCHAR *)Pool2;
    if ( Pool2 )
    {
      v13 = (const UNICODE_STRING *)v8[5];
      if ( !v13 )
        goto LABEL_5;
      v10 = RtlGUIDFromString(v13, &Guid);
      if ( v10 >= 0 )
      {
        v12 = (WCHAR *)Pool2;
        while ( 1 )
        {
LABEL_5:
          v69 = v5;
          v14 = ZwEnumerateValueKey(KeyHandle, v5, KeyValueFullInformation, v12, v11, &ResultLength);
          ObjectProperties = v14;
          v10 = v14;
          if ( v14 == -2147483622 )
          {
            v10 = 0;
            ObjectProperties = 0;
            goto LABEL_19;
          }
          if ( v14 != -2147483643 )
          {
            if ( v14 < 0 )
              goto LABEL_19;
            v12 = (WCHAR *)Pool2;
            if ( PnpValidateRegistryDword((__int64)Pool2) )
              v6 = *(_DWORD *)((char *)Pool2 + *((unsigned int *)Pool2 + 2));
            v16 = (const WCHAR *)((char *)Pool2 + 20);
            *((_WORD *)Pool2 + ((unsigned __int64)*((unsigned int *)Pool2 + 4) >> 1) + 10) = v15;
            if ( !CmIsRootEnumeratedDevice(v12 + 10) )
            {
              v17 = PiDevCfgQueryDeviceMigrationNode(v8, v12 + 10, &v73);
              ObjectProperties = v17;
              v10 = v17;
              if ( v17 != -1073741772 )
              {
                if ( v17 < 0 )
                  goto LABEL_19;
                v18 = (wchar_t **)v73;
                *(_DWORD *)(v73 + 180) = v6;
                v19 = v65;
                if ( *v65 != &v64 )
                  goto LABEL_14;
                v18[1] = (wchar_t *)v65;
                *v18 = (wchar_t *)&v64;
                *v19 = v18;
                v27 = *(const wchar_t **)(v7 + 8);
                v65 = (PVOID *)v18;
                v28 = wcsicmp(v18[4], v27);
                v29 = v28 == 0 ? 0x10000000 : 0;
                if ( (*((_DWORD *)v18 + 45) & 0x10000000) != 0 && v28 )
                  *((_DWORD *)v18 + 4) |= 1u;
                v30 = v18 + 7;
                v31 = v76 - (_QWORD)v18;
                v32 = &qword_140BDFC30;
                v33 = 2LL;
                v34 = &v68;
                do
                {
                  MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v30, *(wchar_t **)((char *)v30 + v31 - 8));
                  *(_WORD *)v34 = MigrationDeviceIdScore;
                  if ( MigrationDeviceIdScore != -1 )
                    v29 |= *(_DWORD *)v32;
                  v30 += 2;
                  v34 = (int *)((char *)v34 + 2);
                  v32 = (__int64 *)((char *)v32 + 4);
                  --v33;
                }
                while ( v33 );
                v36 = v73;
                v37 = *(_DWORD *)(v73 + 180);
                if ( (v37 & 0x10000) != 0 )
                {
                  if ( (v29 & 0x10000) == 0 || (v29 & 0x11000) == 0 && (*(_DWORD *)(v73 + 180) & 0x1000) != 0 )
                    goto LABEL_129;
                }
                else if ( (v37 & 0x1000) != 0 && (v29 & 0x1000) == 0 )
                {
LABEL_129:
                  *(_DWORD *)(v73 + 16) |= 1u;
                }
                v38 = *(wchar_t **)(v36 + 144);
                v7 = v76;
                if ( v38 && *(_QWORD *)(v76 + 80) )
                {
                  while ( *v38 )
                  {
                    if ( PnpMultiSzContainsString(*(wchar_t **)(v7 + 80), v38) )
                    {
                      v29 |= 0x200u;
                      *(_QWORD *)(v36 + 152) = v38;
                      break;
                    }
                    v48 = -1LL;
                    do
                      ++v48;
                    while ( v38[v48] );
                    v38 += v48 + 1;
                  }
                }
                if ( _bittest((const signed __int32 *)(v36 + 180), 9u) && (v29 & 0x200) == 0 )
                  *(_DWORD *)(v36 + 16) |= 1u;
                v39 = v60;
                if ( *(_QWORD *)(v36 + 128) )
                {
                  if ( (v60 & 0x100) == 0 )
                  {
                    memset_0(&v81, 0, 0x50uLL);
                    v49 = *(_QWORD *)(v7 + 16);
                    v50 = *(_QWORD *)(v7 + 8);
                    v81 = &DEVPKEY_Device_LocationInfo;
                    p_DestinationString = (int *)v74;
                    v82 = 18;
                    v85 = 6;
                    ObjectProperties = PiDevCfgQueryObjectProperties(v51, v50, 1, v49, (__int64)&v81, 1);
                    v10 = ObjectProperties;
                    if ( ObjectProperties < 0 )
                      goto LABEL_19;
                    if ( v86 < 0 )
                      RtlInitUnicodeString((PUNICODE_STRING)v74, 0LL);
                    v39 = v60 | 0x100;
                    v60 |= 0x100u;
                  }
                  if ( v74[1]
                    && !RtlCompareUnicodeStrings(
                          *(PCWCH *)(v36 + 128),
                          (unsigned __int64)*(unsigned __int16 *)(v36 + 120) >> 1,
                          (PCWCH)v74[1],
                          (unsigned __int64)LOWORD(v74[0]) >> 1,
                          1u) )
                  {
                    v29 |= 0x100u;
                  }
                }
                if ( (*(_DWORD *)(v36 + 180) & 0x100) != 0 && (v29 & 0x300) == 0 )
                  *(_DWORD *)(v36 + 16) |= 1u;
                if ( (v39 & 0x30) == 0 )
                {
                  memset_0(&v81, 0, 0x50uLL);
                  v20 = *(_QWORD *)(v7 + 16);
                  v21 = *(_QWORD *)(v7 + 8);
                  v81 = &DEVPKEY_Device_Capabilities;
                  p_DestinationString = &v67;
                  v87 = &DEVPKEY_Device_BusReportedDeviceDesc;
                  v89 = P;
                  v82 = 7;
                  v84 = 4;
                  v88 = 18;
                  v90 = 6;
                  ObjectProperties = PiDevCfgQueryObjectProperties(v22, v21, 1, v20, (__int64)&v81, 2);
                  v10 = ObjectProperties;
                  if ( ObjectProperties < 0 )
                    goto LABEL_19;
                  if ( v91 < 0 )
                    RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                  v39 |= 0x30u;
                  v60 = v39;
                }
                if ( ((*(_BYTE *)(v36 + 96) ^ (unsigned __int8)v67) & 0x10) != 0 )
                {
                  if ( (*(_DWORD *)(v36 + 180) & 0x10) != 0 || (v67 & 0x10) != 0 )
                    *(_DWORD *)(v36 + 16) |= 1u;
                }
                else
                {
                  v29 |= 0x10u;
                }
                if ( *(_QWORD *)(v36 + 112) )
                {
                  v40 = P[1];
                  if ( !P[1] )
                  {
LABEL_59:
                    if ( *(_QWORD *)(v36 + 112) || v40 )
                      goto LABEL_60;
                    goto LABEL_116;
                  }
                  if ( !RtlCompareUnicodeStrings(
                          *(PCWCH *)(v36 + 112),
                          (unsigned __int64)*(unsigned __int16 *)(v36 + 104) >> 1,
                          (PCWCH)P[1],
                          (unsigned __int64)LOWORD(P[0]) >> 1,
                          1u) )
                  {
LABEL_116:
                    v29 |= 0x20u;
LABEL_60:
                    if ( (*(_DWORD *)(v36 + 180) & 0x20) != 0 && (v29 & 0x20) == 0 )
                      *(_DWORD *)(v36 + 16) |= 1u;
                    if ( *(_QWORD *)(v36 + 168) )
                    {
                      if ( (v39 & 2) == 0 )
                      {
                        v52 = v77;
                        v53 = v77[6];
                        if ( v53 )
                        {
                          v54 = *(_QWORD *)(v53 + 8);
                          if ( v54 )
                          {
                            if ( (int)PiDevCfgGetDriverPackageId(v54, v78) >= 0 )
                            {
                              memset_0(&v81, 0, 0x50uLL);
                              v81 = (const DEVPROPKEY *)&DEVPKEY_DriverPackage_OriginalInfName;
                              p_DestinationString = (int *)&DestinationString;
                              v82 = 18;
                              v85 = 6;
                              v10 = PiDevCfgQueryObjectProperties(v55, v78[1], 8, 0, (__int64)&v81, 1);
                              ObjectProperties = v10;
                              if ( v10 < 0 )
                                goto LABEL_19;
                              if ( v86 < 0 )
                                RtlInitUnicodeString(&DestinationString, 0LL);
                            }
                            v56 = (__m128i *)&DestinationString;
                            if ( !DestinationString.Buffer )
                              v56 = (__m128i *)v52[6];
                            v57 = (const WCHAR *)v56->m128i_i64[1];
                            v70 = _mm_cvtsi128_si32(*v56);
                            String2 = v57;
                          }
                        }
                        v60 = v39 | 2;
                      }
                      if ( String2
                        && !RtlCompareUnicodeStrings(
                              *(PCWCH *)(v36 + 168),
                              (unsigned __int64)*(unsigned __int16 *)(v36 + 160) >> 1,
                              String2,
                              (unsigned __int64)(unsigned __int16)v70 >> 1,
                              1u) )
                      {
                        v29 |= 2u;
                      }
                    }
                    if ( (*(_DWORD *)(v36 + 180) & 2) != 0 && (v29 & 2) == 0 )
                      *(_DWORD *)(v36 + 16) |= 1u;
                    v41 = *(_QWORD *)(v36 + 80) - *(_QWORD *)&Guid.Data1;
                    if ( !v41 )
                      v41 = *(_QWORD *)(v36 + 88) - *(_QWORD *)Guid.Data4;
                    if ( v41 )
                    {
                      if ( (*(_DWORD *)(v36 + 180) & 1) != 0 )
                        *(_DWORD *)(v36 + 16) |= 1u;
                    }
                    else
                    {
                      v29 |= 1u;
                    }
                    v42 = (HIWORD(v68) | ((unsigned __int64)(unsigned __int16)v68 << 16)) << 16;
                    *(_QWORD *)(v36 + 184) = v42;
                    if ( (v29 & 0x10000000) == 0 )
                    {
                      v42 |= 0xF000000000000000uLL;
                      *(_QWORD *)(v36 + 184) = v42;
                    }
                    if ( (v29 & 0x200) == 0 )
                    {
                      v42 |= 0xF000uLL;
                      *(_QWORD *)(v36 + 184) = v42;
                    }
                    if ( (v29 & 0x100) == 0 )
                    {
                      v42 |= 0x100uLL;
                      *(_QWORD *)(v36 + 184) = v42;
                    }
                    if ( (v29 & 0x20) == 0 )
                    {
                      v42 |= 0x20uLL;
                      *(_QWORD *)(v36 + 184) = v42;
                    }
                    if ( (v29 & 0x10) == 0 )
                    {
                      v42 |= 0x10uLL;
                      *(_QWORD *)(v36 + 184) = v42;
                    }
                    if ( (v29 & 2) == 0 )
                    {
                      v42 |= 2uLL;
                      *(_QWORD *)(v36 + 184) = v42;
                    }
                    v12 = (WCHAR *)Pool2;
                    v43 = (v29 & 1) == 0;
                    v6 = v63;
                    v5 = v69;
                    v8 = v77;
                    if ( v43 )
                      *(_QWORD *)(v36 + 184) = v42 | 1;
                    goto LABEL_16;
                  }
                }
                v40 = P[1];
                goto LABEL_59;
              }
              v73 = 0LL;
              PiDevCfgClearDeviceMigrationNode(v8, v16);
              v12 = (WCHAR *)Pool2;
            }
            v6 = v63;
LABEL_16:
            v11 = v61;
            goto LABEL_17;
          }
          ExFreePoolWithTag(Pool2, 0);
          v11 = ResultLength + 2;
          v61 = ResultLength + 2;
          Pool2 = (PVOID)ExAllocatePool2(0x100uLL);
          v12 = (WCHAR *)Pool2;
          if ( !Pool2 )
            break;
          --v5;
LABEL_17:
          ++v5;
        }
        v10 = -1073741670;
        ObjectProperties = -1073741670;
LABEL_19:
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        if ( v10 >= 0 )
        {
          v23 = (PVOID *)v64;
          if ( v64 == &v64 )
            goto LABEL_23;
          while ( 1 )
          {
            v58 = v23[23];
            if ( v58 != (PVOID)-1LL )
            {
              if ( !v9 || v9[23] > v58 )
              {
LABEL_161:
                v9 = v23;
                goto LABEL_162;
              }
              if ( v9[23] == v58 )
              {
                if ( PnpSetupInProgress && *((_DWORD *)v23 + 44) && !*((_DWORD *)v9 + 44) )
                  goto LABEL_161;
                *((_DWORD *)v9 + 4) |= 2u;
                *((_DWORD *)v23 + 4) |= 2u;
              }
            }
LABEL_162:
            v23 = (PVOID *)*v23;
            if ( v23 == &v64 )
            {
              if ( v9 )
              {
                if ( ((_DWORD)v9[2] & 2) != 0 )
                {
                  v46 = (PVOID *)v64;
                  Data = 1;
                  if ( v64 != &v64 )
                  {
                    do
                    {
                      if ( ((_DWORD)v46[2] & 2) != 0 && v46[23] == v9[23] )
                      {
                        *(_DWORD *)&ValueName.Length = 1310738;
                        ValueName.Buffer = L"Duplicate";
                        ZwSetValueKey(v46[5], &ValueName, 0, 4u, &Data, 4u);
                      }
                      v46 = (PVOID *)*v46;
                    }
                    while ( v46 != &v64 );
                    v10 = ObjectProperties;
                  }
                }
                else if ( IopGetRegistryValue(v9[5], L"Duplicate", 0, &Pool2) >= 0 )
                {
                  if ( PnpValidateRegistryDword((__int64)Pool2) && *(unsigned int *)((char *)v47 + v47[2]) )
                    *((_DWORD *)v9 + 4) |= 2u;
                  ExFreePoolWithTag(v47, 0);
                }
                v44 = (PVOID *)*v9;
                if ( *((PVOID **)*v9 + 1) == v9 )
                {
                  v45 = (PVOID **)v9[1];
                  if ( *v45 == v9 )
                  {
                    *v45 = v44;
                    v44[1] = v45;
                    *v93 = v9;
                    break;
                  }
                }
LABEL_14:
                __fastfail(3u);
              }
LABEL_23:
              v10 = -1073741275;
              break;
            }
          }
        }
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  while ( 1 )
  {
    v24 = (char *)v64;
    if ( v64 == &v64 )
      break;
    if ( *((PVOID **)v64 + 1) != &v64 )
      goto LABEL_14;
    v25 = *(_QWORD *)v64;
    if ( *(PVOID *)(*(_QWORD *)v64 + 8LL) != v64 )
      goto LABEL_14;
    v64 = *(PVOID *)v64;
    *(_QWORD *)(v25 + 8) = &v64;
    PiDevCfgFreeDeviceMigrationNode(v24);
  }
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v74[1] )
  {
    ExFreePool(v74[1]);
    *(_OWORD *)v74 = 0LL;
  }
  if ( v78[1] )
  {
    ExFreePool(v78[1]);
    *(_OWORD *)v78 = 0LL;
  }
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)v10;
}
