/*
 * XREFs of ?EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z @ 0x180125458
 * Callers:
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801254E0 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGenericInk::EnsureConsistentSegmentSize(CGenericInk *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+20h] [rbp-18h]

  if ( !a2 )
  {
    v5 = 556;
LABEL_6:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v5, 0LL);
    return v3;
  }
  v2 = *((_DWORD *)this + 68);
  v3 = 0;
  if ( !v2 )
  {
    *((_DWORD *)this + 68) = a2;
    return v3;
  }
  if ( a2 != v2 )
  {
    v5 = 564;
    goto LABEL_6;
  }
  return v3;
}
