/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C8750
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B6B0 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct _ERESOURCE ***a2)
{
  NEEDGRELOCK *v3; // r14
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE **v5; // rcx
  int ExclusiveWaiters; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx

  *(_QWORD *)this = 0LL;
  v3 = this;
  v4 = (*a2)[6];
  if ( *a2 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x8200) == 0x200
      || (ExclusiveWaiters = (int)v4->ExclusiveWaiters, (ExclusiveWaiters & 1) == 0)
      || (ExclusiveWaiters & 0x1000000) != 0
      || HIDWORD(v4[25].SystemResourcesList.Flink) != 5
      && (ExclusiveWaiters & 0x20000) == 0
      && ((this = *(NEEDGRELOCK **)&v4[24].NumberOfSharedWaiters,
           (((unsigned __int64)this + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0)
       || (*((_DWORD *)this + 40) & 0x800000) == 0)
      || (v7 = *(_QWORD *)&v4->ActiveCount,
          v8 = *(_QWORD *)(W32GetSessionState(this) + 88),
          ((__int64)v4[20].SharedWaiters & 0x400) != 0)
      || ((__int64)v4->ExclusiveWaiters & 0x48000000) != 0
      || ((__int64)v4[17].ExclusiveWaiters & 0x8000000) != 0
      || (*(_DWORD *)(v7 + 40) & 0x1000000) != 0
      || !*(_DWORD *)(v8 + 4128) )
    {
      if ( ((__int64)(*a2)[6]->ExclusiveWaiters & 0x8000) == 0 )
      {
        v5 = a2[2];
        *(_QWORD *)v3 = *v5 + 11;
        GreAcquireSemaphore<2,>(v5);
      }
    }
  }
}
