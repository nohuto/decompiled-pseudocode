/*
 * XREFs of sub_14003FF9C @ 0x14003FF9C
 * Callers:
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A234 @ 0x14005A234 (sub_14005A234.c)
 */

__int64 __fastcall sub_14003FF9C(__int64 a1, _DWORD *a2, _WORD *a3)
{
  _WORD *v3; // r15
  _DWORD *v4; // r14
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 i; // rdi
  GUID *v8; // rdx
  __int64 result; // rax
  GUID pclsid; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a2;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 8); i = (unsigned int)(i + 1) )
  {
    pclsid = 0LL;
    if ( CLSIDFromString(*(LPCOLESTR *)(*(_QWORD *)(v5 + 16) + 8 * i), &pclsid) >= 0 )
    {
      v8 = (GUID *)*((_QWORD *)v6 + 1);
      if ( v8 == *((GUID **)v6 + 2) )
      {
        try
        {
          sub_14005A234(v6, v8, &pclsid);
        }
        catch ( ... )
        {
          sub_140050410(retaddr, 206LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp");
          v6 = a2;
          v5 = a1;
          v3 = a3;
          v4 = a2;
          continue;
        }
      }
      else
      {
        *v8 = pclsid;
        *((_QWORD *)v6 + 1) += 16LL;
      }
    }
  }
  result = (__int64)(unsigned int)(v6[2] - *v4) >> 4;
  *v3 = result;
  return result;
}
