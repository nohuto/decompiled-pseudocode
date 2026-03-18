/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryDirectory@Cxx@@QEAAXUidx_priv_t@2@_N@Z @ 0x1400FF13C
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x1400FCA50 (-ReleaseLockAndEntry@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Cxx::GdiHandleEntryDirectory::ReleaseLockAndEntry(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx

  v4 = *(_DWORD *)(a1 + 8);
  if ( a2 < v4 + ((*(unsigned __int16 *)(a1 + 12) + 0xFFFF) << 16) )
  {
    if ( a2 >= v4 )
    {
      v6 = ((a2 - v4) >> 16) + 1;
      a2 += -65536 * ((a2 - v4) >> 16) - v4;
    }
    else
    {
      v6 = 0LL;
    }
    v7 = a2;
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
    if ( a3
      || a2 < *(_DWORD *)(v8 + 16)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v8 + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) )
    {
      if ( a2 < *(_DWORD *)(v8 + 16) )
      {
        v7 = a2;
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v8 + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v8 + 8);
      v10 = 3 * v7;
      *(_WORD *)(v9 + 8 * v10 + 6) = 0;
      *(_DWORD *)(v9 + 8 * v10) = *(_DWORD *)(v8 + 20);
      --*(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 20) = a2;
    }
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**(_QWORD **)v8 + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7);
    KeLeaveCriticalRegion();
    *(_BYTE *)(a1 + 14) = 0;
  }
}
