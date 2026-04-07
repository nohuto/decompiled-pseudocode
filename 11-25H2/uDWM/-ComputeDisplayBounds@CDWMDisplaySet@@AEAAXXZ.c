/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x1800681A4
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180066A74 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800682B4 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this, __int64 a2)
{
  __int64 v2; // r10
  CDWMDisplaySet *v3; // r11
  _DWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v2 = 0LL;
  v3 = this;
  if ( *((_DWORD *)this + 16) )
  {
    v4 = (_DWORD *)((char *)this + 16);
    do
    {
      LOBYTE(v5) = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(
                     *(_QWORD *)(*((_QWORD *)v3 + 5) + 8 * v2) + 56LL,
                     a2,
                     v4);
      if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v6, v5, v6) )
      {
        if ( (_BYTE)a2 )
        {
          v4[3] = 0;
          v4[2] = 0;
          v4[1] = 0;
          *v4 = 0;
        }
        else
        {
          *(_OWORD *)v4 = *(_OWORD *)(v7 + 56);
        }
      }
      else if ( !(_BYTE)a2 )
      {
        v9 = *(_DWORD *)(v7 + 56);
        if ( v9 < *v4 )
          *v4 = v9;
        v10 = *(_DWORD *)(v7 + 60);
        if ( v10 < v4[1] )
          v4[1] = v10;
        v11 = *(_DWORD *)(v7 + 64);
        if ( v11 > v4[2] )
          v4[2] = v11;
        v12 = *(_DWORD *)(v7 + 68);
        if ( v12 > v4[3] )
          v4[3] = v12;
      }
      v2 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v3 + 16) );
  }
}
