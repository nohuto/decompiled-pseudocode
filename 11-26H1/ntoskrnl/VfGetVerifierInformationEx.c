/*
 * XREFs of VfGetVerifierInformationEx @ 0x140C200F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 */

__int64 __fastcall VfGetVerifierInformationEx(char *a1)
{
  int Src; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+48h] [rbp+20h] BYREF

  Src = VfVerifyMode;
  v4 = dword_140F08700;
  v5 = 1000 * VfWdCancelTimeoutTicks;
  RtlSetUserMemory(a1, 0, 0x28uLL);
  RtlCopyToUser(a1, &Src, 4uLL);
  RtlCopyToUser(a1 + 4, &v4, 4uLL);
  RtlCopyToUser(a1 + 24, &v5, 4uLL);
  RtlCopyToUser(a1 + 28, &VfXdvEnabled, 4uLL);
  return 0LL;
}
