/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18011E920
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18011B0C0 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // r9
  __int64 v4; // r14
  int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rbp
  int v8; // r11d
  __int64 v9; // rax
  int v10; // r11d
  __int64 v11; // r10
  int v12; // eax
  int v13; // r11d
  int v14; // r9d
  __int64 v15; // r10
  struct _D3DCOLORVALUE v16; // [rsp+20h] [rbp-38h]
  struct _D3DCOLORVALUE v17; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = 8 * *((_DWORD *)this + 4) + 16;
  if ( *((_DWORD *)this + 3) )
  {
    v6 = 0;
    v7 = *((_QWORD *)this + 4);
    if ( *((_DWORD *)this + 2) )
    {
      v8 = 0;
      do
      {
        v9 = v2;
        do
        {
          *(&v16.r + v9) = *(float *)(v8 + v7 + 12) * *(&a2->r + v9);
          ++v9;
        }
        while ( v9 < 4 );
        *(struct _D3DCOLORVALUE *)&v17.r = *(struct _D3DCOLORVALUE *)&v16.r;
        ++v6;
        *(_DWORD *)(v8 + v4 + 12) = ColorDWFromStraightColorF(&v17);
        v8 = v5 + v10;
      }
      while ( v6 < *(_DWORD *)(v11 + 8) );
    }
  }
  else if ( *((_DWORD *)this + 2) )
  {
    do
    {
      v12 = ColorDWFromStraightColorF(a2);
      *(_DWORD *)(v13 + v4 + 12) = v12;
    }
    while ( (unsigned int)(v14 + 1) < *(_DWORD *)(v15 + 8) );
  }
}
