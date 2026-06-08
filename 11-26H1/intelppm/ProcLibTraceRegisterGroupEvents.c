/*
 * XREFs of ProcLibTraceRegisterGroupEvents @ 0x140003604
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x140004EC0 (HwDebugDiagnosticRegistryHandler.c)
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     HwDebugCreateRegisterGroup @ 0x140046E44 (HwDebugCreateRegisterGroup.c)
 * Callees:
 *     ProcLibTraceRegisterParameterEvents @ 0x140003894 (ProcLibTraceRegisterParameterEvents.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 */

BOOLEAN __fastcall ProcLibTraceRegisterGroupEvents(__int64 a1, unsigned int a2)
{
  const EVENT_DESCRIPTOR *v4; // rdi
  BOOLEAN result; // al
  unsigned __int16 i; // bx
  __int64 GroupAffinity; // rax
  __int64 v8; // rdx
  unsigned __int16 v9; // r8
  __int64 v10; // rdx
  unsigned __int16 j; // bx
  __int64 *v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 **v16; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int16 *v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  _WORD *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  _WORD v34[160]; // [rsp+C0h] [rbp-40h] BYREF

  v16 = 0LL;
  v15 = 0;
  if ( a2 )
  {
    v4 = (const EVENT_DESCRIPTOR *)&PPM_ETW_HARDWARE_DEBUG_REGISTER_DEALLOC;
    if ( a2 != 1 )
      v4 = &PPM_ETW_HARDWARE_DEBUG_REGISTER_RUNDOWN;
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)&PPM_ETW_HARDWARE_DEBUG_REGISTER_ALLOC;
  }
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v4);
  if ( result )
  {
    memset(v34, 0, sizeof(v34));
    v14 = 0;
    for ( i = 0; i < 0x20u; ++i )
    {
      GroupAffinity = KeQueryGroupAffinityEx(a1 + 16, i);
      if ( GroupAffinity )
      {
        v8 = 5LL * v14;
        v9 = ++v14;
        v34[v8] = i;
        *(_QWORD *)&v34[v8 + 1] = GroupAffinity;
      }
      else
      {
        v9 = v14;
      }
    }
    v10 = *(_QWORD *)(a1 + 280);
    v24 = a1 + 304;
    v26 = &v14;
    v28 = v34;
    v25 = 1LL;
    v27 = 2LL;
    v30 = 0;
    v29 = 10 * v9;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, v10);
    for ( j = 0; j < *(unsigned __int8 *)(a1 + 308); ++j )
    {
      v16 = (__int64 **)(a1 + 312 + 24LL * j);
      v12 = *v16;
      UserData.Ptr = (unsigned __int64)&v16;
      *(_QWORD *)&UserData.Size = 8LL;
      v19 = 4LL;
      v21 = 8LL;
      v18 = v12 + 1;
      v20 = a1 + 8 * (3LL * j + 41);
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(*v12 + 2 * v13) );
      v15 = v13;
      v22 = &v15;
      v23 = 2LL;
      v31 = *v12;
      v32 = 2 * (unsigned __int16)v13;
      v33 = 0;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v4, 0LL, (ULONG)8, &UserData);
      ProcLibTraceRegisterParameterEvents(v16, a2);
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 280));
  }
  return result;
}
