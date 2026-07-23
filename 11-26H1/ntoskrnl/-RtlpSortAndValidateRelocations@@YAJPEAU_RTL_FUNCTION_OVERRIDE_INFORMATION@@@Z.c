/*
 * XREFs of ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C470
 * Callers:
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x140A6B17C (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     ?RtlpGetRelocationLastByteRva@@YAGPEBU_RTL_FUNCTION_OVERRIDE_RELOCATION@@@Z @ 0x140A6C51C (-RtlpGetRelocationLastByteRva@@YAGPEBU_RTL_FUNCTION_OVERRIDE_RELOCATION@@@Z.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x140A6C554 (-RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

__int64 __fastcall RtlpSortAndValidateRelocations(struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1)
{
  unsigned int i; // ebx
  struct _RTL_FUNCTION_OVERRIDE_INDEX *FunctionOverrideIndex; // rax
  unsigned int v4; // ebp
  const struct _RTL_FUNCTION_OVERRIDE_RELOCATION *v5; // rsi
  unsigned __int16 RelocationLastByteRva; // ax
  unsigned int j; // r9d
  const struct _RTL_FUNCTION_OVERRIDE_RELOCATION *v8; // rcx
  int v9; // r9d

  for ( i = *((_DWORD *)a1 + 8); i <= *((_DWORD *)a1 + 9); ++i )
  {
    FunctionOverrideIndex = RtlpGetFunctionOverrideIndex(a1, i);
    if ( FunctionOverrideIndex )
    {
      v4 = *(_DWORD *)FunctionOverrideIndex;
      v5 = (struct _RTL_FUNCTION_OVERRIDE_INDEX *)((char *)FunctionOverrideIndex + 4);
      qsort((char *)FunctionOverrideIndex + 4, *(unsigned int *)FunctionOverrideIndex, 8uLL, RtlpCompareRelocation);
      RelocationLastByteRva = RtlpGetRelocationLastByteRva(v5);
      for ( j = 1; j < v4; j = v9 + 1 )
      {
        v8 = (const struct _RTL_FUNCTION_OVERRIDE_RELOCATION *)((char *)v5 + 8 * j);
        if ( (unsigned __int16)(*(_WORD *)v8 & 0xFFF) <= RelocationLastByteRva )
          return 3221225595LL;
        RelocationLastByteRva = RtlpGetRelocationLastByteRva(v8);
      }
    }
  }
  return 0LL;
}
