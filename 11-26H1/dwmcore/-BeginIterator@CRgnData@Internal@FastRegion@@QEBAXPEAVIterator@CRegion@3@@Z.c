/*
 * XREFs of ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180130FA0
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::BeginIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  __int64 v2; // rax
  char *v4; // r11
  char *v5; // rax
  __int64 v6; // rdx
  char *v7; // rdx
  __int64 v8; // r8
  char *v9; // rdx
  __int64 v10; // r8

  *(_QWORD *)a2 = this;
  v2 = *(int *)this;
  if ( (_DWORD)v2 )
  {
    v4 = (char *)this + 8 * v2 + 4;
    *((_QWORD *)a2 + 1) = v4;
    v5 = (char *)this + 12;
    *((_QWORD *)a2 + 2) = (char *)this + 12;
    v6 = *((int *)this + 4) + 12LL;
    *((_DWORD *)a2 + 8) = 0;
    v7 = (char *)this + v6;
    *((_QWORD *)a2 + 3) = v7;
    v8 = ((__int64)this + *((int *)this + 6) - (_QWORD)v7 + 20) >> 3;
    *((_DWORD *)a2 + 9) = v8;
    if ( (int)v8 <= 0 )
    {
      *((_DWORD *)a2 + 8) = 1;
      while ( 1 )
      {
        v5 += 8;
        *((_QWORD *)a2 + 2) = v5;
        v9 = &v5[*((int *)v5 + 1)];
        *((_QWORD *)a2 + 3) = v9;
        v10 = (__int64)&v5[*((int *)v5 + 3) - (_QWORD)v9 + 8] >> 3;
        *((_DWORD *)a2 + 9) = v10;
        if ( (_DWORD)v10 )
          break;
        if ( v5 >= v4 )
          return;
      }
      *((_DWORD *)a2 + 8) = 0;
    }
  }
  else
  {
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
  }
}
