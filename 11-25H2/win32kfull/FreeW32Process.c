/*
 * XREFs of FreeW32Process @ 0x1401139AC
 * Callers:
 *     W32pProcessCallout @ 0x1401130D0 (W32pProcessCallout.c)
 * Callees:
 *     DereferenceW32ProcessEx @ 0x140113FA4 (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall FreeW32Process(__int64 a1, unsigned int a2)
{
  vMarkFreeW32Process();
  return DereferenceW32ProcessEx(a1, a2);
}
