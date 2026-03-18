/*
 * XREFs of ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x14033AAE0
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x140346D98 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x14033C184 (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryUnicodeMonitorId(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v4; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  struct _STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  SourceString = 0LL;
  v6 = CCD_SET_STRING_ID::QueryMonitorId(this, a2, &SourceString);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, v4, a3, this);
    WdLogGlobalForLineNumber = 1556;
  }
  else
  {
    v8 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u);
    v7 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry4(2LL, v8, (unsigned int)v4, a3, this);
      WdLogGlobalForLineNumber = 1571;
    }
  }
  return v7;
}
