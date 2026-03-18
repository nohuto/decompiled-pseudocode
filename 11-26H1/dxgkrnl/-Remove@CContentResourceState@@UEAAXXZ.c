/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x14005A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x14005A850 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CPoolBufferResource *v2; // rcx
  CFlipPropertySetBase *v3; // rcx
  char v4; // al

  v2 = (CPoolBufferResource *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CPoolBufferResource::RemoveUsageReference(v2);
    CFlipResource::Release(*((CFlipResource **)this + 6));
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
  v4 = *((_BYTE *)this + 64);
  if ( v3 )
  {
    CFlipPropertySetBase::Release(v3);
    v4 = *((_BYTE *)this + 64) | 1;
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_BYTE *)this + 64) = v4 & 0xFE;
  CFlipResourceState::Remove(this);
}
