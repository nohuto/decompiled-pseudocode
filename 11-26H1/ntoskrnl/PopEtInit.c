/*
 * XREFs of PopEtInit @ 0x140CDBE50
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     PopEtInitializeBuiltinAppId @ 0x1407E09A8 (PopEtInitializeBuiltinAppId.c)
 *     RtlInternTableInitialize @ 0x14080F300 (RtlInternTableInitialize.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     PoEnergyContextStart @ 0x1409CA91C (PoEnergyContextStart.c)
 *     RtlGetVersion @ 0x140A97730 (RtlGetVersion.c)
 *     PoEnergyContextInitialize @ 0x140AF6908 (PoEnergyContextInitialize.c)
 *     PopEtAllocate @ 0x140AFDD70 (PopEtAllocate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PopEtInit()
{
  ULONG_PTR Pool2; // rax
  _QWORD *v1; // rbx
  __int64 result; // rax
  _WORD *v3; // rcx
  __int16 dwBuildNumber; // dx
  __int16 dwMajorVersion; // ax
  bool v6; // cf
  __int16 dwMinorVersion; // ax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r11
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  PEPROCESS v15; // rdx
  struct _LIST_ENTRY *Flink; // rax
  LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  LIST_ENTRY *NextProcess; // rax
  LIST_ENTRY *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+32h] [rbp-CEh]
  int v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+4Ch] [rbp-B4h]
  int v28; // [rsp+54h] [rbp-ACh]
  int v29; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v30)(__int64, __int64, __int64, __int64); // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v31)(__int64 *, __int64, __int64, struct _KLOCK_ENTRIES *); // [rsp+78h] [rbp-88h]
  _OSVERSIONINFOW VersionInformation; // [rsp+B0h] [rbp-50h] BYREF

  DestinationString = 0LL;
  if ( !BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next) )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, 0x450uLL, 0x54456F50u);
  PopEtGlobals = Pool2;
  v1 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 32), 0, 0x430uLL);
  v1[3] = 0LL;
  v1[2] = 0LL;
  v1[1] = v1;
  *v1 = v1;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( RtlGetVersion(&VersionInformation) >= 0 )
  {
    v3 = (_WORD *)PopEtGlobals;
    dwBuildNumber = -1;
    dwMajorVersion = -1;
    if ( VersionInformation.dwMajorVersion < 0xFFFF )
      dwMajorVersion = VersionInformation.dwMajorVersion;
    v6 = VersionInformation.dwMinorVersion < 0xFFFF;
    *(_WORD *)(PopEtGlobals + 1070) = dwMajorVersion;
    dwMinorVersion = -1;
    if ( v6 )
      dwMinorVersion = VersionInformation.dwMinorVersion;
    v6 = VersionInformation.dwBuildNumber < 0xFFFF;
    v3[534] = dwMinorVersion;
    if ( v6 )
      dwBuildNumber = VersionInformation.dwBuildNumber;
    v3[533] = dwBuildNumber;
    v3[532] = 2525;
  }
  v8 = (_QWORD *)PopEtGlobals;
  *(_QWORD *)(PopEtGlobals + 48) = 0LL;
  v8[5] = 0LL;
  v8[11] = PopEtInternerAllocate;
  v8[12] = PopEtInternerFree;
  v8[13] = PopEtInternerLock;
  v8[14] = PopEtInternerUnlock;
  v8[15] = PopEtInternerEntryInitialize;
  RtlInternTableInitialize(v8 + 7, (__int64)(v8 + 11));
  PoEnergyContextInitialize(v8 + 16);
  v9 = PsIdleProcess;
  *((_QWORD *)PsIdleProcess + 205) = v10;
  PopEtInitializeBuiltinAppId((__int64)(v8 + 99), (__int64)L"Default");
  PopEtInitializeBuiltinAppId((__int64)(v8 + 110), (__int64)L"Undetermined");
  PopEtInitializeBuiltinAppId((__int64)(v8 + 121), (__int64)L"Overflow");
  PopEtInitializeBuiltinAppId((__int64)(v8 + 88), (__int64)L"IsrDpc");
  v11 = (__int64)(v8 + 77);
  *(_QWORD *)(v9[205] + 456LL) = v12;
  PopEtInitializeBuiltinAppId(v11, (__int64)L"System");
  v15 = PsInitialSystemProcess;
  Flink = PsInitialSystemProcess[3].ProcessListEntry.Flink;
  if ( Flink )
    Flink[28].Blink = (struct _LIST_ENTRY *)v11;
  for ( i = 0LL; ; i = v20 )
  {
    NextProcess = PsGetNextProcess(i, (__int64)v15, v13, v14);
    v20 = NextProcess;
    if ( !NextProcess )
      break;
    Blink = NextProcess[102].Blink;
    if ( Blink )
    {
      if ( !Blink[28].Blink )
      {
        Blink[28].Blink = (struct _LIST_ENTRY *)(PopEtGlobals + 792);
        PoEnergyContextStart((__int64)NextProcess);
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, L"EnergyTracker");
  memset_0(&v24, 0, 0x78uLL);
  v25 |= 4u;
  v30 = PopEtEnergyTrackerClose;
  v24 = 120;
  v31 = PopEtEnergyTrackerDelete;
  v28 = 1;
  v29 = 664;
  v26 = 402;
  v27 = 2031617;
  result = ObCreateObjectType(&DestinationString, &v24, 0LL, PopEtGlobals + 32);
  if ( (int)result >= 0 )
  {
    v21 = PopEtAllocate();
    v22 = PopEtGlobals;
    *(_QWORD *)(PopEtGlobals + 1088) = v21;
    if ( !v21 )
      return 3221225626LL;
    *(_DWORD *)(v22 + 1096) = -1;
    return 0LL;
  }
  return result;
}
