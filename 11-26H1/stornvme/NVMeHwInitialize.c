/*
 * XREFs of NVMeHwInitialize @ 0x140012FB0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    LOBYTE(a2) = 1;
    if ( !(unsigned int)NVMeControllerInitPart2(a1, a2, 1u) )
      return NVMeControllerInitPart3(a1, 1u);
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return v2;
}
