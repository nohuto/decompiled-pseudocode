/*
 * XREFs of ?SetBrush@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJPEAVCBrush@@@Z @ 0x18021C89C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextObjectGeneratedT<CTextObject,CResource>::SetBrush(CResource *this, struct CResource *a2)
{
  struct CResource *v4; // rdx

  v4 = (struct CResource *)*((_QWORD *)this + 11);
  if ( a2 != v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 11) = a2;
    CResource::RegisterNotifier(this, a2);
    (*(void (__fastcall **)(CResource *))(*(_QWORD *)this + 192LL))(this);
  }
  return 0LL;
}
