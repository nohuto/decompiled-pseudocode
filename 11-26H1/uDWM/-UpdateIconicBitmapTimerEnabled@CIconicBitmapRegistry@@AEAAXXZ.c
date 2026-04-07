/*
 * XREFs of ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ @ 0x18006DDC8
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006DC2C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180038D60 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::UpdateIconicBitmapTimerEnabled(CIconicBitmapRegistry *this)
{
  int v1; // edx
  struct CWindowData **v2; // r8
  bool v3; // al
  int v4; // edx
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // r8

  v1 = 0;
  if ( *((_DWORD *)this + 18) )
  {
    v2 = (struct CWindowData **)(*((_QWORD *)this + 6) + 8LL);
    do
    {
      v3 = IsWindowTab(*v2);
      v6 = v4 + 1;
      v2 = (struct CWindowData **)(v7 + 16);
      if ( v3 )
        v6 = v4;
      v1 = v6;
    }
    while ( v5 != 1 );
  }
  *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) = v1 != 0;
}
