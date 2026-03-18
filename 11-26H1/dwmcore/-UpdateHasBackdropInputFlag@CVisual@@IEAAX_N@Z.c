/*
 * XREFs of ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x180173FB4
 * Callers:
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173F30 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x18008D178 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18021C1E0 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 */

void __fastcall CVisual::UpdateHasBackdropInputFlag(CVisual *this, unsigned __int8 a2)
{
  int v3; // esi
  char v4; // al
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  DwmDbg::DbgString *v9; // rbx
  DwmDbg::DbgString *v10; // rax
  char *v11; // [rsp+30h] [rbp+8h] BYREF
  char *v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  if ( a2 != *((_BYTE *)this + 102) >> 7 )
  {
    if ( DwmDbg::Backdrops::IsEtwEnabled(this) )
    {
      v9 = DwmDbg::DbgString::DbgString(&v11, "m_fHasBackdropInput=%d", v3);
      v10 = DwmDbg::DbgString::DbgString(&v12, "Visual-HasBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v10, this, v9);
    }
    v4 = *((_BYTE *)this + 102);
    if ( (_BYTE)v3 )
    {
      v5 = 1;
      *((_BYTE *)this + 102) = v4 | 0x80;
    }
    else
    {
      v5 = -1;
      *((_BYTE *)this + 102) = v4 & 0x7F;
      CVisual::ClearAllBackdropVisualImages(this);
    }
    v6 = *((_QWORD *)this + 11);
    if ( v6 && (*((_BYTE *)this + 102) & 0x20) != 0 )
    {
      v7 = *((_QWORD *)this + 11);
      do
      {
        *(_DWORD *)(v6 + 256) += v5;
        if ( (*(_BYTE *)(v6 + 102) & 0x20) == 0 )
          break;
        v6 = *(_QWORD *)(v6 + 88);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 88);
          v7 = v8;
          if ( v8 )
            v7 = *(_QWORD *)(v8 + 88);
        }
      }
      while ( v6 != v7 );
    }
  }
}
