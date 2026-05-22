/*
 * XREFs of ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AA230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x1800445D8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180045EAC (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800462F8 (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180046678 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x180097DB4 (-CopyConfig@InputConfigContextProvider@@AEAA-AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800A9664 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SPACE_PAYLOAD@@AEAU2@@Z @ 0x1800A9708 (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPA.c)
 *     ??$emplace_back@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SPACE_PAYLOAD@@$$QEAU2@@Z @ 0x18010C284 (--$emplace_back@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpoint::OnInputConfigChanged(
        SystemContextEndpoint *this,
        struct BamoSystemContextEndpointStub *a2,
        struct BamoInputSpacePayloadProxy *const *a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct BamoInputSpacePayloadProxy *const *v7; // rdi
  __int64 v8; // rax
  struct InputConfigContextProvider *Instance; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 i; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v17[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]
  unsigned __int64 v23; // [rsp+60h] [rbp-10h]

  v18 = 0LL;
  v19 = 0LL;
  v5 = a4;
  v17[0] = a4;
  if ( a4 )
    std::vector<INPUT_SPACE_PAYLOAD>::_Reallocate<0>((__int64 *)&v18, v17);
  gsl::details::extent_type<-1>::extent_type<-1>(v17, v5);
  if ( v17[0] == -1LL || !a3 && v17[0] )
  {
    _o_terminate(v6);
    JUMPOUT(0x1800AA397LL);
  }
  v7 = &a3[v17[0]];
  while ( a3 != v7 )
  {
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)*a3 + 1) + 24LL))((char *)*a3 + 8);
    v20 = *(_QWORD *)v8;
    v21 = *(_DWORD *)(v8 + 8);
    v17[0] = 0LL;
    v16 = 0;
    (*(void (__fastcall **)(char *, unsigned __int64 *, int *))(*((_QWORD *)*a3 + 1) + 32LL))(
      (char *)*a3 + 8,
      v17,
      &v16);
    v23 = v17[0];
    v22 = v16;
    std::vector<INPUT_SPACE_PAYLOAD>::emplace_back<INPUT_SPACE_PAYLOAD &>(&v18, (__int64)&v20);
    ++a3;
  }
  Instance = InputConfigContextProvider::GetInstance();
  InputConfigContextProvider::ClearConfigs(v10, (struct InputConfigContextProvider *)((char *)Instance + 256));
  v13 = *((_QWORD *)&v18 + 1);
  for ( i = v18; i != v13; i += 24LL )
  {
    v14 = InputConfigContextProvider::CopyConfig(v11, (__int64)&v20, i);
    std::vector<INPUT_SPACE_PAYLOAD>::emplace_back<INPUT_SPACE_PAYLOAD>((char *)Instance + 256, v14);
  }
  InputConfigContextProvider::Broadcast(Instance);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)&v18);
  return 0LL;
}
