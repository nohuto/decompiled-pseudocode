/*
 * XREFs of MiWriteAweClusterPte @ 0x14052DDF8
 * Callers:
 *     MiWriteAwePtes @ 0x140477F10 (MiWriteAwePtes.c)
 *     MiApplyBreakMakeToAwePtes @ 0x1407008A0 (MiApplyBreakMakeToAwePtes.c)
 *     MiApplyLazyStampToAwePteBits @ 0x140700940 (MiApplyLazyStampToAwePteBits.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140702FEC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewPage @ 0x14029FC70 (MiWriteValidPteNewPage.c)
 *     MiWriteValidPteNewProtection @ 0x140300450 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiWriteAweClusterPte(signed __int64 a1, signed __int64 *a2, unsigned __int64 a3, int a4, __int64 a5)
{
  int v5; // edi
  unsigned __int64 v6; // rbx
  __int64 i; // rbp
  __int64 result; // rax

  if ( a4 )
  {
    v5 = a4;
    v6 = a3;
    if ( a4 <= 2 )
    {
      v6 = a3 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v5 = 4 - (a4 != 2);
    }
    for ( i = a5; i; --i )
    {
      if ( v5 == 1 )
      {
        if ( ((v6 ^ *a2) & 0xFFFFFFFFFF000LL) != 0 )
          result = MiWriteValidPteNewPage(a2, v6, 1LL);
        else
          result = MiWriteValidPteNewProtection(a2, v6);
      }
      else
      {
        result = (unsigned int)(v5 - 2);
        if ( (result & 0xFFFFFFFD) != 0 )
          *a2 = v6;
        else
          result = MiRewritePteWithLockBit(a1, 0, (unsigned __int64)a2, v6);
      }
      if ( (v6 & 1) != 0 || (v6 & 0x400) != 0 )
        v6 = (v6 + 4096) ^ ((v6 + 4096) ^ v6) & 0xFFF0000000000FFFuLL;
      ++a2;
    }
  }
  return result;
}
