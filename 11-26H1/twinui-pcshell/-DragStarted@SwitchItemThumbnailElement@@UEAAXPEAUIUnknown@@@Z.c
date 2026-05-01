/*
 * XREFs of ?DragStarted@SwitchItemThumbnailElement@@UEAAXPEAUIUnknown@@@Z @ 0x1804D3470
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SwitchItemThumbnailElement::DragStarted(SwitchItemThumbnailElement *this, struct IUnknown *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( SHIsSameObject(*((struct IUnknown **)this + 72), a2) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 152);
    v4 = *((_QWORD *)this + 74);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, v3, 0LL, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 73) + 104LL))(
      *((_QWORD *)this + 73),
      *((_QWORD *)this + 72));
  }
}
