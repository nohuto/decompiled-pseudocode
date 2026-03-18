/*
 * XREFs of ?SetSource@CClipBrush@@QEAAXPEAVCBrush@@@Z @ 0x18028990C
 * Callers:
 *     ?OnBrushChanged@CCompositionTextLine@@UEAAXXZ @ 0x18026B7A0 (-OnBrushChanged@CCompositionTextLine@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CClipBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  char v4; // si
  struct CResource *v5; // rax

  if ( a2 != this[13] )
  {
    v4 = 0;
    if ( a2 )
      CResource::RegisterNotifier((CResource *)this, a2);
    CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
    this[13] = a2;
    if ( a2
      && ((*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 47LL)
       || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)this[13] + 64LL))(this[13], 102LL)) )
    {
      v4 = 1;
    }
    v5 = *this;
    *((_BYTE *)this + 96) = v4;
    (*((void (__fastcall **)(struct CResource **, __int64))v5 + 10))(this, 14LL);
  }
}
