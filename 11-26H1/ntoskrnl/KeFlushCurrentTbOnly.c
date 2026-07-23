/*
 * XREFs of KeFlushCurrentTbOnly @ 0x140251FE8
 * Callers:
 *     MI_FLUSH_ENTIRE_TB @ 0x140251974 (MI_FLUSH_ENTIRE_TB.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140252B78 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402F38FC (HvlpFastFlushAddressSpaceTbEx.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1404150F0 (KiPrepareFlushCurrentAffinity.c)
 *     KiIsFlushEntire @ 0x14041DD34 (KiIsFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiFlushCurrentTbOnly @ 0x140469CC0 (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  _BYTE v10[272]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v10, 0, 0x108uLL);
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1);
  if ( KiKvaShadow )
  {
    v3 = 0LL;
    if ( a1 )
    {
LABEL_6:
      v4 = 1;
      goto LABEL_7;
    }
  }
  else
  {
    if ( a1 != 1 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
    v3 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  }
  v4 = 0;
LABEL_7:
  KiPrepareFlushCurrentAffinity(v10);
  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(v6, v5, v7, v8) )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 5 <= 0xE && (HvlEnlightenments & 0x80u) != 0 )
      return HvlpFastFlushAddressSpaceTbEx(v3);
    else
      return HvlpSlowFlushAddressSpaceTbEx(v3);
  }
  else
  {
    LOBYTE(v9) = v4;
    if ( (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTb(v3, v10, v9);
    else
      return HvlpFastFlushAddressSpaceTb(v3, v10, v9);
  }
}
