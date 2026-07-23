/*
 * XREFs of PopUpdateSmbiosData @ 0x14077E3F0
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     PopTraceSmbiosChange @ 0x14060CB38 (PopTraceSmbiosChange.c)
 */

void __fastcall PopUpdateSmbiosData(char a1, char a2, int a3, void *a4)
{
  int v4; // r10d
  void *volatile StackLimit; // rcx

  v4 = WmipSMBiosTableLength;
  BYTE2(WmipSMBiosVersionInfo) = a2;
  StackLimit = ExpPlatformBinaryLock.StackLimit;
  BYTE1(WmipSMBiosVersionInfo) = a1;
  ExpPlatformBinaryLock.StackLimit = a4;
  LODWORD(WmipSMBiosTableLength) = a3;
  if ( a4 != StackLimit || a3 != v4 )
    PopTraceSmbiosChange();
}
