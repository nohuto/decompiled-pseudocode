/*
 * XREFs of SeSecureBootQueryInformation @ 0x140B046CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall SeSecureBootQueryInformation(int a1, char *a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v7; // ebx
  char *v8; // rcx
  char *v9; // rsi
  unsigned int v10; // eax
  size_t v11; // r8
  char *v12; // rdx
  void *v13; // rcx
  int v14; // edx
  char v16; // al
  void *v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  size_t v20; // r8
  void *v21; // rcx
  __int128 Src; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-18h]

  v7 = 0;
  Src = 0LL;
  v23 = 0LL;
  if ( a1 == 143 )
    goto LABEL_2;
  if ( a1 != 145 )
  {
    if ( a1 != 171 )
    {
      if ( a1 != 179 )
        return (unsigned int)-1073741821;
      v17 = *(void **)&SepRmCapTableLock.PriorityFloorSummary;
      if ( !*(_QWORD *)&SepRmCapTableLock.PriorityFloorSummary )
        return (unsigned int)-1058340858;
      v18 = *(_DWORD *)&SepRmCapTableLock.PriorityFloorCounts[24];
      v19 = *(_DWORD *)&SepRmCapTableLock.PriorityFloorCounts[24] + 4;
      *a4 = *(_DWORD *)&SepRmCapTableLock.PriorityFloorCounts[24] + 4;
      if ( a3 >= v19 )
      {
        v20 = v18;
        v21 = a2 + 4;
        if ( a5 )
          RtlCopyToUser(v21, v17, v20);
        else
          RtlCopyVolatileMemory(v21, v17, v20);
        return v7;
      }
      return (unsigned int)-1073741820;
    }
LABEL_2:
    v8 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1];
    if ( !RtlpBootStatHandleLock.SchedulerApc.Reserved[1] )
      return (unsigned int)-2143092730;
    if ( a1 == 171 )
    {
      *a4 = 28;
      v9 = a2;
      v10 = *((_DWORD *)v8 + 14) + 28;
    }
    else
    {
      v9 = 0LL;
      v10 = 24;
    }
    *a4 = v10;
    if ( a3 >= v10 )
    {
      Src = *(_OWORD *)(v8 + 4);
      LODWORD(v23) = *((_DWORD *)v8 + 5);
      HIDWORD(v23) = *((_DWORD *)v8 + 8);
      if ( a5 )
        RtlCopyToUser(a2, &Src, 0x18uLL);
      else
        RtlCopyVolatileMemory(a2, &Src, 0x18uLL);
      if ( a1 == 171 )
      {
        v11 = *((unsigned int *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 14);
        v12 = (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 60;
        v13 = v9 + 28;
        if ( a5 )
          RtlCopyToUser(v13, v12, v11);
        else
          RtlCopyVolatileMemory(v13, v12, v11);
        v14 = *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 14);
        if ( a5 )
          RtlWriteULongToUser((_DWORD *)v9 + 6, v14);
        else
          *((_DWORD *)v9 + 6) = v14;
      }
      return v7;
    }
    return (unsigned int)-1073741820;
  }
  *a4 = 2;
  if ( a3 < 2 )
    return (unsigned int)-1073741820;
  v16 = Src;
  if ( (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 1) != 0 )
    v16 = 1;
  LOBYTE(Src) = v16;
  BYTE1(Src) = (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 8) != 0;
  if ( a5 )
    RtlWriteUShortToUser(a2, Src);
  else
    RtlCopyVolatileMemory(a2, &Src, 2uLL);
  return v7;
}
