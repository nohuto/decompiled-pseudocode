/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x14001C7BC
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x14001AD90 (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreate @ 0x14001E5B0 (OSNotifyCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qsL(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v9; // rsi
  __int64 v11; // rbp
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  __int64 v20; // [rsp+68h] [rbp-10h]
  __int64 v21; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v23; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, const char *);
  v5 = v23;
  v6 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v11 = 5LL;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v9 + 1) >= 4u )
  {
    if ( v23 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v23[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v23;
    if ( !v23 )
      v17 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v9),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      v17,
      v16,
      va1,
      4LL,
      0LL);
  }
  v13 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v11 = v6 + 1;
    v13 = v5 == 0LL;
  }
  if ( v13 )
    v5 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v18, (__int64 *)va, 8LL, v5, v11, va1, 4LL, 0LL, v19, v20);
}
