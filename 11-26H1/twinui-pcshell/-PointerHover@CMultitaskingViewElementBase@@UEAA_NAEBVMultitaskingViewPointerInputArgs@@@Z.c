/*
 * XREFs of ?PointerHover@CMultitaskingViewElementBase@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C2940
 * Callers:
 *     ?PointerHover@CMultitaskingViewFrameElement@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CA4B0 (-PointerHover@CMultitaskingViewFrameElement@@UEAA_NAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C3A44 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMultitaskingViewElementBase::PointerHover(
        CMultitaskingViewElementBase *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  char v4; // bl
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, __int64); // rbx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 200LL))(this);
  if ( !*((_DWORD *)this + 25) )
  {
    v4 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)this + 544LL))(
           this,
           a2);
    if ( !v4 )
    {
      v5 = *((_QWORD *)this + 17);
      if ( v5 )
      {
        v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 224LL);
        v7 = CMultitaskingViewElementBase::_MapArgumentsToChild(this, v9, a2);
        return v6(v5, v7);
      }
    }
  }
  return v4;
}
