/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x140298E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140034DBC (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140034EE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140034FB4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     DwmSyncGetCompositionAttribute @ 0x140118C6C (DwmSyncGetCompositionAttribute.c)
 *     ?GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x140202B98 (-GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x140258DC0 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, void *a2)
{
  NTSTATUS WindowCompositionCornerStyle; // edi
  __int64 v4; // rsi
  __m128i v5; // xmm6
  size_t v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v10; // ebx
  void *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct tagWND *v14; // r14
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  struct tagRECT *v24; // rax
  __int64 v25; // rcx
  struct tagWND *v26; // r8
  int v27; // r8d
  __int64 v28; // rax
  LONG *v29; // rbx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  bool v39; // sf
  ULONG v40; // eax
  int v42; // [rsp+20h] [rbp-278h]
  struct tagRECT Src; // [rsp+28h] [rbp-270h] BYREF
  __int64 v44; // [rsp+38h] [rbp-260h]
  __int64 v45; // [rsp+58h] [rbp-240h] BYREF
  void *v46; // [rsp+60h] [rbp-238h]
  size_t Size; // [rsp+68h] [rbp-230h]
  __m128i v48; // [rsp+70h] [rbp-228h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-218h]
  volatile void *Address[2]; // [rsp+88h] [rbp-210h]
  SIZE_T v51; // [rsp+98h] [rbp-200h]
  __int64 v52[3]; // [rsp+B0h] [rbp-1E8h] BYREF
  _OWORD v53[3]; // [rsp+C8h] [rbp-1D0h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-1A0h]
  _OWORD v55[3]; // [rsp+100h] [rbp-198h] BYREF
  __int64 v56; // [rsp+130h] [rbp-168h]
  _OWORD v57[3]; // [rsp+138h] [rbp-160h] BYREF
  __int64 v58; // [rsp+168h] [rbp-130h]
  _OWORD v59[3]; // [rsp+170h] [rbp-128h] BYREF
  __int64 v60; // [rsp+1A0h] [rbp-F8h]
  _OWORD v61[3]; // [rsp+1A8h] [rbp-F0h] BYREF
  __int64 v62; // [rsp+1D8h] [rbp-C0h]
  _OWORD v63[3]; // [rsp+1E0h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+210h] [rbp-88h]
  _OWORD v65[3]; // [rsp+218h] [rbp-80h] BYREF
  __int64 v66; // [rsp+248h] [rbp-50h]

  v45 = a1;
  WindowCompositionCornerStyle = -1073741811;
  v42 = -1073741811;
  *(_OWORD *)Address = 0LL;
  v51 = 0LL;
  v4 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v48, a2, 0x18uLL);
  v5 = v48;
  *(__m128i *)Address = v48;
  v51 = Length;
  v6 = (unsigned int)Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7);
  ProbeForWrite(
    (volatile void *)_mm_srli_si128(v5, 8).m128i_i64[0],
    (unsigned int)v6,
    CurrentProcessWow64Process != 0 ? 1 : 4);
  v10 = _mm_cvtsi128_si32(v5);
  if ( (unsigned int)(v10 - 1) <= 0x24 )
  {
    Size = *(_QWORD *)&word_140353CA8[8 * v48.m128i_i32[0]];
    WindowCompositionCornerStyle = v6 < Size ? 0xC0000023 : 0;
    v42 = WindowCompositionCornerStyle;
  }
  if ( WindowCompositionCornerStyle < 0 )
    goto LABEL_90;
  v11 = 0LL;
  v46 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v52, 1LL);
  v14 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v14 )
    goto LABEL_48;
  if ( v10 == 18 || v10 == 23 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 19084);
  if ( v10 == 21 )
  {
    v15 = (*((_DWORD *)v14 + 96) >> 2) & 1;
LABEL_44:
    Src.left = v15;
    goto LABEL_50;
  }
  if ( !IsTopLevelWindow((__int64)v14) && (v10 != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow((__int64)v14)) )
  {
    WindowCompositionCornerStyle = -1073741816;
LABEL_14:
    v42 = WindowCompositionCornerStyle;
    goto LABEL_52;
  }
  switch ( v10 )
  {
    case 1:
      v15 = (unsigned __int8)IsWindowNCRenderingEnabled(v14);
      goto LABEL_44;
    case 20:
      memset(v53, 0, sizeof(v53));
      v54 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v53) )
        goto LABEL_50;
      v16 = (v53[0] & 0x1000) == 0;
      goto LABEL_37;
    case 24:
      memset(v55, 0, sizeof(v55));
      v56 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v55) )
        goto LABEL_50;
      v16 = (v55[0] & 0x4000) == 0;
      goto LABEL_37;
    case 25:
      memset(v57, 0, sizeof(v57));
      v58 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v57) )
        goto LABEL_50;
      v16 = (v57[0] & 0x8000) == 0;
      goto LABEL_37;
    case 26:
      memset(v59, 0, sizeof(v59));
      v60 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v59) )
        goto LABEL_50;
      v16 = (v59[0] & 0x10000) == 0;
      goto LABEL_37;
    case 27:
      WindowCompositionCornerStyle = GetWindowCompositionCornerStyle(v14, (enum CORNER_STYLE *)&Src);
      v42 = WindowCompositionCornerStyle;
      goto LABEL_50;
    case 29:
      memset(v61, 0, sizeof(v61));
      v62 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v61) )
        goto LABEL_50;
      v16 = (v61[0] & 0x20000) == 0;
      goto LABEL_37;
    case 34:
      memset(v63, 0, sizeof(v63));
      v64 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v63) )
        goto LABEL_50;
      v16 = DWORD2(v63[0]) == 0;
