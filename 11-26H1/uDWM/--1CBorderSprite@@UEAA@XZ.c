/*
 * XREFs of ??1CBorderSprite@@UEAA@XZ @ 0x180071BBC
 * Callers:
 *     ??_ECBorderSprite@@UEAAPEAXI@Z @ 0x180071B70 (--_ECBorderSprite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBorderSprite::~CBorderSprite(CBorderSprite *this)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 27);
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v1);
  }
  CRectangleVisual::~CRectangleVisual((CBaseObject **)this);
}
