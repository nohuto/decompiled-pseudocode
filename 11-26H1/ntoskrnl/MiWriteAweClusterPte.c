/*
 * XREFs of MiWriteAweClusterPte @ 0x140530318
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiApplyBreakMakeToAwePtes @ 0x140705570 (MiApplyBreakMakeToAwePtes.c)
 *     MiApplyLazyStampToAwePteBits @ 0x140705610 (MiApplyLazyStampToAwePteBits.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140707CBC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
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
