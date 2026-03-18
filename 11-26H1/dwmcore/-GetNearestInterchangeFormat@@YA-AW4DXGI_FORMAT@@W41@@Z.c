/*
 * XREFs of ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x1802B55DC
 * Callers:
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802B4FF0 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNearestInterchangeFormat(enum DXGI_FORMAT a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 8;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 && (v5 = v4 - 13) != 0 )
      {
        if ( v5 != 43 )
          return 87LL;
      }
      else
      {
        return 11LL;
      }
    }
  }
  return result;
}
