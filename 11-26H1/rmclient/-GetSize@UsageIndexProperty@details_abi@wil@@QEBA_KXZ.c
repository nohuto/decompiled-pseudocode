/*
 * XREFs of ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180006610
 * Callers:
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800064F0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180006768 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details_abi::UsageIndexProperty::GetSize(wil::details_abi::UsageIndexProperty *this)
{
  __int64 result; // rax
  char v2; // dl

  result = *(unsigned __int16 *)this;
  if ( !(_WORD)result )
    result = *((unsigned __int16 *)this + 4) + 2LL;
  v2 = *((_BYTE *)this + 2);
  if ( v2 == 1 )
  {
    result += 2LL;
  }
  else if ( v2 == 2 )
  {
    result += 4LL;
  }
  return result;
}
