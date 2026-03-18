/*
 * XREFs of VfGetVerifierInformationEx @ 0x140B8C4AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfGetVerifierInformationEx(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)a1 = VfVerifyMode;
  *(_DWORD *)(a1 + 4) = dword_140F03B00;
  *(_DWORD *)(a1 + 24) = 1000 * VfWdCancelTimeoutTicks;
  *(_DWORD *)(a1 + 28) = VfXdvEnabled;
  return 0LL;
}
