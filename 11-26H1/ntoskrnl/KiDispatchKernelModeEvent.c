/*
 * XREFs of KiDispatchKernelModeEvent @ 0x140C63440
 * Callers:
 *     KiEnterKernelModeEvent @ 0x140C63100 (KiEnterKernelModeEvent.c)
 * Callees:
 *     KiDispatchKernelModeEvent @ 0x140C63440 (KiDispatchKernelModeEvent.c)
 */

// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __fastcall KiDispatchKernelModeEvent(double a1, double a2, double a3, double a4)
{
  __int64 v4; // rbp
  __int128 v5; // xmm4
  __int128 v6; // xmm5

  *(_OWORD *)(v4 - 16) = *(_OWORD *)&a1;
  *(_OWORD *)v4 = *(_OWORD *)&a2;
  *(_OWORD *)(v4 + 16) = *(_OWORD *)&a3;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&a4;
  *(_OWORD *)(v4 + 48) = v5;
  *(_OWORD *)(v4 + 64) = v6;
  while ( *(_BYTE *)(v4 - 86) == 7 )
  {
    *(_DWORD *)(v4 + 264) &= ~0x20000u;
    *(_DWORD *)(v4 + 268) &= 0xFFF0FF00;
    *(_QWORD *)(v4 - 24) = 0x2000LL;
    *(_BYTE *)(v4 - 86) = 3;
    *(_DWORD *)(v4 + 268) |= 0x3000Du;
    *(_WORD *)(v4 + 224) = 0;
  }
  JUMPOUT(0x140C634EELL);
}
