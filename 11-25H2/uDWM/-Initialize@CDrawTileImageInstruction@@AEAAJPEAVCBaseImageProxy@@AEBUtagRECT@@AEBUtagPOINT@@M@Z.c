/*
 * XREFs of ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x180071BB8
 * Callers:
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180016F24 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Initialize(
        CDrawTileImageInstruction *this,
        struct CBaseImageProxy *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4,
        float a5)
{
  CBaseObject *v7; // rcx

  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( a2 )
  {
    *((_QWORD *)this + 6) = a2;
    CMILRefCountBase::AddRef(a2);
  }
  *((struct tagRECT *)this + 1) = *a3;
  *((float *)this + 10) = a5;
  *((struct tagPOINT *)this + 4) = *a4;
  return 0LL;
}
