/*
 * XREFs of ViCheckMdlLength @ 0x140C2C528
 * Callers:
 *     VfBuildScatterGatherList @ 0x140C29A20 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140C29D50 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140C2AB90 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140C2AF10 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140C2B300 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140C2B4C0 (VfMapTransferEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViCheckMdlLength(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // eax

  if ( !a3 )
    return 0LL;
  while ( a1 )
  {
    v4 = *((unsigned int *)a1 + 10);
    if ( a2 <= v4 )
    {
      do
      {
        if ( !a3 )
          break;
        v5 = *((_DWORD *)a1 + 10);
        a1 = (__int64 *)*a1;
        v6 = v5 - a2;
        if ( v6 >= a3 )
          v6 = a3;
        LODWORD(a2) = 0;
        a3 -= v6;
      }
      while ( a1 );
      return a3;
    }
    a1 = (__int64 *)*a1;
    a2 -= v4;
  }
  return a3;
}
