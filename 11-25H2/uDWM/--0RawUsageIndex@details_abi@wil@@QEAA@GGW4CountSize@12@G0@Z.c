/*
 * XREFs of ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1800721B0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180071FD8 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details_abi::RawUsageIndex::RawUsageIndex(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        char a4,
        unsigned __int16 a5,
        char a6)
{
  __int64 v6; // rax
  __int64 result; // rax

  v6 = a5;
  *(_WORD *)(a1 + 2) = a3;
  *(_WORD *)a1 = a2;
  *(_BYTE *)(a1 + 4) = a4;
  *(_WORD *)(a1 + 6) = a5;
  *(_BYTE *)(a1 + 8) = a6;
  if ( a5 )
  {
    if ( a6 == 1 )
    {
      v6 = a5 + 2LL;
    }
    else if ( a6 == 2 )
    {
      v6 = a5 + 4LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v6;
  result = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = 0;
  return result;
}
