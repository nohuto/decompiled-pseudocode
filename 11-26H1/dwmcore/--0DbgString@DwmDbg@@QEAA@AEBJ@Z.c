/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@AEBJ@Z @ 0x1801AA9C4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

char **__fastcall DwmDbg::DbgString::DbgString(char **this, int *a2)
{
  int v2; // r8d

  v2 = *a2;
  if ( *a2 == -2147221184 )
  {
    DwmDbg::DbgString::DbgString(this, "E_DRAW");
  }
  else
  {
    switch ( v2 )
    {
      case -2147467263:
        DwmDbg::DbgString::DbgString(this, "E_NOTIMPL");
        break;
      case -2147467262:
        DwmDbg::DbgString::DbgString(this, "E_NOINTERFACE");
        break;
      case -2147467260:
        DwmDbg::DbgString::DbgString(this, "E_ABORT");
        break;
      case -2147467259:
        DwmDbg::DbgString::DbgString(this, "E_FAIL");
        break;
      case -2147418113:
        DwmDbg::DbgString::DbgString(this, "E_UNEXPECTED");
        break;
      case -2147024882:
        DwmDbg::DbgString::DbgString(this, "E_OUTOFMEMORY");
        break;
      case -2147024809:
        DwmDbg::DbgString::DbgString(this, "E_INVALIDARG");
        break;
      default:
        if ( v2 )
          DwmDbg::DbgString::DbgString(this, "0x%x", v2);
        else
          DwmDbg::DbgString::DbgString(this, "S_OK");
        break;
    }
  }
  return this;
}
