/*
 * XREFs of ??1?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x1800A9F4C
 * Callers:
 *     _CWindowList::_CWindowList_::_1_::dtor$3 @ 0x1800E9A3F (_CWindowList--_CWindowList_--_1_--dtor$3.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$5 @ 0x1800E9A71 (_CWindowList--_CWindowList_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@QEAAXPEAU?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@Z @ 0x18007800C (-RemoveElement@-$CGenericTableMap@PEAVCWindowData@@U-$SetElement@PEAVCWindowData@@@-$CGenericSet.c)
 */

__int64 *__fastcall CGenericSet<CWindowData *>::~CGenericSet<CWindowData *>(PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  __int64 *result; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  for ( i = Table; ; Table = i )
  {
    RestartKey = 0LL;
    result = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(Table, &RestartKey);
    if ( !result )
      break;
    CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::RemoveElement(i, result);
  }
  return result;
}
