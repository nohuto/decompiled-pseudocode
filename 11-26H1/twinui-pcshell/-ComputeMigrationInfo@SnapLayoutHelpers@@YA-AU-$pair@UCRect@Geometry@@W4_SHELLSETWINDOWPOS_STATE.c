/*
 * XREFs of ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AB194
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B6E00 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18016D080 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_18016D080.c)
 *     ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x18020B4B8 (-HandleMigrationRotation@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4S.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x1805AB160 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 *     ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x1805AB390 (-DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA-AW4ExtendRectFlags@1@W4SnapRegion@@@Z.c)
 *     ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1805AB928 (-ExtendRectToContainer@SnapLayoutHelpers@@YA-AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeMigrationInfo(
        __int64 a1,
        int *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned int nNumerator)
{
  int v9; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // r15d
  int v12; // esi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // r8d
  unsigned int v16; // edi
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  __int128 v30; // [rsp+30h] [rbp-88h] BYREF
  __int128 v31; // [rsp+40h] [rbp-78h] BYREF

  v9 = MulDiv(5, nNumerator, 96);
  v10 = 0LL;
  v11 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a2, a3, v9);
  v30 = 0LL;
  SnapLayoutHelpers::HandleMigrationRotation((__int64)&v31, v11, a2, a3, a4, v9);
  v12 = 3;
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v31) )
  {
    v10 = v31;
    goto LABEL_9;
  }
  if ( v11 != 9 )
  {
    if ( v11 != 10 || (unsigned int)MulDiv(a4[3] - a4[1], 96, nNumerator) >= 0x738 )
      goto LABEL_4;
LABEL_7:
    v12 = 1;
    goto LABEL_9;
  }
  if ( !SnapLayoutHelpers::CanFitColumnLayouts((SnapLayoutHelpers *)a4, (const struct Geometry::CRect *)nNumerator) )
    goto LABEL_7;
LABEL_4:
  v13 = *a4;
  v14 = MulDiv(*a2 - *a3, a4[2] - *a4, a3[2] - *a3);
  v15 = a3[3] - a3[1];
  v16 = v14 + v13;
  v17 = a4[1];
  v18 = a4[3] - v17;
  v19 = a2[1] - a3[1];
  LODWORD(v30) = v16;
  v20 = MulDiv(v19, v18, v15) + v17;
  v21 = a3[2] - *a3;
  v22 = a4[2] - *a4;
  v23 = a2[2] - *a2;
  DWORD1(v30) = v20;
  v24 = MulDiv(v23, v22, v21);
  v25 = a3[3] - a3[1];
  v26 = a4[3] - a4[1];
  v27 = a2[3] - a2[1];
  DWORD2(v30) = v16 + v24;
  HIDWORD(v30) = v20 + MulDiv(v27, v26, v25);
  v28 = SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(v11);
  v10 = *(_OWORD *)SnapLayoutHelpers::ExtendRectToContainer(&v31, a4, &v30, v28);
LABEL_9:
  *(_OWORD *)a1 = v10;
  *(_DWORD *)(a1 + 16) = v12;
  return a1;
}
