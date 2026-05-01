/*
 * XREFs of ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016800
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001693C (-HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampDepGroupPopulateIndependentHostList(
        struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1,
        unsigned __int64 a2)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rsi
  __int64 v5; // r8
  unsigned int v6; // ecx
  unsigned __int8 v7; // cf
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  for ( i = *a1; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    *((_QWORD *)i + 28) = 0LL;
    HampHostCheckSetStaticDonation((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 744));
    v6 = *((_DWORD *)i + 10) & 0xFFFFFFF3 | (4 * ((*((_QWORD *)i - 10) & 0x300000000LL) != 0));
    v7 = _bittest64((const signed __int64 *)i - 10, 0x24u);
    *((_DWORD *)i + 10) = v6;
    if ( v7 )
    {
      v8 = *(_QWORD *)a2;
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( v8 )
          v8 ^= a2;
      }
      LOBYTE(v5) = 0;
      if ( v8 )
      {
        v9 = (v6 >> 2) & 3;
        while ( 1 )
        {
          if ( v9 > ((*(_DWORD *)(v8 + 24) >> 2) & 3u) )
          {
            v10 = *(_QWORD *)v8;
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
            {
              if ( !v10 )
                break;
              v10 ^= v8;
            }
            if ( !v10 )
              break;
          }
          else
          {
            v10 = *(_QWORD *)(v8 + 8);
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
            {
              if ( !v10 )
              {
LABEL_11:
                LOBYTE(v5) = 1;
                break;
              }
              v10 ^= v8;
            }
            if ( !v10 )
              goto LABEL_11;
          }
          v8 = v10;
        }
      }
      RtlRbInsertNodeEx(a2, v8, v5, (char *)i + 16);
      *((_DWORD *)i + 10) |= 2u;
    }
  }
}
