/*
 * XREFs of ?get_HostRawElementProvider@CDragVisualAcc@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x18054AD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HRESULT __fastcall CDragVisualAcc::get_HostRawElementProvider(
        CDragVisualAcc *this,
        struct IRawElementProviderSimple **a2)
{
  __int64 v3; // rcx
  HRESULT result; // eax
  HWND v5; // rax

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 8);
  result = -2147220991;
  if ( v3 )
  {
    v5 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3);
    return UiaHostProviderFromHwnd(v5, a2);
  }
  return result;
}
