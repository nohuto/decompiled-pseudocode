/*
 * XREFs of ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18002CA30
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18002C9F8 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006DC2C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapPending(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v3; // r9
  char v4; // al

  if ( !*((_QWORD *)a2 + 54) && !IsWindowTab(a2) )
  {
    v4 = *((_BYTE *)a2 + 738);
    if ( a3 )
    {
      if ( (v4 & 8) == 0 )
        ++*(_DWORD *)(v3 + 84);
    }
    else if ( (v4 & 8) != 0 )
    {
      --*(_DWORD *)(v3 + 84);
    }
  }
  *((_BYTE *)a2 + 738) &= ~8u;
  *((_BYTE *)a2 + 738) |= 8 * a3;
}
