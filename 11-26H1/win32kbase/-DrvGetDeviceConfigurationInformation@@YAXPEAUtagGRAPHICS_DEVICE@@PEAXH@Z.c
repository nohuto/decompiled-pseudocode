/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14002BC50
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14002AA74 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14002C914 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _wcsicmp @ 0x1401C77A8 (_wcsicmp.c)
 *     RtlStringLengthWorkerW @ 0x1401F61EC (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(unsigned int *Context, WCHAR *Path, int a3)
{
  __int64 v3; // r15
  int v4; // esi
  WCHAR *v5; // r14
  NTSTATUS RegistryValues; // edi
  char v8; // r13
  bool v9; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  unsigned int v11; // r8d
  struct _DEVICE_OBJECT *v12; // rcx
  const wchar_t *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  char *v16; // rsi
  _DWORD *v17; // r14
  unsigned int v18; // ecx
  _WORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r13d
  int v22; // eax
  size_t v23; // rdx
  struct _RTL_QUERY_REGISTRY_TABLE *v24; // r8
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  WCHAR *v28; // r14
  const wchar_t *v29; // rsi
  unsigned int v30; // r12d
  unsigned int i; // ecx
  unsigned int v32; // r14d
  void *v33; // rax
  void *v34; // r15
  const void *v35; // rcx
  __int64 v36; // rsi
  void *v37; // rcx
  void *v38; // rax
  const void *v39; // rcx
  __int64 v40; // rsi
  void *v41; // rax
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+64h] [rbp-9Ch] BYREF
  int v47; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v49; // [rsp+78h] [rbp-88h]
  ULONG ResultLength; // [rsp+7Ch] [rbp-84h] BYREF
  __int128 InputBuffer; // [rsp+80h] [rbp-80h] BYREF
  void *Source2[2]; // [rsp+90h] [rbp-70h]
  SIZE_T Length[2]; // [rsp+A0h] [rbp-60h]
  size_t pcchLength[2]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h]
  void *Src[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v58; // [rsp+E0h] [rbp-20h] BYREF
  int (*v59)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+118h] [rbp+18h] BYREF
  int v60; // [rsp+120h] [rbp+20h]
  const wchar_t *v61; // [rsp+128h] [rbp+28h]
  void **v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+138h] [rbp+38h]
  __int64 v64; // [rsp+140h] [rbp+40h]
  int v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  int v67; // [rsp+158h] [rbp+58h]
  __int64 v68; // [rsp+160h] [rbp+60h]
  __int128 v69; // [rsp+168h] [rbp+68h]
  __int128 v70; // [rsp+178h] [rbp+78h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+190h] [rbp+90h] BYREF
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  int v73; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v74; // [rsp+1D8h] [rbp+D8h]
  __int64 v75; // [rsp+1E0h] [rbp+E0h]
  int v76; // [rsp+1E8h] [rbp+E8h]
  __int64 v77; // [rsp+1F0h] [rbp+F0h]
  int v78; // [rsp+1F8h] [rbp+F8h]
  __int64 v79; // [rsp+200h] [rbp+100h] BYREF
  int v80; // [rsp+208h] [rbp+108h]
  const wchar_t *v81; // [rsp+210h] [rbp+110h]
  int *v82; // [rsp+218h] [rbp+118h]
  int v83; // [rsp+220h] [rbp+120h]
  int *v84; // [rsp+228h] [rbp+128h]
  int v85; // [rsp+230h] [rbp+130h]
  __int64 v86; // [rsp+238h] [rbp+138h]
  int v87; // [rsp+240h] [rbp+140h]
  const wchar_t *v88; // [rsp+248h] [rbp+148h]
  int *v89; // [rsp+250h] [rbp+150h]
  int v90; // [rsp+258h] [rbp+158h]
  int *v91; // [rsp+260h] [rbp+160h]
  int v92; // [rsp+268h] [rbp+168h]
  __int64 v93; // [rsp+270h] [rbp+170h]
  int v94; // [rsp+278h] [rbp+178h]
  const wchar_t *v95; // [rsp+280h] [rbp+180h]
  int *v96; // [rsp+288h] [rbp+188h]
  int v97; // [rsp+290h] [rbp+190h]
  int *v98; // [rsp+298h] [rbp+198h]
  int v99; // [rsp+2A0h] [rbp+1A0h]
  int (*v100)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2A8h] [rbp+1A8h]
  int v101; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v102; // [rsp+2B8h] [rbp+1B8h]
  __int64 v103; // [rsp+2C0h] [rbp+1C0h]
  int v104; // [rsp+2C8h] [rbp+1C8h]
  __int64 v105; // [rsp+2D0h] [rbp+1D0h]
  int v106; // [rsp+2D8h] [rbp+1D8h]
  int (*v107)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v108; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v109; // [rsp+2F0h] [rbp+1F0h]
  __int64 v110; // [rsp+2F8h] [rbp+1F8h]
  int v111; // [rsp+300h] [rbp+200h]
  __int64 v112; // [rsp+308h] [rbp+208h]
  int v113; // [rsp+310h] [rbp+210h]
  int (*v114)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+318h] [rbp+218h]
  int v115; // [rsp+320h] [rbp+220h]
  const wchar_t *v116; // [rsp+328h] [rbp+228h]
  __int64 v117; // [rsp+330h] [rbp+230h]
  int v118; // [rsp+338h] [rbp+238h]
  __int64 v119; // [rsp+340h] [rbp+240h]
  int v120; // [rsp+348h] [rbp+248h]
  __int64 v121; // [rsp+350h] [rbp+250h]
  int v122; // [rsp+358h] [rbp+258h]
  const wchar_t *v123; // [rsp+360h] [rbp+260h]
  int *v124; // [rsp+368h] [rbp+268h]
  int v125; // [rsp+370h] [rbp+270h]
  int *v126; // [rsp+378h] [rbp+278h]
  int v127; // [rsp+380h] [rbp+280h]
  __int64 v128; // [rsp+388h] [rbp+288h]
  int v129; // [rsp+390h] [rbp+290h]
  __int64 v130; // [rsp+398h] [rbp+298h]
  __int128 v131; // [rsp+3A0h] [rbp+2A0h]
  __int128 v132; // [rsp+3B0h] [rbp+2B0h]
  struct _RTL_QUERY_REGISTRY_TABLE v133; // [rsp+3C0h] [rbp+2C0h] BYREF
  int (*v134)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+3F8h] [rbp+2F8h]
  int v135; // [rsp+400h] [rbp+300h]
  const wchar_t *v136; // [rsp+408h] [rbp+308h]
  __int64 v137; // [rsp+410h] [rbp+310h]
  int v138; // [rsp+418h] [rbp+318h]
  __int64 v139; // [rsp+420h] [rbp+320h]
  int v140; // [rsp+428h] [rbp+328h]
  __int64 v141; // [rsp+430h] [rbp+330h]
  int v142; // [rsp+438h] [rbp+338h]
  const wchar_t *v143; // [rsp+440h] [rbp+340h]
  int *v144; // [rsp+448h] [rbp+348h]
  int v145; // [rsp+450h] [rbp+350h]
  int *v146; // [rsp+458h] [rbp+358h]
  int v147; // [rsp+460h] [rbp+360h]
  __int64 v148; // [rsp+468h] [rbp+368h]
  int v149; // [rsp+470h] [rbp+370h]
  const wchar_t *v150; // [rsp+478h] [rbp+378h]
  int *v151; // [rsp+480h] [rbp+380h]
  int v152; // [rsp+488h] [rbp+388h]
  int *v153; // [rsp+490h] [rbp+390h]
  int v154; // [rsp+498h] [rbp+398h]
  __int64 v155; // [rsp+4A0h] [rbp+3A0h]
  int v156; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v157; // [rsp+4B0h] [rbp+3B0h]
  int *v158; // [rsp+4B8h] [rbp+3B8h]
  int v159; // [rsp+4C0h] [rbp+3C0h]
  int *v160; // [rsp+4C8h] [rbp+3C8h]
  int v161; // [rsp+4D0h] [rbp+3D0h]
  __int64 v162; // [rsp+4D8h] [rbp+3D8h]
  int v163; // [rsp+4E0h] [rbp+3E0h]
  __int64 v164; // [rsp+4E8h] [rbp+3E8h]
  __int128 v165; // [rsp+4F0h] [rbp+3F0h]
  __int128 v166; // [rsp+500h] [rbp+400h]

  LODWORD(v3) = 0;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v81 = L"MultiDisplayDriver";
  v5 = Path;
  v82 = &v47;
  KeyHandle = Path;
  v45 = 0;
  v47 = 0;
  v84 = &v45;
  v88 = L"MirrorDriver";
  RegistryValues = 0;
  v43 = 0;
  v89 = &v43;
  v8 = 0;
  v44 = 0;
  v91 = &v45;
  v95 = L"AccDriver";
  v96 = &v44;
  v98 = &v45;
  v102 = L"Device Description";
  v109 = L"HardwareInformation.AdapterString";
  v46 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v72 = 0LL;
  v73 = 1;
  v74 = L"Settings";
  v75 = 0LL;
  v76 = 0;
  v77 = 0LL;
  v78 = 0;
  v79 = 0LL;
  v80 = 288;
  v83 = 67108868;
  v85 = 4;
  v86 = 0LL;
  v87 = 288;
  v90 = 67108868;
  v92 = 4;
  v93 = 0LL;
  v94 = 288;
  v97 = 67108868;
  v99 = 4;
  v100 = __EnumDisplayQueryRoutine;
  v101 = 16;
  v103 = 0LL;
  v104 = 0;
  v105 = 0LL;
  v106 = 0;
  v107 = __EnumDisplayQueryRoutine;
  v108 = 16;
  v110 = 0LL;
  v111 = 0;
  v112 = 0LL;
  v113 = 0;
  v114 = __EnumDisplayQueryRoutine;
  v116 = L"HardwareInformation.ChipType";
  v9 = a3 == 0;
  v123 = L"TSCompatible";
  v124 = &v46;
  v125 = 67108868;
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v79;
  v126 = &v45;
  v122 = 288;
  if ( !v9 )
    p_QueryTable = &QueryTable;
  v127 = 4;
  v115 = 16;
  v117 = 0LL;
  v118 = 0;
  v119 = 0LL;
  v120 = 0;
  v121 = 0LL;
  v128 = 0LL;
  v129 = 0;
  v130 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( !v4 && !Context[65] )
  {
    ResultLength = 0;
    v16 = 0LL;
    RegistryValues = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( RegistryValues != -1073741789 )
      goto LABEL_46;
    v17 = (_DWORD *)PALLOCNOZ(ResultLength, 0x73726447u);
    if ( v17 )
    {
      v55 = 0;
      RegistryValues = ZwQueryKey(KeyHandle, KeyNameInformation, v17, ResultLength, &v55);
      if ( RegistryValues >= 0 )
      {
        v18 = 0;
        if ( *v17 >> 1 )
        {
          v19 = v17 + 1;
          do
          {
            v9 = *v19 == 92;
            v20 = v18;
            ++v19;
            if ( !v9 )
              v20 = v3;
            ++v18;
            v3 = v20;
          }
          while ( v18 < *v17 >> 1 );
          if ( v20 )
          {
            v21 = 2 * v20;
            LODWORD(pcchLength[0]) = *(_DWORD *)L"eo";
            v49 = aVideo[6];
            v56 = *(_QWORD *)L"\\Video";
            v16 = (char *)PALLOCNOZ(2 * v20 + 14, 0x73726447u);
            if ( v16 )
            {
              memmove(v16, v17 + 1, v21);
              v22 = pcchLength[0];
              v8 = 0;
              *(_QWORD *)&v16[2 * v3] = v56;
              *(_DWORD *)&v16[2 * v3 + 8] = v22;
              *(_WORD *)&v16[2 * v3 + 12] = v49;
            }
            else
            {
              RegistryValues = -1073741670;
              v8 = 0;
            }
          }
        }
      }
      GreDeleteFastMutex(v17);
    }
    else
    {
      RegistryValues = -1073741670;
    }
    if ( v16 )
    {
      v58.Flags = 16;
      v58.EntryContext = 0LL;
      v58.QueryRoutine = __EnumDisplayQueryRoutine;
      v58.DefaultType = 0;
      v58.Name = L"DeviceDesc";
      v58.DefaultData = 0LL;
      v61 = L"Driver";
      v58.DefaultLength = 0;
      v62 = Src;
      *(_OWORD *)Src = 0LL;
      v59 = 0LL;
      v60 = 304;
      v63 = 16777217;
      v64 = 0LL;
      v65 = 0;
      v66 = 0LL;
      v67 = 0;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0, (PCWSTR)v16, &v58, Context, 0LL);
      if ( RegistryValues >= 0 )
      {
        v8 = 1;
        if ( LOWORD(Src[0]) )
        {
          v26 = (unsigned int)LOWORD(Src[0]) + 12;
          v56 = *(_QWORD *)L"Class\\";
          v27 = PALLOCNOZ((unsigned int)LOWORD(Src[0]) + 14, 0x73726447u);
          v28 = (WCHAR *)v27;
          if ( v27 )
          {
            *(_QWORD *)v27 = v56;
            *(_DWORD *)(v27 + 8) = *(_DWORD *)L"s\\";
            memmove((void *)(v27 + 12), Src[1], LOWORD(Src[0]));
            v133.Flags = 1;
            *(WCHAR *)((char *)v28 + v26) = 0;
            v133.Name = L"Settings";
            v133.QueryRoutine = 0LL;
            v142 = 288;
            v145 = 67108868;
            v149 = 288;
            v147 = 4;
            v134 = __DisplayDriverQueryRoutine;
            v136 = L"InstalledDisplayDrivers";
            v143 = L"MirrorDriver";
            v144 = &v43;
            v146 = &v45;
            v150 = L"AccDriver";
            v151 = &v44;
            v153 = &v45;
            v157 = L"TSCompatible";
            v158 = &v46;
            v152 = 67108868;
            v154 = 4;
            v156 = 288;
            v159 = 67108868;
            v161 = 4;
            v160 = &v45;
            v133.EntryContext = 0LL;
            v133.DefaultType = 0;
            v133.DefaultData = 0LL;
            v133.DefaultLength = 0;
            v135 = 16;
            v137 = 0LL;
            v138 = 0;
            v139 = 0LL;
            v140 = 0;
            v141 = 0LL;
            v148 = 0LL;
            v155 = 0LL;
            v162 = 0LL;
            v163 = 0;
            v164 = 0LL;
            v165 = 0LL;
            v166 = 0LL;
            RtlQueryRegistryValues(2u, v28, &v133, Context, 0LL);
            GreDeleteFastMutex(v28);
          }
          else
          {
            RegistryValues = -1073741670;
          }
        }
      }
      if ( Src[1] )
      {
        ExFreePoolWithTag(Src[1], 0);
        Src[1] = 0LL;
      }
      GreDeleteFastMutex(v16);
      if ( !v8
        || (v29 = (const wchar_t *)*((_QWORD *)Context + 26)) == 0LL
        || !Context[65]
        || (pcchLength[0] = 0LL, RegistryValues = RtlStringLengthWorkerW(v29, v23, pcchLength), RegistryValues < 0) )
      {
        v5 = (WCHAR *)KeyHandle;
LABEL_46:
        v4 = a3;
        goto LABEL_4;
      }
      v30 = 0;
      for ( i = 0; i < ((unsigned __int16)(2 * LOWORD(pcchLength[0])) >> 1) - 1; ++i )
      {
        if ( v29[i] == 59 )
        {
          v30 = i + 1;
          break;
        }
      }
      v32 = (unsigned __int16)(2 * LOWORD(pcchLength[0])) + 2 * (1 - v30);
      v33 = (void *)PALLOCNOZ(v32, 0x73726447u);
      v34 = v33;
      if ( v33 )
      {
        memmove(v33, &v29[v30], v32);
        GreDeleteFastMutex(*((PVOID *)Context + 26));
        *((_QWORD *)Context + 26) = v34;
        Context[65] = v32;
        v5 = (WCHAR *)KeyHandle;
        goto LABEL_46;
      }
      RegistryValues = -1073741670;
      Context[65] = 0;
    }
    v5 = (WCHAR *)KeyHandle;
    goto LABEL_46;
  }
