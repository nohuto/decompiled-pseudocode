/*
 * XREFs of SaveDisabledKIRListToReg @ 0x14026E308
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 * Callees:
 *     bSetRegDWORDValue @ 0x140216B54 (bSetRegDWORDValue.c)
 */

_BOOL8 __fastcall SaveDisabledKIRListToReg(int a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2);
  return bSetRegDWORDValue(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL), L"FeatureDisabledList", a1);
}
