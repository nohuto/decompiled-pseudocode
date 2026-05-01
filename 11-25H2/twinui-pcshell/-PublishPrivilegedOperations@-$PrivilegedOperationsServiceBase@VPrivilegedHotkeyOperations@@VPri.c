/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18029745C
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18020DF44 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        const char *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1;
  if ( *a3 == *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data4;
  if ( v3 )
  {
    v8 = *a3 - *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1;
    if ( *a3 == *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1 )
      v8 = a3[1] - *(_QWORD *)GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data4;
    if ( v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x255,
        (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        a2);
    v9 = (*(__int64 (__fastcall **)(const char *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
           *(_QWORD *)(a1 + 8));
    v5 = v9;
    if ( v9 >= 0 )
      return 0;
    v6 = (unsigned int)v9;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v6);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(const char *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_a993a76e_0909_48bb_b0e9_4d8236263896,
         *(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    goto LABEL_6;
  }
  return 0LL;
}
