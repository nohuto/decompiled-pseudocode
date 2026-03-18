/*
 * XREFs of ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x180129114
 * Callers:
 *     ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1801290B4 (-EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CDecodeBitmap@@QEAA@XZ @ 0x1801291AC (--0CDecodeBitmap@@QEAA@XZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CDecodeBitmap::Create(struct CDecodeBitmap **a1)
{
  unsigned int v2; // edi
  CDecodeBitmap *v3; // rax
  CDecodeBitmap *v4; // rbx
  CDecodeBitmap *v5; // rax
  struct CDecodeBitmap *v6; // rbx

  v2 = 0;
  v3 = (CDecodeBitmap *)operator new(0x98uLL);
  v4 = v3;
  if ( !v3 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  memset_0(v3, 0, 0x98uLL);
  v5 = CDecodeBitmap::CDecodeBitmap(v4);
  v6 = v5;
  if ( !v5 )
  {
LABEL_6:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x13u, 0LL);
    goto LABEL_4;
  }
  CMILRefCountImpl::AddReference((CDecodeBitmap *)((char *)v5 + 8));
LABEL_4:
  *a1 = v6;
  return v2;
}
