/*
 * XREFs of ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_NW4SnapRegionFlags@SnapLayoutHelpers@@@Z @ 0x18059F754
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180268460 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x1801D9768 (-ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapR.c)
 *     ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHHW4SnapRegionFlags@2@@Z @ 0x1805AB7EC (-DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geom.c)
 */

__int64 __fastcall CShellSnapComponent::GetSnapRegionAndSafetyRectForPoint(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        int *a5,
        char a6)
{
  __int128 v9; // xmm6
  int v10; // ebx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  int v16; // r13d
  int v17; // ebx
  int v18; // ebp
  __int128 *v19; // rax
  int v20; // eax
  __int64 result; // rax
  int v22; // [rsp+40h] [rbp-68h]
  int v23; // [rsp+48h] [rbp-60h] BYREF
  int v24; // [rsp+4Ch] [rbp-5Ch]

  v9 = 0LL;
  if ( a6 )
  {
    v10 = (int)(float)((float)(a3[2] - *a3) * 0.1);
    v11 = 1176LL;
    v12 = (int)(float)((float)(a3[3] - a3[1]) * 0.1);
  }
  else
  {
    v10 = 138;
    v11 = 1164LL;
    v12 = 138;
  }
  v13 = (unsigned int)v12;
  if ( *(_BYTE *)(a1 + 1156) )
  {
    v14 = *(_DWORD *)(v11 + a1);
    if ( v12 < (int)HIBYTE(v14) )
      v13 = HIBYTE(v14);
    v15 = BYTE2(v14);
    v22 = v13;
    if ( v10 >= BYTE2(v14) )
      v15 = v10;
    v16 = BYTE1(v14);
    v23 = *a5;
    if ( v10 >= BYTE1(v14) )
      v16 = v10;
    v17 = (unsigned __int8)v14;
    v24 = a5[1];
    if ( v12 >= (unsigned __int8)v14 )
      v17 = v12;
    v18 = SnapLayoutHelpers::CustomDragout::DetermineSnapRegionFromPoint(&v23, a4, v13, v15, v16, v17);
    if ( v18 )
    {
      v19 = (__int128 *)SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
                          (__int64)&v23,
                          v18,
                          a3,
                          a4,
                          v22,
                          v15,
                          v16,
                          v17);
LABEL_17:
      v9 = *v19;
    }
  }
  else
  {
    v23 = *a5;
    v24 = a5[1];
    v20 = SnapLayoutHelpers::CustomDragout::DetermineSnapRegionFromPoint(
            &v23,
            a4,
            (unsigned int)v12,
            (unsigned int)v10,
            v10,
            v12);
    v18 = v20;
    if ( v20 )
    {
      v19 = (__int128 *)SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
                          (__int64)&v23,
                          v20,
                          a3,
                          a4,
                          v12,
                          v10,
                          v10,
                          v12);
      goto LABEL_17;
    }
  }
  result = a2;
  *(_OWORD *)(a2 + 4) = v9;
  *(_DWORD *)a2 = v18;
  return result;
}
