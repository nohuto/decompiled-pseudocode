/*
 * XREFs of AMLIGetNameSpaceObjectPath @ 0x14002C7E4
 * Callers:
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 * Callees:
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectPath(_QWORD *a1, void *a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  _BYTE *ObjectPath; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edi

  v5 = -1073741823;
  if ( a1 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(*a1);
    if ( ObjectPath )
    {
      v7 = -1LL;
      v8 = -1LL;
      do
        ++v8;
      while ( ObjectPath[v8] );
      if ( a2 )
      {
        v9 = v8 + 1;
        v10 = -1LL;
        do
          ++v10;
        while ( ObjectPath[v10] );
        if ( (unsigned int)*a3 < v9 )
        {
          v5 = -1073741789;
          LODWORD(v7) = v10;
        }
        else
        {
          memmove(a2, ObjectPath, v10 + 1);
          do
            ++v7;
          while ( ObjectPath[v7] );
          v5 = 0;
        }
        v11 = v7 + 1;
      }
      else
      {
        v5 = -1073741789;
        v11 = v8 + 1;
      }
      *a3 = v11;
      ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v5;
}
