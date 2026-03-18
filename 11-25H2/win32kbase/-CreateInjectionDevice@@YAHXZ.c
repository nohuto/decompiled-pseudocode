/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x14021C5BC
 * Callers:
 *     SynthesizeMitTouchInput @ 0x14021C740 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x14021CAC4 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401EBEA8 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x14021C67C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CreateInjectionDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 UserSessionState; // rax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagRECT *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagRECT *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  v3 = *(_QWORD *)(v2 + 104);
  UserSessionState = W32GetUserSessionState(v2, v4);
  v6 = 0;
  if ( (int)RIMIDE_InitializePointerDeviceInjection(
              2,
              10,
              v3,
              3,
              1,
              v17,
              1,
              0,
              0,
              (__int64 *)(UserSessionState + 19288)) >= 0 )
  {
    v9 = (struct tagRECT *)W32GetUserSessionState(v8, v7);
    v12 = (struct tagRECT *)W32GetUserSessionState(v11, v10);
    v15 = W32GetUserSessionState(v14, v13);
    return GetDeviceRects(*(void **)(v15 + 19288), v12 + 1206, v9 + 1207);
  }
  return v6;
}