LABEL_37:
      if ( !v16 )
        Src.left = 1;
      goto LABEL_50;
    case 35:
LABEL_40:
      WindowCompositionCornerStyle = -1073741811;
      goto LABEL_14;
    case 30:
      memset(v65, 0, sizeof(v65));
      v66 = 0LL;
      if ( !_GetWindowCompositionInfo(v14, (struct WINDOWCOMPOSITIONINFO *)v65) )
        goto LABEL_50;
      v15 = v66;
      goto LABEL_44;
  }
  if ( (unsigned int)(v10 - 31) <= 1 )
  {
    WindowCompositionCornerStyle = -1073741811;
    goto LABEL_49;
  }
  if ( v10 == 37 )
    goto LABEL_40;
  if ( !(unsigned int)IsWindowDesktopComposed(v14) )
  {
LABEL_48:
    WindowCompositionCornerStyle = -1073741816;
LABEL_49:
    v42 = WindowCompositionCornerStyle;
  }
LABEL_50:
  if ( WindowCompositionCornerStyle >= 0 )
  {
    v11 = (void *)ReferenceDwmApiPort(v13, v12);
    v46 = v11;
  }
LABEL_52:
  UserSessionSwitchLeaveCrit(v13);
  if ( WindowCompositionCornerStyle < 0 )
    goto LABEL_88;
  if ( v10 > 17 )
  {
    if ( v10 > 26 )
    {
      v35 = v10 - 27;
      if ( !v35 )
        goto LABEL_88;
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_88;
        v38 = v37 - 1;
        if ( !v38 )
          goto LABEL_88;
        v34 = v38 - 3;
        if ( v34 )
          goto LABEL_86;
      }
    }
    else
    {
      if ( v10 == 26 )
        goto LABEL_88;
      v30 = v10 - 18;
      if ( !v30 )
        goto LABEL_88;
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( !v32 )
          goto LABEL_88;
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_88;
        v34 = v33 - 2;
        if ( !v34 )
          goto LABEL_88;
LABEL_86:
        if ( (unsigned int)(v34 - 1) < 2 )
          goto LABEL_88;
      }
    }
LABEL_87:
    WindowCompositionCornerStyle = -1073741811;
    goto LABEL_88;
  }
  if ( v10 == 17 )
    goto LABEL_87;
  if ( v10 > 9 )
  {
    if ( v10 != 12 )
      goto LABEL_87;
    v28 = PsGetCurrentProcessWow64Process(v18, v17);
    v29 = (LONG *)Address[1];
    ProbeForRead(Address[1], 4uLL, v28 != 0 ? 1 : 4);
    Src.left = *v29;
    WindowCompositionCornerStyle = v42;
    if ( v42 < 0 )
      goto LABEL_88;
    v27 = 12;
LABEL_69:
    WindowCompositionCornerStyle = DwmSyncGetCompositionAttribute(v11, a1, v27, &Src);
    v11 = 0LL;
    goto LABEL_88;
  }
  if ( v10 == 9 )
    goto LABEL_87;
  v19 = v10 - 1;
  if ( !v19 )
    goto LABEL_88;
  v20 = v19 - 1;
  if ( !v20 )
    goto LABEL_87;
  v21 = v20 - 1;
  if ( !v21 )
    goto LABEL_87;
  v22 = v21 - 1;
  if ( !v22 )
    goto LABEL_87;
  v23 = v22 - 1;
  if ( !v23 )
  {
    v27 = 5;
    goto LABEL_69;
  }
  if ( v23 != 3 )
    goto LABEL_87;
  EnterLeaveCritShared::EnterLeaveCritShared(&v45, 1LL);
  v24 = (struct tagRECT *)ValidateHwnd(a1);
  if ( v24 )
  {
    Src = *WindowMargins::GetPhysicalFrameBounds((WindowMargins *)&v48, v24, v26);
    WindowCompositionCornerStyle = 0;
  }
  else
  {
    WindowCompositionCornerStyle = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v25);
LABEL_88:
  DereferenceDwmApiPort(v11);
  if ( WindowCompositionCornerStyle < 0 )
  {
LABEL_90:
    v40 = RtlNtStatusToDosError(WindowCompositionCornerStyle);
    UserSetLastError(v40);
    v39 = WindowCompositionCornerStyle < 0;
    goto LABEL_91;
  }
  memmove((void *)Address[1], &Src, Size);
  v39 = WindowCompositionCornerStyle < 0;
LABEL_91:
  LOBYTE(v4) = !v39;
  return v4;
}
