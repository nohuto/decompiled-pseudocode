/*
 * XREFs of ?evaluate@_tip_SnapLauncherTest@@QEAAXXZ @ 0x180580EC4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXXZ @ 0x180580EB0 (-evaluate@-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B6A4C (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 */

void __fastcall _tip_SnapLauncherTest::evaluate(_tip_SnapLauncherTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  int SnapRegionAnchorLocations; // ebx
  int v6; // r8d
  const char *v7; // rdx
  __int64 v8; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::snap_id_not_found", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 18) )
  {
    if ( *((_BYTE *)this + 19) )
    {
      SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(
                                    (_DWORD *)this + 9,
                                    (_DWORD *)this + 13,
                                    *((_DWORD *)this + 17));
      if ( (unsigned int)SnapLayoutHelpers::GetSnapRegionAnchorLocations((_DWORD *)this + 5, (_DWORD *)this + 13, v6) == SnapRegionAnchorLocations )
      {
        v8 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v8 + 152) )
        {
          *(_QWORD *)(v8 + 160) = 0LL;
          *(_BYTE *)(v8 + 152) = 1;
          *(_WORD *)(v8 + 154) = 0x8000;
        }
      }
      else
      {
        v3 = tip2::details::reason_string((tip2::details *)"reason::not_snapped_correctly", v7);
        v4 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v4 + 152) )
        {
          *(_WORD *)(v4 + 154) = 4;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::monitor_not_found", a2);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::snap_id_never_used", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 2;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
      *(_QWORD *)(v4 + 160) = v3;
    }
  }
}
