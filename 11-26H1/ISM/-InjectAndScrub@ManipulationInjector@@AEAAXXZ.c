/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1801143C8
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180113CF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x180113D7C (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114C00 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180114CA0 (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180114D44 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180115110 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801154D4 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800D0D18 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x180113C80 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  unsigned int v7; // esi
  unsigned int v8; // r10d
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int128 v14; // xmm1
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v23; // eax
  void (__fastcall ***v24)(_QWORD, _QWORD, _DWORD *); // rcx
  __int64 v25; // rcx
  _OWORD *v26; // r8
  __int64 v27; // r10
  _OWORD *v28; // r9
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  DWORD v37; // eax
  const char *v38; // r9
  unsigned int v39; // r12d
  unsigned __int16 v40; // si
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int16 v43; // r11
  int v44; // r10d
  char v45; // al
  int v46; // r13d
  int v47; // r14d
  int v48; // r15d
  _QWORD *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  DWORD v53; // eax
  DWORD LastError; // eax
  unsigned int j; // r8d
  __int64 v56; // r9
  char *v57; // rcx
  unsigned int v58; // [rsp+28h] [rbp-E0h]
  __int64 v59; // [rsp+38h] [rbp-D0h]
  __int64 v60; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v61; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v62; // [rsp+48h] [rbp-C0h]
  __int64 v63; // [rsp+50h] [rbp-B8h]
  __int64 v64; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+70h] [rbp-98h]
  __int64 v66; // [rsp+80h] [rbp-88h]
  __int64 v67; // [rsp+90h] [rbp-78h]
  __int64 v68; // [rsp+B0h] [rbp-58h]
  __int64 v69; // [rsp+C0h] [rbp-48h]
  struct tagPOINT v70; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v71[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v72[70]; // [rsp+F4h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v4 = 0LL;
  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  if ( *(_DWORD *)this == 1 )
  {
    if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
    {
      LastError = GetLastError();
      if ( LastError )
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          903LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)LastError,
          v58);
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
    {
      if ( *(_DWORD *)this == 3 )
      {
        v25 = *((unsigned int *)this + 12);
        if ( (_DWORD)v25 )
        {
          v26 = v71;
          v27 = (unsigned int)v25;
          v28 = (_OWORD *)((char *)this + 112);
          do
          {
            v29 = v28[1];
            *v26 = *v28;
            v30 = v28[2];
            v26[1] = v29;
            v31 = v28[3];
            v26[2] = v30;
            v32 = v28[4];
            v26[3] = v31;
            v33 = v28[5];
            v26[4] = v32;
            v34 = v28[6];
            v26[5] = v33;
            v35 = v28[7];
            v26[6] = v34;
            v36 = v28[8];
            v28 = (_OWORD *)((char *)v28 + 152);
            v26[7] = v35;
            v26[8] = v36;
            v26 += 9;
            --v27;
          }
          while ( v27 );
        }
        if ( !(unsigned int)InjectTouchInput(v25, v71) )
        {
          v37 = GetLastError();
          if ( v37 )
            wil::details::in1diag3::_FailFast_Win32(
              retaddr,
              974LL,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              (const char *)v37,
              v58);
        }
      }
      else
      {
        if ( *(_DWORD *)this != 4 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x3FF,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            a4);
        ++*((_DWORD *)this + 200);
        v7 = 0;
        v8 = *((_DWORD *)this + 12);
        v9 = *((_DWORD *)this + 200);
        v10 = *((_DWORD *)this + 201);
        if ( v8 )
        {
          do
          {
            v11 = 152LL * v7;
            v12 = *(_QWORD *)((char *)this + v11 + 144);
            if ( v10 )
            {
              *(_DWORD *)((char *)this + v11 + 216) = v12 - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v11 + 224) = v12 + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v11 + 220) = HIDWORD(v12) - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v11 + 228) = HIDWORD(v12) + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v11 + 232) = v12 - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v11 + 240) = v12 + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v11 + 236) = HIDWORD(v12) - *((_DWORD *)this + 201);
              v13 = 144LL * v7;
              *(_DWORD *)((char *)this + v11 + 244) = HIDWORD(v12) + *((_DWORD *)this + 201);
              v8 = *((_DWORD *)this + 12);
              LODWORD(v72[v13 / 8 + 11]) |= 1u;
            }
            else
            {
              v13 = 144LL * v7;
            }
            v14 = *(_OWORD *)((char *)this + v11 + 128);
            v15 = &v71[v13 / 4];
            *v15 = *(_OWORD *)((char *)this + v11 + 112);
            v16 = *(_OWORD *)((char *)this + v11 + 144);
            v15[1] = v14;
            v17 = *(_OWORD *)((char *)this + v11 + 160);
            v15[2] = v16;
            v18 = *(_OWORD *)((char *)this + v11 + 176);
            v15[3] = v17;
            v19 = *(_OWORD *)((char *)this + v11 + 192);
            v15[4] = v18;
            v20 = *(_OWORD *)((char *)this + v11 + 208);
            v15[5] = v19;
            v21 = *(_OWORD *)((char *)this + v11 + 224);
            v15[6] = v20;
            v22 = *(_OWORD *)((char *)this + v11 + 240);
            v15[7] = v21;
            v15[8] = v22;
            v23 = LODWORD(v72[v13 / 8]) | 0x4000;
            v71[v13 / 4 + 2] = v9;
            LODWORD(v72[v13 / 8]) = v23;
            if ( (v23 & 4) != 0 )
              LODWORD(v72[v13 / 8]) = v23 | 0x10;
            ++v7;
            *(_QWORD *)((char *)&v72[v13 / 8 + 4] + 4) = *(_QWORD *)((char *)&v72[v13 / 8 + 2] + 4);
          }
          while ( v7 < v8 );
        }
        v24 = (void (__fastcall ***)(_QWORD, _QWORD, _DWORD *))*((_QWORD *)this + 99);
        LODWORD(v72[0]) |= 0x2000u;
        (**v24)(v24, v8, v71);
      }
      goto LABEL_43;
    }
    v38 = (const char *)*((unsigned int *)this + 12);
    v39 = 10 * (_DWORD)v38 + 1;
    if ( (unsigned int)((_DWORD)v38 - 1) > 3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x390,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v38);
    if ( (_DWORD)v38 )
    {
      v40 = 1;
      while ( 1 )
      {
        v62 = v40;
        v41 = (unsigned __int16)(v40 - 1);
        v42 = 152 * v41;
        v43 = 10 * v41;
        if ( (*((_BYTE *)this + 152 * v41 + 124) & 4) != 0 )
          break;
        v44 = 0;
        v45 = 0;
        if ( (*((_BYTE *)this + v42 + 124) & 2) == 0 )
          goto LABEL_29;
LABEL_30:
        if ( !v45 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x398,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v38);
        v46 = *(_DWORD *)((char *)this + v42 + 116);
        v47 = v44 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
        v48 = v44 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
        if ( *((_DWORD *)this + 22) == 1 )
          v49 = (_QWORD *)ManipulationInjector::DeskToDigiPt(
                            this,
                            (struct tagPOINT)&v70,
                            *(_QWORD *)((char *)this + v42 + 144));
        else
          v49 = (_QWORD *)((char *)this + v42 + 152);
        HIDWORD(v64) = HIDWORD(*v49);
        HIDWORD(v63) = *v49;
        LODWORD(v63) = 3145729;
        v50 = 3LL * v43;
        *(_QWORD *)&v71[v50] = v63;
        v71[v50 + 2] = v40;
        LODWORD(v64) = 3211265;
        *(_QWORD *)((char *)v72 + 4 * v50) = v64;
        *((_DWORD *)&v72[1] + v50) = v40;
        LODWORD(v65) = 4325389;
        HIDWORD(v65) = v44;
        *(_QWORD *)((char *)&v72[1] + 4 * v50 + 4) = v65;
        *((_DWORD *)&v72[2] + v50 + 1) = v40;
        LODWORD(v66) = 3276813;
        HIDWORD(v66) = v44;
        *(_QWORD *)((char *)&v72[3] + 4 * v50) = v66;
        *((_DWORD *)&v72[4] + v50) = v40;
        LODWORD(v67) = 3145741;
        HIDWORD(v67) = 100 * v44;
        *(_QWORD *)((char *)&v72[4] + 4 * v50 + 4) = v67;
        *((_DWORD *)&v72[5] + v50 + 1) = v40;
        *(_QWORD *)((char *)&v72[6] + 4 * v50) = 0x10047000DLL;
        *((_DWORD *)&v72[7] + v50) = v40;
        LODWORD(v68) = 4718605;
        HIDWORD(v68) = v47;
        *(_QWORD *)((char *)&v72[7] + 4 * v50 + 4) = v68;
        *((_DWORD *)&v72[8] + v50 + 1) = v40;
        LODWORD(v69) = 4784141;
        HIDWORD(v69) = v48;
        *(_QWORD *)((char *)&v72[9] + 4 * v50) = v69;
        *((_DWORD *)&v72[10] + v50) = v40;
        v51 = v40;
        HIDWORD(v59) = v46;
        v61 = v40++;
        *(_QWORD *)((char *)&v72[10] + 4 * v50 + 4) = 4128781LL;
        *((_DWORD *)&v72[11] + v50 + 1) = v51;
        LODWORD(v59) = 5308429;
        *(_QWORD *)((char *)&v72[12] + 4 * v50) = v59;
        *((_DWORD *)&v72[13] + v50) = v61;
        if ( v62 >= (unsigned int)v38 )
          goto LABEL_35;
      }
      v44 = 1;
LABEL_29:
      v45 = 1;
      goto LABEL_30;
    }
