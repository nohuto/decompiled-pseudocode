/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x180058150
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180057180 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800581F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this)
{
  char *v1; // r8
  __int64 v2; // r9
  char IsEmpty; // al
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r11
  char v7; // dl
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  if ( *((_DWORD *)this + 16) )
  {
    v1 = (char *)this + 16;
    do
    {
      TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v1);
      IsEmpty = TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v2 + 56);
      if ( v7 )
      {
        if ( IsEmpty )
        {
          *((_QWORD *)v1 + 1) = 0LL;
          *(_QWORD *)v1 = 0LL;
        }
        else
        {
          *(_OWORD *)v1 = *(_OWORD *)(v4 + 56);
        }
      }
      else if ( !IsEmpty )
      {
        v8 = *(_DWORD *)(v4 + 56);
        if ( v8 < *(_DWORD *)v1 )
          *(_DWORD *)v1 = v8;
        v9 = *(_DWORD *)(v4 + 60);
        if ( v9 < *((_DWORD *)v1 + 1) )
          *((_DWORD *)v1 + 1) = v9;
        v10 = *(_DWORD *)(v4 + 64);
        if ( v10 > *((_DWORD *)v1 + 2) )
          *((_DWORD *)v1 + 2) = v10;
        v11 = *(_DWORD *)(v4 + 68);
        if ( v11 > *((_DWORD *)v1 + 3) )
          *((_DWORD *)v1 + 3) = v11;
      }
    }
    while ( (unsigned int)(v5 + 1) < *(_DWORD *)(v6 + 64) );
  }
}
