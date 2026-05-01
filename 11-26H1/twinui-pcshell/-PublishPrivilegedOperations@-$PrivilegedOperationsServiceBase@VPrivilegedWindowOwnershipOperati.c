/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178FD0
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x180178F50 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *a3 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( v3 )
    return PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
             a1,
             a2,
             a3,
             a2);
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c,
         *(_QWORD *)(a1 + 24));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x299,
    (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
