/*
 * XREFs of ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023CF40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x140145B58 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x140145F08 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  bool *v5; // r11
  __int64 v6; // r10
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  unsigned int SegmentCount; // eax
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rax

  v5 = a5;
  LODWORD(v6) = 0;
  *a5 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( (unsigned __int64)(a4 - 1) <= 0xFF )
    {
      v18 = *(_QWORD *)(a1 + 136);
      if ( !v18 )
      {
        *(_QWORD *)(a1 + 136) = a4;
        goto LABEL_25;
      }
      if ( a4 == v18 )
        return (unsigned int)v6;
    }
    goto LABEL_27;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount((DirectComposition::CGenericInkMarshaler *)a1);
    if ( *(_QWORD *)(v16 + 136) != v6 && v17 <= SegmentCount )
    {
      *(_DWORD *)(v16 + 16) &= ~0x80u;
      *(_DWORD *)(v16 + 144) = SegmentCount - v17;
      goto LABEL_25;
    }
    goto LABEL_27;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 3;
            if ( !v14 )
            {
              *(_DWORD *)(a1 + 232) = a4;
              goto LABEL_12;
            }
            if ( v14 == 1 )
            {
              *(_DWORD *)(a1 + 236) = a4;
LABEL_12:
              *(_DWORD *)(a1 + 16) &= ~0x400u;
LABEL_25:
              *v5 = 1;
              return (unsigned int)v6;
            }
LABEL_27:
            LODWORD(v6) = -1073741811;
            return (unsigned int)v6;
          }
          *(_DWORD *)(a1 + 176) = a4;
        }
        else
        {
          *(_DWORD *)(a1 + 172) = a4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 168) = a4;
      }
      *(_DWORD *)(a1 + 16) &= ~0x100u;
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 156) = a4;
  }
  else
  {
    LODWORD(v6) = DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(
                    (DirectComposition::CGenericInkMarshaler *)a1,
                    (unsigned int)a4,
                    a5);
  }
  return (unsigned int)v6;
}
