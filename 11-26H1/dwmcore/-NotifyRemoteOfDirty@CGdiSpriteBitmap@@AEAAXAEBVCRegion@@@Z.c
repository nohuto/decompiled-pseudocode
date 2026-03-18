/*
 * XREFs of ?NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z @ 0x18019FE9C
 * Callers:
 *     ?AttachToWindow@CGdiSpriteBitmap@@QEAAX_N@Z @ 0x18019FE34 (-AttachToWindow@CGdiSpriteBitmap@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::NotifyRemoteOfDirty(CGdiSpriteBitmap *this, const struct CRegion *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( *((_BYTE *)this + 149) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      if ( v5 )
        (*(void (__fastcall **)(__int64, unsigned __int64, const struct CRegion *))(*(_QWORD *)v5 + 8LL))(
          v5,
          ((unsigned __int64)this + 120) & -(__int64)(this != 0LL),
          a2);
    }
  }
}
