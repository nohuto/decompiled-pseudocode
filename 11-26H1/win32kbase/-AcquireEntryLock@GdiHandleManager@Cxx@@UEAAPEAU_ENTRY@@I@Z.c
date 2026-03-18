/*
 * XREFs of ?AcquireEntryLock@GdiHandleManager@Cxx@@UEAAPEAU_ENTRY@@I@Z @ 0x1400BC840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall Cxx::GdiHandleManager::AcquireEntryLock(Cxx::GdiHandleManager *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r15

  v2 = 0LL;
  v3 = a2;
  v4 = (unsigned __int16)a2;
  if ( a2 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v3 = (unsigned __int16)a2;
    }
    else
    {
      v5 = *((_QWORD *)this + 1);
      v6 = *(_DWORD *)(v5 + 8);
      if ( v4 >= v6 + ((*(unsigned __int16 *)(v5 + 12) + 0xFFFF) << 16) )
      {
        v9 = 0LL;
      }
      else
      {
        if ( v4 >= v6 )
        {
          v8 = ((v4 - v6) >> 16) + 1;
          v7 = v4 + -65536 * ((v4 - v6) >> 16) - v6;
        }
        else
        {
          v7 = v4;
          v8 = 0;
        }
        v9 = 0LL;
        v10 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * v8);
        if ( v7 < *(_DWORD *)(v10 + 16) )
          v9 = *(_QWORD *)(v10 + 8) + 24LL * v7;
      }
      if ( *(unsigned __int8 *)(v9 + 13) == HIWORD(v3) )
        v3 = v4;
    }
  }
  v11 = *((_QWORD *)this + 1);
  v12 = *(_DWORD *)(v11 + 8);
  if ( v3 < v12 + ((*(unsigned __int16 *)(v11 + 12) + 0xFFFF) << 16) )
  {
    if ( v3 >= v12 )
    {
      v13 = ((v3 - v12) >> 16) + 1;
      v3 += -65536 * ((v3 - v12) >> 16) - v12;
    }
    else
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v13);
    if ( v3 < *(_DWORD *)(v14 + 16) )
    {
      v15 = 8 * ((unsigned __int64)v3 >> 8);
      v16 = 16LL * (unsigned __int8)v3;
      v17 = v16 + *(_QWORD *)(**(_QWORD **)v14 + v15);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v17, 0LL);
      if ( v3 < *(_DWORD *)(v14 + 16) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v14 + v15) + v16 + 8) )
      {
        *(_BYTE *)(24LL * v3 + *(_QWORD *)(v14 + 8) + 6) = 1;
        return (struct _ENTRY *)(24LL * v3 + *(_QWORD *)(v14 + 8));
      }
      else
      {
        ExReleasePushLockExclusiveEx(v17);
        KeLeaveCriticalRegion();
      }
    }
  }
  return (struct _ENTRY *)v2;
}
