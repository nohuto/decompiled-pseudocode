/*
 * XREFs of ?Initialize@CChannel@@AEAAJXZ @ 0x18020155C
 * Callers:
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180153C74 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::Initialize(CChannel *this)
{
  void **v2; // rbx
  HANDLE EventW; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void **)((char *)this + 96);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v2,
    EventW);
  if ( !*v2 || *v2 == (void *)-1LL )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x42,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
             v4);
  *((_DWORD *)this + 18) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8));
  return 0LL;
}
