/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1800AC458
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113D64 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1800AA808 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1800AB1EC (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractions(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  void (__fastcall ***v5)(_QWORD); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD); // rax
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void (__fastcall *v17)(__int64 *, _BOOL8 *); // rsi
  int v18; // [rsp+50h] [rbp-79h] BYREF
  void (__fastcall ***v19)(_QWORD); // [rsp+58h] [rbp-71h] BYREF
  void (__fastcall ***v20)(_QWORD); // [rsp+60h] [rbp-69h] BYREF
  _BOOL8 v21; // [rsp+68h] [rbp-61h] BYREF
  void (__fastcall ***v22)(_QWORD); // [rsp+70h] [rbp-59h] BYREF
  __int16 v23; // [rsp+78h] [rbp-51h] BYREF
  char v24; // [rsp+7Ah] [rbp-4Fh]
  __int128 v25; // [rsp+80h] [rbp-49h] BYREF
  __int64 v26; // [rsp+90h] [rbp-39h]
  int v27; // [rsp+98h] [rbp-31h]
  __int16 v28; // [rsp+A0h] [rbp-29h] BYREF
  char v29; // [rsp+A2h] [rbp-27h]
  __int128 v30; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-11h]
  int v32; // [rsp+C0h] [rbp-9h]
  __int128 v33; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+Fh]
  int v35; // [rsp+E0h] [rbp+17h]
  int v36; // [rsp+E8h] [rbp+1Fh] BYREF
  __int64 v37; // [rsp+ECh] [rbp+23h]
  int v38; // [rsp+F4h] [rbp+2Bh]

  v2 = *a1;
  v19 = 0LL;
  v20 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v2 + 112))(a1);
  v6 = (__int64)v5;
  if ( v5 )
    (**v5)(v5);
  v36 = 0;
  v37 = 0LL;
  v38 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v32 = 0;
  v33 = 0LL;
  v28 = 0;
  v29 = 0;
  v26 = 0LL;
  v27 = 0;
  v23 = 0;
  v24 = 0;
  v34 = 0LL;
  v35 = 0;
  v18 = 3;
  if ( anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v7 = *a1;
    v18 = 2;
    v8 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v7 + 16))(a1);
    v9 = v19;
    v10 = (__int64)v8;
    if ( v19 != v8 )
    {
      if ( v8 )
        (**v8)(v8);
      v9 = (void (__fastcall ***)(_QWORD))v10;
      v19 = (void (__fastcall ***)(_QWORD))v10;
    }
  }
  else
  {
    v9 = v19;
  }
  v11 = v18;
  if ( v18 != 3 )
    goto LABEL_20;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v19);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              a1,
              v6,
              a2,
              (__int64)&v28,
              (__int64)&v23,
              (__int64)&v33,
              (__int64)&v36,
              &v18,
              &v19,
              &v20) < 0 )
    goto LABEL_11;
  v11 = v18;
  if ( v18 != 3 )
  {
    v9 = v19;
LABEL_20:
    if ( v11 != 4 )
    {
      v22 = v9;
      v21 = v11 != 1;
      if ( v9 )
      {
        (**v9)(v9);
        v11 = v18;
      }
      if ( v11 == 2 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 112))(a1);
        if ( v19 == (void (__fastcall ***)(_QWORD))v15 )
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v22);
      }
      (*(void (__fastcall **)(__int64 *, _BOOL8 *))(*a1 + 88))(a1, &v21);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v22);
    }
  }
  v16 = *a1;
  v21 = 1LL;
  v22 = v20;
  v17 = *(void (__fastcall **)(__int64 *, _BOOL8 *))(v16 + 104);
  if ( v20 )
    (**v20)(v20);
  v17(a1, &v21);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v22);
LABEL_11:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v33);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v25);
  result = DynArrayImpl<1>::~DynArrayImpl<1>(&v30);
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v13 = (__int64)v20;
  if ( v20 )
  {
    v20 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v14 = (__int64)v19;
  if ( v19 )
  {
    v19 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return result;
}
