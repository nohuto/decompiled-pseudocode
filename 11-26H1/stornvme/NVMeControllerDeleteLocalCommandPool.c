/*
 * XREFs of NVMeControllerDeleteLocalCommandPool @ 0x140011950
 * Callers:
 *     NVMeControllerRemove @ 0x14000E0B0 (NVMeControllerRemove.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeControllerFreeLocalCommand @ 0x14001D2D0 (NVMeControllerFreeLocalCommand.c)
 */

void __fastcall NVMeControllerDeleteLocalCommandPool(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1 + 4320;
    v3 = 0LL;
    if ( a1 != -4320 )
    {
      while ( !(unsigned int)StorPortExtendedFunction(37LL, a1, v2, &v3) && v3 )
        NVMeControllerFreeLocalCommand(a1, v3 - 112);
    }
  }
}
