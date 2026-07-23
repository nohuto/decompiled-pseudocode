/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x140AE6D34
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x1404EA8CC (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405DD9A8 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405DDA04 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405DDB08 (PiDevCfgMatchDriverConfigurationId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiDevCfgClearDeviceDrivers @ 0x1407AC044 (PiDevCfgClearDeviceDrivers.c)
 *     PiDevCfgQueryDriverPolicy @ 0x1407AD398 (PiDevCfgQueryDriverPolicy.c)
 *     PnpIsNullGuid @ 0x140950904 (PnpIsNullGuid.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140ADFF30 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140B72708 (PiDevCfgQueryDriverNode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  __int64 v4; // rdi
  int ObjectProperty; // esi
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // eax
  ULONG v10; // r13d
  _WORD *v11; // rbx
  unsigned int v12; // ecx
  const WCHAR *v13; // r15
  int v14; // edi
  void *Pool2; // rax
  const wchar_t *v16; // rdi
  wchar_t *v17; // rbx
  unsigned int v18; // r8d
  const WCHAR *v19; // r10
  int v20; // eax
  int v21; // edx
  char v22; // bl
  __int64 v23; // rax
  wchar_t *v24; // rdi
  unsigned int v25; // r15d
  wchar_t *v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 *v31; // rax
  wchar_t *v32; // rcx
  wchar_t *v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  bool v40; // sf
  int v41; // eax
  wchar_t *v42; // r13
  wchar_t *v43; // rax
  wchar_t *v44; // rbx
  wchar_t *v45; // rax
  __int64 *v46; // rcx
  __int64 *v47; // rax
  wchar_t *v48; // rax
  wchar_t *v49; // rbx
  wchar_t *v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  bool v56; // zf
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 *v59; // rdx
  int v60; // ebx
  __int64 v61; // r12
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r15
  unsigned int v66; // edi
  unsigned int v67; // r8d
  unsigned int v68; // r11d
  unsigned int v69; // edx
  __int64 v70; // rbx
  _QWORD *v71; // r10
  __int64 v72; // rax
  __int64 *v73; // rdx
  const wchar_t *v74; // rbx
  __int64 v75; // rax
  int v76; // eax
  _QWORD *v77; // rdi
  __int64 i; // rbx
  __int64 *v79; // rcx
  __int64 v80; // rcx
  __int64 *v81; // rax
  _QWORD *v82; // rcx
  bool IsNullGuid; // al
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v89; // [rsp+60h] [rbp-79h] BYREF
  __int64 v90; // [rsp+68h] [rbp-71h] BYREF
  __int64 *v91; // [rsp+70h] [rbp-69h]
  int v92; // [rsp+78h] [rbp-61h]
  const wchar_t *v93; // [rsp+80h] [rbp-59h]
  ULONG v94; // [rsp+88h] [rbp-51h] BYREF
  int v95; // [rsp+8Ch] [rbp-4Dh] BYREF
  __int64 v96; // [rsp+90h] [rbp-49h] BYREF
  __int64 *v97; // [rsp+98h] [rbp-41h]
  int v98; // [rsp+A0h] [rbp-39h] BYREF
  unsigned int v99; // [rsp+A4h] [rbp-35h]
  PVOID P; // [rsp+A8h] [rbp-31h]
  wchar_t *Str; // [rsp+B0h] [rbp-29h]
  int v102; // [rsp+B8h] [rbp-21h]
  __int64 v103; // [rsp+C0h] [rbp-19h]
  const WCHAR *v104; // [rsp+C8h] [rbp-11h]
  const wchar_t *v105; // [rsp+D0h] [rbp-9h]
  __int64 *v106; // [rsp+D8h] [rbp-1h]
  __int64 v107[2]; // [rsp+E0h] [rbp+7h] BYREF
  int v108; // [rsp+F0h] [rbp+17h]

  v106 = a3;
  v103 = a1;
  v108 = 0;
  Str = 0LL;
  v91 = &v90;
  v105 = 0LL;
  v90 = (__int64)&v90;
  v95 = 0;
  v97 = &v96;
  v4 = a1;
  v98 = 1;
  v96 = (__int64)&v96;
  ObjectProperty = 0;
  v6 = 0;
  v94 = 0;
  v89 = 0LL;
  v7 = 0LL;
  *(_OWORD *)v107 = 0LL;
  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
    PiDevCfgClearDeviceDrivers(v4);
  if ( a2 )
  {
    Str = a2;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v105 = (const wchar_t *)((unsigned __int64)&a2[v8 + 1] & -(__int64)(a2[v8 + 1] != 0));
  }
  v9 = 1;
  if ( PnpSetupInProgress )
    v9 = 3;
  v102 = v9;
  if ( (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline() )
    PiDevCfgQueryDriverPolicy((unsigned int *)v107);
  v10 = 520;
  P = (PVOID)ExAllocatePool2(0x100uLL);
  v11 = P;
  if ( !P )
  {
LABEL_12:
    ObjectProperty = -1073741670;
    goto LABEL_203;
  }
  v12 = 0;
  v99 = 0;
  do
  {
    v13 = *(const WCHAR **)(v4 + 16 * (v12 + 3LL));
    v104 = v13;
    if ( !v13 )
      goto LABEL_101;
    v14 = 0;
    v92 = 0;
    if ( *v13 )
    {
      while ( 1 )
      {
        v98 = 1;
        v94 = 0;
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v13,
                           11,
                           (char *)0xFFFFFFFFFFFFFFFFLL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           &v98,
                           (__int64)v11,
                           v10,
                           (__int64)&v94,
                           0);
        if ( ObjectProperty < 0 )
        {
          while ( ObjectProperty == -1073741789 )
          {
            if ( v94 <= v10 )
              goto LABEL_40;
            v10 = v94;
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            P = Pool2;
            v11 = Pool2;
            if ( !Pool2 )
              goto LABEL_12;
            ObjectProperty = PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v13,
                               11,
                               (char *)0xFFFFFFFFFFFFFFFFLL,
                               0LL,
                               (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                               &v98,
                               (__int64)Pool2,
                               v10,
                               (__int64)&v94,
                               0);
            if ( ObjectProperty >= 0 )
              goto LABEL_23;
          }
        }
        if ( ObjectProperty == -1073741670 )
          goto LABEL_98;
        P = v11;
        if ( ObjectProperty < 0 )
        {
          P = v11;
          if ( ObjectProperty == -1073741790 || (P = v11, ObjectProperty == -1073740697) )
          {
            if ( v6 != -1073741772 )
              v6 = ObjectProperty;
          }
          else
          {
            P = v11;
            if ( ObjectProperty == -1073741772 )
            {
              v6 = -1073741772;
              P = v11;
            }
          }
LABEL_40:
          ObjectProperty = 0;
          goto LABEL_83;
        }
LABEL_23:
        if ( v98 == 8210 )
        {
          v16 = v11;
          if ( *v11 )
          {
            while ( 1 )
            {
              v17 = wcschr(v16, 0x5Cu);
              if ( !v17 )
                goto LABEL_79;
              ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(v16, 0LL, 0LL, (__int64)&v95);
              if ( ObjectProperty < 0 )
                goto LABEL_82;
              v18 = v99;
              v19 = v16;
              v20 = v102;
              v16 = v17 + 1;
              *v17 = 0;
              v21 = v20;
              v22 = v95;
              v93 = v16;
              if ( v18 == 2 )
              {
                if ( (_BYTE)v95 != 3 )
                  goto LABEL_79;
                v21 = v20 | 8;
              }
              if ( (_BYTE)v95 != 1 && (_BYTE)v95 != 2 && (_BYTE)v95 != 3 )
                goto LABEL_79;
              ObjectProperty = PiDevCfgQueryDriverNode(v19, v13, v21, (__int64)v107, (__int64)&v89);
              if ( ObjectProperty < 0 )
              {
                ObjectProperty = 0;
                goto LABEL_79;
              }
              v23 = v89;
              v24 = *(wchar_t **)(v89 + 168);
              if ( v24 )
              {
                if ( *v24 )
                {
                  do
                  {
                    v25 = 0;
                    while ( 1 )
                    {
                      v26 = *(wchar_t **)(v103 + 16 * (v25 + 3LL));
                      if ( v26 )
                      {
                        if ( PnpMultiSzContainsString(v26, v24) )
                          break;
                      }
                      if ( ++v25 >= 3 )
                        goto LABEL_53;
                    }
                    *(_QWORD *)(v89 + 176) = v24;
LABEL_53:
                    v23 = v89;
                    if ( *(_QWORD *)(v89 + 176) )
                      break;
                    v27 = -1LL;
                    do
                      ++v27;
                    while ( v24[v27] );
                    v24 += v27 + 1;
                  }
                  while ( *v24 );
                  v13 = v104;
                }
                if ( *(_QWORD *)(v23 + 176) )
                  *(_DWORD *)(v23 + 108) |= 0xFFFFu;
              }
              if ( !(unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline() )
                break;
              if ( v22 == 3 )
                goto LABEL_62;
              v30 = (__int64 *)v89;
              if ( (*(_DWORD *)(v89 + 184) & 0x200) != 0 )
              {
                v31 = v91;
                if ( (__int64 *)*v91 != &v90 )
                  goto LABEL_211;
                *(_QWORD *)(v89 + 8) = v91;
                *v30 = (__int64)&v90;
                v32 = Str;
                *v31 = (__int64)v30;
                v91 = v30;
                if ( v32 && PiDevCfgMatchDriverConfigurationId(v89, v32) )
                  v6 = -1073740949;
                goto LABEL_78;
              }
              if ( Str )
              {
                v33 = Str;
                v34 = v89;
LABEL_94:
                if ( !PiDevCfgMatchDriverConfigurationId(v34, v33) )
                {
                  v35 = v91;
                  v36 = v89;
                  if ( (__int64 *)*v91 != &v90 )
                    goto LABEL_211;
                  *(_QWORD *)v89 = &v90;
                  *(_QWORD *)(v36 + 8) = v35;
                  *v35 = v36;
                  v91 = (__int64 *)v36;
                  goto LABEL_78;
                }
                goto LABEL_73;
              }
LABEL_74:
              if ( v30[22] )
              {
                v37 = v91;
LABEL_76:
                if ( (__int64 *)*v37 != &v90 )
                  goto LABEL_211;
                *v30 = (__int64)&v90;
                v30[1] = (__int64)v37;
                *v37 = (__int64)v30;
                v91 = v30;
                goto LABEL_78;
              }
              if ( v7 )
              {
                v40 = (int)PiDevCfgCompareDrivers((__int64)v30, v7, 0) < 0;
                v37 = v91;
                if ( v40 )
                {
                  if ( (__int64 *)*v91 != &v90 )
                    goto LABEL_211;
                  *(_QWORD *)v7 = &v90;
                  *(_QWORD *)(v7 + 8) = v37;
                  *v37 = v7;
                  v91 = (__int64 *)v7;
                  v7 = v89;
                  goto LABEL_78;
                }
                goto LABEL_76;
              }
              v7 = (__int64)v30;
LABEL_78:
              v16 = v93;
LABEL_79:
              v38 = -1LL;
              do
                ++v38;
              while ( v16[v38] );
              v16 += v38 + 1;
              if ( !*v16 )
                goto LABEL_82;
            }
            if ( v22 == 3 )
            {
LABEL_62:
              v28 = v97;
              v29 = v89;
              if ( (__int64 *)*v97 != &v96 )
                goto LABEL_211;
              *(_QWORD *)v89 = &v96;
              *(_QWORD *)(v29 + 8) = v28;
              *v28 = v29;
              v97 = (__int64 *)v29;
              goto LABEL_78;
            }
            if ( Str )
            {
              v33 = Str;
              v34 = v89;
              goto LABEL_94;
            }
LABEL_73:
            v30 = (__int64 *)v89;
            goto LABEL_74;
          }
LABEL_82:
          v14 = v92;
        }
LABEL_83:
        v39 = -1LL;
        do
          ++v39;
        while ( v13[v39] );
        v11 = P;
        v13 += v39 + 1;
        ++v14;
        v104 = v13;
        v92 = v14;
        if ( !*v13 )
        {
LABEL_98:
          v12 = v99;
          break;
        }
      }
    }
    v13 = 0LL;
    if ( ObjectProperty < 0 )
      goto LABEL_203;
    v4 = v103;
LABEL_101:
    v99 = ++v12;
  }
  while ( v12 < 3 );
  v41 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
  v42 = Str;
  if ( !Str )
  {
LABEL_119:
    if ( !v7 )
      goto LABEL_120;
LABEL_129:
    while ( 1 )
    {
      v54 = v90;
      if ( (__int64 *)v90 == &v90 )
        break;
      if ( *(__int64 **)(v90 + 8) != &v90 )
        goto LABEL_211;
      v55 = *(_QWORD *)v90;
      if ( *(_QWORD *)(*(_QWORD *)v90 + 8LL) != v90 )
        goto LABEL_211;
      v90 = *(_QWORD *)v90;
      *(_QWORD *)(v55 + 8) = &v90;
      v89 = v54;
      v56 = (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() == 0;
      v57 = v4 + 24;
      v58 = v89;
      if ( v56 )
        v57 = v7 + 224;
      v59 = *(__int64 **)(v57 + 8);
      if ( *v59 != v57 )
        goto LABEL_211;
      *(_QWORD *)v89 = v57;
      *(_QWORD *)(v58 + 8) = v59;
      *v59 = v58;
      *(_QWORD *)(v57 + 8) = v58;
      if ( (*(_DWORD *)(v89 + 184) & 4) != 0 )
      {
        v60 = *(_DWORD *)(v7 + 184);
        if ( (v60 & 8) == 0 && (int)PiDevCfgCompareDrivers(v89, v7, 4) < 0 )
          *(_DWORD *)(v7 + 184) = v60 | 8;
      }
    }
    v61 = v103;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v62 = v96;
          if ( (__int64 *)v96 == &v96 )
          {
            *v106 = v7;
            v7 = (__int64)v13;
            goto LABEL_203;
          }
          if ( *(__int64 **)(v96 + 8) != &v96 )
            goto LABEL_211;
          v63 = *(_QWORD *)v96;
          if ( *(_QWORD *)(*(_QWORD *)v96 + 8LL) != v96 )
            goto LABEL_211;
          v96 = *(_QWORD *)v96;
          *(_QWORD *)(v63 + 8) = &v96;
          v89 = v62;
          if ( !PnpIsNullGuid((void *)(v62 + 188)) )
          {
            v64 = v89;
            if ( *(const WCHAR **)(v89 + 176) == v13 )
              break;
          }
          if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
            goto LABEL_176;
          IsNullGuid = PnpIsNullGuid((void *)(v89 + 188));
          *(_DWORD *)(v89 + 448) = IsNullGuid ? -1073741811 : -1073741637;
LABEL_156:
          v72 = v89;
          v73 = *(__int64 **)(v61 + 32);
          if ( *v73 != v61 + 24 )
            goto LABEL_211;
          *(_QWORD *)v89 = v61 + 24;
          *(_QWORD *)(v72 + 8) = v73;
          *v73 = v72;
          *(_QWORD *)(v61 + 32) = v72;
        }
        v65 = *(_QWORD *)(v89 + 144);
        if ( v65 )
        {
          v66 = *(_DWORD *)(v7 + 152);
          v67 = 0;
          if ( !v66 )
          {
LABEL_154:
            v13 = 0LL;
            if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
            {
              *(_DWORD *)(v89 + 448) = -1073741127;
              goto LABEL_156;
            }
            goto LABEL_176;
          }
          v68 = *(_DWORD *)(v89 + 152);
          while ( 1 )
          {
            v69 = 0;
            if ( v68 )
            {
              v70 = *(_QWORD *)(v7 + 144);
              while ( 1 )
              {
                v71 = (_QWORD *)(v65 + 16LL * v69);
                if ( *(_QWORD *)(v70 + 16LL * v67) == *v71 && *(_QWORD *)(v70 + 16LL * v67 + 8) == v71[1] )
                  break;
                if ( ++v69 >= v68 )
                  goto LABEL_153;
              }
              if ( v71 )
                break;
            }
LABEL_153:
            if ( ++v67 >= v66 )
              goto LABEL_154;
          }
        }
        v13 = 0LL;
        if ( !v42 )
          break;
        if ( !v105 )
          goto LABEL_171;
        if ( *v105 != 42 || v105[1] )
        {
          v74 = v105;
          if ( !*v105 )
            goto LABEL_171;
          while ( !PiDevCfgMatchDriverConfigurationId(v64, v74) )
          {
            v75 = -1LL;
            do
              ++v75;
            while ( v74[v75] );
            v74 += v75 + 1;
            if ( !*v74 )
              goto LABEL_171;
            v64 = v89;
          }
          v64 = v89;
        }
        if ( v64 )
          break;
LABEL_171:
        if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
        {
          *(_DWORD *)(v89 + 448) = -1073740007;
          goto LABEL_156;
        }
LABEL_176:
        PiDevCfgFreeDriverNode(v89);
      }
      v76 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
      v77 = (_QWORD *)v89;
      if ( v76 && (*(_DWORD *)(v89 + 184) & 0x200) != 0 )
      {
        if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_176;
        goto LABEL_156;
      }
      for ( i = *(_QWORD *)(v7 + 208); ; i = *(_QWORD *)i )
      {
        if ( i == v7 + 208 )
          goto LABEL_197;
        if ( *(_QWORD *)(i + 188) == *(_QWORD *)(v89 + 188) && *(_QWORD *)(i + 196) == *(_QWORD *)(v89 + 196) )
          break;
      }
      if ( *(_QWORD *)(i + 144) )
      {
        if ( !*(_QWORD *)(v89 + 144) )
          goto LABEL_185;
      }
      else if ( *(_QWORD *)(v89 + 144) )
      {
        goto LABEL_192;
      }
      if ( (int)PiDevCfgCompareDrivers(v89, i, 0) >= 0 )
      {
LABEL_185:
        i = (__int64)v77;
        v89 = 0LL;
        v77 = 0LL;
        goto LABEL_186;
      }
LABEL_192:
      v80 = *(_QWORD *)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i )
        goto LABEL_211;
      v81 = *(__int64 **)(i + 8);
      if ( *v81 != i )
        goto LABEL_211;
      *v81 = v80;
      *(_QWORD *)(v80 + 8) = v81;
      v77 = (_QWORD *)v89;
LABEL_186:
      if ( i )
      {
        if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
        {
          *(_DWORD *)(i + 448) = -1073741198;
          v79 = *(__int64 **)(v61 + 32);
          if ( *v79 != v61 + 24 )
            goto LABEL_211;
          *(_QWORD *)i = v61 + 24;
          *(_QWORD *)(i + 8) = v79;
          *v79 = i;
          *(_QWORD *)(v61 + 32) = i;
        }
        else
        {
          PiDevCfgFreeDriverNode(i);
        }
        v77 = (_QWORD *)v89;
      }
LABEL_197:
      if ( v77 )
      {
        v82 = *(_QWORD **)(v7 + 216);
        if ( *v82 != v7 + 208 )
          goto LABEL_211;
        *v77 = v7 + 208;
        v77[1] = v82;
        *v82 = v77;
        *(_QWORD *)(v7 + 216) = v77;
      }
    }
  }
  if ( v7 )
    goto LABEL_129;
  if ( !v41 )
  {
    v48 = wcschr(Str, 0x3Au);
    v49 = v48;
    if ( v48 )
    {
      *v48 = (unsigned __int16)v13;
      v50 = wcschr(v48 + 1, 0x2Cu);
      if ( v50 )
      {
        *v50 = (unsigned __int16)v13;
        if ( (int)PiDevCfgQueryDriverNode(v42, v49 + 1, 4, (__int64)v107, (__int64)&v89) >= 0 )
        {
          v7 = v89;
          goto LABEL_119;
        }
        goto LABEL_120;
      }
    }
LABEL_107:
    ObjectProperty = -1073741773;
    goto LABEL_203;
  }
  if ( v6 == -1073740949 )
    goto LABEL_120;
  v43 = wcschr(Str, 0x3Au);
  v44 = v43;
  if ( !v43 )
    goto LABEL_107;
  *v43 = (unsigned __int16)v13;
  v45 = wcschr(v43 + 1, 0x2Cu);
  if ( !v45 )
    goto LABEL_107;
  *v45 = (unsigned __int16)v13;
  if ( (int)PiDevCfgQueryDriverNode(v42, v44 + 1, 4, (__int64)v107, (__int64)&v89) >= 0 )
  {
    v46 = (__int64 *)v89;
    if ( (*(_DWORD *)(v89 + 184) & 0x200) != 0 )
    {
      v47 = v91;
      if ( (__int64 *)*v91 != &v90 )
        goto LABEL_211;
      *(_QWORD *)(v89 + 8) = v91;
      *v46 = (__int64)&v90;
      v6 = -1073740949;
      *v47 = (__int64)v46;
      v91 = v46;
      v46 = (__int64 *)v13;
      v89 = (__int64)v13;
    }
    if ( v46 )
    {
      v7 = (__int64)v46;
      goto LABEL_119;
    }
  }
LABEL_120:
  if ( !v6 || (ObjectProperty = v6, v6 == -1073741772) )
    ObjectProperty = -1073740656;
  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
  {
    while ( 1 )
    {
      v51 = (_QWORD *)v90;
      if ( (__int64 *)v90 == &v90 )
        goto LABEL_203;
      if ( *(__int64 **)(v90 + 8) != &v90 )
        break;
      v52 = *(_QWORD *)v90;
      if ( *(_QWORD *)(*(_QWORD *)v90 + 8LL) != v90 )
        break;
      v90 = *(_QWORD *)v90;
      *(_QWORD *)(v52 + 8) = &v90;
      v53 = *(_QWORD **)(v4 + 32);
      v89 = (__int64)v51;
      if ( *v53 != v4 + 24 )
        break;
      *v51 = v4 + 24;
      v51[1] = v53;
      *v53 = v51;
      *(_QWORD *)(v4 + 32) = v51;
    }
LABEL_211:
    __fastfail(3u);
  }
LABEL_203:
  while ( 1 )
  {
    v84 = v90;
    if ( (__int64 *)v90 == &v90 )
      break;
    if ( *(__int64 **)(v90 + 8) != &v90 )
      goto LABEL_211;
    v85 = *(_QWORD *)v90;
    if ( *(_QWORD *)(*(_QWORD *)v90 + 8LL) != v90 )
      goto LABEL_211;
    v90 = *(_QWORD *)v90;
    *(_QWORD *)(v85 + 8) = &v90;
    v89 = v84;
    PiDevCfgFreeDriverNode(v84);
  }
  while ( 1 )
  {
    v86 = v96;
    if ( (__int64 *)v96 == &v96 )
      break;
    if ( *(__int64 **)(v96 + 8) != &v96 )
      goto LABEL_211;
    v87 = *(_QWORD *)v96;
    if ( *(_QWORD *)(*(_QWORD *)v96 + 8LL) != v96 )
      goto LABEL_211;
    v96 = *(_QWORD *)v96;
    *(_QWORD *)(v87 + 8) = &v96;
    v89 = v86;
    PiDevCfgFreeDriverNode(v86);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
