/*
 * XREFs of ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1402ACAFC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall NotifyISMPenButtonYieldSettingChange(__int64 a1, __int64 a2)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  BOOL v3; // [rsp+34h] [rbp+Ch]

  v2 = 2;
  v3 = (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66800) & 0x200) == 0;
  SendMessageTo(16LL, &v2, 8LL);
}
