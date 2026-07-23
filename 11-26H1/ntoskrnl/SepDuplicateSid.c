/*
 * XREFs of SepDuplicateSid @ 0x140A86564
 * Callers:
 *     SepSetTokenUserAndGroups @ 0x140A86164 (SepSetTokenUserAndGroups.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140A86468 (SepDuplicateTokenUserAndGroups.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *Src, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebp
  void *Pool2; // rsi
  unsigned int v7; // eax

  if ( !a2 )
    return 3221225485LL;
  v4 = Src[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v7 = 4 * Src[1] + 8;
  if ( v7 <= v5 )
    memmove(Pool2, Src, v7);
  *a2 = Pool2;
  return 0LL;
}
