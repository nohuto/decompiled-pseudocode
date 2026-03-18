/*
 * XREFs of NVMeControllerReclaimLocalCommand @ 0x14001D4C4
 * Callers:
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeControllerReclaimLocalCommand(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    memset(*(void **)(a2 + 96), 0, 0x1088uLL);
    result = *(_QWORD *)(a2 + 96);
    *(_BYTE *)(a2 + 11) = 0;
    *(_QWORD *)(a2 + 64) = result;
    *(_QWORD *)(result + 4200) = a2;
    *(_BYTE *)a2 = 0;
    if ( a1 != -4320 && a2 != -112 )
      return StorPortExtendedFunction(38LL, a1, a1 + 4320, a2 + 112);
  }
  return result;
}
