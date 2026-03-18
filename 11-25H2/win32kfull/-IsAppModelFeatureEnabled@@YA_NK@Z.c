/*
 * XREFs of ?IsAppModelFeatureEnabled@@YA_NK@Z @ 0x140274150
 * Callers:
 *     NtUserApplyWindowAction @ 0x1402945A0 (NtUserApplyWindowAction.c)
 *     NtUserConvertToInterceptWindow @ 0x140294EB0 (NtUserConvertToInterceptWindow.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsAppModelFeatureEnabled(__int64 a1)
{
  __int64 CurrentProcess; // rax
  _BYTE *Address; // [rsp+48h] [rbp+10h]

  CurrentProcess = PsGetCurrentProcess(a1);
  Address = (_BYTE *)PsGetProcessPeb(CurrentProcess);
  ProbeForRead(Address, 0x7D0uLL, 1u);
  return Address[832] & 1;
}
