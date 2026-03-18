/*
 * XREFs of ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x14024A254
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x140249CA4 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x14014D0F4 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1401C54E0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProgramIdCopy(struct _CIT_PROGRAM_ID *a1, const struct _CIT_PROGRAM_ID *a2)
{
  unsigned __int16 **v2; // rsi
  const unsigned __int16 *v4; // rdx
  __int64 result; // rax
  size_t v6; // rbx
  size_t v7; // r8
  const unsigned __int16 *v8; // rdx

  v2 = (unsigned __int16 **)((char *)a1 + 8);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v4 = *(const unsigned __int16 **)a2;
  if ( v4 )
  {
    v6 = -1LL;
    v7 = -1LL;
    do
      ++v7;
    while ( v4[v7] );
    result = CitpStringDuplicate((unsigned __int16 **)a1, v4, v7);
    if ( (int)result >= 0 )
    {
      v8 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
      if ( v8 )
      {
        do
          ++v6;
        while ( v8[v6] );
        return CitpStringDuplicate(v2, v8, v6);
      }
    }
  }
  else
  {
    CitpLogFailureWorker(3221225659LL, 0LL);
    return 3221225659LL;
  }
  return result;
}