LABEL_35:
    HIDWORD(v60) = *((unsigned __int16 *)this + 24);
    LODWORD(v60) = 5505037;
    v52 = 3LL * (unsigned __int16)(10 * *((_WORD *)this + 24));
    *(_QWORD *)&v71[v52] = v60;
    v71[v52 + 2] = 0;
    if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v71, v39) )
    {
      v53 = GetLastError();
      if ( v53 )
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          958LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)v53,
          v58);
    }
  }
LABEL_43:
  for ( j = 0; j < *((_DWORD *)this + 12); ++j )
  {
    v56 = 152LL * j;
    if ( (*(_DWORD *)((_BYTE *)this + v56 + 124) & 0xFFFBFFFF) != 0 )
    {
      if ( j != (_DWORD)v4 )
      {
        v57 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v57 + 104) = *(_OWORD *)((char *)this + v56 + 104);
        *(_OWORD *)(v57 + 120) = *(_OWORD *)((char *)this + v56 + 120);
        *(_OWORD *)(v57 + 136) = *(_OWORD *)((char *)this + v56 + 136);
        *(_OWORD *)(v57 + 152) = *(_OWORD *)((char *)this + v56 + 152);
        *(_OWORD *)(v57 + 168) = *(_OWORD *)((char *)this + v56 + 168);
        *(_OWORD *)(v57 + 184) = *(_OWORD *)((char *)this + v56 + 184);
        *(_OWORD *)(v57 + 200) = *(_OWORD *)((char *)this + v56 + 200);
        *(_OWORD *)(v57 + 216) = *(_OWORD *)((char *)this + v56 + 216);
        *(_OWORD *)(v57 + 232) = *(_OWORD *)((char *)this + v56 + 232);
        *((_QWORD *)v57 + 31) = *(_QWORD *)((char *)this + v56 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + j + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      *((_BYTE *)this + *(unsigned int *)((char *)this + v56 + 116) + 728) = 1;
    }
  }
  *((_DWORD *)this + 12) = v4;
}
