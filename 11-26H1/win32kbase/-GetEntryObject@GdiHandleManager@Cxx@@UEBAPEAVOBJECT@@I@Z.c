/*
 * XREFs of ?GetEntryObject@GdiHandleManager@Cxx@@UEBAPEAVOBJECT@@I@Z @ 0x1400BC0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct OBJECT *__fastcall Cxx::GdiHandleManager::GetEntryObject(Cxx::GdiHandleManager *this, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  unsigned int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r8

  v2 = 0LL;
  if ( a2 >= 0x10000 )
  {
    if ( *((_DWORD *)this + 4) <= 0x10000u )
    {
      a2 = (unsigned __int16)a2;
    }
    else
    {
      v3 = *((_QWORD *)this + 1);
      v4 = *(_DWORD *)(v3 + 8);
      if ( (unsigned __int16)a2 >= v4 + ((*(unsigned __int16 *)(v3 + 12) + 0xFFFF) << 16) )
      {
        v7 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a2 >= v4 )
        {
          v6 = (((unsigned __int16)a2 - v4) >> 16) + 1;
          v5 = (unsigned __int16)a2 + -65536 * (((unsigned __int16)a2 - v4) >> 16) - v4;
        }
        else
        {
          v5 = (unsigned __int16)a2;
          v6 = 0;
        }
        v7 = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * v6);
        if ( v5 < *(_DWORD *)(v8 + 16) )
          v7 = *(_QWORD *)(v8 + 8) + 24LL * v5;
      }
      if ( *(unsigned __int8 *)(v7 + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
  }
  v9 = *((_QWORD *)this + 1);
  v10 = *(_DWORD *)(v9 + 8);
  if ( a2 < v10 + ((*(unsigned __int16 *)(v9 + 12) + 0xFFFF) << 16) )
  {
    if ( a2 >= v10 )
    {
      v11 = ((a2 - v10) >> 16) + 1;
      a2 += -65536 * ((a2 - v10) >> 16) - v10;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v9 + 8LL * v11);
    if ( a2 < *(_DWORD *)(v12 + 16) )
      return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)v12 + 8 * ((unsigned __int64)a2 >> 8))
                               + 16LL * (unsigned __int8)a2
                               + 8);
  }
  return (struct OBJECT *)v2;
}
