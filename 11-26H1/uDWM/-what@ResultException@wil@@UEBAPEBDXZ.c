/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180093610
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180026930 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800913B4 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x180093164 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     _alloca_probe @ 0x1800E6C10 (_alloca_probe.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  volatile signed __int32 **v4; // rdi
  int v5; // eax
  volatile signed __int32 *cbMultiByte; // rsi
  HANDLE ProcessHeap; // rax
  int *v8; // rax
  WCHAR WideCharStr[2048]; // [rsp+40h] [rbp-1018h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 184);
  if ( *((_QWORD *)this + 23) )
    return (const char *)((unsigned __int64)(*v4 + 1) & -(__int64)(*v4 != 0LL));
  wil::GetFailureLogString((wil *)WideCharStr, (unsigned __int16 *)0x800, (__int64)this + 16, a4);
  v5 = WideCharToMultiByte(0, 0, WideCharStr, -1, 0LL, 0, 0LL, 0LL);
  cbMultiByte = (volatile signed __int32 *)v5;
  if ( !v5 )
  {
    wil::details::shared_buffer::reset(v4);
LABEL_6:
    WideCharToMultiByte(
      0,
      0,
      WideCharStr,
      -1,
      (LPSTR)((unsigned __int64)(*v4 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v4 >> 64)),
      (int)cbMultiByte,
      0LL,
      0LL);
    return (const char *)((unsigned __int64)(*v4 + 1) & -(__int64)(*v4 != 0LL));
  }
  ProcessHeap = GetProcessHeap();
  v8 = (int *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(cbMultiByte + 1));
  if ( v8 )
  {
    *v8 = 0;
    wil::details::shared_buffer::assign(v4, v8, cbMultiByte);
    goto LABEL_6;
  }
  return "WIL Exception";
}
