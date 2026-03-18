/*
 * XREFs of Endpoint_SM_ResetEndpoint @ 0x140031344
 * Callers:
 *     ESM_ResettingEndpoint @ 0x140031320 (ESM_ResettingEndpoint.c)
 * Callees:
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Endpoint_SM_ResetEndpoint(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // r9d
  _OWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v2 = 40;
LABEL_3:
    LOWORD(v12[0]) = v2;
    goto LABEL_4;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v2 = -1;
    goto LABEL_3;
  }
  LOWORD(v12[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 288),
    v12);
  v3 = *((_QWORD *)&v12[0] + 1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 288),
         off_14006AE88);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(v4 + 16), 0, 0x60uLL);
  v6 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 56) = Endpoint_OnResetEndpointResetCompletion;
  *(_QWORD *)(v4 + 64) = v4;
  v7 = v6 & 0xFFFF03FF | 0x3800;
  *(_DWORD *)(v4 + 52) = v7;
  *(_DWORD *)(v4 + 52) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 152) << 16)) & 0x1F0000;
  *(_BYTE *)(v4 + 55) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 143LL);
  v8 = *(_DWORD *)(v4 + 52);
  v9 = v8 & 0xFFFFFDFF;
  *(_QWORD *)(v4 + 88) = 0LL;
  v10 = v8 | 0x200;
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_QWORD *)(v4 + 104) = 0LL;
  if ( (*(_BYTE *)(v3 + 32) & 1) == 0 )
    v10 = v9;
  *(_DWORD *)(v4 + 52) = v10;
  return Command_SendCommand(v5, v4 + 16);
}
