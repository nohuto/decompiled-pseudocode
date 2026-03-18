/*
 * XREFs of ResolveContainerId @ 0x1401BED74
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetInputContainerId @ 0x1401E4380 (NtUserGetInputContainerId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall ResolveContainerId(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  int v6; // eax

  v5 = *(__int64 (__fastcall **)(__int64, __int64))(W32GetUserSessionState(a1, a2, a3) + 19592);
  if ( v5 )
    v6 = v5(a1, a2);
  else
    v6 = -1073741637;
  return v6 >= 0;
}
