/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x140AE8544
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer @ 0x14049890C (McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     PnpGetLogString @ 0x1404F2AE8 (PnpGetLogString.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1405DAFD8 (RtlUnicodeStringCopyStringEx.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405DD9A8 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405DDA04 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PnpTraceDeviceConfig @ 0x140B31F6C (PnpTraceDeviceConfig.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rsi
  int v10; // r15d
  __int64 v11; // r9
  __int64 v12; // rdx
  wchar_t *Buffer; // r8
  unsigned __int16 Length; // cx
  unsigned int v15; // r9d
  __int64 v16; // rdx
  int v17; // r13d
  __int64 **v18; // r14
  int *v19; // rsi
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  wchar_t *Pool2; // rax
  UNICODE_STRING v25; // xmm0
  __int64 *v26; // rbx
  int v27; // eax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  int *v30; // rsi
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  wchar_t *v35; // rax
  UNICODE_STRING v36; // xmm0
  __int64 *v37; // rbx
  int v38; // eax
  __int64 v39; // rax
  NTSTATUS v40; // eax
  char v41; // bl
  const wchar_t *v42; // r14
  __int64 *v43; // rsi
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // rdx
  int *v47; // rax
  int v48; // r14d
  const wchar_t *v49; // rdx
  const wchar_t *v50; // r8
  const wchar_t *v51; // r9
  const wchar_t *v52; // r10
  const wchar_t *v53; // r11
  char v54; // bl
  const wchar_t *v55; // r14
  __int64 *v56; // rsi
  __int64 v57; // r15
  __int64 v58; // r12
  __int64 v59; // rdx
  int *v60; // rax
  const wchar_t *v61; // rdx
  const wchar_t *v62; // r8
  const wchar_t *v63; // r9
  const wchar_t *v64; // r10
  const wchar_t *v65; // r11
  char v66; // bl
  const wchar_t *v67; // r14
  __int64 *v68; // rsi
  __int64 v69; // r15
  __int64 v70; // r12
  __int64 v71; // rdx
  int *LogString; // rax
  const wchar_t *v73; // rdx
  const wchar_t *v74; // r8
  const wchar_t *v75; // r9
  const wchar_t *v76; // r10
  const wchar_t *v77; // r11
  char v78; // bl
  const wchar_t *v79; // r14
  __int64 *v80; // rsi
  __int64 v81; // r15
  __int64 v82; // r12
  __int64 v83; // rdx
  int *v84; // rax
  const wchar_t *v85; // rdx
  const wchar_t *v86; // r8
  const wchar_t *v87; // r9
  const wchar_t *v88; // r10
  const wchar_t *v89; // r11
  __int64 v90; // r13
  _QWORD *v91; // rax
  unsigned __int16 v92; // bx
  wchar_t *v93; // rax
  __int64 *v94; // rsi
  int v95; // r14d
  int v96; // r9d
  __int64 v97; // r9
  __int64 v98; // rdx
  unsigned __int16 v99; // cx
  unsigned int v100; // r8d
  __int64 v101; // rdx
  UNICODE_STRING *v102; // r8
  UNICODE_STRING *v103; // rdx
  const wchar_t *v104; // rcx
  NTSTATUS v105; // ebx
  __int64 v106; // r15
  __int64 v107; // r12
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r12
  wchar_t *v111; // rbx
  unsigned __int16 v112; // dx
  unsigned int v113; // r8d
  unsigned __int64 v114; // rax
  wchar_t *v115; // r9
  __int64 v116; // rcx
  unsigned __int16 v117; // dx
  unsigned int v118; // r8d
  unsigned __int64 v119; // rax
  wchar_t *v120; // r9
  __int64 v121; // rcx
  unsigned __int16 v122; // dx
  unsigned int v123; // r8d
  unsigned __int64 v124; // rax
  wchar_t *v125; // r9
  __int64 v126; // rcx
  unsigned __int16 v127; // dx
  unsigned int v128; // r9d
  unsigned __int64 v129; // rax
  wchar_t *v130; // r8
  __int64 v131; // rcx
  __int64 v132; // r9
  __int64 v133; // rdx
  wchar_t *v134; // r11
  unsigned __int16 v135; // cx
  unsigned int v136; // r8d
  __int64 v137; // rdx
  __int64 v138; // [rsp+20h] [rbp-140h]
  __int64 v139; // [rsp+20h] [rbp-140h]
  __int64 v140; // [rsp+20h] [rbp-140h]
  __int64 v141; // [rsp+20h] [rbp-140h]
  __int64 v142; // [rsp+20h] [rbp-140h]
  __int64 v143; // [rsp+20h] [rbp-140h]
  __int64 v144; // [rsp+28h] [rbp-138h]
  __int64 v145; // [rsp+28h] [rbp-138h]
  __int64 v146; // [rsp+28h] [rbp-138h]
  __int64 v147; // [rsp+28h] [rbp-138h]
  __int64 v148; // [rsp+30h] [rbp-130h]
  const wchar_t *v149; // [rsp+88h] [rbp-D8h]
  const wchar_t *v150; // [rsp+88h] [rbp-D8h]
  const wchar_t *v151; // [rsp+88h] [rbp-D8h]
  char v152; // [rsp+E0h] [rbp-80h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+F0h] [rbp-70h] BYREF
  int v154; // [rsp+100h] [rbp-60h]
  BOOL v155; // [rsp+104h] [rbp-5Ch]
  int v156; // [rsp+108h] [rbp-58h]
  UNICODE_STRING v157; // [rsp+110h] [rbp-50h] BYREF
  __int64 v158; // [rsp+120h] [rbp-40h]
  UNICODE_STRING UnicodeString; // [rsp+128h] [rbp-38h] BYREF
  UNICODE_STRING v160; // [rsp+138h] [rbp-28h] BYREF
  __int64 v161; // [rsp+148h] [rbp-18h]
  UNICODE_STRING v162; // [rsp+150h] [rbp-10h] BYREF
  UNICODE_STRING v163; // [rsp+160h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+10h] BYREF
  UNICODE_STRING v165; // [rsp+180h] [rbp+20h] BYREF
  UNICODE_STRING v166; // [rsp+190h] [rbp+30h] BYREF
  UNICODE_STRING v167; // [rsp+1A0h] [rbp+40h] BYREF
  UNICODE_STRING v168; // [rsp+1B0h] [rbp+50h] BYREF
  UNICODE_STRING GuidString; // [rsp+1C0h] [rbp+60h] BYREF
  UNICODE_STRING v170; // [rsp+1D0h] [rbp+70h] BYREF
  __int64 v171; // [rsp+1E8h] [rbp+88h]
  UNICODE_STRING v172; // [rsp+1F0h] [rbp+90h] BYREF
  UNICODE_STRING v173; // [rsp+200h] [rbp+A0h] BYREF
  GUID Guid; // [rsp+210h] [rbp+B0h] BYREF
  __int64 *v175; // [rsp+220h] [rbp+C0h] BYREF
  int v176; // [rsp+228h] [rbp+C8h]
  UNICODE_STRING *p_DestinationString; // [rsp+230h] [rbp+D0h]
  int v178; // [rsp+23Ch] [rbp+DCh]
  int v179; // [rsp+240h] [rbp+E0h]
  __int64 *v180; // [rsp+248h] [rbp+E8h]
  int v181; // [rsp+250h] [rbp+F0h]
  void *p_UnicodeString; // [rsp+258h] [rbp+F8h]
  int v183; // [rsp+260h] [rbp+100h]
  int v184; // [rsp+264h] [rbp+104h]
  int v185; // [rsp+268h] [rbp+108h]
  __int64 *v186; // [rsp+270h] [rbp+110h]
  int v187; // [rsp+278h] [rbp+118h]
  UNICODE_STRING *v188; // [rsp+280h] [rbp+120h]
  int v189; // [rsp+28Ch] [rbp+12Ch]
  int v190; // [rsp+290h] [rbp+130h]
  __int64 *v191; // [rsp+298h] [rbp+138h]
  int v192; // [rsp+2A0h] [rbp+140h]
  UNICODE_STRING *v193; // [rsp+2A8h] [rbp+148h]
  int v194; // [rsp+2B0h] [rbp+150h]
  int v195; // [rsp+2B4h] [rbp+154h]
  int v196; // [rsp+2B8h] [rbp+158h]
  wchar_t pszDest[12]; // [rsp+2C0h] [rbp+160h] BYREF
  wchar_t v198[24]; // [rsp+2D8h] [rbp+178h] BYREF

  LODWORD(v7) = 0;
  v171 = a7;
  v154 = a4;
  v158 = a2;
  v161 = a1;
  v155 = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v170.Length = 0LL;
  v170.Buffer = 0LL;
  v152 = 0;
  *(_QWORD *)&v165.Length = 0LL;
  v165.Buffer = 0LL;
  *(_QWORD *)&v166.Length = 0LL;
  v166.Buffer = 0LL;
  *(_QWORD *)&v167.Length = 0LL;
  v167.Buffer = 0LL;
  *(_QWORD *)&v160.Length = 0LL;
  v160.Buffer = 0LL;
  *(_QWORD *)&v168.Length = 0LL;
  v168.Buffer = 0LL;
  *(_QWORD *)&v157.Length = 0LL;
  v157.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v156 = 0;
  *(_QWORD *)&v163.Length = 0LL;
  v163.Buffer = 0LL;
  TimeFields = 0LL;
  v172 = 0LL;
  Guid = 0LL;
  v162 = 0LL;
  v173 = 0LL;
  if ( (byte_140EF412A & 0x30) != 0x30 )
    goto LABEL_252;
  if ( a3 )
  {
    memset_0(&v175, 0, 0xA0uLL);
    v11 = *(_QWORD *)(a3 + 16);
    v178 = 6;
    v184 = 6;
    v175 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
    v189 = 6;
    v12 = *(_QWORD *)(a3 + 64);
    p_DestinationString = &DestinationString;
    v180 = DEVPKEY_DriverPackage_DriverFlightIds;
    p_UnicodeString = &UnicodeString;
    v186 = DEVPKEY_DriverPackage_SubmissionId;
    v188 = &v170;
    v191 = &DEVPKEY_DriverPackage_Isolated;
    v193 = (UNICODE_STRING *)&v152;
    v176 = 18;
    v181 = 8210;
    v187 = 18;
    v192 = 17;
    v194 = 1;
    if ( (int)PiDevCfgQueryObjectProperties(18, v12, 8, v11, (__int64)&v175, 4) < 0 )
      goto LABEL_252;
    if ( v179 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( v185 < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v15 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v16 = 0LL;
        do
        {
          if ( !Buffer[v16] )
          {
            Buffer[v16] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v16 = ++v15;
        }
        while ( v15 < ((unsigned __int64)Length >> 1) - 2 );
        v10 = 0;
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( v190 < 0 )
      RtlInitUnicodeString(&v170, 0LL);
    if ( v196 < 0 )
      v152 = 0;
    if ( DestinationString.Buffer )
      v155 = RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), &TimeFields);
    LODWORD(v144) = TimeFields.Year;
    LODWORD(v138) = TimeFields.Day;
    if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%02d/%02d/%04d", (unsigned int)TimeFields.Month, v138, v144) < 0 )
      pszDest[0] = 0;
    LODWORD(v145) = *(unsigned __int16 *)(a3 + 122);
    LODWORD(v139) = *(unsigned __int16 *)(a3 + 124);
    if ( RtlStringCchPrintfW(
           v198,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
           v139,
           v145,
           *(unsigned __int16 *)(a3 + 120)) < 0 )
      v198[0] = 0;
    v17 = *(_DWORD *)(a3 + 108);
    if ( v17 == -1 )
      LOBYTE(v17) = 0;
    if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
    {
      v18 = (__int64 **)(a3 + 224);
      v19 = *(int **)(a3 + 224);
      if ( v19 != (int *)(a3 + 224) )
      {
        v20 = 0;
        while ( 1 )
        {
          v20 += *((unsigned __int16 *)v19 + 20) + *((unsigned __int16 *)v19 + 36) + 22;
          v21 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
          v22 = *((_QWORD *)v19 + 22);
          if ( v21 )
            break;
          if ( v22 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( *(_WORD *)(v22 + 2 * v23) );
LABEL_43:
            v20 += 2 * v23 + 2;
          }
LABEL_44:
          v19 = *(int **)v19;
          if ( v19 == (int *)v18 )
          {
            if ( (unsigned int)(v20 + 2) <= 0xFFFE )
              v157.MaximumLength = v20 + 2;
            else
              v157.MaximumLength = -2;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            LODWORD(v7) = 0;
            v157.Buffer = Pool2;
            if ( !Pool2 )
              goto LABEL_252;
            v25 = v157;
            *Pool2 = 0;
            v26 = *v18;
            TimeFields = (_TIME_FIELDS)v25;
            while ( 2 )
            {
              if ( v26 == (__int64 *)v18
                || v26 != *v18
                && RtlUnicodeStringCopyStringEx(
                     (PUNICODE_STRING)&TimeFields,
                     L" ",
                     (PUNICODE_STRING)&TimeFields,
                     0x800u) < 0 )
              {
                goto LABEL_66;
              }
              v27 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
              LODWORD(v148) = *((_DWORD *)v26 + 27);
              v146 = (__int64)(v26 + 9);
              v140 = (__int64)(v26 + 5);
              if ( v27 )
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v140,
                       v146,
                       v148) < 0 )
                  goto LABEL_66;
                v28 = v26[22];
                if ( !v28 )
                {
                  if ( *((int *)v26 + 112) < 0 )
                  {
                    LODWORD(v141) = *((_DWORD *)v26 + 112);
                    v29 = RtlUnicodeStringPrintfEx(
                            (PUNICODE_STRING)&TimeFields,
                            (PUNICODE_STRING)&TimeFields,
                            0x800u,
                            L":0x%08X",
                            v141);
LABEL_60:
                    if ( v29 < 0 )
                      goto LABEL_66;
                  }
LABEL_61:
                  v26 = (__int64 *)*v26;
                  continue;
                }
              }
              else
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v140,
                       v146,
                       v148) < 0 )
                  goto LABEL_66;
                v28 = v26[22];
                if ( !v28 )
                  goto LABEL_61;
              }
              break;
            }
            v29 = RtlUnicodeStringPrintfEx(
                    (PUNICODE_STRING)&TimeFields,
                    (PUNICODE_STRING)&TimeFields,
                    0x800u,
                    L":%ws",
                    v28);
            goto LABEL_60;
          }
        }
        if ( !v22 )
        {
          if ( v19[112] < 0 )
            v20 += 22;
          goto LABEL_44;
        }
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(v22 + 2 * v23) );
        goto LABEL_43;
      }
      LODWORD(v7) = 0;
    }
  }
  else
  {
    pszDest[0] = 0;
    LOBYTE(v17) = 0;
    v198[0] = 0;
    v155 = 0;
  }
