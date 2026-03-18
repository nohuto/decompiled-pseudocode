/*
 * XREFs of BmlCompareWireFormat @ 0x14041CFD0
 * Callers:
 *     BmlCompareTargetModes @ 0x1402DDBA4 (BmlCompareTargetModes.c)
 * Callees:
 *     BmlCompareSingleWireFormatType @ 0x140194C4C (BmlCompareSingleWireFormatType.c)
 */

__int64 __fastcall BmlCompareWireFormat(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // r8^1
  char v6; // r9^1
  char v7; // r10
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  char v10; // r10
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  char v13; // r10

  if ( a1 == a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1337;
  }
  result = BmlCompareSingleWireFormatType((*(_DWORD *)(a1 + 128) >> 2) & 0x3F, (*(_DWORD *)(a2 + 128) >> 2) & 0x3F);
  if ( !(_DWORD)result )
  {
    result = BmlCompareSingleWireFormatType(v7 & v5, v7 & v6);
    if ( !(_DWORD)result )
    {
      result = BmlCompareSingleWireFormatType(v10 & (unsigned __int8)(v8 >> 14), v10 & (unsigned __int8)(v9 >> 14));
      if ( !(_DWORD)result )
        return BmlCompareSingleWireFormatType(v13 & (unsigned __int8)(v11 >> 20), v13 & (unsigned __int8)(v12 >> 20));
    }
  }
  return result;
}
