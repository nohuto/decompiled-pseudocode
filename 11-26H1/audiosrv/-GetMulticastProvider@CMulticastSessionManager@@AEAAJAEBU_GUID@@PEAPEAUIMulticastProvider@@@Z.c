/*
 * XREFs of ?GetMulticastProvider@CMulticastSessionManager@@AEAAJAEBU_GUID@@PEAPEAUIMulticastProvider@@@Z @ 0x180107CF0
 * Callers:
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x180107750 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMulticastSessionManager::GetMulticastProvider(
        CMulticastSessionManager *this,
        const struct _GUID *a2,
        struct IMulticastProvider **a3)
{
  __int64 **v3; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  struct IMulticastProvider *v7; // rcx
  int v9[4]; // [rsp+20h] [rbp-38h]
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (__int64 **)*((_QWORD *)this + 3);
  *(struct _GUID *)v9 = *a2;
  while ( 1 )
  {
    if ( !v3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
        (const char *)0x80070490LL);
      return 2147943568LL;
    }
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v3[1] + 32))(v3[1], v10);
    v6 = *v5 - *(_QWORD *)v9;
    if ( *v5 == *(_QWORD *)v9 )
      v6 = v5[1] - *(_QWORD *)&v9[2];
    if ( !v6 )
      break;
    v3 = (__int64 **)*v3;
  }
  v7 = (struct IMulticastProvider *)v3[1];
  if ( v7 )
  {
    *a3 = v7;
    (*(void (__fastcall **)(struct IMulticastProvider *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    *a3 = 0LL;
  }
  return 0LL;
}
