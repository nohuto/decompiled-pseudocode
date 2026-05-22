/*
 * XREFs of ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C260
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C220 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180094174 (-reset@-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEA.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x1800998D0 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     IsGetRoutingInfoForWindowHandlePresent @ 0x18009D064 (IsGetRoutingInfoForWindowHandlePresent.c)
 */

int __fastcall ShellGesturesClientProxy::OnInputSinkDataChanged(ShellGesturesClientProxy *this)
{
  char *v1; // rdi
  const struct Windows::UI::Internal::Input::GestureAnimationData *Data; // rax
  __int128 v4; // xmm2
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int128 v8; // xmm2
  __int128 v9; // xmm4
  __int64 v10; // xmm3_8
  int v11; // eax
  int v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-D8h]
  __int128 v15; // [rsp+38h] [rbp-C8h]
  __int128 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[48]; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v20; // [rsp+B8h] [rbp-48h]
  __int128 v21; // [rsp+C8h] [rbp-38h]
  __int128 v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  __int128 v24; // [rsp+F0h] [rbp-10h]
  __int128 v25; // [rsp+100h] [rbp+0h]
  __int128 v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+120h] [rbp+20h]
  __int128 v28; // [rsp+128h] [rbp+28h]
  __int128 v29; // [rsp+138h] [rbp+38h]
  __int128 v30; // [rsp+148h] [rbp+48h]
  __int64 v31; // [rsp+158h] [rbp+58h]
  __int128 v32; // [rsp+160h] [rbp+60h]
  __int128 v33; // [rsp+170h] [rbp+70h]
  __int128 v34; // [rsp+180h] [rbp+80h]
  __int64 v35; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v1 = (char *)this + 144;
  wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
    (char *)this + 144,
    0LL);
  Data = BamoAnimationTargetClientProxy::GetData((ShellGesturesClientProxy *)((char *)this + 8));
  v4 = *((_OWORD *)Data + 2);
  v5 = *(_OWORD *)Data;
  v6 = *((_OWORD *)Data + 1);
  v7 = *(_QWORD *)Data;
  *(_OWORD *)v18 = v5;
  *(_OWORD *)&v18[16] = v6;
  v14 = v4;
  *(_OWORD *)&v18[32] = v4;
  if ( v7 )
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = v7;
    v15 = 0LL;
    v17 = 0LL;
    if ( (unsigned __int8)IsGetRoutingInfoForWindowHandlePresent() )
    {
      v8 = *(_OWORD *)&v18[8];
      LODWORD(v16) = 3;
      v9 = *(_OWORD *)&v18[24];
      v10 = *((_QWORD *)&v14 + 1);
    }
    else
    {
      v10 = v17;
      v8 = 0LL;
      v9 = v15;
      LODWORD(v16) = 2;
    }
    v19 = 232LL;
    v23 = v10;
    v20 = v16;
    *(_QWORD *)v13 = 0LL;
    v24 = v16;
    v28 = v16;
    v32 = v16;
    v21 = v8;
    v22 = v9;
    v25 = v8;
    v26 = v9;
    v27 = v10;
    v29 = v8;
    v30 = v9;
    v31 = v10;
    v33 = v8;
    v34 = v9;
    v35 = v10;
    v11 = NtCreateCompositionInputSink(&v19, v13);
    if ( v11 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xFB,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\"
                             "processor\\shellgesturesclientproxy.cpp",
               (const char *)(unsigned int)v11,
               v13[0]);
    wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
      v1,
      *(_QWORD *)v13);
  }
  return 0;
}
