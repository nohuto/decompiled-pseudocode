/*
 * XREFs of HalpRegisterPeiErrorSource @ 0x140590B38
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140BF23F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     HalpInterruptConnect @ 0x14057DE80 (HalpInterruptConnect.c)
 */

int __fastcall HalpRegisterPeiErrorSource(unsigned __int64 a1)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // edx
  unsigned __int64 v5; // [rsp+38h] [rbp-40h]
  __int128 v6; // [rsp+60h] [rbp-18h] BYREF
  PKINTERRUPT v7; // [rsp+80h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !a1 )
    return -1073741811;
  v3 = 0LL;
  if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
    v3 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 4);
  v5 = a1;
  v4 = *(_DWORD *)(a1 + 160);
  v6 = v3;
  return HalpInterruptConnect(
           &v6,
           v4,
           0xE4u,
           0xFu,
           1,
           LevelSensitive,
           (unsigned __int64)HalpPeiInterruptHandler,
           v5,
           0LL,
           0xFu,
           7,
           &v7);
}
