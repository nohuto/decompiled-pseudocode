/*
 * XREFs of ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180022CFC
 * Callers:
 *     ?Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180022BFC (-Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CClientArea@@IEAA@XZ @ 0x180022D98 (--0CClientArea@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CClientArea::Create(struct CVisualProxy *this, struct CClientArea **a2)
{
  unsigned int v4; // ebx
  CClientArea *v5; // rax
  CClientArea *v6; // rax
  struct CClientArea *v7; // r9
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CClientArea *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CClientArea::CClientArea(v5);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = this;
    if ( this )
      CBaseObject::AddRef(this);
    *a2 = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x29u, 0LL);
  }
  return v4;
}
