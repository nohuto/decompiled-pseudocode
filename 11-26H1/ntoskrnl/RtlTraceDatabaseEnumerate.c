/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x140622CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x140622E58 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140623148 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx

  RtlpTraceDatabaseAcquireLock();
  v6 = 0;
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = a1;
    LODWORD(v7) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = **(_QWORD **)(a1 + 120);
    goto LABEL_5;
  }
  if ( *(_QWORD *)a2 == a1 )
  {
    LODWORD(v7) = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 112) )
    {
LABEL_5:
      v8 = *(_QWORD *)(a2 + 16);
      if ( v8 )
      {
LABEL_9:
        if ( (unsigned int)v7 < *(_DWORD *)(a1 + 112) )
          goto LABEL_12;
      }
      else
      {
        v9 = v7;
        v8 = 0LL;
        while ( 1 )
        {
          v7 = (unsigned int)(v9 + 1);
          *(_DWORD *)(a2 + 8) = v7;
          if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 112) )
            break;
          ++v9;
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7);
          *(_QWORD *)(a2 + 16) = v8;
          if ( v8 )
            goto LABEL_9;
        }
      }
      if ( !v8 )
      {
        *a3 = 0LL;
        goto LABEL_13;
      }
LABEL_12:
      *a3 = v8;
      v6 = 1;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
    }
  }
LABEL_13:
  RtlpTraceDatabaseReleaseLock(a1);
  return v6;
}
