/*
 * XREFs of sub_1400204AC @ 0x1400204AC
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 *     sub_140048090 @ 0x140048090 (sub_140048090.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140021998 @ 0x140021998 (sub_140021998.c)
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_140021A88 @ 0x140021A88 (sub_140021A88.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140051F3C @ 0x140051F3C (sub_140051F3C.c)
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140054730 @ 0x140054730 (sub_140054730.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400204AC(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // edi
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v12 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 416));
  v13 = v6;
  v7 = a1 + 456;
  memset(v15, 0, sizeof(v15));
  v8 = sub_140021998(a2);
  try
  {
    sub_1400219B0(v15, a2, v8);
    sub_140054730(a1 + 456, v14, v15);
    sub_140021A88(v15);
    if ( v14[0] == *(_QWORD *)(a1 + 464) )
    {
      v9 = sub_140051F3C(a3, &v12);
      if ( v9 < 0 )
      {
        sub_140018FF0(&v13);
        return (unsigned int)v9;
      }
      sub_140052178(v7, v14, &v12, a3);
    }
    else
    {
      v11 = *(_QWORD *)(v14[0] + 48LL);
      if ( v11 )
      {
        *a3 = v11;
        sub_1400B6010(v11);
      }
      else
      {
        *a3 = 0LL;
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(retaddr, 277LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  }
  return result;
}
