/*
 * XREFs of ?vDisableDpiScaleTransform@DC@@QEAAXXZ @ 0x140039194
 * Callers:
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 * Callees:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 */

void __fastcall DC::vDisableDpiScaleTransform(DC *this)
{
  int v1; // r8d
  __int64 v2; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = *((_DWORD *)this + 130);
  LODWORD(v2) = 1;
  if ( (v1 & 1) != 0 && (v1 & 2) == 0 )
  {
    v4 = v1 & 0xFFFFFFF9 | 2;
    *((_DWORD *)this + 130) = v4;
    v5 = *((_QWORD *)this + 122);
    v6 = *(_DWORD *)(v5 + 340);
    if ( (v4 & 1) != 0 )
      v7 = v6 | 0x16090;
    else
      v7 = v6 | 0x6090;
    *(_DWORD *)(v5 + 340) = v7;
    v8 = *((_DWORD *)this + 130);
    if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
    {
      v9 = *((_DWORD *)this + 131);
      v10 = (unsigned __int8)(v9 >> 23);
      if ( v10 <= 0x9E )
      {
        v11 = v9 & 0x7FFFFF | 0x800000LL;
        if ( v10 < 0x76 )
          v12 = v11 >> (118 - (unsigned __int8)v10);
        else
          v12 = v11 << ((unsigned __int8)v10 - 118);
        v2 = (v12 + 0x80000000LL) >> 32;
        if ( v9 < 0 )
          LODWORD(v2) = -(int)v2;
      }
    }
    DC::SetCachedDpiScaleValue(this, v2);
  }
}
