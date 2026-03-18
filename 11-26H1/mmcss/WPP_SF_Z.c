/*
 * XREFs of WPP_SF_Z @ 0x1400046B8
 * Callers:
 *     CiDispatchCreate @ 0x14000F670 (CiDispatchCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_Z(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rdx
  const wchar_t *v5; // r8

  if ( a4 )
  {
    v4 = *a4;
    if ( *a4 )
    {
      v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 8LL;
  }
  v5 = L"NULL";
LABEL_6:
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_443f83a17f5d368b71bc45da64c4a6b1_Traceguids,
           10LL,
           a4,
           2LL,
           v5,
           v4,
           0LL);
}
