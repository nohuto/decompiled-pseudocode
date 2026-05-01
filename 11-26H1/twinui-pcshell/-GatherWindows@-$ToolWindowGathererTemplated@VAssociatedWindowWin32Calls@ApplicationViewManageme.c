/*
 * XREFs of ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180088250
 * Callers:
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1800898D0 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180131F60 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18006F940 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800875E8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@Z1@Z @ 0x180088568 (-EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008857C (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008872C (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        char **a1,
        HWND a2)
{
  DWORD WindowThreadProcessId; // r13d
  int v6; // ebx
  char *v7; // r12
  __int128 v8; // xmm6
  void *v9; // r8
  const char *v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  _BYTE *i; // rax
  _BYTE *j; // rbx
  __int64 v15; // r15
  int v16; // eax
  char *v17; // rax
  char *v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  char *v20; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v21; // [rsp+50h] [rbp-B8h]
  void *v22; // [rsp+58h] [rbp-B0h] BYREF
  LPARAM lParam[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD Rect[3]; // [rsp+78h] [rbp-90h] BYREF
  char v25[8]; // [rsp+90h] [rbp-78h] BYREF
  HWND v26; // [rsp+98h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  char v29[8]; // [rsp+B8h] [rbp-50h] BYREF
  HWND v30; // [rsp+C0h] [rbp-48h]
  __int128 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D8h] [rbp-30h]
  __int128 v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+F8h] [rbp-10h]
  char v35; // [rsp+108h] [rbp+0h] BYREF
  int v36; // [rsp+10Ch] [rbp+4h]
  HWND v37; // [rsp+110h] [rbp+8h]
  __int128 v38; // [rsp+118h] [rbp+10h]
  _OWORD v39[2]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v40[520]; // [rsp+148h] [rbp+40h] BYREF
  int v41; // [rsp+350h] [rbp+248h]
  wil::details::in1diag3 *retaddr; // [rsp+3B0h] [rbp+2A8h]

  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)a1);
  WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL);
  if ( !WindowThreadProcessId )
    return 2147943800LL;
  *(_OWORD *)&Rect[1] = 0LL;
  if ( !GetWindowRect(a2, (LPRECT)&Rect[1]) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x18A,
             (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v10);
  v18 = 0LL;
  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !is_mul_ok(0LL, 2uLL) )
    goto LABEL_11;
  v12 = 0LL;
  if ( (unsigned int)((0 * (unsigned __int128)2uLL) >> 64) != -4 )
    v12 = (unsigned int)((0 * (unsigned __int128)2uLL) >> 64) + 4;
  v22 = 0LL;
  if ( !is_mul_ok(v12, 8uLL) )
  {
LABEL_11:
    v6 = -2147024362;
    goto LABEL_12;
  }
  v6 = CTCoAllocPolicy::Realloc((IMalloc *)&v22, (v12 * (unsigned __int128)8uLL) >> 64, 0LL, 8 * v12, &v22);
  if ( v6 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)v6);
    CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)&v18);
    return (unsigned int)v6;
  }
  v21 = v12;
  v7 = (char *)v22;
  v18 = (char *)v22;
  v35 = 0;
  v36 = -1;
  v37 = a2;
  v8 = *(_OWORD *)&Rect[1];
  v38 = *(_OWORD *)&Rect[1];
  memset(v39, 0, sizeof(v39));
  memset_0(v40, 0, sizeof(v40));
  v41 = 0;
  v29[0] = 0;
  v30 = a2;
  v31 = v8;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v25[0] = 0;
  v26 = a2;
  v27 = v8;
  v28 = 0LL;
  lParam[0] = (LPARAM)&v35;
  lParam[1] = (LPARAM)v29;
  lParam[2] = (LPARAM)v25;
  ApplicationViewManagement::AssociatedWindowWin32Calls::EnumThreadWindows(
    WindowThreadProcessId,
    EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>,
    (LPARAM)lParam);
  if ( !v35 && v41 == 15 )
  {
    for ( i = v39; i != v40; i += 8 )
    {
      if ( !*(_QWORD *)i )
        goto LABEL_5;
    }
    for ( j = v39; j != v40; j += 8 )
    {
      v15 = *(_QWORD *)j;
      if ( v11 == v12 )
      {
        v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)&v18,
                v11 + 1,
                v9);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC5,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
            (const char *)(unsigned int)v16);
          break;
        }
        v12 = v21;
        v11 = v19;
        v7 = v18;
      }
      v19 = ++v11;
      v17 = &v7[8 * v11 - 8];
      if ( v17 )
        *(_QWORD *)v17 = v15;
    }
  }
LABEL_5:
  ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
    v29,
    &v18);
  ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
    v25,
    &v18);
  *a1 = v18;
  a1[2] = v20;
  a1[1] = (char *)v19;
  a1[3] = (char *)v21;
  return 0LL;
}
