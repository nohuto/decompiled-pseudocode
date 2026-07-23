/*
 * XREFs of RtlpClearEnvironmentHashTable @ 0x18009E00C
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18009D730 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x18009F6A0 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x18009F800 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 */

_QWORD *RtlpClearEnvironmentHashTable()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rbx
  _QWORD *result; // rax
  void *v3; // r8
  _QWORD *i; // rcx

  v0 = (_QWORD **)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  *((_QWORD *)&xmmword_1801CA890 + 1) = 0LL;
  v1 = (_QWORD *)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  LOBYTE(xmmword_1801CA890) = 0;
  while ( v1 )
  {
    result = (_QWORD *)*v1;
    v1 = result;
    if ( ((unsigned __int8)result & 1) != 0 )
      break;
LABEL_10:
    if ( !result )
      return result;
    v3 = v1;
    for ( i = v0; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v1 )
      {
        *i = *v1;
        LODWORD(RtlpEnvironmentHashTable) = RtlpEnvironmentHashTable - 1;
        *v1 |= 0x8000000000000002uLL;
        v1 = i;
        goto LABEL_17;
      }
    }
    v3 = 0LL;
LABEL_17:
    RtlpSysVolFree(v3);
  }
  ++v0;
  result = (_QWORD *)*((_QWORD *)&RtlpEnvironmentHashTable + 1);
  while ( (unsigned __int64)v0 < *((_QWORD *)&RtlpEnvironmentHashTable + 1)
                               + 8 * ((unsigned __int64)DWORD1(RtlpEnvironmentHashTable) >> 5) )
  {
    v1 = *v0;
    if ( ((unsigned __int8)*v0 & 1) == 0 )
    {
      result = *v0;
      goto LABEL_10;
    }
    ++v0;
  }
  return result;
}
