/*
 * XREFs of HwDebugDiagnosticRegistryHandler @ 0x140004EC0
 * Callers:
 *     HwDebugRegistryHandlerWrapper @ 0x14000EC10 (HwDebugRegistryHandlerWrapper.c)
 * Callees:
 *     ProcLibTraceRegisterGroupEvents @ 0x140003604 (ProcLibTraceRegisterGroupEvents.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     HwDebugInitializeProcessorSupport @ 0x14003B350 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1400484A0 (HwDebugInitializeRegistryDebugRegisters.c)
 */

__int64 HwDebugDiagnosticRegistryHandler()
{
  int i; // eax
  __int64 v1; // rdx
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rcx
  PVOID v5; // rbx
  PVOID *v6; // rax
  __int64 v7; // rdi
  PVOID *v8; // r14
  unsigned int v9; // r15d
  char *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  Interval.QuadPart = -1000000LL;
  v16 = 0LL;
  v14 = 0;
  Affinity = 0LL;
  v15 = 0LL;
  PreviousAffinity = 0LL;
  KeDelayExecutionThread(0, 0, &Interval);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191C0,
    0LL);
  KeInitializeEnumerationContext(&v15, &unk_1400195E8);
  for ( i = KeEnumerateNextProcessor(&v14, &v15); !i; i = KeEnumerateNextProcessor(&v14, &v15) )
  {
    v1 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v14);
    v2 = *(_QWORD *)(v1 + 216);
    if ( v2 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = KfRaiseIrql(2u);
      v4 = 0LL;
      v14 = 0;
      do
      {
        *(_QWORD *)(v2 + 8 * v4 + 24) = 0LL;
        v4 = v14 + 1;
        v14 = v4;
      }
      while ( (unsigned int)v4 < 2 );
      KeLowerIrql(v3);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  while ( (__int64 *)qword_1400191D8 != &qword_1400191D8 )
  {
    v5 = P;
    if ( *(__int64 **)P != &qword_1400191D8 || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v6 = &qword_1400191D8;
    ProcLibTraceRegisterGroupEvents((__int64)v5, 1u);
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  }
  if ( byte_140019AE8 )
  {
    v7 = 0LL;
    do
    {
      v8 = (PVOID *)qword_140019AF0;
      v9 = 0;
      v10 = (char *)qword_140019AF0 + 40 * v7;
      if ( v10[16] )
      {
        do
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)v10 + 3) + 16LL * v9++), (ULONG)1919119952);
        while ( v9 < LOBYTE(v8[5 * v7 + 2]) );
      }
      ExFreePoolWithTag(*((PVOID *)v10 + 3), (ULONG)1919119952);
      ExFreePoolWithTag(v8[5 * v7], (ULONG)1919119952);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < (unsigned __int8)byte_140019AE8 );
    ExFreePoolWithTag(qword_140019AF0, (ULONG)1919119952);
    byte_140019AE8 = 0;
  }
  HwDebugInitializeRegistryDebugRegisters(1LL);
  KeInitializeEnumerationContext(&v15, &unk_1400195E8);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, &v15) )
  {
    v11 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v14);
    v12 = *(_QWORD *)(v11 + 216);
    if ( v12 )
      HwDebugInitializeProcessorSupport(v11, v12, 1LL);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1400191C0);
}
