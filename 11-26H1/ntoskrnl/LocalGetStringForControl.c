/*
 * XREFs of LocalGetStringForControl @ 0x140A6F7A4
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForControl(unsigned __int16 a1, int a2, wchar_t **a3)
{
  int v3; // r15d
  unsigned int v6; // ebx
  unsigned int i; // edi
  unsigned int v8; // edx
  size_t v10; // rcx
  unsigned int v11; // ebx
  wchar_t *v12; // rax
  wchar_t Src[256]; // [rsp+20h] [rbp-238h] BYREF

  v3 = a1;
  v6 = 0;
  if ( !a3 )
    return 87LL;
  *a3 = 0LL;
  for ( i = 0; i < 6; ++i )
  {
    if ( (a2 & (__int64)(&ControlLookup)[3 * i + 1]) == a2 )
    {
      v8 = *((_DWORD *)&ControlLookup + 6 * i + 2);
      if ( v8 + v6 >= 0x100 )
        return 87LL;
      if ( (v3 & *((_DWORD *)&ControlLookup + 6 * i + 3)) != 0 )
      {
        wcsncpy_s(&Src[v6], 256LL - v6, (&ControlLookup)[3 * i], v8);
        v6 += *((_DWORD *)&ControlLookup + 6 * i + 2);
      }
    }
  }
  if ( 2 * (unsigned __int64)v6 >= 0x200 )
    _report_rangecheckfailure();
  Src[v6] = 0;
  if ( !v6 )
    return 0LL;
  v10 = 2LL * (v6 + 1);
  v11 = v6 + 1;
  v12 = (wchar_t *)SddlpAlloc(v10);
  *a3 = v12;
  if ( v12 )
  {
    wcscpy_s(v12, v11, Src);
    return 0LL;
  }
  return 8LL;
}
