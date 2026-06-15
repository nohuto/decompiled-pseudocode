/*
 * XREFs of ?NotifySubmixClient@CAppSubmixClient@@QEAAX_KW4ProcessSubmix_NotificationType@@0@Z @ 0x1800BC59C
 * Callers:
 *     _lambda_034c87b344bb69cb11fef3b63041d359_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800BA930 (_lambda_034c87b344bb69cb11fef3b63041d359_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 *     _lambda_7b145c4c6aad9512c6da1a4784ceeafc_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800BAA6C (_lambda_7b145c4c6aad9512c6da1a4784ceeafc_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppSubmixClient::NotifySubmixClient(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  DWORD CurrentProcessId; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int MediaEvent; // eax
  int v14[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  int v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+44h] [rbp-44h]
  __int64 v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v16 = 0LL;
  v19 = 0;
  v14[0] = 56;
  v14[1] = 0x40000;
  CurrentProcessId = GetCurrentProcessId();
  v9 = *a1;
  v15 = CurrentProcessId;
  v21 = a1[2];
  v17 = a2;
  v18 = a3;
  v20 = a4;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
  MediaEvent = GenerateMediaEvent(v14, v10, v11, v12);
  if ( MediaEvent < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)MediaEvent,
      v14[0]);
}
