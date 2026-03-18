/*
 * XREFs of ?ReleaseEntryLock@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x1400BCA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Cxx::GdiHandleManager::ReleaseEntryLock(Cxx::GdiHandleManager *this, struct OBJECT *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // r10d
  unsigned int v4; // eax
  __int64 v5; // r11
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r8

  v2 = 0;
  v3 = (unsigned __int16)*(_DWORD *)a2;
  v4 = v3 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
    else
    {
      v5 = *((_QWORD *)this + 1);
      v6 = *(_DWORD *)(v5 + 8);
      if ( v3 >= v6 + ((*(unsigned __int16 *)(v5 + 12) + 0xFFFF) << 16) )
      {
        v9 = 0LL;
      }
      else
      {
        if ( v3 >= v6 )
        {
          v8 = ((v3 - v6) >> 16) + 1;
          v7 = v3 + -65536 * ((v3 - v6) >> 16) - v6;
        }
        else
        {
          v7 = v3;
          v8 = 0;
        }
        v9 = 0LL;
        v10 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * v8);
        if ( v7 < *(_DWORD *)(v10 + 16) )
          v9 = *(_QWORD *)(v10 + 8) + 24LL * v7;
      }
      if ( *(unsigned __int8 *)(v9 + 13) == HIWORD(v4) )
        v4 = v3;
    }
  }
  v11 = *((_QWORD *)this + 1);
  v12 = *(_DWORD *)(v11 + 8);
  if ( v4 < v12 + ((*(unsigned __int16 *)(v11 + 12) + 0xFFFF) << 16) )
  {
    if ( v4 >= v12 )
    {
      v2 = ((v4 - v12) >> 16) + 1;
      v4 += -65536 * ((v4 - v12) >> 16) - v12;
    }
    v13 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v2);
    *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL * v4 + 6) = 0;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**(_QWORD **)v13 + 8 * ((unsigned __int64)v4 >> 8)) + 16LL
                                                                                                 * (unsigned __int8)v4);
    KeLeaveCriticalRegion();
  }
}
