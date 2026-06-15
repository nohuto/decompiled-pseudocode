/*
 * XREFs of ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18015C1F8
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoul(wchar_t *String, wchar_t *a2)
{
  wchar_t *v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v2 = String;
  v3 = (_DWORD *)_o__errno(String);
  v4 = v3;
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(wchar_t **)v2;
  EndPtr = 0LL;
  *v3 = 0;
  wcstoul(v2, &EndPtr, 10);
  if ( v2 == EndPtr )
  {
    std::_Xinvalid_argument("invalid stoul argument");
    __debugbreak();
  }
  if ( *v4 == 34 )
  {
    std::_Xout_of_range("stoul argument out of range");
    __debugbreak();
  }
}
