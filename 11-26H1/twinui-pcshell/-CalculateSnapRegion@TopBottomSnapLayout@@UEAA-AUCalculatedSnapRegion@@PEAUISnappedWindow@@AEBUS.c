/*
 * XREFs of ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18016BE54 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x18020C95C (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x1805B086C (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B5C30 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TopBottomSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ecx
  int v9; // r15d
  unsigned int v10; // ebx
  int *v11; // r8
  RECT *v12; // rax
  int RectForRegion; // eax
  __m128i v14; // xmm6
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  RECT *v17; // rax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned __int64 v24; // xmm0_8
  int v25; // ecx
  int v26; // eax
  __m128i v27; // xmm2
  int v29; // [rsp+28h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+38h] [rbp-D0h]
  void **v32; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-B0h]
  __int128 v35; // [rsp+68h] [rbp-A0h]
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+88h] [rbp-80h]
  __int128 v38; // [rsp+98h] [rbp-70h]
  _BYTE v39[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v40[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v41[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v42[48]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v8 = *(_DWORD *)(a5 + 32);
  if ( v8 != 1 && (((v8 - 3) & 0xFFFFFFF9) != 0 || v8 == 9) )
  {
    LODWORD(v32) = (*(_DWORD *)(a4 + 20) + *(_DWORD *)(a4 + 12)) / 2;
    v31 = *(_DWORD *)(a5 + 20);
    v9 = 2;
    v10 = 6;
    if ( v31 <= (int)v32 )
    {
      v9 = 6;
      v10 = 2;
    }
    memset(&v42[16], 0, 32);
    v11 = (int *)(a4 + 8);
    if ( *(_BYTE *)(a5 + 36) )
    {
      *(_OWORD *)v41 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v12 = (RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v40, v10, v11);
      RectForRegion = SnapLayoutHelpers::GetRectForRegion(
                        v12,
                        0,
                        *(SnapRectHelpers **)a4,
                        a4 + 48,
                        (struct tagRECT *)v41,
                        (__int64)&v33);
      if ( RectForRegion < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAD,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)RectForRegion,
          v29);
      if ( Geometry::CRect::Contains((Geometry::CRect *)v41, (const struct tagPOINT *)(a5 + 16)) )
        goto LABEL_10;
      *(_OWORD *)v40 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      v17 = (RECT *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v39, v9, (int *)(a4 + 8));
      v18 = SnapLayoutHelpers::GetRectForRegion(
              v17,
              0,
              *(SnapRectHelpers **)a4,
              a4 + 48,
              (struct tagRECT *)v40,
              (__int64)&v36);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC2,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)v18,
          v30);
      if ( !Geometry::CRect::Contains((Geometry::CRect *)v40, (const struct tagPOINT *)(a5 + 16))
        && ((v19 = *(_DWORD *)(a5 + 20), v31 > (int)v32)
          ? (v20 = v41[1] - v19, v21 = v19 - v40[3])
          : (v20 = v19 - v41[3], v21 = v40[1] - v19),
            v20 < v21) )
      {
LABEL_10:
        v14 = *(__m128i *)v41;
        *(_OWORD *)v42 = v33;
        v15 = v34;
        v16 = v35;
      }
      else
      {
        v14 = *(__m128i *)v40;
        v10 = v9;
        *(_OWORD *)v42 = v36;
        v15 = v37;
        v16 = v38;
      }
      *(_OWORD *)&v42[16] = v15;
      *(_OWORD *)&v42[32] = v16;
    }
    else
    {
      v14 = *(__m128i *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v39, v10, v11);
    }
    *(_OWORD *)v40 = *(_OWORD *)(a5 + 40);
    v22 = *(_DWORD *)(a5 + 20);
    if ( v10 == 2 )
    {
      v23 = v22 + 1;
      v24 = _mm_srli_si128(v14, 8).m128i_u64[0];
      if ( SHIDWORD(v24) >= v23 )
        v23 = HIDWORD(v24);
      v40[3] = v23;
    }
    else
    {
      v25 = v22 - 1;
      if ( v25 >= v14.m128i_i32[1] )
        v25 = v14.m128i_i32[1];
      v40[1] = v25;
    }
    v26 = CSnapComponentTelemetry::SendSnapFillTypeEvent(v42, v10, a3);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x102,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)v26);
    v42[0] = 0;
    *(__m128i *)&v42[4] = v14;
    v27 = *(__m128i *)v40;
    *(_OWORD *)&v42[20] = *(_OWORD *)v40;
    *(_OWORD *)a2 = *(_OWORD *)v42;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)&v42[16];
    *(_DWORD *)(a2 + 32) = _mm_cvtsi128_si32(_mm_srli_si128(v27, 12));
  }
  else
  {
    v32 = &DefaultSnapLayout::`vftable';
    DefaultSnapLayout::CalculateSnapRegion((__int64)&v32, a2, a3, a4, a5);
  }
  return a2;
}
