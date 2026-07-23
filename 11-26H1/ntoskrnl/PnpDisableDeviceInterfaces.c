/*
 * XREFs of PnpDisableDeviceInterfaces @ 0x1409B7A10
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IoSetDeviceInterfaceState @ 0x1409AA7B0 (IoSetDeviceInterfaceState.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpDisableDeviceInterfaces(unsigned __int16 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _WORD *v3; // rbp
  WCHAR *v4; // rsi
  __int64 v5; // r8
  _WORD *v6; // rcx
  unsigned __int64 v7; // rdx
  _WORD *Pool2; // rax
  _WORD *v9; // rbx
  NTSTATUS MatchingFilteredDeviceInterfaceList; // ebx
  unsigned int i; // r15d
  const WCHAR *v12; // rdi
  _WORD *v14; // rax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = 0;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( !a1 )
    goto LABEL_24;
  v5 = a1[1];
  if ( (unsigned __int16)v5 < 2u )
    goto LABEL_12;
  v6 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v6 )
    goto LABEL_12;
  v7 = *a1;
  if ( (unsigned __int16)v7 > (unsigned __int16)v5 )
  {
LABEL_24:
    MatchingFilteredDeviceInterfaceList = -1073741811;
    goto LABEL_20;
  }
  if ( (_WORD)v7 )
  {
    if ( !*v6
      || (_WORD)v7 == (_WORD)v5 && !v6[((unsigned __int64)*a1 >> 1) - 1]
      || v7 <= v5 - 2 && (!v6[(v7 >> 1) - 1] || !v6[v7 >> 1]) )
    {
      goto LABEL_27;
    }
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *((const void **)a1 + 1), *a1);
      v3 = v9;
      v9[(unsigned __int64)*a1 >> 1] = 0;
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  if ( !*v6 )
  {
LABEL_27:
    v3 = (_WORD *)*((_QWORD *)a1 + 1);
    goto LABEL_12;
  }
  v14 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !v14 )
  {
LABEL_23:
    MatchingFilteredDeviceInterfaceList = -1073741670;
    goto LABEL_20;
  }
  *v14 = 0;
  v3 = v14;
LABEL_12:
  v16 = 4096;
  MatchingFilteredDeviceInterfaceList = -1073741789;
  for ( i = 0; ; ++i )
  {
    v12 = v4;
    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      break;
    if ( i >= 5 )
      goto LABEL_20;
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    v4 = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !v4 )
      goto LABEL_23;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            PiPnpRtlCtx,
                                            0,
                                            (_DWORD)v3,
                                            1,
                                            0LL,
                                            0LL,
                                            (__int64)v4,
                                            v16,
                                            (__int64)&v16,
                                            0);
  }
  if ( MatchingFilteredDeviceInterfaceList >= 0 && *v4 )
  {
    do
    {
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, v12);
      if ( MatchingFilteredDeviceInterfaceList >= 0 )
        IoSetDeviceInterfaceState(&DestinationString, 0);
      v12 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
    }
    while ( *v12 );
  }
LABEL_20:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  PnpUnicodeStringToWstrFree(v3, a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
