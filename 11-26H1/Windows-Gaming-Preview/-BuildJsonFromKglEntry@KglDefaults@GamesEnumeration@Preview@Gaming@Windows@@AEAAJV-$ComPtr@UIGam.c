/*
 * XREFs of ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A9EC
 * Callers:
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003AD50 (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180014D04 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x180042290 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::BuildJsonFromKglEntry(
        _BOOL8 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  unsigned __int16 v4; // si
  unsigned int v5; // r13d
  int v6; // r14d
  bool v7; // r15
  char v8; // r12
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v13; // eax
  DWORD ActiveProcessorCount; // r10d
  int GameProfileFromRawData; // eax
  HSTRING *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  bool *v24; // [rsp+50h] [rbp-31h]
  bool v25; // [rsp+58h] [rbp-29h]
  unsigned __int16 v26; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-21h] BYREF
  int v28; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v30[2]; // [rsp+70h] [rbp-11h] BYREF
  PCNZWCH sourceString; // [rsp+78h] [rbp-9h]
  __int128 v32; // [rsp+80h] [rbp-1h] BYREF
  __int64 v33; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  _BOOL8 v35; // [rsp+E8h] [rbp+67h] BYREF
  _QWORD *v36; // [rsp+F0h] [rbp+6Fh]
  HSTRING *v37; // [rsp+F8h] [rbp+77h]
  bool v38; // [rsp+100h] [rbp+7Fh] BYREF

  v37 = a3;
  v36 = a2;
  v35 = a1;
  v4 = 0;
  sourceString = 0LL;
  v5 = 0;
  v27 = 0;
  *(_QWORD *)v30 = 0LL;
  v6 = 0;
  LODWORD(v29) = 0;
  v7 = 0;
  LOBYTE(v35) = 0;
  v8 = 0;
  v38 = 0;
  v25 = 0;
  v26 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v26);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v9);
    v11 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
  if ( v26 )
  {
    while ( 1 )
    {
      v32 = 0LL;
      v33 = 0LL;
      v28 = 0;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int128 *))(*(_QWORD *)*a2 + 64LL))(*a2, v4, &v28, &v32);
      v10 = v13;
      if ( v13 < 0 )
        break;
      switch ( (unsigned __int16)v28 )
      {
        case 0x140u:
          v25 = DWORD2(v32) != 0;
          break;
        case 0x141u:
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          if ( !ActiveProcessorCount )
          {
            v19 = 58LL;
            goto LABEL_30;
          }
          v27 = -1;
          *(_QWORD *)v30 = -1LL;
          if ( (v33 & 3) != 0 )
          {
            v19 = 66LL;
LABEL_30:
            v20 = 2147942487LL;
            v10 = -2147024809;
LABEL_31:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)v20);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x117,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
              (const char *)v10);
            v21 = *a2;
            if ( *a2 )
            {
              *a2 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
            return v10;
          }
          if ( **((_WORD **)&v32 + 1) != 1 && **((_WORD **)&v32 + 1) != 2 )
          {
            v19 = 74LL;
            goto LABEL_30;
          }
          if ( 4LL * *(unsigned __int16 *)(*((_QWORD *)&v32 + 1) + 2LL) != (unsigned int)v33 - 4LL )
          {
            v19 = 76LL;
            goto LABEL_30;
          }
          GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                                     (AutoGameProfile *)(unsigned __int16)**((_WORD **)&v32 + 1),
                                     (int)v33 - 4,
                                     DWORD2(v32) + 4,
                                     (const unsigned __int8 *)ActiveProcessorCount,
                                     (unsigned int)&v27,
                                     v30,
                                     &v29,
                                     (unsigned int *)&v35,
                                     &v38,
                                     v24);
          v10 = GameProfileFromRawData;
          if ( GameProfileFromRawData < 0 )
          {
            v19 = 78LL;
            v20 = (unsigned int)GameProfileFromRawData;
            goto LABEL_31;
          }
          break;
        case 0x142u:
          sourceString = (PCNZWCH)*((_QWORD *)&v32 + 1);
          v5 = v33;
          break;
      }
      if ( ++v4 >= v26 )
      {
        v6 = v29;
        v7 = v35;
        v8 = v38;
        goto LABEL_21;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v13);
    v22 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return v10;
  }
LABEL_21:
  v16 = v37;
  WindowsDeleteString(*v37);
  *v16 = 0LL;
  v17 = JsonDocumentFromGameConfigValues(v27, *(HSTRING *)v30, v6, v8, v7, v25, v5 >> 1, sourceString, v16);
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v17);
    v18 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v10;
  }
  v23 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
