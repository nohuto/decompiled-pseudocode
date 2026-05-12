/*
 * XREFs of WPP_SF_qqs @ 0x140082750
 * Callers:
 *     RaidAdapterQueryPowerIrp @ 0x14002E708 (RaidAdapterQueryPowerIrp.c)
 *     RaidAdapterSetPowerIrp @ 0x14002E870 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qqs(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  const char *v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  const char *v12; // [rsp+98h] [rbp+30h]
  va_list va2; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, const char *);
  v3 = v12;
  if ( v12 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v12[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  if ( !v12 )
    v3 = "NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v3,
           v6,
           0LL);
}
