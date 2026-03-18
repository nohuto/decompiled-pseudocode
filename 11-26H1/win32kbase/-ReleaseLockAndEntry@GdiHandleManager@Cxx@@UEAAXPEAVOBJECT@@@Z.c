/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x1400FCA50
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@Cxx@@QEAAPEAU_ENTRY@@Uidx_priv_t@2@_N@Z @ 0x1400DABB0 (-AcquireEntryLock@GdiHandleEntryDirectory@Cxx@@QEAAPEAU_ENTRY@@Uidx_priv_t@2@_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@Cxx@@QEAAXUidx_priv_t@2@_N@Z @ 0x1400FF13C (-ReleaseLockAndEntry@GdiHandleEntryDirectory@Cxx@@QEAAXUidx_priv_t@2@_N@Z.c)
 */

void __fastcall Cxx::GdiHandleManager::ReleaseLockAndEntry(Cxx::GdiHandleManager *this, struct OBJECT *a2)
{
  unsigned int v3; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8

  v3 = (unsigned __int16)*(_DWORD *)a2;
  v5 = v3 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v5 = (unsigned __int16)*(_DWORD *)a2;
    }
    else
    {
      v6 = *((_QWORD *)this + 1);
      v7 = *(_DWORD *)(v6 + 8);
      if ( v3 >= v7 + ((*(unsigned __int16 *)(v6 + 12) + 0xFFFF) << 16) )
      {
        v10 = 0LL;
      }
      else
      {
        if ( v3 >= v7 )
        {
          v9 = ((v3 - v7) >> 16) + 1;
          v8 = v3 + -65536 * ((v3 - v7) >> 16) - v7;
        }
        else
        {
          v8 = v3;
          v9 = 0LL;
        }
        v10 = 0LL;
        v11 = *(_QWORD *)(*(_QWORD *)v6 + 8 * v9);
        if ( v8 < *(_DWORD *)(v11 + 16) )
          v10 = *(_QWORD *)(v11 + 8) + 24LL * v8;
      }
      if ( *(unsigned __int8 *)(v10 + 13) == HIWORD(v5) )
        v5 = v3;
    }
  }
  v12 = *((_QWORD *)this + 4);
  if ( v12 && *(_DWORD *)(v12 + 4LL * (unsigned __int16)v5) )
  {
    if ( Cxx::GdiHandleEntryDirectory::AcquireEntryLock(
           *((_QWORD *)this + 1),
           *(_DWORD *)(v12 + 4LL * (unsigned __int16)v5),
           1) )
    {
      LOBYTE(v19) = 1;
      Cxx::GdiHandleEntryDirectory::ReleaseLockAndEntry(
        *((_QWORD *)this + 1),
        *(unsigned int *)(v12 + 4LL * (unsigned __int16)v5),
        v19);
    }
    *(_DWORD *)(v12 + 4LL * (unsigned __int16)v5) = 0;
    --*((_DWORD *)this + 5);
  }
  v13 = *((_QWORD *)this + 1);
  v14 = *(_DWORD *)(v13 + 8);
  if ( v5 < v14 + ((*(unsigned __int16 *)(v13 + 12) + 0xFFFF) << 16) )
  {
    if ( v5 >= v14 )
    {
      v15 = ((v5 - v14) >> 16) + 1;
      v5 += -65536 * ((v5 - v14) >> 16) - v14;
    }
    else
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)(*(_QWORD *)v13 + 8LL * v15);
    if ( v5 < *(_DWORD *)(v16 + 16)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v16 + 8 * ((unsigned __int64)v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8) )
    {
      if ( v5 < *(_DWORD *)(v16 + 16) )
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v16 + 8 * ((unsigned __int64)v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8) = 0LL;
      v17 = *(_QWORD *)(v16 + 8);
      v18 = 3LL * v5;
      *(_WORD *)(v17 + 8 * v18 + 6) = 0;
      *(_DWORD *)(v17 + 8 * v18) = *(_DWORD *)(v16 + 20);
      --*(_DWORD *)(v16 + 24);
      *(_DWORD *)(v16 + 20) = v5;
    }
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**(_QWORD **)v16 + 8 * ((unsigned __int64)v5 >> 8)) + 16LL
                                                                                                 * (unsigned __int8)v5);
    KeLeaveCriticalRegion();
    *(_BYTE *)(v13 + 14) = 0;
  }
  *(_QWORD *)a2 = 0LL;
  --*((_DWORD *)this + 5);
}
