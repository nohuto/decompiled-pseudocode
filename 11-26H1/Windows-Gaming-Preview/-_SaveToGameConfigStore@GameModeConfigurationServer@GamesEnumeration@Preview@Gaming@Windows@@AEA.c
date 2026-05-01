/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037F94
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run @ 0x180037320 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3___ea_180037320.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800163E0 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180016B24 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rbx
  HSTRING v14; // rdi
  const WCHAR *v15; // r15
  const WCHAR *v16; // r13
  const WCHAR *v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // eax
  const WCHAR **v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  int v23; // edx
  PCWSTR StringRawBuffer; // r8
  const WCHAR *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // r15d
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 (__fastcall *v38)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 (__fastcall *v41)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // ebx
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // rcx
  __int64 **v47; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  _QWORD v50[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v51; // [rsp+48h] [rbp-C0h] BYREF
  int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  int v53; // [rsp+50h] [rbp-B8h] BYREF
  int v54; // [rsp+54h] [rbp-B4h] BYREF
  __int64 (__fastcall ***v55)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  int v56; // [rsp+60h] [rbp-A8h]
  UINT32 length; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v58; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+70h] [rbp-98h] BYREF
  int v60; // [rsp+78h] [rbp-90h] BYREF
  int v61; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v62; // [rsp+80h] [rbp-88h] BYREF
  int v63; // [rsp+84h] [rbp-84h] BYREF
  HSTRING string[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v65; // [rsp+98h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v66; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+A8h] [rbp-60h] BYREF
  const WCHAR *v68; // [rsp+C8h] [rbp-40h]
  int v69; // [rsp+D0h] [rbp-38h]
  int v70; // [rsp+D4h] [rbp-34h]
  const WCHAR *v71; // [rsp+D8h] [rbp-30h]
  int v72; // [rsp+E0h] [rbp-28h]
  int v73; // [rsp+E4h] [rbp-24h]
  const WCHAR *v74; // [rsp+E8h] [rbp-20h]
  int v75; // [rsp+F0h] [rbp-18h]
  int v76; // [rsp+F4h] [rbp-14h]
  const WCHAR *v77; // [rsp+F8h] [rbp-10h]
  int v78; // [rsp+100h] [rbp-8h]
  int v79; // [rsp+104h] [rbp-4h]
  __int64 (__fastcall ****v80)(_QWORD, GUID *, __int64 *); // [rsp+108h] [rbp+0h]
  __int64 v81; // [rsp+110h] [rbp+8h]
  int *v82; // [rsp+118h] [rbp+10h]
  __int64 v83; // [rsp+120h] [rbp+18h]
  _QWORD *v84; // [rsp+128h] [rbp+20h]
  __int64 v85; // [rsp+130h] [rbp+28h]
  int *v86; // [rsp+138h] [rbp+30h]
  __int64 v87; // [rsp+140h] [rbp+38h]
  int *v88; // [rsp+148h] [rbp+40h]
  __int64 v89; // [rsp+150h] [rbp+48h]
  int *v90; // [rsp+158h] [rbp+50h]
  __int64 v91; // [rsp+160h] [rbp+58h]
  int *v92; // [rsp+168h] [rbp+60h]
  __int64 v93; // [rsp+170h] [rbp+68h]
  __int16 *v94; // [rsp+178h] [rbp+70h]
  __int64 v95; // [rsp+180h] [rbp+78h]
  PCWSTR v96; // [rsp+188h] [rbp+80h]
  int v97; // [rsp+190h] [rbp+88h]
  int v98; // [rsp+194h] [rbp+8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v66 = v2;
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80070005LL);
LABEL_12:
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v3;
  }
  v52 = 0;
  v51 = 0;
  v56 = 0;
  v59 = 0LL;
  LODWORD(v58) = 0;
  v53 = 0;
  string[0] = 0LL;
  if ( *((_QWORD *)this + 19) && !*((_QWORD *)this + 18) )
  {
    v4 = 711LL;
LABEL_10:
    v3 = -2147024809;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v3);
    WindowsDeleteString(0LL);
    goto LABEL_12;
  }
  v5 = *((_QWORD *)this + 14);
  v6 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    if ( !v6 || !*((_QWORD *)this + 16) )
    {
LABEL_9:
      v4 = 717LL;
      goto LABEL_10;
    }
  }
  else if ( v6 || *((_QWORD *)this + 16) )
  {
    goto LABEL_9;
  }
  if ( v5 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 48LL))(v6, &v52);
    if ( v3 < 0 )
    {
      v4 = 722LL;
      goto LABEL_11;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), &v51);
    if ( v3 < 0 )
    {
      v4 = 723LL;
      goto LABEL_11;
    }
    if ( v51 + v52 > 100 )
    {
      v4 = 724LL;
      goto LABEL_10;
    }
    v56 = 100 - v51 - v52;
  }
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v59);
    if ( v3 < 0 )
    {
      v4 = 731LL;
      goto LABEL_11;
    }
    v9 = *((_QWORD *)this + 19);
    if ( v9 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, (char *)&v59 + 4);
      if ( v3 < 0 )
      {
        v4 = 734LL;
        goto LABEL_11;
      }
    }
  }
  v10 = *((_QWORD *)this + 17);
  if ( v10 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v58);
    if ( v3 < 0 )
    {
      v4 = 740LL;
      goto LABEL_11;
    }
  }
  v11 = *((_QWORD *)this + 14);
  if ( v11 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 48LL))(v11, &v53);
    if ( v3 < 0 )
    {
      v4 = 745LL;
      goto LABEL_11;
    }
  }
  v12 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13), string);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v12);
  v13 = (__int64 *)**((_QWORD **)this + 10);
  v14 = string[0];
  while ( !*((_BYTE *)v13 + 25) )
  {
    v15 = &String1;
    v16 = &String1;
    v17 = &String1;
    v18 = v13[6];
    v19 = *(_DWORD *)(v18 + 16);
    if ( v19 )
    {
      v20 = (const WCHAR **)(*(_QWORD *)(v18 + 8) + 8LL);
      v21 = v19;
      do
      {
        v22 = *((_DWORD *)v20 - 2);
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
              v15 = *v20;
          }
          else
          {
            v17 = *v20;
          }
        }
        else
        {
          v16 = *v20;
        }
        v20 += 2;
        --v21;
      }
      while ( v21 );
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v14, &length);
    if ( (unsigned int)dword_180059000 > 5
      && (qword_180059010 & 0x800000000000LL) != 0
      && (qword_180059018 & 0x800000000000LL) == qword_180059018 )
    {
      string[1] = (HSTRING)StringRawBuffer;
      v65 = length;
      v54 = v56;
      v60 = v51;
      v61 = v52;
      v62 = v53;
      v50[1] = v59;
      v63 = *((unsigned __int8 *)this + 160);
      LODWORD(v55) = *((unsigned __int8 *)this + 96);
      v25 = *(const WCHAR **)(v13[6] + 24);
      v94 = &v65;
      v95 = 2LL;
      v96 = StringRawBuffer;
      v97 = 2 * (unsigned __int16)length;
      v98 = 0;
      v92 = &v54;
      v93 = 4LL;
      v90 = &v60;
      v91 = 4LL;
      v88 = &v61;
      v89 = 4LL;
      v86 = &v62;
      v87 = 4LL;
      v84 = &v50[1];
      v85 = 8LL;
      v82 = &v63;
      v83 = 4LL;
      v80 = &v55;
      v81 = 4LL;
      if ( v15 )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( v15[v26] );
        v27 = 2 * v26 + 2;
      }
      else
      {
        v15 = &String1;
        v27 = 2;
      }
      v77 = v15;
      v78 = v27;
      v79 = 0;
      if ( v17 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( v17[v28] );
        v29 = 2 * v28 + 2;
      }
      else
      {
        v17 = &String1;
        v29 = 2;
      }
      v74 = v17;
      v75 = v29;
      v76 = 0;
      if ( v16 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( v16[v30] );
        v31 = 2 * v30 + 2;
      }
      else
      {
        v16 = &String1;
        v31 = 2;
      }
      v71 = v16;
      v72 = v31;
      v73 = 0;
      if ( v25 )
      {
        v32 = -1LL;
        do
          ++v32;
        while ( v25[v32] );
        v33 = 2 * v32 + 2;
      }
      else
      {
        v25 = &String1;
        v33 = 2;
      }
      v68 = v25;
      v69 = v33;
      v70 = 0;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180059000, byte_180050229, 0LL, 0LL, 0xFu, &v67);
    }
    if ( ((*(_DWORD *)(v13[6] + 32) >> 7) & 1) != *((_BYTE *)this + 96) )
    {
      LODWORD(v55) = *((unsigned __int8 *)this + 96);
      v34 = *((_QWORD *)this + 8);
      *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *), int))(*(_QWORD *)v34 + 104LL))(
              v34,
              &v50[1],
              17LL,
              &v55,
              4);
      if ( v35 < 0 )
      {
        v39 = 804LL;
        goto LABEL_107;
      }
      *(_DWORD *)(v13[6] + 32) ^= (*(_DWORD *)(v13[6] + 32) ^ (*((unsigned __int8 *)this + 96) << 7)) & 0x80;
    }
    if ( ((*(_DWORD *)(v13[6] + 32) & 0x100) == 0) != *((_BYTE *)this + 160) )
    {
      LODWORD(v55) = *((_BYTE *)this + 160) == 0;
      v36 = *((_QWORD *)this + 8);
      *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *), int))(*(_QWORD *)v36 + 104LL))(
              v36,
              &v50[1],
              21LL,
              &v55,
              4);
      if ( v35 < 0 )
      {
        v39 = 813LL;
        goto LABEL_107;
      }
      *(_DWORD *)(v13[6] + 32) = *(_DWORD *)(v13[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 160) == 0 ? 0x100 : 0);
    }
    v37 = *((_QWORD *)this + 8);
    v38 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v37 + 72LL);
    *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
    if ( *((_QWORD *)this + 18) )
    {
      v35 = v38(v37, &v50[1], 18LL, &v59, 8);
      if ( v35 < 0 )
      {
        v39 = 820LL;
        goto LABEL_107;
      }
    }
    else
    {
      v35 = v38(v37, &v50[1], 18LL, 0LL, 0);
      if ( v35 < 0 )
      {
        v39 = 824LL;
        goto LABEL_107;
      }
    }
    v40 = *((_QWORD *)this + 8);
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v40 + 72LL);
    *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
    if ( *((_QWORD *)this + 17) )
    {
      v35 = v41(v40, &v50[1], 20LL, &v58, 4);
      if ( v35 < 0 )
      {
        v39 = 830LL;
        goto LABEL_107;
      }
    }
    else
    {
      v35 = v41(v40, &v50[1], 20LL, 0LL, 0);
      if ( v35 < 0 )
      {
        v39 = 834LL;
        goto LABEL_107;
      }
    }
    v42 = *((_QWORD *)this + 8);
    if ( *((_QWORD *)this + 14) )
    {
      v54 = 0;
      if ( (unsigned __int8)v56 + (unsigned __int8)v52 + (unsigned __int8)v51 != 100 )
      {
        v44 = 397LL;
        goto LABEL_113;
      }
      if ( (unsigned __int8)v53 > 0x64u )
      {
        v44 = 402LL;
LABEL_113:
        v45 = -2147024809;
        v35 = -2147024809;
LABEL_114:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)v45);
        v39 = 847LL;
