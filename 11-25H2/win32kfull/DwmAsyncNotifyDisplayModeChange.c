/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x140208350
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncNotifyDisplayModeChange(PVOID Object)
{
  unsigned int v2; // edi
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+48h] [rbp-10h]

  v2 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    v6 = 1073741878;
    v5 = 0LL;
    memset(v4, 0, sizeof(v4));
    LODWORD(v4[0]) = 2883588;
    WORD2(v4[0]) = 0x8000;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
