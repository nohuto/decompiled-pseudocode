/*
 * XREFs of EtwpInitializeRegistration @ 0x140CE1A0C
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x1404A3A7C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRegistration()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v2; // [rsp+30h] [rbp-29h] BYREF
  char v3; // [rsp+32h] [rbp-27h]
  int v4; // [rsp+38h] [rbp-21h]
  GENERIC_MAPPING v5; // [rsp+3Ch] [rbp-1Dh]
  int v6; // [rsp+4Ch] [rbp-Dh]
  int v7; // [rsp+54h] [rbp-5h]
  int v8; // [rsp+5Ch] [rbp+3h]
  __int64 (__fastcall *v9)(int); // [rsp+68h] [rbp+Fh]
  void (__fastcall *v10)(__int64, __int64, __int64, __int64); // [rsp+70h] [rbp+17h]
  __int64 (__fastcall *v11)(__int64 *, __int64, __int64, struct _KLOCK_ENTRIES *); // [rsp+78h] [rbp+1Fh]

  DestinationString = 0LL;
  KiInitializeMutant((struct _KMUTANT *)ExpSysDbgLock.Padding, 0LL, 1u, 0LL);
  ExpSysDbgLock.Spare32 = 0LL;
  ExpSysDbgLock.SchedulerAssistLastYieldBoostTime = (__int64)&ExpSysDbgLock.SchedulerAssistYieldCounter;
  *(_QWORD *)&ExpSysDbgLock.SchedulerAssistYieldCounter = &ExpSysDbgLock.SchedulerAssistYieldCounter;
  memset_0(&v2, 0, 0x78uLL);
  v3 |= 0x18u;
  v9 = IopOpenIoRing;
  v2 = 120;
  v10 = EtwpCloseRegistrationObject;
  v4 = 256;
  v11 = EtwpDeleteRegistrationObject;
  v5 = EtwpGenericMapping;
  v6 = 2052;
  v7 = 512;
  v8 = 120;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&EtwpRegistrationObjectType);
}
