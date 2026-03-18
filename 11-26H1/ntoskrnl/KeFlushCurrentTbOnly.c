/*
 * XREFs of KeFlushCurrentTbOnly @ 0x140250688
 * Callers:
 *     MI_FLUSH_ENTIRE_TB @ 0x140250014 (MI_FLUSH_ENTIRE_TB.c)
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x140250E04 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140251218 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1403E65B8 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1403E6A1C (HvlpFastFlushAddressSpaceTbEx.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14041D8A0 (KiPrepareFlushCurrentAffinity.c)
 *     KiIsFlushEntire @ 0x140430D04 (KiIsFlushEntire.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140469420 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiFlushCurrentTbOnly @ 0x140470540 (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
