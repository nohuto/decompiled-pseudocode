/*
 * XREFs of ??1CContentResourceState@@UEAA@XZ @ 0x140058714
 * Callers:
 *     ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1400586D0 (--_ECContentResourceState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1400587DC (--1CFlipResourceState@@MEAA@XZ.c)
 */

void __fastcall CContentResourceState::~CContentResourceState(CContentResourceState *this)
{
  CFlipPropertySetBase *v2; // rcx
  CPoolBufferResource *v3; // rcx

  *(_QWORD *)this = &CContentResourceState::`vftable';
  v2 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CFlipPropertySetBase::Release(v2);
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (CPoolBufferResource *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CPoolBufferResource::RemoveUsageReference(v3);
    CFlipResource::Release(*((CFlipResource **)this + 6));
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 6) = 0LL;
  }
  CFlipResourceState::~CFlipResourceState(this);
}
