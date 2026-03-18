/*
 * XREFs of ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18001F6E0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180023C38 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180057A70 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x18008D178 (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180174144 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18021C1E0 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::UpdateContentFlags(CVisual *this)
{
  __int64 v2; // rcx
  DwmDbg::Backdrops *v3; // rcx
  unsigned __int8 v4; // r12
  bool v5; // r15
  bool v6; // bp
  bool v7; // r13
  char v8; // al
  char *v9; // r14
  _BYTE *v10; // rsi
  char v11; // al
  char v12; // cl
  CVisual *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // al
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  char v27; // [rsp+60h] [rbp+8h] BYREF
  char v28; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    *((_DWORD *)this + 24) ^= (*((_DWORD *)this + 24) ^ ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2) << 17)) & 0x60000;
  else
    *((_DWORD *)this + 24) &= 0xFFF9FFFF;
  v3 = (DwmDbg::Backdrops *)*((_QWORD *)this + 31);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v3 )
  {
    v8 = (*(__int64 (__fastcall **)(DwmDbg::Backdrops *))(*(_QWORD *)v3 + 312LL))(v3);
    v5 = (v8 & 4) != 0;
    v6 = (v8 & 2) != 0;
    v4 = v8 & 1;
    v7 = (v8 & 8) != 0;
  }
  v9 = (char *)this + 102;
  if ( dword_1803DC8B8 )
  {
    if ( v7 != (*v9 & 1) )
    {
      v21 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v27, "m_fIsBackdropBlur=%d", v7);
      v22 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v28, "Visual-IsBackdropBlurFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v22, this, v21);
    }
    v10 = (char *)this + 103;
    if ( v5 != (*((_BYTE *)this + 103) & 1) )
    {
      v25 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v27, "m_fHasBlurredWallpaperBackdropInput=%d", v5);
      v26 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)&v28,
              "Visual-HasBlurredWallpaperBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v26, this, v25);
    }
  }
  else
  {
    v10 = (char *)this + 103;
  }
  *v9 &= ~1u;
  *v9 |= v7;
  *v10 &= ~1u;
  v11 = (unsigned __int8)*v9 >> 7;
  *v10 |= v5;
  if ( v4 != v11 )
  {
    if ( DwmDbg::Backdrops::IsEtwEnabled(v3) )
    {
      v23 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v27, "m_fHasBackdropInput=%d", v4);
      v24 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v28, "Visual-HasBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v24, this, v23);
    }
    v16 = *v9;
    if ( v4 )
    {
      v17 = 1;
      *v9 = v16 | 0x80;
    }
    else
    {
      *v9 = v16 & 0x7F;
      v17 = -1;
      CVisual::ClearAllBackdropVisualImages(this);
    }
    v18 = *((_QWORD *)this + 11);
    if ( v18 && (*v9 & 0x20) != 0 )
    {
      v19 = *((_QWORD *)this + 11);
      do
      {
        *(_DWORD *)(v18 + 256) += v17;
        if ( (*(_BYTE *)(v18 + 102) & 0x20) == 0 )
          break;
        v18 = *(_QWORD *)(v18 + 88);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 88);
          v19 = v20;
          if ( v20 )
            v19 = *(_QWORD *)(v20 + 88);
        }
      }
      while ( v18 != v19 );
    }
  }
  if ( v6 != ((*v10 & 2) != 0) )
  {
    if ( dword_1803DC8B8 )
    {
      v14 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v27, "m_fHasWindowBackdropInput=%d", v6);
      v15 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v28, "Visual-HasWindowBackdropInputFlagChanged");
      DwmDbg::Backdrops::LogBrushEtwEvent(v15, this, v14);
    }
    v12 = *v10 | 2;
    if ( !v6 )
      v12 = *v10 & 0xFD;
    *v10 = v12;
    v13 = (CVisual *)*((_QWORD *)this + 11);
    if ( v13 )
    {
      if ( (*v9 & 0x20) != 0 )
        CVisual::PropagateBackdropUpdates(v13, 0, 2 * v6 - 1);
    }
  }
}
