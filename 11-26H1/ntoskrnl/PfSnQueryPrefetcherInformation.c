/*
 * XREFs of PfSnQueryPrefetcherInformation @ 0x140AF7B7C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1404B2990 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404B5064 (PfLockSharedRelease.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PfSnGetCompletedTrace @ 0x140AF7C90 (PfSnGetCompletedTrace.c)
 */

__int64 __fastcall PfSnQueryPrefetcherInformation(__int64 a1, void *a2, int a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  LIST_ENTRY *v13; // rdx
  _KWAIT_BLOCK *v14; // rax
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-1E8h] BYREF
  volatile void *Address[2]; // [rsp+30h] [rbp-1D8h]
  _BYTE Src[416]; // [rsp+40h] [rbp-1C8h] BYREF

  v16 = 0LL;
  *(_OWORD *)Address = 0LL;
  v8 = 0;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return (unsigned int)-1073741790;
  if ( a3 != 32 )
  {
    v8 = -1073741820;
    *a5 = 32;
    return v8;
  }
  if ( a4 )
    RtlCopyFromUser(&v16, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v16, a2, 0x20uLL);
  if ( (_QWORD)v16 != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v16) == 1 )
    return (unsigned int)PfSnGetCompletedTrace(Address[0], LODWORD(Address[1]), a5);
  if ( DWORD2(v16) != 2 )
    return (unsigned int)-1073741821;
  if ( LODWORD(Address[1]) != 408 )
    return (unsigned int)-1073741811;
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E66B30.ForegroundLossTime, v9, v10, v11);
  v13 = (LIST_ENTRY *)Src;
  v14 = &stru_140E66B30.WaitBlock[3];
  v15 = 3LL;
  do
  {
    *v13 = v14->WaitListEntry;
    v13[1] = *(LIST_ENTRY *)&v14->WaitType;
    v13[2] = *(LIST_ENTRY *)&v14->Object;
    v13[3] = v14[1].WaitListEntry;
    v13[4] = *(LIST_ENTRY *)&v14[1].WaitType;
    v13[5] = *(LIST_ENTRY *)&v14[1].Object;
    v13[6] = v14[2].WaitListEntry;
    v13 += 8;
    v13[-1] = *(LIST_ENTRY *)&v14[2].WaitType;
    v14 = (_KWAIT_BLOCK *)((char *)v14 + 128);
    --v15;
  }
  while ( v15 );
  *v13 = v14->WaitListEntry;
  v13[1].Flink = *(struct _LIST_ENTRY **)&v14->WaitType;
  PfLockSharedRelease((struct _KTHREAD *)&stru_140E66B30.ForegroundLossTime);
  if ( a4 )
  {
    ProbeForWrite(Address[0], 0x198uLL, 8u);
    RtlCopyToUser((void *)Address[0], Src, 0x198uLL);
  }
  else
  {
    RtlCopyVolatileMemory((void *)Address[0], Src, 0x198uLL);
  }
  *a5 = 408;
  return v8;
}
