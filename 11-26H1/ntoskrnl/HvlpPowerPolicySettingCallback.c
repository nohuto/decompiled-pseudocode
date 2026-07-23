/*
 * XREFs of HvlpPowerPolicySettingCallback @ 0x1405C21C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlpPowerPolicySettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v5; // [rsp+20h] [rbp-228h]
  __int128 v6[34]; // [rsp+28h] [rbp-220h] BYREF

  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  HIDWORD(v5) = *Value;
  LODWORD(v5) = (_DWORD)Context;
  DWORD1(v6[0]) = 0;
  memset_0(v6, 0, 0x214uLL);
  *((_QWORD *)&v6[0] + 1) = v5;
  LODWORD(v6[0]) = 5;
  return HvlpSetPowerProperty(v6);
}
