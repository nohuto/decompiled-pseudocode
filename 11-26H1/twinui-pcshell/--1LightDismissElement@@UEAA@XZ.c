/*
 * XREFs of ??1LightDismissElement@@UEAA@XZ @ 0x1804D9E70
 * Callers:
 *     ??_GLightDismissElement@@UEAAPEAXI@Z @ 0x1804D9EC0 (--_GLightDismissElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LightDismissElement::~LightDismissElement(LightDismissElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
