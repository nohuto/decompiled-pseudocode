/*
 * XREFs of ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x140096E84
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x140262D60 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14004D590 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindClosestTargetMode(
        DMMVIDPNTARGETMODESET *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DDDI_RATIONAL a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  unsigned int v8; // ebp
  DMMVIDPNTARGETMODESET *v9; // rdi
  struct DMMVIDPNTARGETMODE *v10; // rsi
  unsigned int v11; // ebx
  unsigned int v13; // r15d
  struct DMMVIDPNTARGETMODE *NextMode; // rdi
  unsigned int v15; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // r9d
  bool v21; // cc
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v24; // edi
  unsigned int v25; // ebx
  unsigned int v27; // [rsp+80h] [rbp+18h]
  struct _D3DDDI_RATIONAL v28; // [rsp+88h] [rbp+20h] BYREF

  v28 = a4;
  v27 = a3;
  v8 = -1;
  v9 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  v10 = 0LL;
  v11 = a2;
  v13 = -1;
  if ( v9 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    goto LABEL_3;
  NextMode = (DMMVIDPNTARGETMODESET *)((char *)v9 - 8);
  if ( !NextMode )
    goto LABEL_3;
  while ( 1 )
  {
    if ( (!a7 || *((_DWORD *)NextMode + 21) == v11 && *((_DWORD *)NextMode + 22) == a3)
      && (!a8 || (int)(*((_DWORD *)NextMode + 30) << 29) >> 29 == a5) )
    {
      v17 = DmmMapVSyncFromRationalToInteger(&v28, a5, 0LL);
      v18 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)((char *)NextMode + 92),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)NextMode + 30) << 29) >> 29),
              0LL);
      v19 = v17 - v18;
      v20 = v18 - v17;
      v21 = v18 <= v17;
      v11 = a2;
      if ( v21 )
        v20 = v19;
      v22 = *((_DWORD *)NextMode + 22) * *((_DWORD *)NextMode + 21);
      v23 = v22 - v27 * a2;
      if ( v22 <= v27 * a2 )
        v23 = v27 * a2 - v22;
      if ( v20 < v8 )
      {
        v8 = v20;
LABEL_19:
        v10 = NextMode;
        v13 = v23;
        goto LABEL_20;
      }
      if ( v20 == v8 && v23 < v13 )
        goto LABEL_19;
    }
LABEL_20:
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      break;
    a3 = v27;
  }
  if ( !v10 )
  {
LABEL_3:
    v15 = DmmMapVSyncFromRationalToInteger(&v28, a5, 0LL);
    WdLogSingleEntry4(7LL, v11, v27, v15, this);
    WdLogGlobalForLineNumber = 588;
    return v10;
  }
  if ( !a6 )
    return v10;
  v24 = (int)(*((_DWORD *)v10 + 30) << 29) >> 29;
  v25 = DmmMapVSyncFromRationalToInteger(&v28, a5, 0LL);
  if ( DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)v10 + 92), v24, 0LL) == v25 )
    return v10;
  return 0LL;
}
