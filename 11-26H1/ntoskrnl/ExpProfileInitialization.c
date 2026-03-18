/*
 * XREFs of ExpProfileInitialization @ 0x140CE744C
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x1404A3A7C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v2; // [rsp+30h] [rbp-29h] BYREF
  int v3; // [rsp+38h] [rbp-21h]
  __int128 v4; // [rsp+3Ch] [rbp-1Dh]
  int v5; // [rsp+4Ch] [rbp-Dh]
  int v6; // [rsp+54h] [rbp-5h]
  int v7; // [rsp+5Ch] [rbp+3h]
  void (__fastcall *v8)(__int64); // [rsp+78h] [rbp+1Fh]

  DestinationString = 0LL;
  KiInitializeMutant((struct _KMUTANT *)&WheapConfigTableLock.SchedulerApcFill5[24], 0LL, 1u, 0LL);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset_0(&v2, 0, 0x78uLL);
  v2 = 120;
  v3 = 256;
  v6 = 512;
  v7 = 336;
  v5 = 983041;
  v4 = ExpProfileMapping;
  v8 = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
