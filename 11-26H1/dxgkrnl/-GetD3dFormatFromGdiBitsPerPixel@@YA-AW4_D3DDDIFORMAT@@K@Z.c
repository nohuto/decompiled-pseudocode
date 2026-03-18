/*
 * XREFs of ?GetD3dFormatFromGdiBitsPerPixel@@YA?AW4_D3DDDIFORMAT@@K@Z @ 0x14025C5D0
 * Callers:
 *     DxgkUpdateCddDevmodeExtraData @ 0x140426EF0 (DxgkUpdateCddDevmodeExtraData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetD3dFormatFromGdiBitsPerPixel(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 8:
      return 41LL;
    case 16:
      return 23LL;
    case 24:
      return 20LL;
    case 32:
      return 21LL;
  }
  WdLogSingleEntry1(2LL);
  result = 0LL;
  WdLogGlobalForLineNumber = 14412;
  return result;
}
