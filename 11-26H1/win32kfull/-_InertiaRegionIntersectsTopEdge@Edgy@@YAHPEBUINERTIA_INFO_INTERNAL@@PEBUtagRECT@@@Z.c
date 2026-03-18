/*
 * XREFs of ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1402C3498
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14023F1A8 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     GetInertiaRegionInVirtualizedScreen @ 0x1402CBCB0 (GetInertiaRegionInVirtualizedScreen.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall Edgy::_InertiaRegionIntersectsTopEdge(
        Edgy *this,
        const struct INERTIA_INFO_INTERNAL *a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // ebx
  int v5; // r11d
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  unsigned int i; // ecx
  int v10; // eax
  _DWORD v12[8]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  if ( (unsigned int)GetInertiaRegionInVirtualizedScreen(this, v12, a3) )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    for ( i = 0; i < 4; ++i )
    {
      if ( v12[2 * i + 1] > *((_DWORD *)a2 + 1) )
        v6 = 1;
      else
        v5 = 1;
      v10 = v12[2 * i];
      if ( v10 > *(_DWORD *)a2 )
        v7 = 1;
      if ( v10 < *((_DWORD *)a2 + 2) )
        v8 = 1;
      if ( v5 && v6 && v7 && v8 )
        return 1;
    }
  }
  return v4;
}
