/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x140B4AC70
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiSwStartCreate @ 0x1407B375C (PiSwStartCreate.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpGetGenericStoreProperty @ 0x14095E780 (_PnpGetGenericStoreProperty.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409742E8 (_PnpGetGenericStorePropertyKeys.c)
 *     PnpGenerateDeviceIdsHash @ 0x1409DBCCC (PnpGenerateDeviceIdsHash.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140A43AE0 (RtlHashUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     PnpCompareMultiSz @ 0x140A8BF3C (PnpCompareMultiSz.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 a1, char *a2, const WCHAR *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  const wchar_t *v7; // r14
  ULONG v8; // r12d
  WCHAR *Pool2; // rsi
  void *v10; // r15
  wchar_t *v11; // r13
  __int64 v12; // rax
  int RegistryValues; // edi
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r13
  ULONG v17; // r12d
  unsigned int v18; // edi
  HANDLE v19; // rcx
  PCWCH *v21; // rbx
  unsigned int v22; // r15d
  unsigned int *v23; // rax
  unsigned int v24; // r9d
  const wchar_t *i; // rbx
  __int64 v26; // rax
  NTSTATUS RegistryValue; // eax
  int GloballyUniqueId; // eax
  __int64 v29; // rax
  void *v30; // rax
  __int64 v31; // r14
  void *v32; // r15
  unsigned int v33; // ebx
  int GenericStorePropertyKeys; // eax
  unsigned int v35; // eax
  BOOLEAN v36; // al
  __int64 v37; // r14
  char *v38; // rax
  __int64 v39; // rdx
  char *v40; // rbx
  __int64 v41; // r13
  unsigned int v42; // r15d
  __int64 v43; // r12
  unsigned int v44; // eax
  void *v45; // rcx
  __int64 v46; // rax
  PVOID *v47; // r13
  PVOID *v48; // rbx
  ULONG v49; // [rsp+20h] [rbp-E0h]
  unsigned int v50; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v51; // [rsp+78h] [rbp-88h]
  PCWSTR SourceString; // [rsp+80h] [rbp-80h]
  wchar_t *v53; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v54; // [rsp+90h] [rbp-70h] BYREF
  ULONG HashValue; // [rsp+98h] [rbp-68h] BYREF
  ULONG v56; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+ACh] [rbp-54h] BYREF
  PVOID v60; // [rsp+B0h] [rbp-50h]
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  int v62; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v63; // [rsp+C4h] [rbp-3Ch]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v66; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING GuidString; // [rsp+F8h] [rbp-8h] BYREF
  PCWCH *v68; // [rsp+108h] [rbp+8h]
  UNICODE_STRING String2; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v70; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v71; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+40h] BYREF
  PVOID P[2]; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v74[2]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD *v75; // [rsp+168h] [rbp+68h]
  __int64 v76; // [rsp+170h] [rbp+70h]
  _QWORD v77[2]; // [rsp+178h] [rbp+78h] BYREF
  GUID Guid; // [rsp+188h] [rbp+88h] BYREF
  int v79[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  const wchar_t *v80; // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING *p_UnicodeString; // [rsp+1B8h] [rbp+B8h]
  int v82; // [rsp+1C0h] [rbp+C0h]
  int v83; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v84; // [rsp+1E8h] [rbp+E8h]
  UNICODE_STRING *v85; // [rsp+1F0h] [rbp+F0h]
  int v86; // [rsp+1F8h] [rbp+F8h]
  int v87; // [rsp+218h] [rbp+118h]
  const wchar_t *v88; // [rsp+220h] [rbp+120h]
  UNICODE_STRING *p_GuidString; // [rsp+228h] [rbp+128h]
  int v90; // [rsp+230h] [rbp+130h]
  int v91; // [rsp+250h] [rbp+150h]
  const wchar_t *v92; // [rsp+258h] [rbp+158h]
  int *v93; // [rsp+260h] [rbp+160h]
  int v94; // [rsp+268h] [rbp+168h]
  int v95; // [rsp+288h] [rbp+188h]
  const wchar_t *v96; // [rsp+290h] [rbp+190h]
  UNICODE_STRING *v97; // [rsp+298h] [rbp+198h]
  int v98; // [rsp+2A0h] [rbp+1A0h]
  int v99; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v100; // [rsp+2C8h] [rbp+1C8h]
  UNICODE_STRING *v101; // [rsp+2D0h] [rbp+1D0h]
  int v102; // [rsp+2D8h] [rbp+1D8h]

  v76 = a1;
  SourceString = a3;
  v62 = 1;
  v5 = 0LL;
  v6 = a4;
  v51 = a4;
  v7 = a3;
  Handle = 0LL;
  v59 = 0;
  v8 = 0;
  v56 = 0;
  Pool2 = 0LL;
  HashValue = 0;
  v10 = 0LL;
  v58 = 0;
  v11 = 0LL;
  v54 = 0LL;
  v64 = 0LL;
  v63 = 0;
  v53 = 0LL;
  v57 = 0LL;
  v60 = 0LL;
  v50 = 0;
  UnicodeString = 0LL;
  v66 = 0LL;
  GuidString = 0LL;
  Guid = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  String2 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 224);
    if ( v12 )
      v5 = *(_QWORD *)(v12 + 8);
  }
  RegistryValues = RegRtlOpenKeyTransacted(a2, a3, 0, 0x20019u, &Handle, v5);
  if ( RegistryValues >= 0 )
  {
    memset_0(v79, 0, 0x188uLL);
    v94 = 0x4000000;
    v79[2] = 304;
    v82 = 117440512;
    v80 = L"HardwareIds";
    v83 = 304;
    p_UnicodeString = &UnicodeString;
    v86 = 117440512;
    v84 = L"CompatibleIds";
    v87 = 288;
    v85 = &v66;
    v90 = 0x1000000;
    v88 = L"ContainerId";
    p_GuidString = &GuidString;
    v92 = L"Capabilities";
    v93 = &v59;
    v96 = L"Description";
    v97 = &v70;
    v100 = L"LocationInfo";
    v91 = 288;
    v95 = 288;
    v98 = 0x1000000;
    v99 = 288;
    v102 = 0x1000000;
    v101 = &v71;
    RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v79, 0LL, v49, 1);
    if ( RegistryValues >= 0 )
    {
      if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
        RtlFreeAnsiString(&UnicodeString);
      if ( v66.Buffer && v66.Length <= 2u )
        RtlFreeAnsiString(&v66);
      if ( !GuidString.Buffer )
        goto LABEL_17;
      if ( GuidString.Length < 2u )
        RtlFreeAnsiString(&GuidString);
      if ( !GuidString.Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
LABEL_17:
        Guid = 0LL;
      if ( v70.Buffer && v70.Length < 2u )
        RtlFreeAnsiString(&v70);
      if ( v71.Buffer && v71.Length < 2u )
        RtlFreeAnsiString(&v71);
      if ( !UnicodeString.Buffer && !v66.Buffer )
      {
        RegistryValues = -1073741637;
        goto LABEL_49;
      }
      v15 = -1LL;
      v16 = *(_QWORD *)v6;
      v77[0] = UnicodeString.Buffer;
      v77[1] = v66.Buffer;
      v74[0] = 2;
      v74[1] = 3;
      while ( (PVOID)v16 != IopRootDeviceNode )
      {
        if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v16 + 32) + 8LL) == PiSwDeviceDriverObject )
        {
          RtlInitUnicodeString(&DestinationString, L"SWD\\");
          if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v16 + 40), 1u) )
          {
            RtlInitUnicodeString(
              &String2,
              (PCWSTR)(*(_QWORD *)(v16 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
            RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
            if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
            {
              if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
              {
                if ( !v8 )
                {
                  RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v66.Buffer, &v56);
                  if ( RegistryValues < 0 )
                    goto LABEL_141;
                  if ( (v59 & 8) != 0 )
                  {
                    v17 = v56;
                  }
                  else
                  {
                    RtlInitUnicodeString(&String2, &PiSwGenericRawCompatibleId);
                    RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                    if ( RegistryValues < 0 )
                      goto LABEL_141;
                    v17 = HashValue + v56;
                  }
                  RtlInitUnicodeString(&String2, &PiSwGenericCompatibleId);
                  RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                  if ( RegistryValues < 0 )
                    goto LABEL_45;
                  v8 = HashValue + v17;
                  v56 = v8;
                }
                if ( *(_DWORD *)(v16 + 684) == v8 )
                {
                  if ( Pool2 )
                  {
                    v18 = v58;
                  }
                  else
                  {
                    v58 = 2048;
                    v18 = 2048;
                    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
                    if ( !Pool2 )
                    {
                      RegistryValues = -1073741670;
LABEL_45:
                      v11 = v53;
LABEL_46:
                      v10 = v54;
LABEL_47:
                      v7 = SourceString;
                      goto LABEL_48;
                    }
                  }
                  v21 = (PCWCH *)v77;
                  v22 = 0;
                  v23 = v74;
                  v68 = (PCWCH *)v77;
                  v75 = v74;
                  while ( 1 )
                  {
                    v24 = *v23;
                    v50 = v18;
                    if ( (int)CmGetDeviceRegProp(
                                *(__int64 *)&PiPnpRtlCtx,
                                *(_QWORD *)(v16 + 48),
                                0LL,
                                v24,
                                (__int64)&v62,
                                (__int64)Pool2,
                                (__int64)&v50,
                                0) < 0
                      || v62 != 7
                      || v50 < 2 )
                    {
                      *Pool2 = 0;
                    }
                    if ( v22 == 1 )
                    {
                      for ( i = Pool2; *i; i += v26 + 1 )
                      {
                        if ( !wcsicmp(i, &PiSwGenericRawCompatibleId) || !wcsicmp(i, &PiSwGenericCompatibleId) )
                        {
                          *i = 0;
                          break;
                        }
                        v26 = -1LL;
                        do
                          ++v26;
                        while ( i[v26] );
                      }
                      v21 = v68;
                    }
                    if ( *v21 )
                    {
                      if ( !PnpCompareMultiSz(*v21, Pool2, 1u) )
                        goto LABEL_93;
                    }
                    else if ( *Pool2 )
                    {
                      goto LABEL_93;
                    }
                    ++v21;
                    v23 = v75 + 1;
                    v68 = v21;
                    ++v22;
                    ++v75;
                    if ( v22 >= 2 )
                      break;
                    v18 = v58;
                  }
                  RegistryValues = -1073740028;
                  goto LABEL_45;
                }
              }
            }
          }
        }
LABEL_93:
        v16 = *(_QWORD *)(v16 + 16);
      }
      RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v54);
      v10 = v54;
      RegistryValues = RegistryValue;
      if ( RegistryValue >= 0 )
      {
        if ( v54[1] == 3 )
        {
          v63 = v54[3];
          if ( v63 >= 0x28 )
          {
            v64 = (__int64)v54 + (unsigned int)v54[2];
            goto LABEL_104;
          }
        }
        RegistryValues = -1073741823;
      }
      else if ( RegistryValue == -1073741772 )
      {
LABEL_104:
        if ( *(PVOID *)v51 == IopRootDeviceNode )
        {
          v7 = SourceString;
          v36 = RtlCreateUnicodeString((PUNICODE_STRING)P, SourceString);
          v11 = v53;
          if ( v36 )
            goto LABEL_111;
        }
        else
        {
          GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)v51 + 32LL), 0LL, &v53);
          v11 = v53;
          RegistryValues = GloballyUniqueId;
          if ( GloballyUniqueId < 0 )
            goto LABEL_47;
          v29 = -1LL;
          do
            ++v29;
          while ( v53[v29] );
          do
            ++v15;
          while ( SourceString[v15] );
          WORD1(P[0]) = 2 * (v29 + 2 + v15);
          v30 = (void *)ExAllocatePool2(0x100uLL);
          v7 = SourceString;
          P[1] = v30;
          if ( v30 )
          {
            RegistryValues = RtlUnicodeStringPrintf((PUNICODE_STRING)P, L"%ws&%ws", SourceString, v11);
            if ( RegistryValues >= 0 )
            {
LABEL_111:
              v31 = v76;
              v32 = 0LL;
              v33 = 0;
              while ( 1 )
              {
                GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(
                                             v31,
                                             (__int64)Handle,
                                             0LL,
                                             0,
                                             (__int64)v32,
                                             v33,
                                             &v50);
                RegistryValues = GenericStorePropertyKeys;
                if ( GenericStorePropertyKeys != -1073741789 )
                  break;
                v35 = v50;
                if ( v50 <= v33 )
                {
                  RegistryValues = -1073741595;
                  goto LABEL_139;
                }
                if ( v32 )
                {
                  ExFreePoolWithTag(v32, 0);
                  v35 = v50;
                }
                v33 = v35;
                v57 = ExAllocatePool2(0x100uLL);
                v32 = (void *)v57;
                if ( !v57 )
                {
                  RegistryValues = -1073741670;
                  goto LABEL_46;
                }
              }
              v37 = v50;
              if ( GenericStorePropertyKeys >= 0 )
              {
                if ( v50 )
                {
                  v38 = (char *)ExAllocatePool2(0x100uLL);
                  v60 = v38;
                  if ( !v38 )
                  {
                    RegistryValues = -1073741670;
                    goto LABEL_139;
                  }
                  v39 = v57;
                  v40 = v38 + 32;
                  v41 = v57;
                  v42 = 0;
                  while ( 1 )
                  {
                    *((_OWORD *)v40 - 2) = *(_OWORD *)v41;
                    *((_DWORD *)v40 - 4) = *(_DWORD *)(v41 + 16);
                    *((_DWORD *)v40 - 3) = 0;
                    v43 = v39 + 20LL * v42;
                    while ( 1 )
                    {
                      RegistryValues = PnpGetGenericStoreProperty(
                                         v76,
                                         (char *)Handle,
                                         0LL,
                                         v43,
                                         v40,
                                         *((_QWORD *)v40 + 1),
                                         *((_DWORD *)v40 + 1),
                                         &v50);
                      v44 = v50;
                      if ( RegistryValues != -1073741789 )
                        break;
                      if ( v50 <= *((_DWORD *)v40 + 1) )
                      {
                        RegistryValues = -1073741595;
                        goto LABEL_133;
                      }
                      v45 = (void *)*((_QWORD *)v40 + 1);
                      if ( v45 )
                      {
                        ExFreePoolWithTag(v45, 0);
                        v44 = v50;
                      }
                      *((_DWORD *)v40 + 1) = v44;
                      v46 = ExAllocatePool2(0x100uLL);
                      *((_QWORD *)v40 + 1) = v46;
                      if ( !v46 )
                      {
                        RegistryValues = -1073741670;
LABEL_133:
                        v32 = (void *)v57;
                        v47 = (PVOID *)v60;
                        goto LABEL_134;
                      }
                    }
                    *((_DWORD *)v40 + 1) = v50;
                    if ( RegistryValues < 0 )
                      goto LABEL_133;
                    ++v42;
                    v41 += 20LL;
                    v40 += 48;
                    if ( v42 >= (unsigned int)v37 )
                      break;
                    v39 = v57;
                  }
                  v32 = (void *)v57;
                }
                v47 = (PVOID *)v60;
                RegistryValues = PiSwStartCreate(
                                   L"DRIVERENUM",
                                   *(const wchar_t **)(*(_QWORD *)v51 + 48LL),
                                   (const wchar_t *)P[1],
                                   (__int64)UnicodeString.Buffer,
                                   (__int64)v66.Buffer,
                                   (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                                   v59,
                                   (__int64)v70.Buffer,
                                   (__int64)v71.Buffer,
                                   v64,
                                   v63,
                                   (__int64)v60,
                                   v37);
                if ( v47 )
                {
                  if ( (_DWORD)v37 )
                  {
LABEL_134:
                    v48 = v47 + 5;
                    do
                    {
                      if ( *v48 )
                        ExFreePoolWithTag(*v48, 0);
                      v48 += 6;
                      --v37;
                    }
                    while ( v37 );
                  }
                  ExFreePoolWithTag(v47, 0);
                }
              }
LABEL_139:
              if ( v32 )
                ExFreePoolWithTag(v32, 0);
LABEL_141:
              v10 = v54;
              goto LABEL_142;
            }
            goto LABEL_48;
          }
        }
        RegistryValues = -1073741670;
LABEL_48:
        v6 = v51;
        goto LABEL_49;
      }
LABEL_142:
      v11 = v53;
      goto LABEL_47;
    }
  }
LABEL_49:
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( UnicodeString.Buffer )
  {
    ExFreePool(UnicodeString.Buffer);
    UnicodeString = 0LL;
  }
  if ( v66.Buffer )
  {
    ExFreePool(v66.Buffer);
    v66 = 0LL;
  }
  if ( GuidString.Buffer )
  {
    ExFreePool(GuidString.Buffer);
    GuidString = 0LL;
  }
  if ( v70.Buffer )
  {
    ExFreePool(v70.Buffer);
    v70 = 0LL;
  }
  if ( v71.Buffer )
  {
    ExFreePool(v71.Buffer);
    v71 = 0LL;
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v19 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( RegistryValues < 0 && (byte_140EF412C & 4) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v19,
      (__int64)KMPnPEvt_CreateDriverSwDevice_Failure,
      v14,
      *(const wchar_t **)(*(_QWORD *)v6 + 48LL),
      v7,
      RegistryValues);
  if ( (int)v6[2] >= 0 )
    v6[2] = RegistryValues;
  return 0LL;
}
