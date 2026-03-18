/*
 * XREFs of InputUnInitialize @ 0x1400CED9C
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 *     isInputVirtualizationEnabled @ 0x1400CF034 (isInputVirtualizationEnabled.c)
 *     ?Session_UnInitialize@CBaseInput@@SAJXZ @ 0x140210D40 (-Session_UnInitialize@CBaseInput@@SAJXZ.c)
 *     ?ivrUninitialize@@YAJXZ @ 0x14021B474 (-ivrUninitialize@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall InputUnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  void (**v5)(void); // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  void (*v10)(void); // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19136) )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v11);
    UnInitializeInputComponents();
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      v10 = *(void (**)(void))(W32GetUserSessionState(v3, v2) + 19520);
      if ( v10 )
        v10();
      ivrUninitialize();
    }
    v4 = 3LL;
    v5 = (void (**)(void))(W32GetUserSessionState(v3, v2) + 3120);
    do
    {
      (*v5)();
      v5 += 6;
      --v4;
    }
    while ( v4 );
    CBaseInput::Session_UnInitialize();
    v8 = 2LL;
    v9 = (_QWORD *)(W32GetUserSessionState(v7, v6) + 16368);
    do
    {
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 16LL))(*v9, 1LL);
      *v9 = 0LL;
      v9 += 3;
      --v8;
    }
    while ( v8 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v11);
  }
}
