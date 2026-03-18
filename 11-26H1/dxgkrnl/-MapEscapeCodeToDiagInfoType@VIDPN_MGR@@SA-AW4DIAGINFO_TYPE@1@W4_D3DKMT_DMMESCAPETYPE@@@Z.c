/*
 * XREFs of ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x14025C6F0
 * Callers:
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140430030 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::MapEscapeCodeToDiagInfoType(int a1)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  result = 8LL;
  if ( a1 <= 8 )
  {
    switch ( a1 )
    {
      case 8:
        return result;
      case 1:
        return 1LL;
      case 2:
        return 2LL;
      case 3:
        return 3LL;
      case 4:
        return 4LL;
      case 5:
        return 5LL;
      case 6:
        return 6LL;
      case 7:
        return 7LL;
    }
    goto LABEL_23;
  }
  result = 9LL;
  v3 = a1 - 9;
  if ( a1 == 9 )
    return result;
  v4 = v3 - 1;
  if ( !v4 )
    return 10LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 11LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 12LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 13LL;
  if ( v7 != 1 )
  {
LABEL_23:
    WdLogSingleEntry1(2LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 5684;
    return result;
  }
  return 14LL;
}
