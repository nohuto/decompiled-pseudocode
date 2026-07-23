/*
 * XREFs of EtwpInitializeRegistration @ 0x140CE7DAC
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
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
  KiInitializeMutant((struct _KMUTANT *)&stru_140F03830.Header.WaitListHead.Blink, 0LL, 1u, 0LL);
  *(_QWORD *)&stru_140F03830.Header.Lock = 0LL;
  ExpSysDbgLock.Padding[4] = (unsigned __int64)&ExpSysDbgLock.Padding[3];
  ExpSysDbgLock.Padding[3] = (unsigned __int64)&ExpSysDbgLock.Padding[3];
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
