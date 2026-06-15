/*
 * XREFs of ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x18004B2B0
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180030A04 (memcmp_0.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004B49C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

Windows::Internal::AssignedAccess::AAManagerHelper *__fastcall Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper(
        Windows::Internal::AssignedAccess::AAManagerHelper *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.AssignedAccess.AssignedAccessManager",
    0x36u,
    0x35u);
  v2 = v7;
  *(_QWORD *)this = 0LL;
  v5 = 0LL;
  v3 = RoActivateInstance(v2, &v5);
  if ( v3 >= 0 )
  {
    if ( !memcmp_0(&GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *(_QWORD *)this = v5;
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, Windows::Internal::AssignedAccess::AAManagerHelper *))v5)(
             v5,
             &GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a,
             this);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  *((_DWORD *)this + 2) = v3;
  return this;
}
