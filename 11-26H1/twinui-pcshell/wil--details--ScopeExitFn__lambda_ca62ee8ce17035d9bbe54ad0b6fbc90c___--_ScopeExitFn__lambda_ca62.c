/*
 * XREFs of wil::details::ScopeExitFn__lambda_ca62ee8ce17035d9bbe54ad0b6fbc90c___::_ScopeExitFn__lambda_ca62ee8ce17035d9bbe54ad0b6fbc90c___ @ 0x18055C958
 * Callers:
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$1 @ 0x1806F461A (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::ScopeExitFn__lambda_ca62ee8ce17035d9bbe54ad0b6fbc90c___::_ScopeExitFn__lambda_ca62ee8ce17035d9bbe54ad0b6fbc90c___(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *(_QWORD *)(v1 + 72);
    v3 = *(_QWORD *)(v1 + 80);
    v4 = v2 + 8 * v3;
    while ( v2 != v4 )
    {
      LODWORD(v3) = DestroyWindow(*(HWND *)(*(_QWORD *)v2 + 8LL));
      v2 += 8LL;
    }
  }
  return v3;
}
