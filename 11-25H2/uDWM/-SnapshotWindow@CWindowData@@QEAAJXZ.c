/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800030D0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800E3600 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4720 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E8B90 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001AA10 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001D380 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18005519C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180055940 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180055A78 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?AllowSnapshot@CWindowData@@QEBA_NXZ @ 0x180056E54 (-AllowSnapshot@CWindowData@@QEBA_NXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(struct CWindowSnapshot **this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  CWindowData *v5; // rsi
  int IdealWindowRepresentationType; // eax
  char v7; // r9
  __int64 j; // rsi
  struct CWindowSnapshot *v9; // rax
  CWindowData *v10; // rbp
  CWindowSnapshot *v12; // r10
  int v13; // eax
  struct CTopLevelWindow *v14; // rcx
  int v15; // eax
  __int64 i; // rbp
  CWindowData *v17; // r14
  int v18; // eax

  v3 = 0;
  if ( ((_BYTE)this[84] & 0x40) == 0 )
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
          v14 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 55);
          if ( v14 )
          {
            v15 = CWindowSnapshot::Create(v14, this + 60);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x600u, 0LL);
              return v3;
            }
            *((_BYTE *)this + 676) &= ~0x10u;
          }
        }
      }
    }
    else if ( !IdealWindowRepresentationType && (*((_BYTE *)this + 676) & 8) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
      {
        v17 = (CWindowData *)*((_QWORD *)this[76] + i);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v17) == 1 )
        {
          v5 = v17;
          goto LABEL_4;
        }
      }
    }
    CWindowData::NotifyRepresentationChanged((CWindowData *)this);
    v7 = *((_BYTE *)this + 676);
    if ( (v7 & 8) != 0 )
    {
      if ( this[60] && CWindowData::AllowSnapshot(v5) )
      {
        v13 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v12, v5);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x60Au, 0LL);
      }
      else
      {
        *((_BYTE *)this + 676) = v7 | 0x10;
      }
    }
    else
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 158); j = (unsigned int)(j + 1) )
      {
        v9 = this[76];
        v10 = (CWindowData *)*((_QWORD *)v9 + j);
        if ( (*((_BYTE *)v10 + 678) & 0x10) == 0
          && (unsigned int)CWindowData::GetIdealWindowRepresentationType(*((_QWORD *)v9 + j)) == 1 )
        {
          v18 = CWindowData::SnapshotWindow(v10);
          v3 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x61Du, 0LL);
            return v3;
          }
        }
      }
    }
  }
  return v3;
}
