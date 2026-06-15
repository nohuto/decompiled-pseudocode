/*
 * XREFs of ?Invoke@CGenericWorkItem@@UEAAXXZ @ 0x180024880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericWorkItem::Invoke(CGenericWorkItem *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 1) + 56LL);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x1800248AELL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
