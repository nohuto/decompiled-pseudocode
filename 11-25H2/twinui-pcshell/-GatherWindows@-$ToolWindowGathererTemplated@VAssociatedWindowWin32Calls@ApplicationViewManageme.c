/*
 * XREFs of ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18008CE10
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180087C40 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18008DEA0 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18008C828 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@Z1@Z @ 0x18008D130 (-EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@.c)
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008D144 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008D2F0 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
        _QWORD *a1,
        HWND a2)
{
  DWORD WindowThreadProcessId; // r12d
  int v6; // ebx
  __int128 v7; // xmm6
  void *v8; // r8
  const char *v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  _BYTE *i; // rax
  _BYTE *j; // rbx
  __int64 v14; // rsi
  const char *v15; // r9
  int v16; // eax
  char *v17; // rcx
  char *v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  __int64 v20; // [rsp+48h] [rbp-C0h]
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
  if ( GetWindowRect(a2, (LPRECT)&Rect[1]) )
  {
    v18 = 0LL;
    v10 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( !is_mul_ok(0LL, 2uLL) )
      goto LABEL_11;
    v11 = 0LL;
    if ( (unsigned int)((0 * (unsigned __int128)2uLL) >> 64) != -4 )
      v11 = (unsigned int)((0 * (unsigned __int128)2uLL) >> 64) + 4;
    v22 = 0LL;
    if ( !is_mul_ok(v11, 8uLL) )
    {
LABEL_11:
      v6 = -2147024362;
      goto LABEL_12;
    }
    v6 = CTCoAllocPolicy::Realloc((IMalloc *)&v22, (v11 * (unsigned __int128)8uLL) >> 64, 0LL, 8 * v11, &v22);
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
    v21 = v11;
    v18 = (char *)v22;
    v35 = 0;
    v36 = -1;
    v37 = a2;
    v7 = *(_OWORD *)&Rect[1];
    v38 = *(_OWORD *)&Rect[1];
    memset(v39, 0, sizeof(v39));
    memset_0(v40, 0, sizeof(v40));
    v41 = 0;
    v29[0] = 0;
    v30 = a2;
    v31 = v7;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    v25[0] = 0;
    v26 = a2;
    v27 = v7;
    v28 = 0LL;
    lParam[0] = (LPARAM)&v35;
    lParam[1] = (LPARAM)v29;
    lParam[2] = (LPARAM)v25;
    ApplicationViewManagement::AssociatedWindowWin32Calls::EnumThreadWindows(
      WindowThreadProcessId,
      EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_df7356024bf744f3615be68a3ea90a6d_>,
      (LPARAM)lParam);
    if ( v35 || v41 != 15 )
    {
LABEL_5:
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
        v29,
        &v18);
      ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
        v25,
        &v18);
      *a1 = v18;
      a1[2] = v20;
      a1[1] = v19;
      a1[3] = v21;
      return 0LL;
    }
    for ( i = v39; i != v40; i += 8 )
    {
      if ( !*(_QWORD *)i )
        goto LABEL_5;
    }
    for ( j = v39; ; j += 8 )
    {
      if ( j == v40 )
        goto LABEL_5;
      v14 = *(_QWORD *)j;
      v15 = 0LL;
      if ( v10 != v21
        || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)&v18,
                    v10 + 1,
                    v8),
            v15 = (const char *)(unsigned int)v16,
            v10 = v19,
            v16 >= 0) )
      {
        v19 = ++v10;
        v17 = &v18[8 * v10 - 8];
        if ( !v17 )
          continue;
        *(_QWORD *)v17 = v14;
      }
      if ( (int)v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC5,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
          v15);
        goto LABEL_5;
      }
    }
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x18A,
           (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
           v9);
}
