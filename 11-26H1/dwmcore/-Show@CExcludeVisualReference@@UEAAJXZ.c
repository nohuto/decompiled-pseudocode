/*
 * XREFs of ?Show@CExcludeVisualReference@@UEAAJXZ @ 0x180195000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Show(CExcludeVisualReference *this)
{
  struct CVisual *VisualNoRef; // rax
  unsigned __int8 v3; // dl
  __int64 result; // rax

  VisualNoRef = CExcludeVisualReference::GetVisualNoRef(this);
  if ( !VisualNoRef )
    return 2291674884LL;
  v3 = *((_BYTE *)VisualNoRef + 101);
  *((_BYTE *)VisualNoRef + 101) = v3 & 0x7F;
  result = 0LL;
  *((_BYTE *)this + 20) = v3 >> 7;
  *((_DWORD *)this + 4) = 1;
  return result;
}