LABEL_4:
  if ( (Context[40] & 0x800000) != 0 )
  {
    v25 = PALLOCNOZ(0xAu, 0x73726447u);
    *((_QWORD *)Context + 25) = v25;
    if ( !v25 )
      goto LABEL_23;
    *(_QWORD *)v25 = *(_QWORD *)L"cdd";
    *(_WORD *)(v25 + 8) = 0;
    Context[64] = 10;
    RegistryValues = 0;
  }
  else
  {
    if ( !v44 && !v43 )
    {
      v24 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v59;
      v61 = L"InstalledDisplayDrivers";
      v59 = __DisplayDriverQueryRoutine;
      v58.QueryRoutine = 0LL;
      if ( v4 )
        v24 = &v58;
      v58.Flags = 1;
      v58.Name = L"Settings";
      v58.EntryContext = 0LL;
      v58.DefaultType = 0;
      v58.DefaultData = 0LL;
      v58.DefaultLength = 0;
      v60 = 16;
      v62 = 0LL;
      v63 = 0;
      v64 = 0LL;
      v65 = 0;
      v66 = 0LL;
      v67 = 0;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, v5, v24, Context, 0LL);
    }
    if ( RegistryValues < 0 )
      goto LABEL_23;
  }
  InputBuffer = 0LL;
  *(_OWORD *)Source2 = 0LL;
  *(_OWORD *)Length = 0LL;
  if ( v44 )
    v43 = 1;
  GreDeviceIoControlImpl(
    *((PDEVICE_OBJECT *)Context + 17),
    0x23203Bu,
    0LL,
    0,
    &InputBuffer,
    0x30u,
    (unsigned int *)pcchLength,
    1u,
    1);
  v11 = (unsigned int)Source2[1];
  if ( !LODWORD(Source2[1]) || !Source2[0] )
  {
    LODWORD(InputBuffer) = v47;
    HIDWORD(InputBuffer) = v46;
    Source2[0] = *((void **)Context + 25);
    v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 17);
    LODWORD(Source2[1]) = Context[64];
    Length[0] = *((_QWORD *)Context + 26);
    LODWORD(Length[1]) = Context[65];
    *(_QWORD *)((char *)&InputBuffer + 4) = (v44 != 0 ? 2 : 0) | (unsigned __int64)(v43 != 0);
    GreDeviceIoControlImpl(v12, 0x23203Fu, &InputBuffer, 0x30u, 0LL, 0, (unsigned int *)pcchLength, 1u, 1);
    goto LABEL_11;
  }
  if ( v47 != (_DWORD)InputBuffer
    || (v43 != 0) != (BYTE4(InputBuffer) & 1)
    || (v44 != 0 ? 2 : 0) != (BYTE4(InputBuffer) & 2)
    || v46 != HIDWORD(InputBuffer) )
  {
    v47 = InputBuffer;
    v43 = BYTE4(InputBuffer) & 1;
    v44 = (DWORD1(InputBuffer) >> 1) & 1;
    v46 = HIDWORD(InputBuffer);
  }
  v35 = (const void *)*((_QWORD *)Context + 25);
  if ( !v35 )
    goto LABEL_82;
  v36 = Context[64];
  if ( LODWORD(Source2[1]) != (_DWORD)v36 )
    goto LABEL_82;
  if ( RtlCompareMemory(v35, Source2[0], LODWORD(Source2[1])) != v36 )
  {
    v11 = (unsigned int)Source2[1];
LABEL_82:
    v37 = (void *)*((_QWORD *)Context + 25);
    if ( v37 )
    {
      GreDeleteFastMutex(v37);
      v11 = (unsigned int)Source2[1];
    }
    v38 = (void *)PALLOCNOZ(v11, 0x73726447u);
    *((_QWORD *)Context + 25) = v38;
    if ( v38 )
      memmove(v38, Source2[0], LODWORD(Source2[1]));
    else
      RegistryValues = -1073741670;
  }
  v39 = (const void *)*((_QWORD *)Context + 26);
  if ( v39 )
  {
    if ( Length[0] )
    {
      v40 = Context[65];
      if ( LODWORD(Length[1]) != (_DWORD)v40
        || RtlCompareMemory(v39, (const void *)Length[0], LODWORD(Length[1])) != v40 )
      {
        GreDeleteFastMutex(*((PVOID *)Context + 26));
        v41 = (void *)PALLOCNOZ(Length[1], 0x73726447u);
        *((_QWORD *)Context + 26) = v41;
        if ( v41 )
          memmove(v41, (const void *)Length[0], LODWORD(Length[1]));
        else
          RegistryValues = -1073741670;
      }
    }
  }
LABEL_11:
  if ( RegistryValues >= 0 )
  {
    if ( v47 )
      Context[40] |= 2u;
    if ( v43 )
      Context[40] |= 8u;
    if ( v44 )
      Context[40] |= 0x48u;
    if ( v46 )
      Context[40] |= 0x200000u;
    v13 = (const wchar_t *)*((_QWORD *)Context + 26);
    if ( v13 )
    {
      if ( !wcsicmp(v13, L"RDPUDD Chained DD") )
        Context[40] |= 0x1000000u;
    }
    return;
  }
LABEL_23:
  DrvLogDisplayDriverEvent(1LL);
  v14 = (void *)*((_QWORD *)Context + 25);
  if ( v14 )
  {
    GreDeleteFastMutex(v14);
    *((_QWORD *)Context + 25) = 0LL;
  }
  v15 = (void *)*((_QWORD *)Context + 26);
  if ( v15 )
  {
    GreDeleteFastMutex(v15);
    *((_QWORD *)Context + 26) = 0LL;
  }
}
