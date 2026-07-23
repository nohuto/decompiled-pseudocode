/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x140B72708
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x1404FF12C (PnpRegistryValueExists.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405DD9A8 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405DDA04 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PipCheckComputerSupported @ 0x14079E254 (PipCheckComputerSupported.c)
 *     PiDevCfgEnforceDriverPolicy @ 0x1407AC4C8 (PiDevCfgEnforceDriverPolicy.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140AE9CA0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140B2EBA0 (PiDevCfgOpenDriverConfiguration.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(
        PCWSTR SourceString,
        PCWSTR a2,
        int a3,
        int a4,
        char a5,
        int *a6,
        __int64 *a7)
{
  int v8; // r12d
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 Pool2; // rdi
  PVOID *v16; // rsi
  int v17; // ecx
  __int64 v18; // rcx
  char v19; // al
  char v20; // al
  unsigned __int64 v21; // r8
  int v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  const WCHAR *v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  ULONG v29; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+40h] [rbp-C0h] BYREF
  char v31; // [rsp+41h] [rbp-BFh] BYREF
  char v32; // [rsp+42h] [rbp-BEh] BYREF
  char v33; // [rsp+43h] [rbp-BDh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE v37; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v39; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v44; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v45; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v46; // [rsp+B0h] [rbp-50h]
  ULONG v47[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+E0h] [rbp-20h]
  __int64 *v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING *v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+104h] [rbp+4h]
  int v57; // [rsp+108h] [rbp+8h]
  __int64 *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  __int64 *v60; // [rsp+120h] [rbp+20h]
  int v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+130h] [rbp+30h]
  __int64 *v63; // [rsp+138h] [rbp+38h]
  int v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  int v66; // [rsp+150h] [rbp+50h]
  int v67; // [rsp+158h] [rbp+58h]
  __int64 *v68; // [rsp+160h] [rbp+60h]
  int v69; // [rsp+168h] [rbp+68h]
  __int64 v70; // [rsp+170h] [rbp+70h]
  unsigned int v71; // [rsp+178h] [rbp+78h]
  int v72; // [rsp+17Ch] [rbp+7Ch]
  int v73; // [rsp+180h] [rbp+80h]
  int v74[2]; // [rsp+190h] [rbp+90h] BYREF
  int v75; // [rsp+198h] [rbp+98h]
  const wchar_t *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  int v78; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v79)(__int64, int, _QWORD *, int, int, _QWORD *); // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v80; // [rsp+1D8h] [rbp+D8h]
  __int64 v81; // [rsp+1E0h] [rbp+E0h]
  int v82; // [rsp+208h] [rbp+108h]
  const wchar_t *v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  int v85; // [rsp+220h] [rbp+120h]

  v46 = a7;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v8 = -1;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  v33 = 0;
  *(_QWORD *)&v45.Length = 0LL;
  i = 0LL;
  v45.Buffer = 0LL;
  v31 = 0;
  v36 = -1;
  v43 = -1LL;
  v30 = 0;
  v32 = 0;
  v40 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  v41 = a4;
  v42 = a3;
  v35 = -16777216;
  DriverPackageId = PiDevCfgGetDriverPackageId((__int64)SourceString, (__int64)&UnicodeString);
  if ( DriverPackageId >= 0 )
  {
    DriverPackageId = PnpOpenObjectRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)UnicodeString.Buffer,
                        8,
                        131097,
                        0,
                        (__int64)&Handle);
    if ( DriverPackageId >= 0 )
    {
      memset_0(v47, 0, 0xC8uLL);
      *(_QWORD *)v47 = DEVPKEY_DriverPackage_Invalidated;
      v49 = &v33;
      v52 = DEVPKEY_DriverPackage_TargetComputerIds;
      v54 = &v45;
      v48 = 17;
      v50 = 1;
      v53 = 8210;
      v56 = 6;
      DriverPackageId = PiDevCfgQueryObjectProperties(
                          v12,
                          (__int64)UnicodeString.Buffer,
                          8,
                          (char *)Handle,
                          (__int64)v47,
                          2u);
      if ( DriverPackageId >= 0 )
      {
        if ( v51 >= 0 && v33 == -1 )
        {
          DriverPackageId = -1073741738;
          goto LABEL_26;
        }
        if ( v57 >= 0 && v45.Buffer && v45.Length > 2u )
        {
          for ( i = v45.Buffer; *i; i += v13 + 1 )
          {
            if ( PipCheckComputerSupported(i) )
              break;
            v13 = -1LL;
            do
              ++v13;
            while ( i[v13] );
          }
          if ( !*i )
            goto LABEL_16;
        }
        if ( (a5 & 8) != 0 && !i )
        {
LABEL_16:
          DriverPackageId = -1073740764;
          goto LABEL_26;
        }
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          DriverPackageId = -1073741670;
          goto LABEL_26;
        }
        if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
        {
          *(_QWORD *)(Pool2 + 232) = Pool2 + 224;
          *(_QWORD *)(Pool2 + 224) = Pool2 + 224;
        }
        *(_QWORD *)(Pool2 + 216) = Pool2 + 208;
        *(_QWORD *)(Pool2 + 208) = Pool2 + 208;
        *(_QWORD *)(Pool2 + 392) = Pool2 + 384;
        *(_QWORD *)(Pool2 + 384) = Pool2 + 384;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 40), SourceString)
          && PnpDuplicateUnicodeString(Pool2 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 72), a2)
          && (!i || RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 128), i)) )
        {
          memset_0(v47, 0, 0xC8uLL);
          *(_QWORD *)v47 = DEVPKEY_DriverPackage_DriverDate;
          v48 = 16;
          v52 = DEVPKEY_DriverPackage_DriverVersion;
          v49 = (char *)(Pool2 + 112);
          v54 = (UNICODE_STRING *)(Pool2 + 120);
          v50 = 8;
          v58 = (__int64 *)&DEVPKEY_DriverPackage_SignerScore;
          v16 = (PVOID *)(Pool2 + 144);
          v55 = 8;
          v60 = (__int64 *)&v35;
          v63 = DEVPKEY_DriverPackage_ExtensionId;
          v68 = DEVPKEY_DriverPackage_ExtensionContractIds;
          v53 = 9;
          v59 = 7;
          v61 = 4;
          v64 = 13;
          v65 = Pool2 + 188;
          v66 = 16;
          v69 = 4109;
          v70 = Pool2 + 144;
          v72 = 2;
          DriverPackageId = PiDevCfgQueryObjectProperties(
                              16LL,
                              (__int64)UnicodeString.Buffer,
                              8,
                              (char *)Handle,
                              (__int64)v47,
                              5u);
          if ( DriverPackageId >= 0 )
          {
            if ( v51 < 0 )
              *(_QWORD *)(Pool2 + 112) = 0LL;
            if ( v57 < 0 )
              *(_QWORD *)(Pool2 + 120) = 0LL;
            if ( v62 < 0 )
              v35 = -16777216;
            if ( v67 < 0 )
              *(_OWORD *)(Pool2 + 188) = 0LL;
            if ( v73 >= 0 )
            {
              if ( (v71 & 0xF) != 0 )
              {
                ExFreePoolWithTag(*v16, 0);
                *v16 = 0LL;
              }
              else
              {
                *(_DWORD *)(Pool2 + 152) = v71 >> 4;
              }
            }
            else
            {
              *v16 = 0LL;
            }
            if ( (a5 & 4) != 0 )
              v17 = -1;
            else
              v17 = (unsigned __int16)v42 | v41 & 0xFF0000 | v35 & ((a5 & 1) != 0 ? -268435456 : -16777216);
            *(_DWORD *)(Pool2 + 108) = v17;
            if ( (a5 & 2) != 0 )
            {
              memset_0(v47, 0, 0xC8uLL);
              *(_QWORD *)v47 = DEVPKEY_DriverPackage_F6;
              v49 = &v30;
              v48 = 17;
              v50 = 1;
              DriverPackageId = PiDevCfgQueryObjectProperties(
                                  v18,
                                  (__int64)UnicodeString.Buffer,
                                  8,
                                  (char *)Handle,
                                  (__int64)v47,
                                  1u);
              if ( DriverPackageId < 0 )
                goto LABEL_25;
              if ( v51 >= 0 )
              {
                v19 = v30;
              }
              else
              {
                v19 = 0;
                v30 = 0;
              }
              if ( v19 == -1 )
                *(_DWORD *)(Pool2 + 184) |= 2u;
            }
            if ( (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline()
              && a6
              && (*a6 & 2) != 0 )
            {
              memset_0(v47, 0, 0xC8uLL);
              *(_QWORD *)v47 = &DEVPKEY_DriverPackage_Inbox;
              v49 = &v31;
              v52 = DEVPKEY_DriverPackage_CatalogAttributes;
              v54 = (UNICODE_STRING *)&v36;
              v58 = DEVPKEY_DriverPackage_CertificationVersion;
              v60 = &v43;
              v48 = 17;
              v50 = 1;
              v53 = 7;
              v55 = 4;
              v59 = 9;
              v61 = 8;
              DriverPackageId = PiDevCfgQueryObjectProperties(
                                  8LL,
                                  (__int64)UnicodeString.Buffer,
                                  8,
                                  (char *)Handle,
                                  (__int64)v47,
                                  3u);
              if ( DriverPackageId < 0 )
                goto LABEL_25;
              if ( v51 >= 0 )
              {
                v20 = v31;
              }
              else
              {
                v20 = 0;
                v31 = 0;
              }
              if ( v57 >= 0 )
                v8 = v36;
              else
                v36 = -1;
              if ( v62 >= 0 )
              {
                v21 = v43;
              }
              else
              {
                v21 = -1LL;
                v43 = -1LL;
              }
              v22 = PiDevCfgEnforceDriverPolicy(a6, v8, v21, v20 == -1);
              if ( v22 < 0 )
              {
                *(_DWORD *)(Pool2 + 184) |= 0x200u;
                *(_DWORD *)(Pool2 + 448) = v22;
              }
            }
            *(_DWORD *)&v40.Length = 1572886;
            v40.Buffer = L"Descriptors";
            v23 = IopOpenRegistryKeyEx(&v44, Handle, &v40, 0x20019u);
            DriverPackageId = v23;
            if ( v23 == -1073741772 )
              goto LABEL_81;
            if ( v23 < 0 )
              goto LABEL_25;
            v24 = IopOpenRegistryKeyEx(&v39, v44, (UNICODE_STRING *)(Pool2 + 72), 0x20019u);
            DriverPackageId = v24;
            if ( v24 == -1073741772 )
            {
LABEL_81:
              DriverPackageId = 0;
            }
            else
            {
              if ( v24 < 0 )
                goto LABEL_25;
              memset_0(v74, 0, 0xE0uLL);
              v76 = L"Configuration";
              v78 = 0x1000000;
              v77 = Pool2 + 88;
              v75 = 288;
              DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v39, (__int64)v74, 0LL, v29, 1);
              if ( DriverPackageId < 0 )
                goto LABEL_25;
              if ( !*(_WORD *)(Pool2 + 88) && *(_QWORD *)(Pool2 + 96) )
                RtlFreeAnsiString((PUNICODE_STRING)(Pool2 + 88));
            }
            v25 = *(const WCHAR **)(Pool2 + 96);
            if ( v25 )
            {
              v26 = PiDevCfgOpenDriverConfiguration(Handle, v25, &v37);
              DriverPackageId = v26;
              if ( v26 == -1073741772 )
              {
                DriverPackageId = 0;
              }
              else
              {
                if ( v26 < 0 )
                  goto LABEL_25;
                memset_0(v74, 0, 0xE0uLL);
                v77 = Pool2 + 112;
                *(_QWORD *)v74 = PiDevCfgQueryDriverVersionValueCallback;
                v76 = L"DriverDate";
                v79 = PiDevCfgQueryDriverVersionValueCallback;
                v80 = L"DriverVersion";
                v85 = 117440512;
                v81 = Pool2 + 120;
                v84 = Pool2 + 160;
                v83 = L"ExcludeIds";
                v82 = 304;
                DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v37, (__int64)v74, 0LL, v29, 1);
                if ( DriverPackageId < 0 )
                  goto LABEL_25;
                if ( *(_WORD *)(Pool2 + 160) <= 2u && *(_QWORD *)(Pool2 + 168) )
                  RtlFreeAnsiString((PUNICODE_STRING)(Pool2 + 160));
              }
            }
            if ( !PnpBootMode )
              goto LABEL_106;
            *(_DWORD *)&v40.Length = 1572886;
            v40.Buffer = L"ConfigFlags";
            if ( !v37 || !PnpRegistryValueExists(v37, &v40) )
              *(_DWORD *)(Pool2 + 184) |= 4u;
            if ( (*(_DWORD *)(Pool2 + 184) & 0x24) != 0 )
              goto LABEL_106;
            memset_0(v47, 0, 0xC8uLL);
            *(_QWORD *)v47 = DEVPKEY_DriverPackage_NeedsReconfig;
            v49 = &v32;
            v48 = 17;
            v50 = 1;
            DriverPackageId = PiDevCfgQueryObjectProperties(
                                v27,
                                (__int64)UnicodeString.Buffer,
                                8,
                                (char *)Handle,
                                (__int64)v47,
                                1u);
            if ( DriverPackageId >= 0 )
            {
              if ( v51 >= 0 )
              {
                v28 = v32;
              }
              else
              {
                v28 = 0;
                v32 = 0;
              }
              if ( v28 == -1 )
                *(_DWORD *)(Pool2 + 184) |= 4u;
LABEL_106:
              *(_QWORD *)(Pool2 + 16) = Handle;
              *(_QWORD *)(Pool2 + 24) = v39;
              *(_QWORD *)(Pool2 + 32) = v37;
              Handle = 0LL;
              v39 = 0LL;
              v37 = 0LL;
              *v46 = Pool2;
              goto LABEL_26;
            }
          }
        }
        else
        {
          DriverPackageId = -1073741670;
        }
LABEL_25:
        PiDevCfgFreeDriverNode(Pool2);
      }
    }
  }
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  if ( v39 )
    ZwClose(v39);
  if ( v44 )
    ZwClose(v44);
  if ( v37 )
    ZwClose(v37);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v45);
  return (unsigned int)DriverPackageId;
}
