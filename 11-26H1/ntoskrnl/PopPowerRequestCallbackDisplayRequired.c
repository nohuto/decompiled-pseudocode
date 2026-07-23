/*
 * XREFs of PopPowerRequestCallbackDisplayRequired @ 0x140ABE670
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x1409CBF10 (PoEnergyContextUpdateComponentPower.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABE730 (TtmNotifySessionDisplayRequiredChange.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopPowerRequestCallbackDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h]
  int *v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  int *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF

  DWORD1(v8) = 0;
  v5 = *(_QWORD *)(a1 + 136);
  v13 = 0;
  PoEnergyContextUpdateComponentPower(v5, 12, 2LL - (a3 != 0));
  if ( TtmIsEnabled() )
  {
    LOBYTE(v6) = a3;
    return TtmNotifySessionDisplayRequiredChange(*(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 36), v6);
  }
  else
  {
    v9 = 0LL;
    LODWORD(v9) = 2;
    v14 = a3 != 0 ? 1 : -1;
    BYTE4(v9) = 0;
    v8 = 0LL;
    DWORD2(v9) = 4;
    v10 = &v14;
    v11 = 4LL;
    v12 = &v13;
    return PopInvokeWin32Callout(5LL, &v8, 1LL);
  }
}
