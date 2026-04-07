/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035AA0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18003BE10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180042F10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4B50 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800181AC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18003416C (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180034444 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003457C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180034A5C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?AllowSnapshot@CWindowData@@QEBA_NXZ @ 0x180034A7C (-AllowSnapshot@CWindowData@@QEBA_NXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(struct CWindowSnapshot **this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  CWindowData *v5; // rsi
  int IdealWindowRepresentationType; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  char v10; // r9
  __int64 j; // rsi
  struct CWindowSnapshot *v12; // rax
  CWindowData *v13; // rbp
  CWindowSnapshot *v15; // r10
  int v16; // eax
  struct CTopLevelWindow *v17; // rcx
  int v18; // eax
  __int64 i; // rbp
  CWindowData *v20; // r14
  int v21; // eax

  v3 = 0;
  if ( ((_BYTE)this[92] & 0x40) == 0 )
  {
    CWindowData::ClearSnapshot((CWindowData *)this, 0, a3, 0);
    v5 = 0LL;
    IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
    if ( IdealWindowRepresentationType == 1 )
    {
      v5 = (CWindowData *)this;
LABEL_4:
      if ( v5 )
      {
        if ( !CWindowData::IsImmersiveWindow(v5) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
        {
          v5 = 0LL;
        }
        else
        {
          v17 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 55);
          if ( v17 )
          {
            v18 = CWindowSnapshot::Create(v17, this + 60);
            v3 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x5FCu, 0LL);
              return v3;
            }
            *((_BYTE *)this + 740) &= ~0x10u;
          }
        }
      }
    }
    else if ( !IdealWindowRepresentationType && (*((_BYTE *)this + 740) & 8) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
      {
        v20 = (CWindowData *)*((_QWORD *)this[76] + i);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v20) == 1 )
        {
          v5 = v20;
          goto LABEL_4;
        }
      }
    }
    CWindowData::NotifyRepresentationChanged((CWindowData *)this, v7, v8, v9);
    v10 = *((_BYTE *)this + 740);
    if ( (v10 & 8) != 0 )
    {
      if ( this[60] && CWindowData::AllowSnapshot(v5) )
      {
        v16 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v15, v5);
        v3 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x606u, 0LL);
      }
      else
      {
        *((_BYTE *)this + 740) = v10 | 0x10;
      }
    }
    else
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 158); j = (unsigned int)(j + 1) )
      {
        v12 = this[76];
        v13 = (CWindowData *)*((_QWORD *)v12 + j);
        if ( (*((_BYTE *)v13 + 742) & 8) == 0
          && (unsigned int)CWindowData::GetIdealWindowRepresentationType(*((_QWORD *)v12 + j)) == 1 )
        {
          v21 = CWindowData::SnapshotWindow(v13);
          v3 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x619u, 0LL);
            return v3;
          }
        }
      }
    }
  }
  return v3;
}
