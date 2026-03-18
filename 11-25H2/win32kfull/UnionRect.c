/*
 * XREFs of UnionRect @ 0x1401524B8
 * Callers:
 *     GetInheritedMonitor @ 0x140036E20 (GetInheritedMonitor.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x140050268 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x140152270 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x14015232C (InvalidateWEFCOMPOSITEDDCEs.c)
 *     _ScrollDC @ 0x1401569D0 (_ScrollDC.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnionRect(_DWORD *a1, int *a2, int *a3)
{
  BOOL v4; // ecx
  int v5; // r10d
  BOOL v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  __int128 v11; // xmm0

  v4 = *a2 >= a2[2] || a2[1] >= a2[3];
  v5 = *a3;
  v6 = *a3 >= a3[2] || a3[1] >= a3[3];
  if ( !v4 )
  {
    if ( !v6 )
    {
      if ( *a2 < v5 )
        v5 = *a2;
      *a1 = v5;
      v7 = a2[1];
      if ( v7 >= a3[1] )
        v7 = a3[1];
      a1[1] = v7;
      v8 = a2[2];
      if ( v8 <= a3[2] )
        v8 = a3[2];
      a1[2] = v8;
      v9 = a2[3];
      if ( v9 <= a3[3] )
        v9 = a3[3];
      a1[3] = v9;
      return 1LL;
    }
    v11 = *(_OWORD *)a2;
LABEL_24:
    *(_OWORD *)a1 = v11;
    return 1LL;
  }
  if ( !v6 )
  {
    v11 = *(_OWORD *)a3;
    goto LABEL_24;
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  return result;
}
