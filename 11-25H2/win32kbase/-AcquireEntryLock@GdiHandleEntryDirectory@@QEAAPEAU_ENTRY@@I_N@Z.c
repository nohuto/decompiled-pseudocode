/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x140075240
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1400B5DE8 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::AcquireEntryLock(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        char a3)
{
  unsigned int v4; // edx
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r13

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  if ( a2 >= v4 )
  {
    v6 = *((_QWORD *)this + ((a2 - v4) >> 16) + 2);
    a2 += -65536 * ((a2 - v4) >> 16) - v4;
  }
  else
  {
    v6 = *((_QWORD *)this + 1);
  }
  v7 = 0LL;
  if ( a2 < *(_DWORD *)(v6 + 20) )
  {
    v8 = 8 * ((unsigned __int64)a2 >> 8);
    v9 = 16LL * (unsigned __int8)a2;
    v10 = v9 + *(_QWORD *)(**(_QWORD **)(v6 + 24) + v8);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    if ( a3 || a2 < *(_DWORD *)(v6 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + v8) + v9 + 8) )
    {
      *(_BYTE *)(*(_QWORD *)v6 + 24LL * a2 + 6) = 1;
      return (struct _ENTRY *)(24LL * a2 + *(_QWORD *)v6);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return (struct _ENTRY *)v7;
}
