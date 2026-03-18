/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x1409078BC
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x14083AE70 (ExSetFirmwareEnvironmentVariable.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140907830 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v1; // rdi
  _WORD *Pool2; // rax
  _WORD *v4; // rbx

  v1 = *(unsigned __int16 *)a1;
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