LABEL_66:
  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
  {
    v30 = *(int **)(a2 + 24);
    if ( v30 != (int *)(a2 + 24) )
    {
      v31 = 0;
      while ( 1 )
      {
        v31 += *((unsigned __int16 *)v30 + 20) + *((unsigned __int16 *)v30 + 36) + 22;
        v32 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
        v33 = *((_QWORD *)v30 + 22);
        if ( v32 )
          break;
        if ( v33 )
        {
          v34 = -1LL;
          do
            ++v34;
          while ( *(_WORD *)(v33 + 2 * v34) );
LABEL_79:
          v31 += 2 * v34 + 2;
        }
LABEL_80:
        v30 = *(int **)v30;
        if ( v30 == (int *)(a2 + 24) )
        {
          if ( (unsigned int)(v31 + 2) <= 0xFFFE )
            v157.MaximumLength = v31 + 2;
          else
            v157.MaximumLength = -2;
          v35 = (wchar_t *)ExAllocatePool2(0x100uLL);
          v157.Buffer = v35;
          if ( v35 )
          {
            v36 = v157;
            *v35 = 0;
            v37 = *(__int64 **)(a2 + 24);
            TimeFields = (_TIME_FIELDS)v36;
            while ( 2 )
            {
              if ( v37 == (__int64 *)(a2 + 24)
                || v37 != *(__int64 **)(a2 + 24)
                && RtlUnicodeStringCopyStringEx(
                     (PUNICODE_STRING)&TimeFields,
                     L" ",
                     (PUNICODE_STRING)&TimeFields,
                     0x800u) < 0 )
              {
                goto LABEL_99;
              }
              v38 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
              LODWORD(v148) = *((_DWORD *)v37 + 27);
              v147 = (__int64)(v37 + 9);
              v142 = (__int64)(v37 + 5);
              if ( v38 )
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v142,
                       v147,
                       v148) < 0 )
                  goto LABEL_99;
                v39 = v37[22];
                if ( !v39 )
                {
                  if ( *((int *)v37 + 112) < 0 )
                  {
                    LODWORD(v143) = *((_DWORD *)v37 + 112);
                    v40 = RtlUnicodeStringPrintfEx(
                            (PUNICODE_STRING)&TimeFields,
                            (PUNICODE_STRING)&TimeFields,
                            0x800u,
                            L":0x%08X",
                            v143);
LABEL_97:
                    if ( v40 < 0 )
                      goto LABEL_99;
                  }
LABEL_98:
                  v37 = (__int64 *)*v37;
                  continue;
                }
              }
              else
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v142,
                       v147,
                       v148) < 0 )
                  goto LABEL_99;
                v39 = v37[22];
                if ( !v39 )
                  goto LABEL_98;
              }
              break;
            }
            v40 = RtlUnicodeStringPrintfEx(
                    (PUNICODE_STRING)&TimeFields,
                    (PUNICODE_STRING)&TimeFields,
                    0x800u,
                    L":%ws",
                    v39);
            goto LABEL_97;
          }
          goto LABEL_252;
        }
      }
      if ( !v33 )
      {
        if ( v30[112] < 0 )
          v31 += 22;
        goto LABEL_80;
      }
      v34 = -1LL;
      do
        ++v34;
      while ( *(_WORD *)(v33 + 2 * v34) );
      goto LABEL_79;
    }
