/*
 * XREFs of ?FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D03A0
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801D0B10 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801A3104 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CD8F0 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotKeyProcessor::FindRegisteredClient(
        HotKeyProcessor *this,
        struct IMessageProxy *a2,
        struct HotkeyClientRegistration **a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rcx
  ULONG_PTR v9; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  struct IMessageProxy *v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v7 = (_QWORD *)*((_QWORD *)this + 3);
      while ( 1 )
      {
        do
        {
          v7 = (_QWORD *)*v7;
          if ( v7 == *((_QWORD **)this + 3) )
            return v6;
          v8 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7[2] + 104LL);
        }
        while ( !*v8 );
        v12 = 0LL;
        v6 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>(v8, (__int64 *)&v12);
        if ( (v6 & 0x80000000) != 0 )
          break;
        if ( v12 == a2 )
        {
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7 + 2);
          *a3 = (struct HotkeyClientRegistration *)v7[2];
          v6 = 0;
LABEL_10:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
          return v6;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      }
      if ( v6 == -2147024882 )
        TerminateProcessOnMemoryExhaustion(0LL);
      FailFastWithHR(v6, retaddr, 0x42CuLL);
      goto LABEL_10;
    }
    v9 = 1060LL;
  }
  else
  {
    v9 = 1059LL;
  }
  v6 = -2147024809;
  FailFastWithHR(-2147024809, retaddr, v9);
  return v6;
}
