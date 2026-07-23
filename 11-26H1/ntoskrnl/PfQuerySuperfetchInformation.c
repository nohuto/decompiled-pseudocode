/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140A5C19C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     PfpMemoryListQuery @ 0x140348568 (PfpMemoryListQuery.c)
 *     PfLockSharedAcquire @ 0x1404ABEA0 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404AE4B4 (PfLockSharedRelease.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     PfpMemoryRangesQuery @ 0x140602624 (PfpMemoryRangesQuery.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PfpQueryFileExtentsRequest @ 0x1407C88FC (PfpQueryFileExtentsRequest.c)
 *     PfpQueryScenarioInformation @ 0x1407C8F70 (PfpQueryScenarioInformation.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     EtwTiLogSyscallUsage @ 0x140A5C578 (EtwTiLogSyscallUsage.c)
 *     PfpPfnPrioRequest @ 0x140A5C74C (PfpPfnPrioRequest.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfpQueryGpuUtilization @ 0x140A5D34C (PfpQueryGpuUtilization.c)
 *     PfpVirtualQuery @ 0x140A5D4B0 (PfpVirtualQuery.c)
 *     MmLogQueryCombineStats @ 0x140A5D5AC (MmLogQueryCombineStats.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, void *a2, int a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  _DWORD *v25; // rsi
  int ULongFromUser; // eax
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  int v29; // ecx
  __int128 v30; // [rsp+20h] [rbp-A8h] BYREF
  volatile void *Address[2]; // [rsp+30h] [rbp-98h]
  int v32; // [rsp+40h] [rbp-88h]
  __int128 Src; // [rsp+48h] [rbp-80h] BYREF
  __int128 v34; // [rsp+58h] [rbp-70h] BYREF
  __int128 v35; // [rsp+68h] [rbp-60h]
  __int128 v36; // [rsp+78h] [rbp-50h] BYREF
  __int64 v37; // [rsp+88h] [rbp-40h]
  int v38; // [rsp+90h] [rbp-38h]

  DWORD1(Src) = 0;
  v34 = 0LL;
  v35 = 0LL;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v6 = 0;
  v30 = 0LL;
  *(_OWORD *)Address = 0LL;
  if ( a4 )
    RtlCopyFromUser(&v30, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v30, a2, 0x20uLL);
  if ( (_QWORD)v30 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v10 = DWORD2(v30);
  if ( DWORD2(v30) > 0x1C || (v11 = 268501248, !_bittest(&v11, DWORD2(v30))) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return (unsigned int)-1073741790;
    v10 = DWORD2(v30);
  }
  if ( v10 > 16 )
  {
    v19 = v10 - 17;
    if ( !v19 )
    {
      v15 = PfpMemoryRangesQuery((__int64)&v30, a4, a5);
      v16 = 21LL;
      goto LABEL_16;
    }
    v20 = v19 - 3;
    if ( !v20 )
    {
      if ( LODWORD(Address[1]) != 16 )
        return (unsigned int)-1073741306;
      v6 = 0;
      Src = 0LL;
      if ( a4 )
      {
        ProbeForWrite(Address[0], 0x10uLL, 8u);
        RtlCopyFromUser(&Src, (void *)Address[0], 0x10uLL);
      }
      else
      {
        RtlCopyVolatileMemory(&Src, (const void *)Address[0], 0x10uLL);
      }
      if ( (_DWORD)Src == 1 )
      {
        *((_QWORD *)&Src + 1) = stru_140E67200.QuantumTarget;
        if ( a4 )
          RtlCopyToUser((void *)Address[0], &Src, 0x10uLL);
        else
          RtlCopyVolatileMemory((void *)Address[0], &Src, 0x10uLL);
        *a5 = 16;
      }
      else
      {
        return (unsigned int)-1073741735;
      }
      return v6;
    }
    v21 = v20 - 3;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        MmLogQueryCombineStats(0LL, 0LL, &v34);
        if ( a4 )
          ProbeForWrite(Address[0], 0x10uLL, 4u);
        v25 = Address[0];
        if ( a4 )
          ULongFromUser = RtlReadULongFromUser((unsigned int *)Address[0]);
        else
          ULongFromUser = *(_DWORD *)Address[0];
        if ( ULongFromUser == 1 )
        {
          v27 = v25 + 1;
          if ( a4 )
            RtlWriteULongToUser(v27, SDWORD1(v34));
          else
            *v27 = DWORD1(v34);
          v28 = v25 + 2;
          if ( a4 )
            RtlWriteULongToUser(v28, SDWORD2(v35));
          else
            *v28 = DWORD2(v35);
          if ( a4 )
            RtlWriteULongToUser(v25 + 3, SHIDWORD(v35));
          else
            v25[3] = HIDWORD(v35);
        }
        else
        {
          v6 = -1073741811;
          v32 = -1073741811;
        }
        return v6;
      }
      v23 = v22 - 3;
      if ( !v23 )
        return (unsigned int)PfpQueryFileExtentsRequest((__int64)&v30, a4, a5);
      if ( v23 != 1 )
        return (unsigned int)-1073741821;
      LOBYTE(v7) = a4;
      return (unsigned int)PfpQueryGpuUtilization(&v30, v7, a5);
    }
    else
    {
      LOBYTE(v7) = a4;
      return (unsigned int)PfpVirtualQuery(&v30, v7, a5);
    }
  }
  if ( v10 == 16 )
  {
    v15 = PfpMemoryListQuery((__int64)&v30, a4, a5);
    v16 = 20LL;
    goto LABEL_16;
  }
  v12 = v10 - 1;
  if ( !v12 )
    return (unsigned int)PfGetCompletedTrace((void *)Address[0]);
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 4;
    if ( !v14 )
    {
      LOBYTE(v7) = a4;
      v15 = PfpPfnPrioRequest(&v30, v7, a5);
      v16 = 18LL;
LABEL_16:
      v6 = v15;
      EtwTiLogSyscallUsage(v15, v16);
      return v6;
    }
    v18 = v14 - 2;
    if ( !v18 )
    {
      v15 = PfpPrivSourceEnum((__int64)&v30, a4, a5);
      v16 = 19LL;
      goto LABEL_16;
    }
    v29 = v18 - 1;
    if ( v29 )
    {
      if ( v29 == 3 )
        return (unsigned int)PfpQueryScenarioInformation((__int64)&v30, a4, a5);
      return (unsigned int)-1073741821;
    }
    v6 = 0;
    if ( LODWORD(Address[1]) == 4 )
    {
      if ( a4 )
      {
        ProbeForWrite(Address[0], 4uLL, 4u);
        RtlCopyToUser((void *)Address[0], &xmmword_140F13528, 4uLL);
      }
      else
      {
        RtlCopyVolatileMemory((void *)Address[0], &xmmword_140F13528, 4uLL);
      }
      *a5 = 4;
      return v6;
    }
    return (unsigned int)-1073741306;
  }
  if ( LODWORD(Address[1]) != 28 )
    return (unsigned int)-1073741306;
  v6 = 0;
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E66D40.ForegroundLossTime, v7, v8, v9);
  v36 = *(_OWORD *)&stru_140E66D40.WaitBlockFill11[116];
  v37 = *(_QWORD *)&stru_140E66D40.WaitBlockFill11[132];
  v38 = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[140];
  PfLockSharedRelease((struct _KTHREAD *)&stru_140E66D40.ForegroundLossTime);
  if ( a4 )
  {
    ProbeForWrite(Address[0], 0x1CuLL, 4u);
    RtlCopyToUser((void *)Address[0], &v36, 0x1CuLL);
  }
  else
  {
    RtlCopyVolatileMemory((void *)Address[0], &v36, 0x1CuLL);
  }
  *a5 = 28;
  return v6;
}
