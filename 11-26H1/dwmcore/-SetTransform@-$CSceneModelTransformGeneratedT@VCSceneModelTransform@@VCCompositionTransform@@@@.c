/*
 * XREFs of ?SetTransform@?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@QEAAJPEAVCComponentTransform3D@@@Z @ 0x18021CA74
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>::SetTransform(
        CResource *this,
        struct CResource *a2)
{
  struct CResource *v4; // rdx
  __int64 v5; // rax

  v4 = (struct CResource *)*((_QWORD *)this + 9);
  if ( a2 != v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 9) = a2;
    CResource::RegisterNotifier(this, a2);
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
      *(_BYTE *)(v5 + 300) = 1;
    (*(void (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  }
  return 0LL;
}
