/*
 * XREFs of ?ScheduleDeferredSebReferenceRelease@CSebNotifier@@AEAAJXZ @ 0x18010F66C
 * Callers:
 *     ?ReleaseSebReference@CSebNotifier@@QEAAXXZ @ 0x1800B0870 (-ReleaseSebReference@CSebNotifier@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800ABEAC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall CSebNotifier::ScheduleDeferredSebReferenceRelease(CSebNotifier *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 13) )
  {
    v2 = *((_QWORD *)this + 12);
    v5 = -200000000LL;
    v6[0] = 0LL;
    v6[1] = 0LL;
    v3 = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *))NtSetTimer2)(v2, &v5, 0LL, v6);
    if ( v3 >= 0 )
    {
      SetThreadpoolWait(*((PTP_WAIT *)this + 13), *((HANDLE *)this + 12), 0LL);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1D8,
               (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
               (const char *)(unsigned int)v3);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
