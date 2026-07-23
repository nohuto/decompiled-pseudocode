/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x180149EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  char v7; // di
  __int64 v8; // rax
  int v9; // ecx

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 != a1 )
      goto LABEL_4;
    LODWORD(v6) = *(_DWORD *)(a2 + 8);
    if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 88) )
      goto LABEL_4;
  }
  else
  {
    *(_QWORD *)a2 = a1;
    LODWORD(v6) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = **(_QWORD **)(a1 + 96);
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 )
  {
LABEL_10:
    if ( (unsigned int)v6 < *(_DWORD *)(a1 + 88) )
    {
LABEL_13:
      *a3 = v8;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
      v7 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    v9 = v6;
    v8 = 0LL;
    while ( 1 )
    {
      v6 = (unsigned int)(v9 + 1);
      *(_DWORD *)(a2 + 8) = v6;
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 88) )
        break;
      ++v9;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v6);
      *(_QWORD *)(a2 + 16) = v8;
      if ( v8 )
        goto LABEL_10;
    }
  }
  if ( v8 )
    goto LABEL_13;
  *a3 = 0LL;
LABEL_4:
  v7 = 0;
LABEL_14:
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return v7;
}
