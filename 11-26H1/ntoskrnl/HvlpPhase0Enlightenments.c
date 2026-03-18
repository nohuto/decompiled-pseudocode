/*
 * XREFs of HvlpPhase0Enlightenments @ 0x1405C1F24
 * Callers:
 *     HvlRestoreEnlightenment @ 0x1405B901C (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x14079166C (HvlPhase0Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     HvlpSetRegister64 @ 0x140493EC0 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404D0D20 (HvlpGetRegister64.c)
 *     HvlpAllocateEarlyPages @ 0x1405BFA2C (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x1405BFC88 (HvlpMapEarlyPages.c)
 */

__int64 __fastcall HvlpPhase0Enlightenments(__int64 a1)
{
  void *EarlyPages; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  EarlyPages = 0LL;
  v5 = 0LL;
  if ( (HvlEnlightenments & 0x100) == 0 )
    return 0LL;
  HvlpGetRegister64(589847, &v5);
  v3 = v5 | 1;
  if ( (HvlpFlags & 2) != 0 )
  {
    EarlyPages = (void *)HvlpMapEarlyPages(v5 & 0xFFFFFFFFFFFFF000uLL);
    if ( EarlyPages )
    {
LABEL_5:
      HvlpSetRegister64(589847, v3);
      if ( EarlyPages )
        HvlpReferenceTscPage = EarlyPages;
      return 0LL;
    }
  }
  else
  {
    if ( !a1 )
    {
      v3 = v3 & 0xFFF | MmGetPhysicalAddress(HvlpReferenceTscPage).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    EarlyPages = (void *)HvlpAllocateEarlyPages(a1, 1LL);
    if ( EarlyPages )
    {
      v3 &= 0xFFFu;
      goto LABEL_5;
    }
  }
  return 3221225626LL;
}
