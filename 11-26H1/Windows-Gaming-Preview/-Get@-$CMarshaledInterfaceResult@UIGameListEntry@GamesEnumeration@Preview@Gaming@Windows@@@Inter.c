/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x18001DC6C
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x18001E610 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180023510 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID v4; // rbx
  PVOID v5; // rdi
  PVOID Ptr; // rsi
  PVOID v7; // r15
  PVOID v8; // rbp
  PVOID v9; // rsi
  bool v10; // r9
  unsigned int v11; // esi
  unsigned int v13; // edi
  PVOID v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID v15; // [rsp+68h] [rbp+10h]
  PVOID v16; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(a1 + 4);
  Ptr = a1[3].Ptr;
  v7 = 0LL;
  v15 = 0LL;
  v8 = 0LL;
  v16 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v4 = Ptr;
    v14 = Ptr;
    v7 = Ptr;
    v15 = Ptr;
    v8 = Ptr;
    v16 = Ptr;
  }
  v9 = a1[2].Ptr;
  if ( v9 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 8LL))(a1[2].Ptr);
    v5 = v9;
    v7 = v15;
    v8 = v16;
  }
  ReleaseSRWLockShared(a1 + 4);
  *a2 = 0LL;
  if ( v5 )
  {
    v11 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_735924d3_811f_4494_b69c_c641a0c61543,
            a2);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v7 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
    return v11;
  }
  else
  {
    if ( v8 )
    {
      v13 = CMarshaledInterface::_Unmarshal(
              (CMarshaledInterface *)&v14,
              &GUID_735924d3_811f_4494_b69c_c641a0c61543,
              a2,
              v10);
      v4 = v14;
    }
    else
    {
      v13 = 0;
    }
    if ( v4 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
    return v13;
  }
}
