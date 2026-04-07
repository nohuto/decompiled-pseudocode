/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18005801C
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180057180 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008B694 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAE.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // r10d
  unsigned int v2; // r14d
  __int64 v3; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // rbx
  _BYTE *v8; // rax
  __int64 j; // rdx
  __int64 v11; // r8
  __int64 i; // r11
  __int64 v13; // rdi
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 16);
  v2 = 0;
  v3 = 0LL;
  *((_DWORD *)this + 8) = 0;
  if ( v1 )
  {
    v5 = v1;
    do
    {
      v6 = *((_QWORD *)this + 5);
      v7 = *(_QWORD *)(v6 + 8 * v3);
      v8 = (_BYTE *)(v7 + 289);
      if ( *(_BYTE *)(v7 + 288) && *v8 )
        *((_DWORD *)this + 8) = v3;
      else
        v1 = v5;
      if ( *v8 )
      {
        *(_QWORD *)(v7 + 88) = v7;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
        {
          v13 = *(_QWORD *)(v6 + 8 * i);
          if ( *(_BYTE *)(v13 + 289)
            && (unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                  v7 + 56,
                                  v13 + 56) )
          {
            *(_QWORD *)(v7 + 88) = v13;
            break;
          }
        }
      }
      v1 = *((_DWORD *)this + 16);
      v3 = (unsigned int)(v3 + 1);
      v5 = v1;
    }
    while ( (unsigned int)v3 < v1 );
  }
  for ( j = 0LL; (unsigned int)j < v1; j = (unsigned int)(j + 1) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * j);
    if ( !*(_QWORD *)(v11 + 88) )
    {
      v14 = 395;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(v11 + 289) && *(_QWORD *)(v11 + 88) != v11 )
    {
      v14 = 407;
LABEL_25:
      v2 = -2003304291;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9040, 1LL, -2003304291, v14, 0LL);
      return v2;
    }
  }
  return v2;
}
