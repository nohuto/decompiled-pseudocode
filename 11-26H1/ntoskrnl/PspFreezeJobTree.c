/*
 * XREFs of PspFreezeJobTree @ 0x1407FE324
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1407FE324 (PspFreezeJobTree.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspDispatchWakeNotification @ 0x1407FD6F0 (PspDispatchWakeNotification.c)
 *     PspFreezeJobTree @ 0x1407FE324 (PspFreezeJobTree.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspComputeReportWakeFilter @ 0x140B13BAC (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // r14d
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v21; // [rsp+60h] [rbp-29h] BYREF
  __int128 v22; // [rsp+68h] [rbp-21h]
  __int128 v23; // [rsp+78h] [rbp-11h]
  __int128 v24; // [rsp+88h] [rbp-1h]
  __int64 v25; // [rsp+98h] [rbp+Fh]
  __int128 v26; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  LODWORD(v18) = 0;
  v20[1] = 0LL;
  v19[0] = 0LL;
  v26 = 0LL;
  memset_0(&v21, 0, 0x40uLL);
  v5 = *(_DWORD *)a2;
  v20[0] = a2;
  v6 = 0;
  if ( (v5 & 2) != 0 )
  {
    PspLockJobAndRootExclusive(a1, 0LL);
    v9 = *(_OWORD *)(a1 + 1120);
    v10 = *(_OWORD *)(a1 + 1136);
    v21 = *(_QWORD *)(a1 + 1108);
    v11 = *(_QWORD *)(a1 + 1312);
    v22 = v9;
    v12 = *(_OWORD *)(a1 + 1152);
    v23 = v10;
    v25 = *(_QWORD *)(a1 + 1168);
    v24 = v12;
    if ( a1 != v11 )
      ExReleaseFastResourceExclusive(*(_QWORD *)(a1 + 1312) + 56LL, 0LL, v7, v8);
  }
  else
  {
    ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
  }
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 1552) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v14 )
        goto LABEL_22;
    }
    else if ( !v14 || ((*(_BYTE *)(a1 + 1556) ^ (unsigned __int8)v13) & 8) == 0 )
    {
      goto LABEL_22;
    }
  }
  if ( (v13 & 4) == 0 )
    goto LABEL_14;
  v15 = *(_DWORD *)(a1 + 1552) & 0x80000;
  if ( *(_BYTE *)(a2 + 5) )
  {
    if ( !v15 )
      goto LABEL_14;
LABEL_22:
    ExReleaseFastResourceExclusive(a1 + 56, 0LL, v7, v8);
    return (unsigned int)-1073741811;
  }
  if ( !v15 )
    goto LABEL_22;
LABEL_14:
  if ( (v13 & 2) != 0 )
  {
    if ( !RtlIsZeroMemory((PVOID)(a1 + 1108), 8uLL) )
    {
      LOBYTE(v8) = 1;
      PspComputeReportWakeFilter(a1, v19, a2 + 8, v8);
    }
    *(_QWORD *)(a1 + 1184) = *(_QWORD *)(a2 + 8);
  }
  v16 = 5;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1552), 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1552), 9u);
    if ( (*(_DWORD *)a2 & 8) == 0 )
    {
      if ( *(_BYTE *)(a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1556), 3u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1556), 3u);
    }
    v6 = 5;
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1552), 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1552), 0x13u);
  }
  else
  {
    v16 = v6;
    if ( !v6 )
      goto LABEL_35;
  }
  PspEnumJobsAndProcessesInJobHierarchy((PVOID)a1, (__int64)v20, v16);
LABEL_35:
  ExReleaseFastResourceExclusive(a1 + 56, 0LL, v7, v8);
  if ( v16 )
  {
    PspEnumJobsAndProcessesInJobHierarchy((PVOID)a1, (__int64)&v18, 0);
    if ( (int)v18 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v26) = 4;
      BYTE5(v26) = 0;
      PspFreezeJobTree(a1, &v26);
      LODWORD(v18) = 262;
    }
  }
  PspDispatchWakeNotification((PVOID)a1, v19, (__int64)&v21);
  return v2;
}
