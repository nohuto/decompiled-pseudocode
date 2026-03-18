/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x140165284
 * Callers:
 *     NtUserTransformPoint @ 0x140164EB0 (NtUserTransformPoint.c)
 * Callees:
 *     ?IsDpiValid@@YA_NI@Z @ 0x1401652DC (-IsDpiValid@@YA_NI@Z.c)
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0x7FFFFFFF;
  if ( v1 == 34 || v1 == 24592 || v1 == 1073766416 || v1 == 18 )
    return 1LL;
  if ( (v1 & 0xFFFE00FF) == 0x11 )
    return IsDpiValid((v1 >> 8) & 0x1FF);
  return 0LL;
}
