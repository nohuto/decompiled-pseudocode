/*
 * XREFs of ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x18016CF94
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x18016CF2C (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::UpdateBackdropCounts(CVisual *this, const struct CVisual *a2, char a3)
{
  int v3; // r10d
  int v4; // r11d
  CVisual *v5; // rdx
  CVisual **v6; // rax

  v3 = *((_DWORD *)a2 + 64) + 1;
  if ( *((char *)a2 + 102) >= 0 )
    v3 = *((_DWORD *)a2 + 64);
  v4 = *((_DWORD *)a2 + 65) + 1;
  if ( (*((_BYTE *)a2 + 103) & 2) == 0 )
    v4 = *((_DWORD *)a2 + 65);
  if ( !a3 )
  {
    v3 = -v3;
    v4 = -v4;
  }
  if ( v3 || v4 )
  {
    v5 = this;
    do
    {
      *((_DWORD *)this + 64) += v3;
      *((_DWORD *)this + 65) += v4;
      if ( (*((_BYTE *)this + 102) & 0x20) == 0 )
        break;
      this = (CVisual *)*((_QWORD *)this + 11);
      if ( v5 )
      {
        v6 = (CVisual **)*((_QWORD *)v5 + 11);
        v5 = (CVisual *)v6;
        if ( v6 )
          v5 = v6[11];
      }
    }
    while ( this != v5 );
  }
}
