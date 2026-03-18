/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x140AD009C
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140ACF544 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404F5F44 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x14050587C (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PipCheckComputerSupported @ 0x14079B714 (PipCheckComputerSupported.c)
 *     _PnpOpenObjectRegKey @ 0x14099E110 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x140A10F94 (RtlpQueryRegistryValues.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x140AA8B70 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgFreeDriverNode @ 0x140ACF14C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140AD296C (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AD2A4C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140B2CB20 (PiDevCfgOpenDriverConfiguration.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  __int64 v11; // rax
  __int64 Pool2; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  PVOID *v16; // rsi
  int v17; // ecx
  int v18; // ecx
  char v19; // al
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ecx
  char v25; // al
  ULONG v26; // [rsp+20h] [rbp-E0h]
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28; // [rsp+41h] [rbp-BFh] BYREF
  char v29; // [rsp+42h] [rbp-BEh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v32; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v33; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v35; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h]
  HANDLE v38; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v40; // [rsp+A8h] [rbp-58h]
  ULONG v41[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  char *v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+D0h] [rbp-30h]
  __int64 *v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING *v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F4h] [rbp-Ch]
  int v51; // [rsp+F8h] [rbp-8h]
  const int *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int *v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+120h] [rbp+20h]
  __int64 *v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+140h] [rbp+40h]
  int v61; // [rsp+148h] [rbp+48h]
  __int64 *v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+158h] [rbp+58h]
  __int64 v64; // [rsp+160h] [rbp+60h]
  unsigned int v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+16Ch] [rbp+6Ch]
  int v67; // [rsp+170h] [rbp+70h]
  int v68[2]; // [rsp+180h] [rbp+80h] BYREF
  int v69; // [rsp+188h] [rbp+88h]
  const wchar_t *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  int v72; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v73)(__int64, int, _QWORD *, int, int, _QWORD *); // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v74; // [rsp+1C8h] [rbp+C8h]
  __int64 v75; // [rsp+1D0h] [rbp+D0h]
  int v76; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v77; // [rsp+200h] [rbp+100h]
  __int64 v78; // [rsp+208h] [rbp+108h]
  int v79; // [rsp+210h] [rbp+110h]

  v40 = a6;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  i = 0LL;
  v29 = 0;
  *(_QWORD *)&v39.Length = 0LL;
  v39.Buffer = 0LL;
  v27 = 0;
  v28 = 0;
  v35 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v36 = a4;
  v37 = a3;
  v31 = -16777216;
  DriverPackageId = PiDevCfgGetDriverPackageId(SourceString, &UnicodeString);
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
      memset_0(v41, 0, 0xC8uLL);
      *(_QWORD *)v41 = DEVPKEY_DriverPackage_Invalidated;
      v43 = &v29;
      v46 = DEVPKEY_DriverPackage_TargetComputerIds;
      v48 = &v39;
      v42 = 17;
      v44 = 1;
      v47 = 8210;
      v50 = 6;
      DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v41, 2);
      if ( DriverPackageId >= 0 )
      {
        if ( v45 >= 0 && v29 == -1 )
        {
          DriverPackageId = -1073741738;
          goto LABEL_24;
        }
        if ( v51 >= 0 && v39.Buffer && v39.Length > 2u )
        {
          for ( i = v39.Buffer; *i; i += v11 + 1 )
          {
            if ( PipCheckComputerSupported(i) )
              break;
            v11 = -1LL;
            do
              ++v11;
            while ( i[v11] );
          }
          if ( !*i )
            goto LABEL_16;
        }
        if ( (a5 & 8) != 0 && !i )
        {
LABEL_16:
          DriverPackageId = -1073740764;
          goto LABEL_24;
        }
        Pool2 = ExAllocatePool2(0x100uLL);
        v13 = Pool2;
        if ( !Pool2 )
        {
          DriverPackageId = -1073741670;
          goto LABEL_24;
        }
        v14 = (_QWORD *)(Pool2 + 224);
        v14[1] = v14;
        *v14 = v14;
        *(_QWORD *)(v13 + 216) = v13 + 208;
        *(_QWORD *)(v13 + 208) = v13 + 208;
        *(_QWORD *)(v13 + 392) = v13 + 384;
        *(_QWORD *)(v13 + 384) = v13 + 384;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 40), SourceString)
          && PnpDuplicateUnicodeString(v13 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 72), a2)
          && (!i || RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 128), i)) )
        {
          memset_0(v41, 0, 0xC8uLL);
          *(_QWORD *)v41 = DEVPKEY_DriverPackage_DriverDate;
          v42 = 16;
          v44 = 8;
          v46 = DEVPKEY_DriverPackage_DriverVersion;
          v49 = 8;
          v16 = (PVOID *)(v13 + 144);
          v48 = (UNICODE_STRING *)(v13 + 120);
          v43 = (char *)(v13 + 112);
          v52 = &DEVPKEY_DriverPackage_SignerScore;
          v54 = &v31;
          v57 = DEVPKEY_DriverPackage_ExtensionId;
          v62 = DEVPKEY_DriverPackage_ExtensionContractIds;
          v66 = 2;
          v47 = 9;
          v53 = 7;
          v55 = 4;
          v58 = 13;
          v59 = v13 + 188;
          v60 = 16;
          v63 = 4109;
          v64 = v13 + 144;
          DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v41, 5);
          if ( DriverPackageId >= 0 )
          {
            if ( v45 < 0 )
              *(_QWORD *)(v13 + 112) = 0LL;
            if ( v51 < 0 )
              *(_QWORD *)(v13 + 120) = 0LL;
            if ( v56 < 0 )
              v31 = -16777216;
            if ( v61 < 0 )
              *(_OWORD *)(v13 + 188) = 0LL;
            if ( v67 >= 0 )
            {
              if ( (v65 & 0xF) != 0 )
              {
                ExFreePoolWithTag(*v16, 0);
                *v16 = 0LL;
              }
              else
              {
                *(_DWORD *)(v13 + 152) = v65 >> 4;
              }
            }
            else
            {
              *v16 = 0LL;
            }
            if ( (a5 & 4) != 0 )
              v17 = -1;
            else
              v17 = (unsigned __int16)v37 | v36 & 0xFF0000 | v31 & ((a5 & 1) != 0 ? -268435456 : -16777216);
            *(_DWORD *)(v13 + 108) = v17;
            if ( (a5 & 2) != 0 )
            {
              memset_0(v41, 0, 0xC8uLL);
              *(_QWORD *)v41 = DEVPKEY_DriverPackage_F6;
              v43 = &v27;
              v42 = 17;
              v44 = 1;
              DriverPackageId = PiDevCfgQueryObjectProperties(
                                  v18,
                                  UnicodeString.Buffer,
                                  8,
                                  (_DWORD)Handle,
                                  (__int64)v41,
                                  1);
              if ( DriverPackageId < 0 )
                goto LABEL_23;
              if ( v45 >= 0 )
              {
                v19 = v27;
              }
              else
              {
                v19 = 0;
                v27 = 0;
              }
              if ( v19 == -1 )
                *(_DWORD *)(v13 + 184) |= 2u;
            }
            *(_DWORD *)&v35.Length = 1572886;
            v35.Buffer = L"Descriptors";
            v20 = IopOpenRegistryKeyEx(&v38, Handle, &v35, 0x20019u);
            DriverPackageId = v20;
            if ( v20 == -1073741772 )
              goto LABEL_64;
            if ( v20 < 0 )
              goto LABEL_23;
            v21 = IopOpenRegistryKeyEx(&v33, v38, (UNICODE_STRING *)(v13 + 72), 0x20019u);
            DriverPackageId = v21;
            if ( v21 == -1073741772 )
            {
LABEL_64:
              DriverPackageId = 0;
            }
            else
            {
              if ( v21 < 0 )
                goto LABEL_23;
              memset_0(v68, 0, 0xE0uLL);
              v70 = L"Configuration";
              v72 = 0x1000000;
              v71 = v13 + 88;
              v69 = 288;
              DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v33, (__int64)v68, 0LL, v26, 1);
              if ( DriverPackageId < 0 )
                goto LABEL_23;
              if ( !*(_WORD *)(v13 + 88) && *(_QWORD *)(v13 + 96) )
                RtlFreeAnsiString((PUNICODE_STRING)(v13 + 88));
            }
            v22 = *(_QWORD *)(v13 + 96);
            if ( v22 )
            {
              v23 = PiDevCfgOpenDriverConfiguration(Handle, v22, &v32);
              DriverPackageId = v23;
              if ( v23 == -1073741772 )
              {
                DriverPackageId = 0;
              }
              else
              {
                if ( v23 < 0 )
                  goto LABEL_23;
                memset_0(v68, 0, 0xE0uLL);
                *(_QWORD *)v68 = PiDevCfgQueryDriverVersionValueCallback;
                v70 = L"DriverDate";
                v73 = PiDevCfgQueryDriverVersionValueCallback;
                v74 = L"DriverVersion";
                v71 = v13 + 112;
                v75 = v13 + 120;
                v79 = 117440512;
                v77 = L"ExcludeIds";
                v78 = v13 + 160;
                v76 = 304;
                DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v32, (__int64)v68, 0LL, v26, 1);
                if ( DriverPackageId < 0 )
                  goto LABEL_23;
                if ( *(_WORD *)(v13 + 160) <= 2u && *(_QWORD *)(v13 + 168) )
                  RtlFreeAnsiString((PUNICODE_STRING)(v13 + 160));
              }
            }
            if ( !PnpBootMode )
              goto LABEL_89;
            *(_DWORD *)&v35.Length = 1572886;
            v35.Buffer = L"ConfigFlags";
            if ( !v32 || !PnpRegistryValueExists(v32, &v35) )
              *(_DWORD *)(v13 + 184) |= 4u;
            if ( (*(_DWORD *)(v13 + 184) & 0x24) != 0 )
              goto LABEL_89;
            memset_0(v41, 0, 0xC8uLL);
            *(_QWORD *)v41 = DEVPKEY_DriverPackage_NeedsReconfig;
            v43 = &v28;
            v42 = 17;
            v44 = 1;
            DriverPackageId = PiDevCfgQueryObjectProperties(
                                v24,
                                UnicodeString.Buffer,
                                8,
                                (_DWORD)Handle,
                                (__int64)v41,
                                1);
            if ( DriverPackageId >= 0 )
            {
              if ( v45 >= 0 )
              {
                v25 = v28;
              }
              else
              {
                v25 = 0;
                v28 = 0;
              }
              if ( v25 == -1 )
                *(_DWORD *)(v13 + 184) |= 4u;
LABEL_89:
              *(_QWORD *)(v13 + 16) = Handle;
              *(_QWORD *)(v13 + 24) = v33;
              *(_QWORD *)(v13 + 32) = v32;
              Handle = 0LL;
              v33 = 0LL;
              v32 = 0LL;
              *v40 = v13;
              goto LABEL_24;
            }
          }
        }
        else
        {
          DriverPackageId = -1073741670;
        }
LABEL_23:
        PiDevCfgFreeDriverNode(v13);
      }
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  if ( v38 )
    ZwClose(v38);
  if ( v32 )
    ZwClose(v32);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v39);
  return (unsigned int)DriverPackageId;
}