LABEL_99:
    LODWORD(v7) = 0;
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140EF412A & 0x40) == 0 )
        goto LABEL_140;
      v66 = v154 & 1;
      if ( a3 )
      {
        v67 = *(const wchar_t **)(a3 + 64);
        if ( *(_DWORD *)(a3 + 108) != -1 )
          goto LABEL_127;
      }
      else
      {
        v67 = L"null";
      }
      if ( !a3 )
      {
        v68 = PiDevCfgNullGuid;
        v69 = 0LL;
        v70 = 0LL;
        goto LABEL_129;
      }
LABEL_127:
      v68 = (__int64 *)(a3 + 240);
      v69 = a3 + 272;
      v70 = a3 + 88;
LABEL_129:
      PnpGetLogString(*(_QWORD *)(v161 + 16) + 40LL);
      PnpGetLogString((__int64)&v157);
      PnpGetLogString(v71);
      PnpGetLogString(v70);
      LogString = PnpGetLogString(v69);
      McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
        v155,
        (__int64)KMPnPEvt_DeviceConfig_Blocked,
        (__int64)v74,
        *(const wchar_t **)(v158 + 8),
        v77,
        (__int64)v68,
        pszDest,
        v198,
        (const wchar_t *)LogString,
        v155,
        v73,
        v17,
        v74,
        v76,
        v66,
        97,
        v75,
        v67);
      v48 = a5;
      goto LABEL_130;
    }
    if ( (byte_140EF412A & 0x20) == 0 )
      goto LABEL_140;
    v78 = v154 & 1;
    if ( a3 )
    {
      v79 = *(const wchar_t **)(a3 + 64);
      if ( *(_DWORD *)(a3 + 108) != -1 )
        goto LABEL_137;
    }
    else
    {
      v79 = L"null";
    }
    if ( !a3 )
    {
      v80 = PiDevCfgNullGuid;
      v81 = 0LL;
      v82 = 0LL;
      goto LABEL_139;
    }
