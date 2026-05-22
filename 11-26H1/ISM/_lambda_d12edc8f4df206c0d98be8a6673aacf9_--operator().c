/*
 * XREFs of _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180023EC0
 * Callers:
 *     std::call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___ @ 0x18007F370 (std--call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18002352C (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??4?$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVMPCManager@@@Z @ 0x180023E5C (--4-$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVMPCManager@@@Z.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180025EDC (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180088FE0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x1800976E4 (-Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x1800B6E2C (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
unsigned int lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()()
{
  Microsoft::Bamo::BaseBamoConnection *v0; // rbx
  int v1; // edi
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64, const wchar_t *, __int64 *); // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r9
  int v10; // eax
  MPCManager *v11; // rax
  __int64 v12; // rcx
  unsigned int result; // eax
  __int64 v14; // rdi
  MPCManager *v15; // rcx
  ISMTracing *v16; // rcx
  int v17; // [rsp+20h] [rbp-20h]
  int v18; // [rsp+20h] [rbp-20h]
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  __int64 v22; // [rsp+68h] [rbp+28h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF

  v21 = 0LL;
  v0 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v1 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v24);
  if ( v1 < 0 )
  {
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCManager_InitializationFailed_(v16, v1);
    }
  }
  else
  {
    v2 = v21;
    v21 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = CoreUICreate(&v21);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v3,
        v17);
    v5 = v21;
    if ( !v21 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v4);
    v6 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v21 + 56LL);
    v7 = v22;
    v22 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v6(v5, v24, L"System\\MPCManagerPort", &v22);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v8,
        v17);
    v23 = 0LL;
    DWORD2(v19) = 1;
    *(_QWORD *)&v19 = 0LL;
    v10 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(v21, v22, &v19, v9, &v23);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v10,
        v18);
    v0 = v23;
  }
  MPCConstantManager::Create(v0);
  *(_QWORD *)&v19 = operator new(0x58uLL);
  v11 = MPCManager::MPCManager((MPCManager *)v19, v0);
  result = (unsigned int)Microsoft::WRL::ComPtr<MPCManager>::operator=(v12, v11);
  if ( v0 )
  {
    v14 = *((_QWORD *)v0 + 31);
    v15 = MPCManager::s_instance;
    *((_QWORD *)v0 + 31) = MPCManager::s_instance;
    if ( v15 )
      result = (**((__int64 (__fastcall ***)(__int64))v15 + 2))((__int64)v15 + 16);
    if ( v14 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 8LL))(v14 + 16);
  }
  if ( v22 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v0 )
    result = Microsoft::Bamo::BaseBamoConnection::Release(v0);
  if ( v21 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return result;
}
