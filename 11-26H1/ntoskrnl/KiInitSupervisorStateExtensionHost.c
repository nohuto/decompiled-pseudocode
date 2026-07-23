/*
 * XREFs of KiInitSupervisorStateExtensionHost @ 0x140CD048C
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 */

void __fastcall KiInitSupervisorStateExtensionHost(__int64 a1, __int64 a2)
{
  int v2; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall **v3)(); // [rsp+28h] [rbp-38h]
  _QWORD v4[6]; // [rsp+30h] [rbp-30h] BYREF

  if ( (KeFeatureBits & 0x800000) != 0 && KeEnabledSupervisorXStateFeatures || (_DWORD)KiIptMsrMask )
  {
    v4[0] = 65548LL;
    v3 = off_140007648;
    v4[2] = 512LL;
    v4[1] = &v2;
    v2 = 1;
    v4[3] = 0LL;
    v4[4] = 0LL;
    if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, a2, (unsigned __int16 *)v4) < 0 )
      KiSupervisorStateExtensionHost = 0LL;
  }
}
