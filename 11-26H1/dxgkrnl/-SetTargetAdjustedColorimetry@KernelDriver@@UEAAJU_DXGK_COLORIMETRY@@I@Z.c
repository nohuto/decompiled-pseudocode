/*
 * XREFs of ?SetTargetAdjustedColorimetry@KernelDriver@@UEAAJU_DXGK_COLORIMETRY@@I@Z @ 0x140405CD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x140017F98 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x140193BEC (DpiSetTargetAdjustedColorimetry.c)
 */

__int64 __fastcall KernelDriver::SetTargetAdjustedColorimetry(KernelDriver *this, struct _DXGK_COLORIMETRY *a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  __int128 v6; // xmm0
  int v7; // edx
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int128 v10; // xmm2
  bool v11; // sf
  bool v12; // of
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int128 v17; // xmm2
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h]
  DXGK_STANDARD_COLORIMETRY_FLAGS v22; // [rsp+50h] [rbp-10h]

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225664LL;
    WdLogGlobalForLineNumber = 126;
    return result;
  }
  v5 = *(_QWORD *)(v2 + 16);
  v6 = *(_OWORD *)&a2->RedPoint.cx;
  v7 = *((_DWORD *)this + 8);
  v8 = *(_OWORD *)&a2->BluePoint.cx;
  v9 = *(_QWORD *)(v5 + 216);
  v10 = *(_OWORD *)&a2->MinLuminance;
  v12 = __OFSUB__(*(_DWORD *)(v5 + 3044), 2500);
  v11 = *(_DWORD *)(v5 + 3044) - 2500 < 0;
  v22.0 = (struct _DXGK_STANDARD_COLORIMETRY_FLAGS::$EB80654863EB95CBD7331D8F81564556)a2->StandardColorimetryFlags;
  v19 = v6;
  v20 = v8;
  v21 = v10;
  if ( v11 != v12 )
    return DpiSetTargetAdjustedColorimetry(v9, v7);
  result = DpiSetTargetAdjustedColorimetry2(v9, v7, (__int64)&v19);
  if ( (_DWORD)result == -1073741637 )
  {
    v14 = *(_OWORD *)&a2->RedPoint.cx;
    v7 = *((_DWORD *)this + 8);
    v15 = *(_OWORD *)&a2->BluePoint.cx;
    v22.0 = (struct _DXGK_STANDARD_COLORIMETRY_FLAGS::$EB80654863EB95CBD7331D8F81564556)a2->StandardColorimetryFlags;
    v16 = *((_QWORD *)this + 3);
    v17 = *(_OWORD *)&a2->MinLuminance;
    v19 = v14;
    v18 = *(_QWORD *)(v16 + 16);
    v20 = v15;
    v21 = v17;
    v9 = *(_QWORD *)(v18 + 216);
    return DpiSetTargetAdjustedColorimetry(v9, v7);
  }
  return result;
}
