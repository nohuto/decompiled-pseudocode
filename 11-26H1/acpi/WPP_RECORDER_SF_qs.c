/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x140041F5C
 * Callers:
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x140041DFC (OSNotifyDeviceEnum.c)
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x140057E20 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceEject @ 0x140063D74 (OSNotifyDeviceEject.c)
 *     AcpiHandleInternalNotify @ 0x140065F50 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qs(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  __int64 v7; // rdi
  unsigned __int64 v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // rbp
  const char *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  const char *v17; // rcx
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-18h]
  __int64 v24; // [rsp+68h] [rbp-10h]
  __int64 v25; // [rsp+80h] [rbp+8h]

  v25 = a1;
  v7 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v11 = 5LL;
  v13 = a7;
  v14 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v9 + 1) >= a2 )
  {
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a7;
    if ( !a7 )
      v17 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v9),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v17,
      v16,
      0LL);
    a1 = v25;
  }
  v18 = v13 == 0LL;
  if ( v13 )
  {
    do
      ++v7;
    while ( v13[v7] );
    v11 = v7 + 1;
    v18 = v13 == 0LL;
  }
  if ( v18 )
    v13 = "NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v20, &a6, 8LL, v13, v11, 0LL, v21, v22, v23, v24);
}
