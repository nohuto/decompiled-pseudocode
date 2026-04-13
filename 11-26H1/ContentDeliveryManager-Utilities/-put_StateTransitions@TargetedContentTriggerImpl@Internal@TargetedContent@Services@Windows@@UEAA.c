/*
 * XREFs of ?put_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x1800796B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::put_StateTransitions(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int i; // edi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 120LL))(*(_QWORD *)(a1 + 192));
  if ( v4 < 0 )
  {
    v5 = 277LL;
    goto LABEL_3;
  }
  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v12);
  if ( v4 < 0 )
  {
    v5 = 279LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  for ( i = 0; i < v12; ++i )
  {
    v13 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    v9 = v8(a2, i, &v13);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 283LL;
      goto LABEL_14;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192), v13);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 284LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      return (unsigned int)v4;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  return 0LL;
}
