/*
 * XREFs of InputUnInitialize @ 0x140117884
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x140117990 (isInputVirtualizationEnabled.c)
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 *     ApiSetEnterEditionCrit @ 0x1401C50EC (ApiSetEnterEditionCrit.c)
 *     ?ivrUninitialize@@YAJXZ @ 0x14021F948 (-ivrUninitialize@@YAJXZ.c)
 *     ApiSetLeaveEditionCrit @ 0x140228290 (ApiSetLeaveEditionCrit.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InputUnInitialize(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdi
  void (**v9)(void); // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  void (*v18)(void); // rax

  result = W32GetUserSessionState(a1, a2, a3);
  if ( *(_DWORD *)(result + 19168) )
  {
    v4 = ApiSetEnterEditionCrit();
    UnInitializeInputComponents();
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      v18 = *(void (**)(void))(W32GetUserSessionState(v6, v5, v7) + 19552);
      if ( v18 )
        v18();
      ivrUninitialize();
    }
    v8 = 3LL;
    v9 = (void (**)(void))(W32GetUserSessionState(v6, v5, v7) + 3120);
    do
    {
      (*v9)();
      v9 += 6;
      --v8;
    }
    while ( v8 );
    *(_BYTE *)(W32GetUserSessionState(v11, v10, v12) + 3080) = 0;
    result = W32GetUserSessionState(v14, v13, v15);
    v16 = 2LL;
    v17 = (_QWORD *)(result + 16360);
    do
    {
      if ( *v17 )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v17 + 16LL))(*v17, 1LL);
      *v17 = 0LL;
      v17 += 3;
      --v16;
    }
    while ( v16 );
    if ( !v4 )
      return ApiSetLeaveEditionCrit();
  }
  return result;
}
