/*
 * XREFs of KiIntRedirectAllocateObject @ 0x1404FADBC
 * Callers:
 *     KiIntRedirectConnnect @ 0x140432334 (KiIntRedirectConnnect.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KiIntRedirectAllocateObject(__int64 a1, __int64 *a2)
{
  __int64 Pool2; // rax
  unsigned int v5; // r8d

  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = 0;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 8) = *(_WORD *)(a1 + 32);
    *(_QWORD *)Pool2 = *(_QWORD *)(a1 + 24);
    *(_BYTE *)(Pool2 + 16) = 0;
  }
  else
  {
    v5 = -1073741670;
  }
  *a2 = Pool2;
  return v5;
}
