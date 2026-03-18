/*
 * XREFs of ?Remove@CFlipResourceState@@UEAAXXZ @ 0x14005A850
 * Callers:
 *     ?Remove@CContentResourceState@@UEAAXXZ @ 0x14005A7E0 (-Remove@CContentResourceState@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipResourceState::Remove(CFlipResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 32);
  if ( (v1 & 1) != 0 )
    (*(void (__fastcall **)(CFlipResourceState *))(*(_QWORD *)this + 32LL))(this);
  else
    *((_BYTE *)this + 32) = v1 | 2;
}
