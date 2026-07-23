/*
 * XREFs of PoSessionPowerControl @ 0x1407E259C
 * Callers:
 *     TtmpSessionPowerControl @ 0x1407ED02C (TtmpSessionPowerControl.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x1409F4430 (PopBlockSessionSwitch.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PoSessionPowerControl(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v3; // di
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h]
  __int128 v7; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+80h] [rbp+20h] BYREF
  int v10; // [rsp+90h] [rbp+30h]
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a3;
  v9 = 0;
  v3 = a1;
  *(_WORD *)((char *)&v11 + 1) = 0;
  BYTE3(v11) = 0;
  LOBYTE(a1) = 1;
  PopBlockSessionSwitch(a1, &v9);
  v6 = 0LL;
  BYTE4(v6) = 0;
  v11 = v3;
  v7 = (unsigned __int64)&v11;
  LODWORD(v6) = 6;
  DWORD2(v6) = 8;
  v5 = 0LL;
  v8 = 0LL;
  PopInvokeWin32Callout(5LL, &v5, 1LL);
  return PopBlockSessionSwitch(0LL, &v9);
}
