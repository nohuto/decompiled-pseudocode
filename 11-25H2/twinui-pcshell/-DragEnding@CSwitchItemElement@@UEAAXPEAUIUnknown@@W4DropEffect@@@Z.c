/*
 * XREFs of ?DragEnding@CSwitchItemElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804ADFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804AFDF0 (-DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwitchItemElement::DragEnding(__int64 a1, struct IUnknown *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = CMultitaskingViewElementBase::DragEnding();
  if ( *(_BYTE *)(a1 + 672) && !a3 )
  {
    result = SHIsSameObject(*(struct IUnknown **)(a1 + 584), a2);
    if ( (_DWORD)result )
    {
      v8 = *(_QWORD *)(a1 + 88);
      *(_BYTE *)(a1 + 672) = 0;
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v7, 3LL, 0LL);
    }
  }
  return result;
}
