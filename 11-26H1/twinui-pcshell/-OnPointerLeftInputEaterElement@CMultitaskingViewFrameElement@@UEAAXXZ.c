/*
 * XREFs of ?OnPointerLeftInputEaterElement@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804CA3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewFrameElement::OnPointerLeftInputEaterElement(
        CMultitaskingViewFrameElement *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  char *v4; // rcx

  v3 = *((_QWORD *)this + 4);
  v4 = (char *)this - 224;
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(char *, __int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, v3, a3);
  }
}
