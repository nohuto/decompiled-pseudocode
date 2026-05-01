/*
 * XREFs of ??$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z @ 0x1802E353C
 * Callers:
 *     ?WaitForReconstitution@CApplicationManager@@UEAAJXZ @ 0x1802CE5A0 (-WaitForReconstitution@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitOnAddressHelper<bool>(char *Address, char a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  char CompareAddress; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+58h] [rbp+20h] BYREF

  CompareAddress = a2;
  v6[0] = 0LL;
  QueryUnbiasedInterruptTime(v6);
  while ( 1 )
  {
    CompareAddress = *Address;
    if ( CompareAddress == 1 )
      break;
    UnbiasedTime = 0LL;
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    v3 = ((UnbiasedTime - v6[0]) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
    v4 = ((v3 + ((UnbiasedTime - v6[0] - v3) >> 1)) >> 9) / 0x3E8 / 0xA;
    if ( (unsigned int)v4 >= 0x7530 || !WaitOnAddress(Address, &CompareAddress, 1uLL, 30000 - v4) )
      return 2147943860LL;
  }
  return 0LL;
}
