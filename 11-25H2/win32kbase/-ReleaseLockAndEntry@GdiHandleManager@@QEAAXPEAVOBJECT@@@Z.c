/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1400B5DE8
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x140075240 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1400BA908 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseLockAndEntry(GdiHandleManager *this, struct OBJECT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 *v15; // r8
  _QWORD **v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebp

  v4 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this <= 0x10000u )
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
    else
    {
      v5 = *((_QWORD *)this + 2);
      v6 = *(_DWORD *)(v5 + 2056);
      if ( (unsigned __int16)*(_DWORD *)a2 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*(_DWORD *)a2 >= v6 )
          v7 = (((unsigned __int16)*(_DWORD *)a2 - v6) >> 16) + 1;
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(v5 + 8 * v7 + 8);
        if ( (_DWORD)v7 )
          v9 = (unsigned __int16)*(_DWORD *)a2 + ((1 - (_DWORD)v7) << 16) - v6;
        else
          v9 = (unsigned __int16)*(_DWORD *)a2;
        v10 = 0LL;
        if ( (unsigned int)v9 < *(_DWORD *)(v8 + 20) )
          v10 = *(_QWORD *)v8 + 24 * v9;
      }
      if ( *(unsigned __int8 *)(v10 + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    v19 = *(_DWORD *)(v11 + 4LL * (unsigned __int16)*(_DWORD *)a2);
    if ( v19 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)this + 2), v19, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)this + 2), v19, 1);
      *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * (unsigned __int16)v4) = 0;
      --*((_DWORD *)this + 1);
    }
  }
  v12 = *((_QWORD *)this + 2);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( v4 < v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    if ( v4 >= v13 )
      v14 = ((v4 - v13) >> 16) + 1;
    else
      v14 = 0LL;
    v15 = *(__int64 **)(v12 + 8 * v14 + 8);
    if ( (_DWORD)v14 )
      v4 += ((1 - (_DWORD)v14) << 16) - v13;
    v16 = (_QWORD **)(v15 + 3);
    if ( v4 < *((_DWORD *)v15 + 5)
      && *(_QWORD *)(*(_QWORD *)(**v16 + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) )
    {
      v17 = 3LL * v4;
      *(_QWORD *)(*(_QWORD *)(**v16 + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) = 0LL;
      v18 = *v15;
      *(_WORD *)(v18 + 8 * v17 + 6) = 0;
      *(_DWORD *)(v18 + 8 * v17) = *((_DWORD *)v15 + 3);
      --*((_DWORD *)v15 + 4);
      *((_DWORD *)v15 + 3) = v4;
    }
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**v16 + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4, 0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)v12 = 0;
  }
  *(_QWORD *)a2 = 0LL;
  --*((_DWORD *)this + 1);
}
