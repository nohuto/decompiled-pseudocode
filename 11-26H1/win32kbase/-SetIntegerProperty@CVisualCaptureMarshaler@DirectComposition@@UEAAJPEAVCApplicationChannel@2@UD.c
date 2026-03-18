/*
 * XREFs of ?SetIntegerProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140244B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        char *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  char v8; // dl
  char v9; // dl

  v5 = 0;
  v6 = a3 - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return (unsigned int)-1073741811;
      if ( a1[27] != a4 )
      {
        a1[27] = a4;
LABEL_9:
        v8 = 1;
LABEL_11:
        *a5 = v8;
        return v5;
      }
    }
    else if ( a1[25] != a4 )
    {
      a1[25] = a4;
      goto LABEL_9;
    }
    v8 = 0;
    goto LABEL_11;
  }
  if ( a1[24] == a4 )
  {
    v9 = 0;
  }
  else
  {
    a1[24] = a4;
    v9 = 1;
  }
  *a5 = v9;
  return v5;
}
