/*
 * XREFs of ?Initialize@CDrawBitmapInstruction@@AEAAJPEAVCBaseImageProxy@@@Z @ 0x180064B50
 * Callers:
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x1800649D8 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDrawBitmapInstruction::Initialize(CDrawBitmapInstruction *this, struct CBaseImageProxy *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( a2 )
  {
    *((_QWORD *)this + 2) = a2;
    CMILRefCountBase::AddRef(a2);
  }
  return 0LL;
}