LABEL_137:
    v80 = (__int64 *)(a3 + 240);
    v81 = a3 + 272;
    v82 = a3 + 88;
LABEL_139:
    PnpGetLogString(*(_QWORD *)(v161 + 16) + 40LL);
    PnpGetLogString((__int64)&v157);
    PnpGetLogString(v83);
    PnpGetLogString(v82);
    v84 = PnpGetLogString(v81);
    v151 = v79;
    v48 = a5;
    McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
      v155,
      (__int64)KMPnPEvt_DeviceConfig_Failure,
      (__int64)v86,
      *(const wchar_t **)(v158 + 8),
      v89,
      (__int64)v80,
      pszDest,
      v198,
      (const wchar_t *)v84,
      v155,
      v85,
      v17,
      v86,
      v88,
      v78,
      a5,
      v87,
      v151);
    goto LABEL_130;
  }
  if ( (v154 & 0x70) != 0 )
  {
    if ( (byte_140EF412A & 0x40) == 0 )
      goto LABEL_140;
    v54 = v154 & 1;
    if ( a3 )
    {
      v55 = *(const wchar_t **)(a3 + 64);
      if ( *(_DWORD *)(a3 + 108) != -1 )
        goto LABEL_117;
    }
    else
    {
      v55 = L"null";
    }
    if ( !a3 )
    {
      v56 = PiDevCfgNullGuid;
      v57 = 0LL;
      v58 = 0LL;
      goto LABEL_119;
    }
LABEL_117:
    v56 = (__int64 *)(a3 + 240);
    v57 = a3 + 272;
    v58 = a3 + 88;
LABEL_119:
    PnpGetLogString(*(_QWORD *)(v161 + 16) + 40LL);
    PnpGetLogString((__int64)&v157);
    PnpGetLogString(v59);
    PnpGetLogString(v58);
    v60 = PnpGetLogString(v57);
    v150 = v55;
    v48 = a5;
    McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
      v155,
      (__int64)KMPnPEvt_DeviceConfig_RebootRequired,
      (__int64)v62,
      *(const wchar_t **)(v158 + 8),
      v65,
      (__int64)v56,
      pszDest,
      v198,
      (const wchar_t *)v60,
      v155,
      v61,
      v17,
      v62,
      v64,
      v54,
      a5,
      v63,
      v150);
    goto LABEL_130;
  }
  if ( (byte_140EF412A & 0x10) == 0 )
  {
LABEL_140:
    v48 = a5;
    goto LABEL_141;
  }
  v41 = v154 & 1;
  if ( a3 )
  {
    v42 = *(const wchar_t **)(a3 + 64);
    if ( *(_DWORD *)(a3 + 108) != -1 )
      goto LABEL_108;
  }
  else
  {
    v42 = L"null";
  }
  if ( !a3 )
  {
    v43 = PiDevCfgNullGuid;
    v44 = 0LL;
    v45 = 0LL;
    goto LABEL_110;
  }
