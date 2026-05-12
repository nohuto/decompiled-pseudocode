/*
 * XREFs of WPP_SF_is @ 0x14007DBF8
 * Callers:
 *     NvmeGetDeviceBaseEx @ 0x140079BE8 (NvmeGetDeviceBaseEx.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     StorpGetDeviceBase2 @ 0x14007CD04 (StorpGetDeviceBase2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_is(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  const char *v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  const char *v10; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const char *);
  v3 = v10;
  if ( v10 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v10[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  if ( !v10 )
    v3 = "NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
           a2,
           (__int64 *)va,
           8LL,
           v3,
           v6,
           0LL);
}
