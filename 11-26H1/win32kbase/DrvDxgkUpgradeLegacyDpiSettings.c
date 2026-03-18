/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1401F79B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140165780 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z @ 0x1401F6448 (-SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  int v7; // r8d
  __int64 *i; // rdi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  int v18; // ecx
  signed int v19; // esi
  __int32 v20; // eax
  __int64 v21; // rbx
  struct _LUID *v22; // rax
  int v23; // eax
  __int64 *v24; // [rsp+30h] [rbp-D0h] BYREF
  struct _ERESOURCE *v25; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v26[6]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v27[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  v4 = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  SEMOBJ<19>::SEMOBJ<19>(&v25, (struct _ERESOURCE **)v6);
  for ( i = *(__int64 **)(v6 + 3952); i; i = (__int64 *)*i )
  {
    v9 = i[5] & 0x401;
    v24 = i;
    if ( v9 == 1 )
    {
      v10 = i[321];
      if ( v10 )
      {
        if ( v10 != -4 && (*(_DWORD *)(v10 + 160) & 0x800000) != 0 )
        {
          memset(v27, 0, sizeof(v27));
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v12, v11);
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *))(DxgkWin32kInterface + 632))(
                  a1,
                  *(_QWORD *)(i[321] + 232),
                  *(unsigned int *)(i[321] + 248),
                  v27);
          v4 = v14;
          if ( v14 >= 0 )
          {
            memset(v26, 0, sizeof(v26));
            v26[0] = *(__m128i *)(i + 305);
            v26[1] = *(__m128i *)(i + 307);
            v26[2] = *(__m128i *)(i + 309);
            v26[3] = *(__m128i *)(i + 311);
            v26[4] = *(__m128i *)(i + 313);
            v26[5] = *(__m128i *)(i + 315);
            if ( v27[2] != _mm_srli_si128(*v26, 8).m128i_i32[1] )
            {
              v15 = 0;
              v16 = &DesktopScaleFactorCutoffs;
              do
              {
                if ( *v16 > v27[2] )
                  break;
                ++v15;
                ++v16;
              }
              while ( (__int64)v16 < (__int64)Feature_UIPIAlwaysOn2_logged_traits );
              v17 = &DesktopScaleFactorCutoffs;
              v18 = 0;
              do
              {
                if ( *v17 > v26[0].m128i_i32[3] )
                  break;
                ++v18;
                ++v17;
              }
              while ( (__int64)v17 < (__int64)Feature_UIPIAlwaysOn2_logged_traits );
              v19 = v15 - v18;
              v20 = v19;
              if ( v26[5].m128i_i32[0] > v19 )
                v20 = v26[5].m128i_i32[0];
              if ( v20 >= v26[5].m128i_i32[2] )
              {
                v19 = v26[5].m128i_i32[2];
              }
              else if ( v26[5].m128i_i32[0] > v19 )
              {
                v19 = v26[5].m128i_i32[0];
              }
              v21 = i[321];
              v22 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v24);
              v23 = SetScaleFactorOverride(v22, *(unsigned int *)(v21 + 248), v19, (struct _DPI_INFORMATION *)v26);
              v4 = v23;
              if ( v23 < 0 )
              {
                WdLogSingleEntry3(2LL, v23);
                WdLogGlobalForLineNumber = 28253;
              }
              else
              {
                *a2 = 1;
              }
            }
          }
          else
          {
            WdLogSingleEntry3(2LL, v14);
            WdLogGlobalForLineNumber = 28206;
          }
        }
      }
    }
  }
  if ( v25 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v25,
      v7);
  return v4;
}
