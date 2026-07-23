/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x1800E1644
 * Callers:
 *     RtlpWalkFrameChain @ 0x18005BC74 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1800E17E4 (RtlpConvertFunctionEntry.c)
 */

char *__fastcall RtlpLookupFunctionEntryForStackWalks(char *BaseAddress, __int64 a2)
{
  char *v4; // r9
  unsigned int v5; // ecx
  unsigned int v6; // edx
  char *v7; // rdi
  char *v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // r10d
  char *result; // rax

  if ( (unsigned __int64)BaseAddress >= *(_QWORD *)(a2 + 8)
    && (unsigned __int64)BaseAddress < *(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
  {
    goto LABEL_23;
  }
  if ( (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801DF450 + 1)
    && (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801DF450 + 1)
                                     + (unsigned __int64)(unsigned int)qword_1801DF460 )
  {
    *(_OWORD *)a2 = xmmword_1801DF450;
    *(_QWORD *)(a2 + 16) = qword_1801DF460;
LABEL_23:
    v4 = *(char **)a2;
    goto LABEL_4;
  }
  v4 = RtlpxLookupFunctionTable(BaseAddress, (char **)a2);
LABEL_4:
  if ( v4 && (v5 = *(_DWORD *)(a2 + 20)) != 0 && (v6 = v5 / 0xC, v5 == 12 * (v5 / 0xC)) )
  {
    if ( !v6 )
      goto LABEL_19;
    v7 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
    v8 = &v4[12 * v6 - 12];
    if ( (unsigned __int64)v7 < *(unsigned int *)v8 )
    {
      v9 = 0;
      v10 = v6 - 2;
      while ( v10 >= v9 )
      {
        v11 = (v9 + v10) >> 1;
        v8 = &v4[12 * v11];
        if ( (unsigned __int64)v7 < *(unsigned int *)v8 )
        {
          v10 = v11 - 1;
        }
        else
        {
          if ( (unsigned __int64)v7 < *((unsigned int *)v8 + 3) )
            break;
          v9 = v11 + 1;
        }
      }
    }
    if ( (unsigned __int64)v7 < *(unsigned int *)v8 || (unsigned __int64)v7 >= *((unsigned int *)v8 + 1) )
LABEL_19:
      v8 = 0LL;
    if ( v8 )
      return (char *)RtlpConvertFunctionEntry(v8, *(_QWORD *)(a2 + 8));
    return v8;
  }
  else
  {
    result = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
