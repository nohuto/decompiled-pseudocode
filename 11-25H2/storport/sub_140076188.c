/*
 * XREFs of sub_140076188 @ 0x140076188
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140072CE0 @ 0x140072CE0 (sub_140072CE0.c)
 *     StorPortGetDeviceBase @ 0x140073E10 (StorPortGetDeviceBase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140076188(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  const char *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  const char *v9; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, const char *);
  v3 = v9;
  if ( v9 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v9[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !v9 )
    v3 = "NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, const char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           &unk_140149070,
           a2,
           (__int64 *)va,
           8LL,
           v3,
           v5,
           0LL);
}
