/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@Cxx@@UEAAIIPEAPEAU_ENTRY@@@Z @ 0x1400E4F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall Cxx::GdiHandleManager::GetNextEntryIndex(
        Cxx::GdiHandleManager *this,
        unsigned int a2,
        struct _ENTRY **a3)
{
  struct _ENTRY *result; // rax
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // edi
  unsigned int v8; // r11d
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // r10d
  __int64 v14; // r11

  result = 0LL;
  *a3 = 0LL;
  while ( ++a2 < *((_DWORD *)this + 4) )
  {
    v5 = *((_QWORD *)this + 1);
    v6 = *(_DWORD *)(v5 + 8);
    if ( a2 < v6 + ((*(unsigned __int16 *)(v5 + 12) + 0xFFFF) << 16) )
    {
      if ( a2 >= v6 )
      {
        v7 = ((a2 - v6) >> 16) + 1;
        v8 = a2 + -65536 * ((a2 - v6) >> 16) - v6;
      }
      else
      {
        v7 = 0;
        v8 = a2;
      }
      v9 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * v7);
      if ( v8 < *(_DWORD *)(v9 + 16) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v9 + 8 * ((unsigned __int64)v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8) )
        {
          v10 = *((_QWORD *)this + 1);
          v11 = *(_DWORD *)(v10 + 8);
          if ( a2 < v11 + ((*(unsigned __int16 *)(v10 + 12) + 0xFFFF) << 16) )
          {
            if ( a2 >= v11 )
            {
              v12 = ((a2 - v11) >> 16) + 1;
              v13 = -65536 * ((a2 - v11) >> 16) - v11 + a2;
            }
            else
            {
              v12 = 0;
              v13 = a2;
            }
            v14 = *(_QWORD *)(*(_QWORD *)v10 + 8LL * v12);
            if ( v13 < *(_DWORD *)(v14 + 16) )
              result = (struct _ENTRY *)(*(_QWORD *)(v14 + 8) + 24LL * v13);
          }
          *a3 = result;
          return (struct _ENTRY *)a2;
        }
      }
    }
  }
  return result;
}