LABEL_107:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v35);
        WindowsDeleteString(v14);
        if ( v2 )
          LeaveCriticalSection(v2);
        return (unsigned int)v35;
      }
      v54 = (unsigned __int8)v56 | (((unsigned __int8)v51 | (((unsigned __int8)v52 | ((unsigned __int8)v53 << 8)) << 8)) << 8);
      *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, int *, int))(*(_QWORD *)v42 + 72LL))(
              v42,
              &v50[1],
              19LL,
              &v54,
              4);
      v35 = v43;
      if ( v43 < 0 )
      {
        v44 = 407LL;
        v45 = v43;
        goto LABEL_114;
      }
    }
    else
    {
      *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v42 + 72LL))(v42, &v50[1], 19LL);
      if ( v35 < 0 )
      {
        v39 = 851LL;
        goto LABEL_107;
      }
    }
    v46 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
    v55 = v46;
    if ( v46 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v46)[1])(v46);
    *(_OWORD *)&v50[1] = *((_OWORD *)v13 + 2);
    v35 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v50[1], &v55);
    if ( v35 < 0 )
    {
      v39 = 855LL;
      goto LABEL_107;
    }
    v47 = (__int64 **)v13[2];
    if ( *((_BYTE *)v47 + 25) )
    {
      for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v13 = i;
      v13 = i;
    }
    else
    {
      v13 = (__int64 *)v13[2];
      for ( j = *v47; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v13 = j;
    }
  }
  WindowsDeleteString(v14);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
