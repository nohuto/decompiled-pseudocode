/*
 * XREFs of ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800F53A0
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1802B0AD0 (-SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetDisplayId(__int64 a1, unsigned int a2)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 != *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 40) + 96LL))(
                          *(_QWORD *)(a1 + 40),
                          &v4) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 152LL))(
      *(_QWORD *)(a1 + 40) + 16LL,
      a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)(a1 - 80));
  }
}
