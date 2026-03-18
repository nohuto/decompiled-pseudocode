/*
 * XREFs of ?GetHighestBitPos@@YAII@Z @ 0x1403A61F0
 * Callers:
 *     DxgkCreateContext @ 0x1403A3C90 (DxgkCreateContext.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A5FB0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1403A6E48 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHighestBitPos(unsigned int a1)
{
  __int64 result; // rax

  for ( result = 0LL; ; result = (unsigned int)(result + 1) )
  {
    a1 >>= 1;
    if ( !a1 )
      break;
  }
  return result;
}
