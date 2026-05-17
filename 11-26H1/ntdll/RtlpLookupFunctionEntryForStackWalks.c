/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x1800E2DE4
 * Callers:
 *     RtlpWalkFrameChain @ 0x180010544 (RtlpWalkFrameChain.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1800E2F84 (RtlpConvertFunctionEntry.c)
 */

__int64 __fastcall RtlpLookupFunctionEntryForStackWalks(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned __int64 v7; // rdi
  unsigned int *v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // r10d
  __int64 result; // rax

  if ( a1 >= *(_QWORD *)(a2 + 8) && a1 < *(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
    goto LABEL_23;
  if ( a1 >= *((_QWORD *)&xmmword_1801E0450 + 1)
    && a1 < *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
  {
    *(_OWORD *)a2 = xmmword_1801E0450;
    *(_QWORD *)(a2 + 16) = qword_1801E0460;
LABEL_23:
    v4 = *(_QWORD *)a2;
    goto LABEL_4;
  }
  v4 = RtlpxLookupFunctionTable(a1, a2);
LABEL_4:
  if ( v4 && (v5 = *(_DWORD *)(a2 + 20)) != 0 && (v6 = v5 / 0xC, v5 == 12 * (v5 / 0xC)) )
  {
    if ( !v6 )
      goto LABEL_19;
    v7 = a1 - *(_QWORD *)(a2 + 8);
    v8 = (unsigned int *)(v4 + 12LL * (v6 - 1));
    if ( v7 < *v8 )
    {
      v9 = 0;
      v10 = v6 - 2;
      while ( v10 >= v9 )
      {
        v11 = (v9 + v10) >> 1;
        v8 = (unsigned int *)(v4 + 12LL * v11);
        if ( v7 < *v8 )
        {
          v10 = v11 - 1;
        }
        else
        {
          if ( v7 < v8[3] )
            break;
          v9 = v11 + 1;
        }
      }
    }
    if ( v7 < *v8 || v7 >= v8[1] )
LABEL_19:
      v8 = 0LL;
    if ( v8 )
      return RtlpConvertFunctionEntry(v8, *(_QWORD *)(a2 + 8));
    return (__int64)v8;
  }
  else
  {
    result = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
