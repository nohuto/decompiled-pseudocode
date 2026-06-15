/*
 * XREFs of sub_140021754 @ 0x140021754
 * Callers:
 *     sub_140021570 @ 0x140021570 (sub_140021570.c)
 *     sub_140041100 @ 0x140041100 (sub_140041100.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140020B8C @ 0x140020B8C (sub_140020B8C.c)
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 *     sub_140021998 @ 0x140021998 (sub_140021998.c)
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_140021A88 @ 0x140021A88 (sub_140021A88.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400546DC @ 0x1400546DC (sub_1400546DC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140021754(__int64 a1, void *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // esi
  LPVOID pv; // [rsp+20h] [rbp-78h] BYREF
  LPVOID v16; // [rsp+28h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v19[2]; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v16 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v17 = v6;
  pv = 0LL;
  try
  {
    v7 = sub_1400B6010(a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_14000C2A8((int)retaddr, 151, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v7);
      if ( v6 )
        LeaveCriticalSection(v6);
      result = v8;
    }
    else
    {
      memset(v19, 0, sizeof(v19));
      v9 = sub_140021998(pv);
      sub_1400219B0(v19, v10, v9);
      sub_1400546DC(a1 + 80, v18, v19);
      sub_140021A88(v19);
      if ( v18[0] == *(_QWORD *)(a1 + 88) )
      {
        v13 = sub_140020B8C(a3, &v16);
        v14 = v13;
        if ( v13 < 0 )
        {
          sub_14000C2A8((int)retaddr, 156, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v13);
          sub_14001D96C(&pv);
          sub_140018FF0(&v17);
          return v14;
        }
        v16 = pv;
        sub_140020D64((float *)(a1 + 80), (__int64)v18, &v16, a3);
      }
      else
      {
        v11 = *(_QWORD *)(v18[0] + 48LL);
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
      if ( pv )
        CoTaskMemFree(pv);
      if ( v6 )
        LeaveCriticalSection(v6);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(retaddr, 166LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  }
  return result;
}
