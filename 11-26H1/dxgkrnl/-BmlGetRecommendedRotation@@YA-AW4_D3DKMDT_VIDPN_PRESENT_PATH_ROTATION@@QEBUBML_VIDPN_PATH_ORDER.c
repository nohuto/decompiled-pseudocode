/*
 * XREFs of ?BmlGetRecommendedRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER@@IE@Z @ 0x140408DF4
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002E0B0 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x140098188 (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 */

__int64 __fastcall BmlGetRecommendedRotation(const struct BML_VIDPN_PATH_ORDER *const a1, unsigned int a2, char a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rbp
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // ebx
  __int64 v9; // rsi
  unsigned int v10; // edx
  unsigned int v11; // r8d
  bool v12; // cf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // edx

  v3 = 0;
  v4 = 120LL * a2;
  while ( 1 )
  {
    if ( v3 >= a2 )
      return 1;
    v9 = 120LL * v3;
    if ( *(_DWORD *)(*(_QWORD *)((char *)a1 + v9 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)a1 + v4 + 16) + 24LL) )
      break;
    ++v3;
  }
  v7 = *(_DWORD *)((char *)a1 + v9 + 28);
  if ( v7 == D3DKMDT_VPPR_UNINITIALIZED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4177;
  }
  if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v7) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4178;
  }
  if ( a3 )
  {
    v10 = *(_DWORD *)((char *)a1 + v4 + 52);
    v11 = *(_DWORD *)((char *)a1 + v4 + 56);
    if ( *(_DWORD *)((char *)a1 + v9 + 52) < *(_DWORD *)((char *)a1 + v9 + 56) != v10 < v11 )
    {
      v12 = v10 < v11;
      v13 = D3DKMDT_VPPR_ROTATE270;
      if ( !v12 )
        v13 = D3DKMDT_VPPR_ROTATE90;
      v7 = (unsigned int)D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(v7, v13);
    }
  }
  if ( v7 == D3DKMDT_VPPR_UNINITIALIZED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4215;
  }
  return (unsigned int)v7;
}
