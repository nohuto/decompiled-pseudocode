/*
 * XREFs of UnionRect @ 0x1400CE698
 * Callers:
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1400CE4C8 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 *     ?SetBufferProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400CE570 (-SetBufferProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
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
  __int128 v10; // xmm0
  __int64 result; // rax

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
    v10 = *(_OWORD *)a2;
LABEL_19:
    *(_OWORD *)a1 = v10;
    return 1LL;
  }
  if ( !v6 )
  {
    v10 = *(_OWORD *)a3;
    goto LABEL_19;
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  return result;
}