LABEL_108:
  v43 = (__int64 *)(a3 + 240);
  v44 = a3 + 272;
  v45 = a3 + 88;
LABEL_110:
  PnpGetLogString(*(_QWORD *)(v161 + 16) + 40LL);
  PnpGetLogString((__int64)&v157);
  PnpGetLogString(v46);
  PnpGetLogString(v45);
  v47 = PnpGetLogString(v44);
  v149 = v42;
  v48 = a5;
  McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
    v155,
    (__int64)&KMPnPEvt_DeviceConfig_Success,
    (__int64)v50,
    *(const wchar_t **)(v158 + 8),
    v53,
    (__int64)v43,
    pszDest,
    v198,
    (const wchar_t *)v47,
    v155,
    v49,
    v17,
    v50,
    v52,
    v41,
    a5,
    v51,
    v149);
LABEL_130:
  v10 = v156;
  LODWORD(v7) = 0;
LABEL_141:
  if ( !a3 )
    goto LABEL_252;
  v90 = a6;
  v91 = *(_QWORD **)(a3 + 208);
  if ( v91 != (_QWORD *)(a3 + 208) )
  {
    do
    {
      v91 = (_QWORD *)*v91;
      ++v10;
    }
    while ( v91 != (_QWORD *)(a3 + 208) );
    if ( v10 )
    {
      v92 = 0x7FFF;
      if ( (unsigned int)(1646 * v10 + 2) <= 0x7FFF )
      {
        v92 = 1646 * v10 + 2;
        v163.MaximumLength = v92;
      }
      else
      {
        v163.MaximumLength = 0x7FFF;
      }
      v163.Length = 0;
      v93 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v163.Buffer = v93;
      if ( !v93 )
        goto LABEL_252;
      memset_0(v93, 0, v92);
      v94 = *(__int64 **)(a3 + 208);
      v163.MaximumLength = v92 - 2;
      TimeFields = (_TIME_FIELDS)v163;
      if ( v94 != (__int64 *)(a3 + 208) )
      {
        v95 = v154 & 1;
        do
        {
          v96 = v95 | 0x10;
          if ( !*((_DWORD *)v94 + 105) )
            v96 = v95;
          PiDevCfgLogDeviceConfigured(v161, v158, (_DWORD)v94, v96, a5, v90, v171);
          memset_0(&v175, 0, 0xA0uLL);
          v97 = v94[2];
          v175 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
          p_DestinationString = &v172;
          v180 = DEVPKEY_DriverPackage_ExtensionId;
          p_UnicodeString = &Guid;
          v178 = 6;
          v186 = DEVPKEY_DriverPackage_DriverFlightIds;
          v189 = 6;
          v188 = &v162;
          v191 = DEVPKEY_DriverPackage_SubmissionId;
          v193 = &v173;
          v195 = 6;
          v98 = v94[8];
          v176 = 18;
          v181 = 13;
          v183 = 16;
          v187 = 8210;
          v192 = 18;
          if ( (int)PiDevCfgQueryObjectProperties(18, v98, 8, v97, (__int64)&v175, 4) >= 0 )
          {
            if ( v179 < 0 && !RtlCreateUnicodeString(&v172, (PCWSTR)v94[6]) )
              RtlInitUnicodeString(&v172, 0LL);
            if ( v185 < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
              RtlInitUnicodeString(&GuidString, 0LL);
            if ( v190 < 0 )
              RtlInitUnicodeString(&v162, 0LL);
            if ( v162.Buffer && (v99 = v162.Length, v162.Length > 4u) )
            {
              v100 = 0;
              if ( (unsigned __int64)v162.Length >> 1 != 2 )
              {
                v101 = 0LL;
                do
                {
                  if ( !v162.Buffer[v101] )
                  {
                    v162.Buffer[v101] = 59;
                    v99 = v162.Length;
                  }
                  v101 = ++v100;
                }
                while ( v100 < ((unsigned __int64)v99 >> 1) - 2 );
                v90 = a6;
              }
              v162.Length = v99 - 2;
            }
            else
            {
              RtlFreeAnsiString(&v162);
              RtlInitUnicodeString(&v162, 0LL);
            }
            if ( v196 < 0 )
              RtlInitUnicodeString(&v173, 0LL);
            v102 = &v173;
            if ( !v173.Buffer )
              v102 = (UNICODE_STRING *)&PiDevCfgEmptyString;
            v103 = &v162;
            v104 = L",";
            if ( !v162.Buffer )
              v103 = (UNICODE_STRING *)&PiDevCfgEmptyString;
            if ( v94 == *(__int64 **)(a3 + 208) )
              v104 = &word_140B8A320;
            v105 = RtlUnicodeStringPrintfEx(
                     (PUNICODE_STRING)&TimeFields,
                     (PUNICODE_STRING)&TimeFields,
                     0x800u,
                     L"%ws%wZ:%wZ:%wZ:%wZ",
                     v104,
                     &v172,
                     &GuidString,
                     v103,
                     v102);
            RtlFreeAnsiString(&GuidString);
            RtlFreeAnsiString(&v162);
            RtlFreeAnsiString(&v172);
            RtlFreeAnsiString(&v173);
            if ( v105 < 0 )
              break;
          }
          v94 = (__int64 *)*v94;
        }
        while ( v94 != (__int64 *)(a3 + 208) );
        v48 = a5;
      }
      LODWORD(v7) = 0;
    }
  }
  v106 = v158;
  if ( *(_QWORD *)(v158 + 48) )
    v7 = *(_QWORD *)(v158 + 48);
  if ( *(_QWORD *)(v158 + 64) && *(_WORD *)(v158 + 56) > 2u )
  {
    v107 = *(_QWORD *)(v158 + 64);
    v108 = -1LL;
    do
      ++v108;
    while ( *(_WORD *)(v107 + 2 * v108) );
    while ( *(_WORD *)(v107 + 2 * v108 + 2) )
    {
      v109 = -1LL;
      do
        ++v109;
      while ( *(_WORD *)(v107 + 2 * v109) );
      v110 = v107 + 2 * v109;
      v108 = -1LL;
      v107 = v110 + 2;
      do
        ++v108;
      while ( *(_WORD *)(v107 + 2 * v108) );
    }
  }
  else
  {
    LODWORD(v107) = 0;
  }
  v111 = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
    v111 = *(wchar_t **)(a3 + 48);
  if ( *(_QWORD *)(a3 + 312) && *(_WORD *)(a3 + 304) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v165, a3 + 304) )
      goto LABEL_252;
    v112 = v165.Length;
    v113 = 0;
    v114 = ((unsigned __int64)v165.Length >> 1) - 2;
    if ( (unsigned __int64)v165.Length >> 1 != 2 )
    {
      v115 = v165.Buffer;
      v116 = 0LL;
      do
      {
        if ( !v115[v116] )
          v115[v116] = 59;
        v116 = ++v113;
      }
      while ( v113 < v114 );
    }
    v165.Length = v112 - 2;
  }
  if ( *(_QWORD *)(a3 + 328) && *(_WORD *)(a3 + 320) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v166, a3 + 320) )
      goto LABEL_252;
    v117 = v166.Length;
    v118 = 0;
    v119 = ((unsigned __int64)v166.Length >> 1) - 2;
    if ( (unsigned __int64)v166.Length >> 1 != 2 )
    {
      v120 = v166.Buffer;
      v121 = 0LL;
      do
      {
        if ( !v120[v121] )
          v120[v121] = 59;
        v121 = ++v118;
      }
      while ( v118 < v119 );
    }
    v166.Length = v117 - 2;
  }
  if ( *(_QWORD *)(a3 + 344) && *(_WORD *)(a3 + 336) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v167, a3 + 336) )
      goto LABEL_252;
    v122 = v167.Length;
    v123 = 0;
    v124 = ((unsigned __int64)v167.Length >> 1) - 2;
    if ( (unsigned __int64)v167.Length >> 1 != 2 )
    {
      v125 = v167.Buffer;
      v126 = 0LL;
      do
      {
        if ( !v125[v126] )
          v125[v126] = 59;
        v126 = ++v123;
      }
      while ( v123 < v124 );
      v90 = a6;
    }
    v167.Length = v122 - 2;
  }
  if ( *(_QWORD *)(a3 + 408) && *(_WORD *)(a3 + 400) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v168, a3 + 400) )
      goto LABEL_252;
    v127 = v168.Length;
    v128 = 0;
    v129 = ((unsigned __int64)v168.Length >> 1) - 2;
    if ( (unsigned __int64)v168.Length >> 1 != 2 )
    {
      v130 = v168.Buffer;
      v131 = 0LL;
      do
      {
        if ( !v130[v131] )
          v130[v131] = 59;
        v131 = ++v128;
      }
      while ( v128 < v129 );
      v48 = a5;
    }
    v168.Length = v127 - 2;
  }
  memset_0(&v175, 0, 0xA0uLL);
  v132 = *(_QWORD *)(v106 + 16);
  v133 = *(_QWORD *)(v106 + 8);
  v175 = DEVPKEY_Device_DriverSoftwareLinks;
  p_DestinationString = &v160;
  v180 = DEVPKEY_Device_PendingSoftwareInstall;
  v176 = 8210;
  v178 = 6;
  v181 = 17;
  p_UnicodeString = 0LL;
  v183 = 0;
  if ( (int)PiDevCfgQueryObjectProperties(0, v133, 1, v132, (__int64)&v175, 2) >= 0 )
  {
    if ( v179 < 0 )
      RtlInitUnicodeString(&v160, 0LL);
    v134 = v160.Buffer;
    if ( v160.Buffer && (v135 = v160.Length, v160.Length > 4u) )
    {
      v136 = 0;
      if ( (unsigned __int64)v160.Length >> 1 != 2 )
      {
        v137 = 0LL;
        do
        {
          if ( !v134[v137] )
          {
            v134[v137] = 59;
            v134 = v160.Buffer;
            v135 = v160.Length;
          }
          v137 = ++v136;
        }
        while ( v136 < ((unsigned __int64)v135 >> 1) - 2 );
        v90 = a6;
      }
      v160.Length = v135 - 2;
    }
    else
    {
      RtlFreeAnsiString(&v160);
      RtlInitUnicodeString(&v160, 0LL);
      v134 = v160.Buffer;
    }
    PnpTraceDeviceConfig(
      v161 + 40,
      *(_QWORD *)(v161 + 16) + 40,
      v7,
      v107,
      *(_QWORD *)(a3 + 264),
      *(_QWORD *)(a3 + 64),
      (__int64)v111,
      *(_QWORD *)(a3 + 280),
      (__int64)pszDest,
      (__int64)v198,
      (__int64)v170.Buffer,
      *(_QWORD *)(a3 + 80),
      *(_QWORD *)(a3 + 296),
      (__int64)v165.Buffer,
      (__int64)v166.Buffer,
      (__int64)v167.Buffer,
      (__int64)v134,
      v185 == -1073741789,
      (__int64)v163.Buffer,
      (__int64)v168.Buffer,
      v155,
      v152 != 0,
      (__int64)&UnicodeString,
      PnpSetupInProgress != 0,
      (v154 & 0x70) != 0,
      v90,
      v48,
      v171);
  }
LABEL_252:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v157);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v170);
  RtlFreeAnsiString(&v163);
  RtlFreeAnsiString(&v165);
  RtlFreeAnsiString(&v166);
  RtlFreeAnsiString(&v167);
  RtlFreeAnsiString(&v160);
  RtlFreeAnsiString(&v168);
}
