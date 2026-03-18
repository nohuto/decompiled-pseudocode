/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x14021FF8C
 * Callers:
 *     SynthesizeMitTouchInput @ 0x140220114 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1402204A8 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x14020A954 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x14022004C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CreateInjectionDevice(int a1, int a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // edx
  int v6; // r8d
  __int64 UserSessionState; // rax
  unsigned int v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  struct tagRECT *v12; // rdi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  struct tagRECT *v16; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968);
  v4 = *(_QWORD *)(v3 + 96);
  UserSessionState = W32GetUserSessionState(v3, v5, v6);
  v8 = 0;
  if ( (int)RIMIDE_InitializePointerDeviceInjection(2, 10, v4, 3, 1, 1, 0, 0, (__int64 *)(UserSessionState + 19320)) >= 0 )
  {
    v12 = (struct tagRECT *)(W32GetUserSessionState(v10, v9, v11) + 19344);
    v16 = (struct tagRECT *)(W32GetUserSessionState(v14, v13, v15) + 19328);
    v20 = W32GetUserSessionState(v18, v17, v19);
    return GetDeviceRects(*(void **)(v20 + 19320), v16, v12);
  }
  return v8;
}
