/*
 * XREFs of ??1?$array_size_proxy@Uguid@winrt@@@impl@winrt@@QEAA@XZ @ 0x18044AE14
 * Callers:
 *     _winrt::get_interfaces_::_1_::dtor$1 @ 0x1806ED6C4 (_winrt--get_interfaces_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::array_size_proxy<winrt::guid>::~array_size_proxy<winrt::guid>(unsigned int *a1)
{
  __int64 result; // rax

  result = a1[2];
  *(_DWORD *)(*(_QWORD *)a1 + 8LL) = result;
  return result;
}
