/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1400BA908
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1400B5DE8 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryDirectory::ReleaseLockAndEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  __int64 v6; // rcx
  __int64 *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rdx

  v3 = a2;
  v4 = *((_DWORD *)this + 514);
  if ( a2 < v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    if ( a2 >= v4 )
      v6 = ((a2 - v4) >> 16) + 1;
    else
      v6 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + v6 + 1);
    if ( (_DWORD)v6 )
      v3 = ((1 - (_DWORD)v6) << 16) - v4 + a2;
    if ( a3 )
    {
      if ( v3 >= *((_DWORD *)v7 + 5) )
      {
LABEL_12:
        v8 = *v7;
        v9 = 3LL * v3;
        *(_WORD *)(v8 + 8 * v9 + 6) = 0;
        *(_DWORD *)(v8 + 8 * v9) = *((_DWORD *)v7 + 3);
        --*((_DWORD *)v7 + 4);
        *((_DWORD *)v7 + 3) = v3;
LABEL_13:
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(*(_QWORD *)v7[3] + 8 * ((unsigned __int64)v3 >> 8)) + 16LL * (unsigned __int8)v3,
          0LL);
        KeLeaveCriticalRegion();
        *(_BYTE *)this = 0;
        return;
      }
    }
    else if ( v3 >= *((_DWORD *)v7 + 5)
           || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7[3] + 8 * ((unsigned __int64)v3 >> 8))
                         + 16LL * (unsigned __int8)v3
                         + 8) )
    {
      goto LABEL_13;
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7[3] + 8 * ((unsigned __int64)v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8) = 0LL;
    goto LABEL_12;
  }
}
