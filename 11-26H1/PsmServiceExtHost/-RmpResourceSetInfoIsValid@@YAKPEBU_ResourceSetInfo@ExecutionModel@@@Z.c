/*
 * XREFs of ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18002C22C
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18002BE64 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetInfoIsValid(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned int i; // r9d
  unsigned int v7; // eax

  v1 = 0;
  if ( *((_QWORD *)a1 + 14) != -1LL && (!*((_QWORD *)a1 + 8) || *((_QWORD *)a1 + 8) >= 0x1000uLL) )
  {
    v3 = *((_QWORD *)a1 + 7);
    if ( !v3 || v3 >= 0x1000 )
    {
      v4 = *((_QWORD *)a1 + 45);
      if ( !v4 || v4 >= 0x1000 )
      {
        v5 = *((_QWORD *)a1 + 3);
        if ( (!v5 || v5 >= 0x1000) && *((_QWORD *)a1 + 8) >= v5 && v5 >= v3 && v3 >= v4 )
        {
          for ( i = 0; i < 3; ++i )
          {
            if ( *((_DWORD *)a1 + 6 * i + 20) != i )
              return v1;
          }
          if ( *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 8) && (*((_BYTE *)a1 + 40) & 9) != 9 )
          {
            v7 = *((_BYTE *)a1 + 42) & 7;
            if ( v7 < 2 || v7 > 4 || (*((_BYTE *)a1 + 40) & 3) != 0 )
              return 1;
          }
        }
      }
    }
  }
  return v1;
}
