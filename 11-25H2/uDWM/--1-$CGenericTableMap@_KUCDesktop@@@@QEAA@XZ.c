/*
 * XREFs of ??1?$CGenericTableMap@_KUCDesktop@@@@QEAA@XZ @ 0x1800ABFDC
 * Callers:
 *     _CWindowList::_CWindowList_::_1_::dtor$0 @ 0x1800EDA65 (_CWindowList--_CWindowList_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<unsigned __int64,CDesktop>::~CGenericTableMap<unsigned __int64,CDesktop>(
        PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID result; // rax
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  for ( i = Table; ; Table = i )
  {
    RestartKey = 0LL;
    result = RtlEnumerateGenericTableWithoutSplaying(Table, &RestartKey);
    if ( !result )
      break;
    RtlDeleteElementGenericTable(i, result);
  }
  return result;
}
