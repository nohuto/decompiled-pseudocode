/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x140AD4E78
 * Callers:
 *     EtwpEnableAutoLoggerProvider @ 0x140AD4710 (EtwpEnableAutoLoggerProvider.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140AD3DFC (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140AD41CC (EtwpGetAutoLoggerEventNameFilter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        PVOID *a5,
        _DWORD *a6,
        PVOID *a7,
        _DWORD *a8,
        __int64 *a9,
        _DWORD *a10,
        PVOID *a11)
{
  WCHAR *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  size_t v17; // rbx
  wchar_t *Pool2; // r14
  __int64 v19; // rax
  int RegistryValues; // ebx
  wchar_t *v21; // rax
  _DWORD *v22; // r12
  _DWORD *v23; // r13
  _DWORD *v24; // r15
  PVOID *v25; // rdi
  __int128 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  const WCHAR *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r8
  __int128 *v39; // rcx
  __int64 v40; // rdx
  ULONG v41; // [rsp+20h] [rbp-E0h]
  ULONG v42; // [rsp+20h] [rbp-E0h]
  __int16 v43; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v44; // [rsp+38h] [rbp-C8h]
  _DWORD *v45; // [rsp+40h] [rbp-C0h]
  _DWORD *v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  PVOID *v61; // [rsp+108h] [rbp+8h]
  PVOID *v62; // [rsp+110h] [rbp+10h]
  PVOID *v63; // [rsp+118h] [rbp+18h]
  _DWORD v64[2]; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING *v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING *v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING *v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+150h] [rbp+50h] BYREF
  int *v71; // [rsp+158h] [rbp+58h]
  int v72; // [rsp+160h] [rbp+60h] BYREF
  int *v73; // [rsp+168h] [rbp+68h]
  int v74; // [rsp+170h] [rbp+70h] BYREF
  int *v75; // [rsp+178h] [rbp+78h]
  int v76; // [rsp+180h] [rbp+80h] BYREF
  __int128 *v77; // [rsp+188h] [rbp+88h]
  int v78; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING *v79; // [rsp+198h] [rbp+98h]
  int v80; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 *v81; // [rsp+1A8h] [rbp+A8h]
  int v82[2]; // [rsp+270h] [rbp+170h] BYREF
  const wchar_t *v83; // [rsp+280h] [rbp+180h]
  _DWORD *v84; // [rsp+288h] [rbp+188h]
  _DWORD v85[2]; // [rsp+290h] [rbp+190h]
  wchar_t *Buffer; // [rsp+298h] [rbp+198h]
  _DWORD v87[2]; // [rsp+2A0h] [rbp+1A0h]
  __int64 (__fastcall *v88)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v89; // [rsp+2B8h] [rbp+1B8h]
  int *v90; // [rsp+2C0h] [rbp+1C0h]
  int v91; // [rsp+2C8h] [rbp+1C8h]
  wchar_t *v92; // [rsp+2D0h] [rbp+1D0h]
  int Length; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v94)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+2E0h] [rbp+1E0h]
  const wchar_t *v95; // [rsp+2F0h] [rbp+1F0h]
  int *v96; // [rsp+2F8h] [rbp+1F8h]
  int v97; // [rsp+300h] [rbp+200h]
  wchar_t *v98; // [rsp+308h] [rbp+208h]
  int v99; // [rsp+310h] [rbp+210h]
  __int64 (__fastcall *v100)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+318h] [rbp+218h]
  const wchar_t *v101; // [rsp+328h] [rbp+228h]
  int *v102; // [rsp+330h] [rbp+230h]
  int v103; // [rsp+338h] [rbp+238h]
  int *v104; // [rsp+340h] [rbp+240h]
  __int64 (__fastcall *v105)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+350h] [rbp+250h]
  const wchar_t *v106; // [rsp+360h] [rbp+260h]
  int *v107; // [rsp+368h] [rbp+268h]
  int v108; // [rsp+370h] [rbp+270h]
  int *v109; // [rsp+378h] [rbp+278h]
  __int64 (__fastcall *v110)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+388h] [rbp+288h]
  const wchar_t *v111; // [rsp+398h] [rbp+298h]
  int *v112; // [rsp+3A0h] [rbp+2A0h]
  int v113; // [rsp+3A8h] [rbp+2A8h]
  int *v114; // [rsp+3B0h] [rbp+2B0h]
  __int64 (__fastcall *v115)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3C0h] [rbp+2C0h]
  const wchar_t *v116; // [rsp+3D0h] [rbp+2D0h]
  int *v117; // [rsp+3D8h] [rbp+2D8h]
  int v118; // [rsp+3E0h] [rbp+2E0h]
  __int64 v119; // [rsp+3E8h] [rbp+2E8h]
  int v120; // [rsp+3F0h] [rbp+2F0h]
  __int64 (__fastcall *v121)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3F8h] [rbp+2F8h]
  const wchar_t *v122; // [rsp+408h] [rbp+308h]
  int *v123; // [rsp+410h] [rbp+310h]
  int v124; // [rsp+418h] [rbp+318h]
  wchar_t *v125; // [rsp+420h] [rbp+320h]
  int v126; // [rsp+428h] [rbp+328h]
  __int64 (__fastcall *v127)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+430h] [rbp+330h]
  const wchar_t *v128; // [rsp+440h] [rbp+340h]
  int *v129; // [rsp+448h] [rbp+348h]
  int v130; // [rsp+450h] [rbp+350h]
  __int64 v131; // [rsp+458h] [rbp+358h]
  int v132; // [rsp+460h] [rbp+360h]

  v61 = a5;
  v44 = a6;
  v62 = a7;
  v14 = 0LL;
  v45 = a8;
  v59 = a9;
  v46 = a10;
  v63 = a11;
  DWORD2(v53) = 0;
  v15 = -1LL;
  DWORD2(v52) = 0;
  DWORD2(v54) = 0;
  *(_QWORD *)&v53 = 0LL;
  *(_QWORD *)&v52 = 0LL;
  *(_QWORD *)&v54 = 0LL;
  v16 = -1LL;
  v60 = a4;
  memset(&ObjectAttributes, 0, 44);
  v43 = 0;
  v49 = 0;
  DestinationString = 0LL;
  v47 = 0;
  v48 = 0;
  v55 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  do
    ++v16;
  while ( *(_WORD *)(a1 + 2 * v16) );
  v17 = (unsigned int)(2 * v16 + 18);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v19 = 2LL;
  v56 = 2LL;
  if ( Pool2 )
  {
    RegistryValues = RtlStringCbPrintfW(Pool2, v17, L"%ws\\Filters", a1);
    if ( !RegistryValues )
    {
      RtlInitUnicodeString(&DestinationString, Pool2);
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
      if ( RegistryValues < 0 )
        KeyHandle = 0LL;
      if ( a2 )
      {
        do
          ++v15;
        while ( *(_WORD *)(a2 + 2 * v15) );
        v21 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v14 = v21;
        if ( !v21 )
        {
          RegistryValues = -1073741801;
          goto LABEL_12;
        }
        RegistryValues = RtlStringCbPrintfW(v21, (unsigned int)(2 * v15 + 18), L"%ws\\Filters", a2);
        if ( RegistryValues )
          goto LABEL_12;
        RtlInitUnicodeString(&DestinationString, v14);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValues = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      }
      if ( KeyHandle || Handle )
      {
        memset_0(v82, 0, 0x498uLL);
        v26 = &v55;
        v27 = 2LL;
        v53 = 0LL;
        v52 = 0LL;
        v54 = 0LL;
        do
        {
          *(_QWORD *)v26 = ExAllocatePool2(0x100uLL);
          v26 = (__int128 *)((char *)v26 + 8);
          --v27;
        }
        while ( v27 );
        v22 = v46;
        *v46 = 1024;
        v28 = ExAllocatePool2(0x100uLL);
        *v59 = v28;
        if ( v28 )
        {
          v65 = a3;
          v85[0] = 1;
          *(_QWORD *)v82 = EtwpQueryRegistryCallback;
          v84 = v64;
          v83 = L"ExeFilter";
          v29 = 4LL;
          v64[0] = 1;
          Buffer = (wchar_t *)&v43;
          v88 = EtwpQueryRegistryCallback;
          v90 = &v66;
          v89 = L"PackageIdFilter";
          v92 = (wchar_t *)&v43;
          v67 = a3 + 1;
          v96 = &v68;
          v95 = L"PackageRelativeAppIdFilter";
          v98 = (wchar_t *)&v43;
          v69 = a3 + 2;
          v102 = &v70;
          v101 = L"EventIdFilterIn";
          v71 = &v47;
          v107 = &v72;
          v106 = L"StackWalkFilterIn";
          v73 = &v48;
          v112 = &v74;
          v111 = L"Enabled";
          v75 = &v49;
          LODWORD(v54) = *v22;
          v117 = &v76;
          v116 = L"SchematizedFilters";
          v77 = &v54;
          v123 = &v78;
          v122 = L"ContainerFilter";
          v91 = 1;
          v66 = 1;
          v94 = EtwpQueryRegistryCallback;
          v97 = 1;
          v68 = 1;
          v100 = EtwpQueryRegistryCallback;
          v103 = 4;
          v70 = 4;
          v105 = EtwpQueryRegistryCallback;
          v108 = 4;
          v72 = 4;
          v110 = EtwpQueryRegistryCallback;
          v113 = 4;
          v74 = 4;
          *((_QWORD *)&v54 + 1) = v28;
          v115 = EtwpQueryRegistryCallback;
          v118 = 3;
          v76 = 3;
          v121 = EtwpQueryRegistryCallback;
          v124 = 1;
          v30 = v55;
          v125 = (wchar_t *)&v43;
          v79 = a3 + 3;
          v31 = 8LL;
          v78 = 1;
          if ( (_QWORD)v55 )
          {
            LODWORD(v52) = 128;
            *((_QWORD *)&v52 + 1) = v55 + 4;
            v31 = 9LL;
            v127 = EtwpQueryRegistryCallback;
            v129 = &v80;
            v128 = L"EventIds";
            v81 = &v52;
            v130 = 3;
            v80 = 3;
          }
          v32 = *((_QWORD *)&v55 + 1);
          if ( *((_QWORD *)&v55 + 1) )
          {
            LODWORD(v53) = 128;
            v33 = 56 * v31;
            *((_QWORD *)&v53 + 1) = *((_QWORD *)&v55 + 1) + 4LL;
            v34 = 16 * v31;
            *(_QWORD *)&v82[(unsigned __int64)v33 / 4] = EtwpQueryRegistryCallback;
            *(_QWORD *)&v85[(unsigned __int64)v33 / 4 - 2] = &v64[(unsigned __int64)v34 / 4];
            v64[(unsigned __int64)v34 / 4] = 3;
            (&v83)[(unsigned __int64)v33 / 8] = L"StackWalkIds";
            (&v65)[(unsigned __int64)v34 / 8] = (UNICODE_STRING *)&v53;
            v85[(unsigned __int64)v33 / 4] = 3;
          }
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v82, 0LL, v41, 1);
          if ( RegistryValues < 0 )
            goto LABEL_12;
          v35 = (const WCHAR *)Handle;
          if ( Handle )
          {
            Buffer = a3->Buffer;
            v87[0] = a3->Length;
            v92 = a3[1].Buffer;
            Length = a3[1].Length;
            v98 = a3[2].Buffer;
            v99 = a3[2].Length;
            v104 = &v47;
            v109 = &v48;
            v114 = &v49;
            v119 = *((_QWORD *)&v54 + 1);
            v120 = v54;
            v125 = a3[3].Buffer;
            v126 = a3[3].Length;
            v36 = 8LL;
            if ( v30 )
            {
              v131 = *((_QWORD *)&v52 + 1);
              v132 = v52;
              v36 = 9LL;
            }
            if ( v32 )
            {
              v37 = 14 * v36;
              *(_QWORD *)&v87[v37 - 2] = *((_QWORD *)&v53 + 1);
              v87[v37] = v53;
            }
            RegistryValues = RtlpQueryRegistryValues(0x40000000LL, v35, (__int64)v82, 0LL, v42, 1);
            if ( RegistryValues < 0 )
              RegistryValues = 0;
          }
          if ( v30 )
          {
            *(_BYTE *)v30 = v47 != 0;
            *(_WORD *)(v30 + 2) = (unsigned int)v52 >> 1;
          }
          if ( v32 )
          {
            *(_BYTE *)v32 = v48 != 0;
            *(_WORD *)(v32 + 2) = (unsigned int)v53 >> 1;
          }
          v22 = v46;
          *v46 = v54;
          if ( v49 )
          {
            v38 = v60 - (_QWORD)&v55;
            v39 = &v55;
            v40 = 2LL;
            do
            {
              *(_QWORD *)((char *)v39 + v38) = *(_QWORD *)v39;
              *(_QWORD *)v39 = 0LL;
              v39 = (__int128 *)((char *)v39 + 8);
              --v40;
            }
            while ( v40 );
            v24 = v44;
            EtwpGetAutoLoggerEventNameFilter((__int64)Pool2, (__int64)v14, (__int64)L"EventNameFilter", v61, v44);
            v23 = v45;
            EtwpGetAutoLoggerEventNameFilter((__int64)Pool2, (__int64)v14, (__int64)L"StackNameFilter", v62, v45);
            EtwpGetAutoLoggerLevelKwFilter((__int64)Pool2, (__int64)v14, v63);
            v19 = 2LL;
            goto LABEL_15;
          }
          do
          {
            RtlFreeAnsiString(a3++);
            --v29;
          }
          while ( v29 );
          *v22 = 0;
        }
        else
        {
          RegistryValues = -1073741801;
        }
        v19 = 2LL;
        goto LABEL_14;
      }
    }
LABEL_12:
    v19 = 2LL;
    goto LABEL_13;
  }
  RegistryValues = -1073741801;
LABEL_13:
  v22 = v46;
LABEL_14:
  v23 = v45;
  v24 = v44;
LABEL_15:
  v25 = (PVOID *)&v55;
  do
  {
    if ( *v25 )
    {
      ExFreePoolWithTag(*v25, 0);
      v19 = v56;
    }
    ++v25;
    v56 = --v19;
  }
  while ( v19 );
  if ( RegistryValues < 0 )
  {
    *v24 = 0;
    *v23 = 0;
    *v22 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
