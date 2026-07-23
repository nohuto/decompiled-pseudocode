/*
 * XREFs of EmonFindCounterToAllocate @ 0x140597C24
 * Callers:
 *     EmonAllocateCounter @ 0x140597438 (EmonAllocateCounter.c)
 * Callees:
 *     <none>
 */

char __fastcall EmonFindCounterToAllocate(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v3; // r10
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  char result; // al
  unsigned int v8; // edi
  int i; // r8d
  int v10; // edx

  v3 = 0;
  LODWORD(v5) = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v5 = *(unsigned __int8 *)(a2 + 308);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48 * v5 + 24) == 3 )
      {
        v6 = __readmsr(0x38Fu);
        if ( !_bittest64((const __int64 *)&v6, (unsigned __int8)(v5 + 32)) )
LABEL_5:
          v3 = 1;
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    for ( i = v8 - 1; i >= 0; --i )
    {
      if ( i < v8 )
      {
        v10 = 0;
        LODWORD(v5) = 0;
        while ( (unsigned int)v5 <= *(_DWORD *)(a1 + 8) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * (unsigned int)v5 + 28) != 3 && ++v10 > (unsigned int)i )
            goto LABEL_16;
          LODWORD(v5) = v5 + 1;
        }
      }
      LODWORD(v5) = -1;
LABEL_16:
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * (int)v5 + 24) == 3 && (__readmsr((int)v5 + 390) & 0x4000FF) == 0 )
        goto LABEL_5;
    }
  }
  result = v3;
  *a3 = v5;
  return result;
}
