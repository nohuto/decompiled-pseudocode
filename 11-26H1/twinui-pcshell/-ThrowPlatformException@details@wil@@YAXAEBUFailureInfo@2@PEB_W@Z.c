/*
 * XREFs of ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x180209F00
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x180209F58 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn wil::details::ThrowPlatformException(
        wil::details *this,
        const struct wil::FailureInfo *a2,
        const wchar_t *a3)
{
  __int64 pExceptionObject; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h]
  __int64 Exception; // [rsp+48h] [rbp+20h]

  v5 = 0LL;
  v5 = Platform::String::String(this, a2);
  Exception = Platform::Exception::CreateException(*((unsigned int *)this + 2), v5);
  pExceptionObject = __abi_winrt_ptr_ctor(Exception);
  throw (Platform::Exception **)&pExceptionObject;
}
