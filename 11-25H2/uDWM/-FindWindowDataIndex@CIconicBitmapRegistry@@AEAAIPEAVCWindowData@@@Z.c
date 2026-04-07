/*
 * XREFs of ?FindWindowDataIndex@CIconicBitmapRegistry@@AEAAIPEAVCWindowData@@@Z @ 0x18001BF0C
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIconicBitmapRegistry::FindWindowDataIndex(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  struct CWindowData **v4; // rcx

  v2 = *((_DWORD *)this + 18);
  result = 0LL;
  if ( v2 )
  {
    v4 = (struct CWindowData **)(*((_QWORD *)this + 6) + 8LL);
    do
    {
      if ( *v4 == a2 )
        break;
      result = (unsigned int)(result + 1);
      v4 += 2;
    }
    while ( (unsigned int)result < v2 );
  }
  return result;
}
