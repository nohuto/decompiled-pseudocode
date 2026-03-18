/*
 * XREFs of ?SetEntryObject@GdiHandleManager@Cxx@@UEAAXIPEAVOBJECT@@@Z @ 0x1400FD9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Cxx::GdiHandleManager::SetEntryObject(Cxx::GdiHandleManager *this, unsigned int a2, struct OBJECT *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r8

  v3 = 0;
  v4 = (unsigned __int16)a2;
  v5 = a2;
  if ( a2 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      v5 = (unsigned __int16)a2;
    }
    else
    {
      v7 = *((_QWORD *)this + 1);
      v8 = *(_DWORD *)(v7 + 8);
      if ( v4 >= v8 + ((*(unsigned __int16 *)(v7 + 12) + 0xFFFF) << 16) )
      {
        v11 = 0LL;
      }
      else
      {
        if ( v4 >= v8 )
        {
          v10 = ((v4 - v8) >> 16) + 1;
          v9 = v4 + -65536 * ((v4 - v8) >> 16) - v8;
        }
        else
        {
          v9 = v4;
          v10 = 0;
        }
        v11 = 0LL;
        v12 = *(_QWORD *)(*(_QWORD *)v7 + 8LL * v10);
        if ( v9 < *(_DWORD *)(v12 + 16) )
          v11 = *(_QWORD *)(v12 + 8) + 24LL * v9;
      }
      if ( *(unsigned __int8 *)(v11 + 13) == HIWORD(v5) )
        v5 = v4;
    }
  }
  v13 = *((_QWORD *)this + 1);
  v14 = *(_DWORD *)(v13 + 8);
  if ( v5 < v14 + ((*(unsigned __int16 *)(v13 + 12) + 0xFFFF) << 16) )
  {
    if ( v5 >= v14 )
    {
      v3 = ((v5 - v14) >> 16) + 1;
      v5 += -65536 * ((v5 - v14) >> 16) - v14;
    }
    v15 = *(_QWORD *)(*(_QWORD *)v13 + 8LL * v3);
    if ( v5 < *(_DWORD *)(v15 + 16) )
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 8 * ((unsigned __int64)v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8) = a3;
  }
}
