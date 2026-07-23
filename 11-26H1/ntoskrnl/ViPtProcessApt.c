/*
 * XREFs of ViPtProcessApt @ 0x140C307D0
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     VfPtAddStackInfoIfNotExist @ 0x140C2FAC8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C3026C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140C30318 (VfPtProcessFreePoolInfo.c)
 */

void __fastcall ViPtProcessApt(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (VfOptionFlags & 0x1000) != 0 )
  {
    if ( *(_BYTE *)(a1 + 436) )
    {
      VfPtProcessFreePoolInfo((_QWORD *)a1);
    }
    else
    {
      v2 = VfPtAddStackInfoIfNotExist(
             (void *)(a1 + 24),
             *(_DWORD *)(a1 + 424),
             *(_QWORD *)a1,
             *(_DWORD *)(a1 + 432),
             *(_QWORD *)(a1 + 8));
      if ( v2 )
        VfPtProcessAllocPoolInfo((_QWORD *)a1, (__int64)v2);
    }
  }
}
