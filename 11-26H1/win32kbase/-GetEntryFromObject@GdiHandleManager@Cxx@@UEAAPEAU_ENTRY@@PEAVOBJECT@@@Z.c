/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@Cxx@@UEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1400BC5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall Cxx::GdiHandleManager::GetEntryFromObject(Cxx::GdiHandleManager *this, struct OBJECT *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  unsigned int v4; // eax
  __int64 v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  __int64 v16; // r11
  struct OBJECT *v17; // r8
  __int64 v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // r10

  v2 = 0LL;
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
          v9 = 0;
        }
        v10 = 0LL;
        v11 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * v9);
        if ( v8 < *(_DWORD *)(v11 + 16) )
          v10 = *(_QWORD *)(v11 + 8) + 24LL * v8;
      }
      if ( *(unsigned __int8 *)(v10 + 13) == HIWORD(v4) )
        v4 = v3;
    }
  }
  v12 = *((_QWORD *)this + 1);
  v13 = *(_DWORD *)(v12 + 8);
  if ( v4 >= v13 + ((*(unsigned __int16 *)(v12 + 12) + 0xFFFF) << 16)
    || (v4 >= v13 ? (v15 = ((v4 - v13) >> 16) + 1, v14 = v4 + -65536 * ((v4 - v13) >> 16) - v13) : (v14 = v4, v15 = 0),
        v16 = *(_QWORD *)(*(_QWORD *)v12 + 8LL * v15),
        v14 >= *(_DWORD *)(v16 + 16)) )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)v16 + 8 * ((unsigned __int64)v14 >> 8))
                            + 16LL * (unsigned __int8)v14
                            + 8);
  }
  if ( v17 != a2 )
    return 0LL;
  v18 = *((_QWORD *)this + 1);
  v19 = *(_DWORD *)(v18 + 8);
  if ( v4 < v19 + ((*(unsigned __int16 *)(v18 + 12) + 0xFFFF) << 16) )
  {
    if ( v4 >= v19 )
    {
      v20 = ((v4 - v19) >> 16) + 1;
      v4 += -65536 * ((v4 - v19) >> 16) - v19;
    }
    else
    {
      v20 = 0;
    }
    v21 = *(_QWORD *)(*(_QWORD *)v18 + 8LL * v20);
    if ( v4 < *(_DWORD *)(v21 + 16) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v21 + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) )
        return (struct _ENTRY *)(*(_QWORD *)(v21 + 8) + 24LL * v4);
    }
  }
  return (struct _ENTRY *)v2;
}
