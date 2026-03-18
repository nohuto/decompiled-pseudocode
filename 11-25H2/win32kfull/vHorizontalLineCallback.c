/*
 * XREFs of vHorizontalLineCallback @ 0x1401D7F90
 * Callers:
 *     vDrawLine @ 0x14006A358 (vDrawLine.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall vHorizontalLineCallback(int *a1, int a2, int a3, unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 != a2 )
  {
    v4 = *a1;
    v5 = *((_QWORD *)a1 + 1);
    v7[1] = v4;
    v7[0] = a2;
    v7[2] = a3;
    v7[3] = v4 + 1;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v5 + 8))(v5, a4, v7);
  }
  return result;
}
