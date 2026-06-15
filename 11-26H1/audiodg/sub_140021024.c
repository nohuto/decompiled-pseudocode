/*
 * XREFs of sub_140021024 @ 0x140021024
 * Callers:
 *     sub_140020F28 @ 0x140020F28 (sub_140020F28.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14002067C @ 0x14002067C (sub_14002067C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400524B8 @ 0x1400524B8 (sub_1400524B8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140021024(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *i; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // eax
  unsigned int v17; // ebx
  LPVOID pv; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  LPVOID v20; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v19 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v21 = v8;
  pv = 0LL;
  try
  {
    v9 = sub_1400B6010(a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      sub_14000C2A8((int)retaddr, 718, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v9);
      if ( v8 )
        LeaveCriticalSection(v8);
      result = v10;
    }
    else
    {
      for ( i = *(_QWORD **)(a1 + 288); i; i = (_QWORD *)*i )
      {
        v12 = (_QWORD *)(i[1] + 56LL);
        if ( *(_QWORD *)(i[1] + 80LL) > 7uLL )
          v12 = (_QWORD *)*v12;
        if ( !(unsigned int)o__wcsicmp(v12, pv) )
        {
          v13 = i[1];
          v14 = *(_QWORD *)(v13 + 40) - *(_QWORD *)a3;
          if ( !v14 )
            v14 = *(_QWORD *)(v13 + 48) - *(_QWORD *)(a3 + 8);
          if ( !v14 )
          {
            if ( v13 )
            {
              *a4 = v13;
              sub_1400B6010(v13);
            }
            else
            {
              *a4 = 0LL;
            }
            break;
          }
        }
      }
      if ( !*a4 )
      {
        v20 = pv;
        v16 = sub_14002067C(a4, (__int64 *)&v20, (__int128 *)a3, &v19);
        v17 = v16;
        if ( v16 < 0 )
        {
          sub_14000C2A8((int)retaddr, 731, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v16);
          sub_14001D96C(&pv);
          sub_140018FF0(&v21);
          return v17;
        }
        sub_1400524B8(a1 + 288, a4);
      }
      if ( pv )
        CoTaskMemFree(pv);
      if ( v8 )
        LeaveCriticalSection(v8);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(retaddr, 736LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  }
  return result;
}
