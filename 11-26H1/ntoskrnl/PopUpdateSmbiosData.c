/*
 * XREFs of PopUpdateSmbiosData @ 0x14077B7B0
 * Callers:
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 * Callees:
 *     PopTraceSmbiosChange @ 0x140609F78 (PopTraceSmbiosChange.c)
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
