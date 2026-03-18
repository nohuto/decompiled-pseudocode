/*
 * XREFs of MiWriteValidPteNewPage @ 0x14029FC70
 * Callers:
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiTradePageWritePte @ 0x14029F8EC (MiTradePageWritePte.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiWriteAweClusterPte @ 0x14052DDF8 (MiWriteAweClusterPte.c)
 *     MiWritePteHighLevelIsr @ 0x1406F2D80 (MiWritePteHighLevelIsr.c)
 * Callees:
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 PteShadow; // r10
  int v4; // ebx
  __int64 v5; // r9
  volatile signed __int64 *v6; // r11
  int v7; // ecx
  unsigned __int64 v8; // r9
  signed __int64 v9; // rdx
  __int64 result; // rax
  int v11; // eax
  signed __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  PteShadow = *a1;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( !(_DWORD)a3 && (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  v7 = 0;
  v8 = v5 & 0x80FFFFFFFFFFFFFFuLL;
  v9 = v8 | PteShadow & 0x7F00000000000000LL;
  v12 = v9;
  if ( !v4 && (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v11 = MiSanitizeShadowPxe(0LL, &v12, a3);
    v9 = v12;
    v7 = v11;
  }
  while ( 1 )
  {
    if ( (PteShadow & 0x20) != 0 )
      v9 |= 0x20uLL;
    else
      v9 &= ~0x20uLL;
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(v6, v9, PteShadow);
    if ( PteShadow == result )
      break;
    PteShadow = result;
  }
  if ( v7 )
    return MiWritePteShadow(v6, v9, a3, v8);
  return result;
}
