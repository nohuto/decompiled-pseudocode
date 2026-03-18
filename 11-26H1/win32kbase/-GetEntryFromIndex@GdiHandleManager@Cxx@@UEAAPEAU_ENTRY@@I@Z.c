/*
 * XREFs of ?GetEntryFromIndex@GdiHandleManager@Cxx@@UEAAPEAU_ENTRY@@I@Z @ 0x1400FD610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall Cxx::GdiHandleManager::GetEntryFromIndex(Cxx::GdiHandleManager *this, unsigned int a2)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // r9d
  __int64 v5; // r8
  unsigned int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r11

  v2 = 0LL;
  v3 = (unsigned __int16)a2;
  v4 = a2;
  if ( a2 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v4 = (unsigned __int16)a2;
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
      v13 = ((v4 - v12) >> 16) + 1;
      v4 += -65536 * ((v4 - v12) >> 16) - v12;
    }
    else
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v13);
    if ( v4 < *(_DWORD *)(v14 + 16)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v14 + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) )
    {
      return (struct _ENTRY *)(*(_QWORD *)(v14 + 8) + 24LL * v4);
    }
  }
  return (struct _ENTRY *)v2;
}
