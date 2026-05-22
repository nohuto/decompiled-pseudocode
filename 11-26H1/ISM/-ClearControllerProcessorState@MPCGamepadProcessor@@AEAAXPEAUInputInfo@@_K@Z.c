/*
 * XREFs of ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801C34EC
 * Callers:
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005F5B0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C47E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C49D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCGamepadProcessor::ClearControllerProcessorState(
        MPCGamepadProcessor *this,
        struct InputInfo *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _DWORD v4[4]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v5; // [rsp+30h] [rbp-9h]
  int v6; // [rsp+38h] [rbp-1h]
  __int64 v7; // [rsp+40h] [rbp+7h]
  __int64 v8; // [rsp+48h] [rbp+Fh]
  __int64 v9; // [rsp+50h] [rbp+17h]
  __int64 v10; // [rsp+58h] [rbp+1Fh]
  __int64 v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  char v13; // [rsp+70h] [rbp+37h]

  v3 = *((_QWORD *)this + 459);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v4[1] = *((_DWORD *)a2 + 1);
  v4[2] = *((_DWORD *)a2 + 2);
  v5 = *((_QWORD *)a2 + 2);
  v7 = a3;
  v8 = 0LL;
  v4[0] = 64;
  v6 = 88;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 48LL))(v3, v4);
}
