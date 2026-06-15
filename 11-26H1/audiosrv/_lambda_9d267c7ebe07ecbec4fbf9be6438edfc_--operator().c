/*
 * XREFs of _lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::operator() @ 0x1800C4A94
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@$$QEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEA_J@Z @ 0x1800C2ED8 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::operator()(_QWORD **a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rbp
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v13; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 88LL))(**a1, a1[1] + 8);
  v2 = *a1[2];
  if ( v2 )
  {
    *((_DWORD *)a1[1] + 17) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 16LL) + 18;
    v3 = *(_QWORD *)(*a1[2] + 8LL);
  }
  else
  {
    v4 = *(_QWORD *)(*a1[3] + 16LL);
    if ( !v4 )
      goto LABEL_6;
    *((_DWORD *)a1[1] + 17) = *(unsigned __int16 *)(v4 + 16) + 18;
    v3 = *a1[3];
  }
  a1[1][9] = *(_QWORD *)(v3 + 16);
LABEL_6:
  v5 = a1[4];
  v6 = a1[7];
  v7 = a1[6];
  v8 = a1[5];
  v13 = a1[1];
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v5);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,BRIDGE_STREAM_DESCRIPTOR *,IStreamGroupProxy * &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &,__int64 &>(
         v5,
         &v13,
         v8,
         (int)v7,
         v6);
  if ( v9 < 0 )
  {
    v10 = 3338LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1[4] + 48LL))(*a1[4], **a1);
  if ( v9 < 0 )
  {
    v10 = 3340LL;
    goto LABEL_8;
  }
  return 0LL;
}
