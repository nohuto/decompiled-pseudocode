/*
 * XREFs of ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x1800251EC
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180025224 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800A9314 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A9454 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CapturedWindowRepresentation::FindSecondaryWindow(
        CapturedWindowRepresentation *this,
        struct CWindowData *a2)
{
  unsigned int v2; // r10d
  __int64 i; // r9

  v2 = -1;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    if ( **(_QWORD **)(*((_QWORD *)this + 6) + 8 * i) == *((_QWORD *)a2 + 5) )
      return (unsigned int)i;
  }
  return v2;
}
