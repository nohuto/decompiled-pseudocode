/*
 * XREFs of SeSecureBootQueryInformation @ 0x140B0299C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall SeSecureBootQueryInformation(int a1, char *a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  char *v9; // rsi
  unsigned int v10; // eax
  size_t v11; // r8
  void *v12; // rdx
  void *v13; // rcx
  int v14; // edx
  char v16; // al
  void *v17; // rdx
  unsigned int Next; // ecx
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
      v17 = *(void **)SepRmCapTableLock.PriorityFloorCounts;
      if ( !*(_QWORD *)SepRmCapTableLock.PriorityFloorCounts )
        return (unsigned int)-1058340858;
      Next = (unsigned int)SepRmCapTableLock.IoSelfBoostsEntry.Next;
      v19 = LODWORD(SepRmCapTableLock.IoSelfBoostsEntry.Next) + 4;
      *a4 = LODWORD(SepRmCapTableLock.IoSelfBoostsEntry.Next) + 4;
      if ( a3 >= v19 )
      {
        v20 = Next;
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
    v8 = *(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40];
    if ( !*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] )
      return (unsigned int)-2143092730;
    if ( a1 == 171 )
    {
      *a4 = 28;
      v9 = a2;
      v10 = *(_DWORD *)(v8 + 56) + 28;
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
      LODWORD(v23) = *(_DWORD *)(v8 + 20);
      HIDWORD(v23) = *(_DWORD *)(v8 + 32);
      if ( a5 )
        RtlCopyToUser(a2, &Src, 0x18uLL);
      else
        RtlCopyVolatileMemory(a2, &Src, 0x18uLL);
      if ( a1 == 171 )
      {
        v11 = *(unsigned int *)(*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] + 56LL);
        v12 = (void *)(*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] + 60LL);
        v13 = v9 + 28;
        if ( a5 )
          RtlCopyToUser(v13, v12, v11);
        else
          RtlCopyVolatileMemory(v13, v12, v11);
        v14 = *(_DWORD *)(*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] + 56LL);
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
  if ( (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 1) != 0 )
    v16 = 1;
  LOBYTE(Src) = v16;
  BYTE1(Src) = (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 8) != 0;
  if ( a5 )
    RtlWriteUShortToUser(a2, Src);
  else
    RtlCopyVolatileMemory(a2, &Src, 2uLL);
  return v7;
}
