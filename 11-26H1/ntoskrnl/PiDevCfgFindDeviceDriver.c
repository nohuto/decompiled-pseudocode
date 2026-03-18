/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x140ACF544
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407A8DA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AC218 (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x1404F12EC (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x1404FAAEC (PnpMultiSzContainsString.c)
 *     wcschr @ 0x140537F60 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405DB258 (PiDevCfgMatchDriverConfigurationId.c)
 *     PnpIsNullGuid @ 0x14098FEA4 (PnpIsNullGuid.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     PiDevCfgFreeDriverNode @ 0x140ACF14C (PiDevCfgFreeDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140ACFF04 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryDriverNode @ 0x140AD009C (PiDevCfgQueryDriverNode.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  __int64 v3; // rbx
  int v4; // esi
  int v5; // r13d
  __int64 v6; // r14
  int v7; // eax
  ULONG v8; // r12d
  wchar_t *Pool2; // rax
  __int64 v10; // r8
  wchar_t *v11; // rcx
  unsigned int i; // r15d
  const WCHAR *v13; // rdi
  int j; // ebx
  int ObjectProperty; // eax
  __int64 v16; // rax
  const WCHAR *v17; // rdi
  _QWORD *v18; // rax
  const WCHAR *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  wchar_t *v24; // r12
  wchar_t *v25; // rax
  wchar_t *v26; // rbx
  int v27; // eax
  int v28; // eax
  const WCHAR *v29; // r10
  char v30; // bl
  int v31; // edx
  int DriverNode; // eax
  __int64 v33; // rdi
  wchar_t *v34; // r15
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // ebx
  int v42; // eax
  unsigned int k; // edi
  __int64 v44; // rax
  wchar_t *v45; // rcx
  __int64 v46; // rax
  wchar_t *v47; // rax
  bool matched; // al
  __int64 *v49; // rcx
  __int64 *v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rax
  wchar_t *v53; // rax
  wchar_t *v54; // rax
  wchar_t *v55; // rbx
  wchar_t *v56; // rax
  int v57; // eax
  __int64 v58; // rax
  bool IsNullGuid; // al
  _QWORD *v60; // rbx
  __int64 v61; // rdi
  unsigned int v62; // r11d
  unsigned int v63; // r9d
  _QWORD *v64; // rdx
  _QWORD *v65; // r10
  __int64 v66; // rcx
  int v67; // ecx
  const wchar_t *m; // rdi
  bool v69; // al
  __int64 v70; // rax
  _QWORD *n; // rdi
  __int64 v72; // rcx
  _QWORD *v73; // rcx
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // [rsp+60h] [rbp-59h] BYREF
  __int64 v77; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v78; // [rsp+70h] [rbp-49h]
  int v79; // [rsp+78h] [rbp-41h]
  ULONG v80; // [rsp+7Ch] [rbp-3Dh] BYREF
  __int64 v81; // [rsp+80h] [rbp-39h] BYREF
  __int64 *v82; // [rsp+88h] [rbp-31h]
  int v83; // [rsp+90h] [rbp-29h] BYREF
  const WCHAR *v84; // [rsp+98h] [rbp-21h]
  wchar_t *Str; // [rsp+A0h] [rbp-19h]
  PCWSTR SourceString; // [rsp+A8h] [rbp-11h]
  int v87; // [rsp+B0h] [rbp-9h]
  __int64 v88; // [rsp+B8h] [rbp-1h]
  const wchar_t *v89; // [rsp+C0h] [rbp+7h]
  unsigned int v91; // [rsp+128h] [rbp+6Fh]
  int v93; // [rsp+138h] [rbp+7Fh]

  v78 = &v77;
  v77 = (__int64)&v77;
  v82 = &v81;
  v81 = (__int64)&v81;
  SourceString = 0LL;
  v3 = a1;
  v89 = 0LL;
  v4 = 0;
  v79 = 0;
  v5 = 0;
  v83 = 1;
  v6 = 0LL;
  v80 = 0;
  v76 = 0LL;
  if ( a2 )
  {
    SourceString = a2;
    v46 = -1LL;
    do
      ++v46;
    while ( a2[v46] );
    v89 = (const wchar_t *)((unsigned __int64)&a2[v46 + 1] & -(__int64)(a2[v46 + 1] != 0));
    v3 = a1;
  }
  v7 = 1;
  v8 = 520;
  if ( PnpSetupInProgress )
    v7 = 3;
  v88 = 520LL;
  v87 = v7;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v10 = 0LL;
  Str = Pool2;
  v11 = Pool2;
  if ( !Pool2 )
  {
LABEL_27:
    v4 = -1073741670;
    goto LABEL_28;
  }
  for ( i = 0; ; ++i )
  {
    v91 = i;
    if ( i >= 3 )
      break;
    v13 = *(const WCHAR **)(v3 + 16 * (i + 2LL));
    v84 = v13;
    if ( v13 )
    {
      for ( j = v10; ; ++j )
      {
        v93 = j;
        if ( *v13 == (_WORD)v10 )
          goto LABEL_18;
        v83 = 1;
        v80 = v10;
        while ( 1 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v13,
                             11,
                             (char *)0xFFFFFFFFFFFFFFFFLL,
                             v10,
                             (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                             &v83,
                             (__int64)v11,
                             v8,
                             (__int64)&v80,
                             v10);
          v4 = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( v80 <= v8 )
          {
            v10 = 0LL;
LABEL_80:
            v4 = 0;
            goto LABEL_15;
          }
          v8 = v80;
          v88 = v80;
          if ( Str )
            ExFreePoolWithTag(Str, 0);
          v53 = (wchar_t *)ExAllocatePool2(0x100uLL);
          v10 = 0LL;
          Str = v53;
          v11 = v53;
          if ( !v53 )
            goto LABEL_27;
        }
        v10 = 0LL;
        if ( ObjectProperty == -1073741670 )
          break;
        if ( ObjectProperty < 0 )
        {
          if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
          {
            if ( v5 != -1073741772 )
              v5 = ObjectProperty;
          }
          else if ( ObjectProperty == -1073741772 )
          {
            v5 = -1073741772;
          }
          goto LABEL_80;
        }
        if ( v83 == 8210 )
        {
          v24 = Str;
          while ( 2 )
          {
            if ( *v24 == (_WORD)v10 )
            {
LABEL_55:
              v8 = v88;
              j = v93;
              break;
            }
            v25 = wcschr(v24, 0x5Cu);
            v10 = 0LL;
            v26 = v25;
            if ( v25 )
            {
              v27 = DrvDbSplitDeviceIdDriverInfMatch(v24, 0LL, 0LL);
              v10 = 0LL;
              v4 = v27;
              if ( v27 < 0 )
                goto LABEL_55;
              v28 = v87;
              v29 = v24;
              *v26 = 0;
              v24 = v26 + 1;
              v30 = v79;
              v31 = v28;
              if ( i == 2 )
              {
                if ( (_BYTE)v79 != 3 )
                  goto LABEL_52;
                v31 = v28 | 8;
              }
              if ( (_BYTE)v79 == 1 || (_BYTE)v79 == 2 || (_BYTE)v79 == 3 )
              {
                DriverNode = PiDevCfgQueryDriverNode(v29, v13, v31, (__int64)&v76);
                v10 = 0LL;
                v4 = DriverNode;
                if ( DriverNode < 0 )
                {
                  v4 = 0;
                }
                else
                {
                  v33 = v76;
                  v34 = *(wchar_t **)(v76 + 168);
                  if ( v34 )
                  {
                    while ( *v34 )
                    {
                      for ( k = 0; k < 3; ++k )
                      {
                        v45 = *(wchar_t **)(a1 + 16 * (k + 2LL));
                        if ( v45 )
                        {
                          v47 = PnpMultiSzContainsString(v45, v34);
                          v10 = 0LL;
                          if ( v47 )
                          {
                            *(_QWORD *)(v76 + 176) = v34;
                            break;
                          }
                        }
                      }
                      v33 = v76;
                      if ( *(_QWORD *)(v76 + 176) )
                        goto LABEL_76;
                      v44 = -1LL;
                      do
                        ++v44;
                      while ( v34[v44] );
                      v34 += v44 + 1;
                    }
                    if ( !*(_QWORD *)(v33 + 176) )
                      goto LABEL_43;
LABEL_76:
                    *(_DWORD *)(v33 + 108) |= 0xFFFFu;
                    v33 = v76;
                  }
LABEL_43:
                  if ( v30 == 3 )
                  {
                    v37 = v82;
                    if ( (__int64 *)*v82 != &v81 )
                      goto LABEL_49;
                    *(_QWORD *)(v33 + 8) = v82;
                    *(_QWORD *)v33 = &v81;
                    *v37 = v33;
                    v82 = (__int64 *)v33;
                  }
                  else
                  {
                    if ( !SourceString )
                      goto LABEL_45;
                    matched = PiDevCfgMatchDriverConfigurationId(v33, SourceString);
                    v10 = 0LL;
                    if ( matched )
                    {
                      v33 = v76;
LABEL_45:
                      if ( *(_QWORD *)(v33 + 176) )
                        goto LABEL_48;
                      if ( !v6 )
                      {
                        v6 = v33;
                        goto LABEL_51;
                      }
                      if ( (int)PiDevCfgCompareDrivers(v33, v6, 0) >= 0 )
                      {
LABEL_48:
                        v35 = v78;
                        if ( (__int64 *)*v78 != &v77 )
                          goto LABEL_49;
                        *(_QWORD *)v33 = &v77;
                        *(_QWORD *)(v33 + 8) = v35;
                        *v35 = v33;
                        v78 = (__int64 *)v33;
                      }
                      else
                      {
                        v51 = v78;
                        if ( (__int64 *)*v78 != &v77 )
                          goto LABEL_49;
                        *(_QWORD *)(v6 + 8) = v78;
                        *(_QWORD *)v6 = &v77;
                        *v51 = v6;
                        v78 = (__int64 *)v6;
                        v6 = v76;
                      }
                    }
                    else
                    {
                      v49 = v78;
                      v50 = (__int64 *)v76;
                      if ( (__int64 *)*v78 != &v77 )
                        goto LABEL_49;
                      *(_QWORD *)(v76 + 8) = v78;
                      *v50 = (__int64)&v77;
                      *v49 = (__int64)v50;
                      v78 = v50;
                    }
                  }
LABEL_51:
                  i = v91;
                  v13 = v84;
                }
              }
            }
LABEL_52:
            v36 = -1LL;
            do
              ++v36;
            while ( v24[v36] != (_WORD)v10 );
            v24 += v36 + 1;
            continue;
          }
        }
LABEL_15:
        v16 = -1LL;
        do
          ++v16;
        while ( v13[v16] != (_WORD)v10 );
        v11 = Str;
        v13 += v16 + 1;
        v84 = v13;
      }
      v11 = Str;
LABEL_18:
      if ( v4 < 0 )
        goto LABEL_28;
      v3 = a1;
    }
  }
  v17 = SourceString;
  if ( !SourceString )
    goto LABEL_22;
  if ( v6 )
  {
LABEL_23:
    while ( 1 )
    {
      v18 = (_QWORD *)v77;
      if ( (__int64 *)v77 == &v77 )
        break;
      if ( *(__int64 **)(v77 + 8) != &v77 )
        goto LABEL_49;
      v39 = *(_QWORD *)v77;
      if ( *(_QWORD *)(*(_QWORD *)v77 + 8LL) != v77 )
        goto LABEL_49;
      v77 = *(_QWORD *)v77;
      *(_QWORD *)(v39 + 8) = &v77;
      v76 = (__int64)v18;
      v40 = *(_QWORD **)(v6 + 232);
      if ( *v40 != v6 + 224 )
        goto LABEL_49;
      *v18 = v6 + 224;
      v18[1] = v40;
      *v40 = v18;
      *(_QWORD *)(v6 + 232) = v18;
      if ( (*(_DWORD *)(v76 + 184) & 4) != 0 )
      {
        v41 = *(_DWORD *)(v6 + 184);
        if ( (v41 & 8) == 0 )
        {
          v42 = PiDevCfgCompareDrivers(v76, v6, 4);
          v10 = 0LL;
          if ( v42 < 0 )
            *(_DWORD *)(v6 + 184) = v41 | 8;
        }
      }
    }
    v19 = v17;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = v81;
        if ( (__int64 *)v81 == &v81 )
        {
          *a3 = v6;
          v6 = v10;
          goto LABEL_28;
        }
        if ( *(__int64 **)(v81 + 8) != &v81 || (v58 = *(_QWORD *)v81, *(_QWORD *)(*(_QWORD *)v81 + 8LL) != v81) )
LABEL_49:
          __fastfail(3u);
        v81 = *(_QWORD *)v81;
        *(_QWORD *)(v58 + 8) = &v81;
        v76 = v20;
        IsNullGuid = PnpIsNullGuid((void *)(v20 + 188));
        v60 = (_QWORD *)v76;
        v10 = 0LL;
        if ( !IsNullGuid && !*(_QWORD *)(v76 + 176) )
          break;
LABEL_150:
        PiDevCfgFreeDriverNode((__int64)v60);
        v10 = 0LL;
      }
      v61 = *(_QWORD *)(v76 + 144);
      if ( v61 )
      {
        v62 = *(_DWORD *)(v6 + 152);
        v63 = 0;
        if ( v62 )
        {
          while ( 1 )
          {
            while ( (unsigned int)v10 >= *(_DWORD *)(v76 + 152) )
            {
              LODWORD(v10) = 0;
LABEL_149:
              if ( ++v63 >= v62 )
                goto LABEL_150;
            }
            v64 = (_QWORD *)(*(_QWORD *)(v6 + 144) + 16LL * v63);
            v65 = (_QWORD *)(v61 + 16LL * (unsigned int)v10);
            v66 = *v64 - *v65;
            if ( *v64 == *v65 )
              v66 = v64[1] - v65[1];
            if ( !v66 )
            {
              v10 = 0LL;
              if ( v65 )
                goto LABEL_137;
              goto LABEL_149;
            }
            LODWORD(v10) = v10 + 1;
          }
        }
        goto LABEL_150;
      }
LABEL_137:
      if ( v19 )
      {
        if ( !v89 )
          goto LABEL_150;
        v67 = *v89 - 42;
        if ( *v89 == 42 )
          v67 = v89[1];
        if ( v67 )
        {
          for ( m = v89; ; m += v70 + 1 )
          {
            if ( !*m )
              goto LABEL_150;
            v69 = PiDevCfgMatchDriverConfigurationId((__int64)v60, m);
            v10 = 0LL;
            if ( v69 )
              break;
            v70 = -1LL;
            do
              ++v70;
            while ( m[v70] );
            v60 = (_QWORD *)v76;
          }
          v60 = (_QWORD *)v76;
        }
        if ( !v60 )
          goto LABEL_150;
      }
      for ( n = *(_QWORD **)(v6 + 208); ; n = (_QWORD *)*n )
      {
        if ( n == (_QWORD *)(v6 + 208) )
          goto LABEL_164;
        v72 = *(_QWORD *)((char *)n + 188) - *(_QWORD *)((char *)v60 + 188);
        if ( !v72 )
          v72 = *(_QWORD *)((char *)n + 196) - *(_QWORD *)((char *)v60 + 196);
        if ( !v72 )
          break;
      }
      if ( n[18] )
      {
        if ( !v60[18] )
          goto LABEL_161;
      }
      else if ( v60[18] )
      {
        goto LABEL_169;
      }
      if ( (int)PiDevCfgCompareDrivers((__int64)v60, (__int64)n, 0) >= 0 )
      {
LABEL_161:
        n = v60;
        v60 = (_QWORD *)v10;
        v76 = v10;
        goto LABEL_162;
      }
LABEL_169:
      v74 = (_QWORD *)*n;
      if ( *(_QWORD **)(*n + 8LL) != n )
        goto LABEL_49;
      v75 = (_QWORD *)n[1];
      if ( (_QWORD *)*v75 != n )
        goto LABEL_49;
      *v75 = v74;
      v74[1] = v75;
      v60 = (_QWORD *)v76;
LABEL_162:
      if ( n )
      {
        PiDevCfgFreeDriverNode((__int64)n);
        v60 = (_QWORD *)v76;
        v10 = 0LL;
      }
LABEL_164:
      if ( v60 )
      {
        v73 = *(_QWORD **)(v6 + 216);
        if ( *v73 != v6 + 208 )
          goto LABEL_49;
        *v60 = v6 + 208;
        v60[1] = v73;
        *v73 = v60;
        *(_QWORD *)(v6 + 216) = v60;
      }
    }
  }
  v54 = wcschr(SourceString, 0x3Au);
  v55 = v54;
  if ( !v54 || (*v54 = 0, (v56 = wcschr(v54 + 1, 0x2Cu)) == 0LL) )
  {
    v4 = -1073741773;
    goto LABEL_28;
  }
  *v56 = 0;
  v57 = PiDevCfgQueryDriverNode(v17, v55 + 1, 4, (__int64)&v76);
  v10 = 0LL;
  if ( v57 < 0 )
    goto LABEL_104;
  v6 = v76;
LABEL_22:
  if ( v6 )
    goto LABEL_23;
LABEL_104:
  if ( !v5 || v5 == -1073741772 )
    v4 = -1073740656;
  else
    v4 = v5;
LABEL_28:
  while ( 1 )
  {
    v21 = v77;
    if ( (__int64 *)v77 == &v77 )
      break;
    if ( *(__int64 **)(v77 + 8) != &v77 )
      goto LABEL_49;
    v52 = *(_QWORD *)v77;
    if ( *(_QWORD *)(*(_QWORD *)v77 + 8LL) != v77 )
      goto LABEL_49;
    v77 = *(_QWORD *)v77;
    *(_QWORD *)(v52 + 8) = &v77;
    v76 = v21;
    PiDevCfgFreeDriverNode(v21);
  }
  while ( 1 )
  {
    v22 = v81;
    if ( (__int64 *)v81 == &v81 )
      break;
    if ( *(__int64 **)(v81 + 8) != &v81 )
      goto LABEL_49;
    v38 = *(_QWORD *)v81;
    if ( *(_QWORD *)(*(_QWORD *)v81 + 8LL) != v81 )
      goto LABEL_49;
    v81 = *(_QWORD *)v81;
    *(_QWORD *)(v38 + 8) = &v81;
    v76 = v22;
    PiDevCfgFreeDriverNode(v22);
  }
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  if ( Str )
    ExFreePoolWithTag(Str, 0);
  return (unsigned int)v4;
}
