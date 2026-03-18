/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@Cxx@@QEAAPEAU_ENTRY@@Uidx_priv_t@2@_N@Z @ 0x1400DABB0
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x1400FCA50 (-ReleaseLockAndEntry@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Cxx::GdiHandleEntryDirectory::AcquireEntryLock(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r15

  v6 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v6 + ((*(unsigned __int16 *)(a1 + 12) + 0xFFFF) << 16) )
    return 0LL;
  v7 = 0LL;
  if ( a2 >= v6 )
  {
    v8 = ((a2 - v6) >> 16) + 1;
    a2 += -65536 * ((a2 - v6) >> 16) - v6;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v8);
  if ( a2 < *(_DWORD *)(v9 + 16) )
  {
    v10 = 8 * ((unsigned __int64)a2 >> 8);
    v11 = 16LL * (unsigned __int8)a2;
    v12 = v11 + *(_QWORD *)(**(_QWORD **)v9 + v10);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12, 0LL);
    if ( a3 || a2 < *(_DWORD *)(v9 + 16) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v9 + v10) + v11 + 8) )
    {
      *(_BYTE *)(24LL * a2 + *(_QWORD *)(v9 + 8) + 6) = 1;
      return 24LL * a2 + *(_QWORD *)(v9 + 8);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v12);
      KeLeaveCriticalRegion();
    }
  }
  return v7;
}
