/*
 * XREFs of ?SetTransform@CVectorShape@@QEAAXPEAVCComponentTransform2D@@@Z @ 0x1801B1770
 * Callers:
 *     ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1801B16D0 (-ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFO.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x180213FD0 (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVectorShape::SetTransform(CVectorShape *this, struct CComponentTransform2D *a2)
{
  struct CResource *v4; // rdx

  v4 = (struct CResource *)*((_QWORD *)this + 9);
  if ( a2 != v4 )
  {
    if ( a2 )
    {
      CResource::RegisterNotifier(this, a2);
      v4 = (struct CResource *)*((_QWORD *)this + 9);
    }
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 9) = a2;
    (*(void (__fastcall **)(CVectorShape *, __int64))(*(_QWORD *)this + 80LL))(this, 2LL);
  }
}
