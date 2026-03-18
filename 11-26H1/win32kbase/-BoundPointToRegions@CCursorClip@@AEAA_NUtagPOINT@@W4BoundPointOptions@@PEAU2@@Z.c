/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x140217B84
 * Callers:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14021783C (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400828BC (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140086710 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x14012DBD0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddddd @ 0x140140B40 (WPP_RECORDER_AND_TRACE_SF_dddddddddddd.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1401473A4 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140148AC0 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z @ 0x14016EAE0 (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z.c)
 *     ?SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z @ 0x14018ACD8 (-SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z.c)
 */

char __fastcall CCursorClip::BoundPointToRegions(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  struct tagRECT v5; // xmm0
  char v9; // r15
  char v10; // r14
  int v11; // edx
  int v12; // r8d
  char v13; // si
  struct tagPOINT v14; // rax
  int v15; // r8d
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rbx
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  __int64 UserSessionState; // rax
  int v23; // [rsp+20h] [rbp-89h]
  int v24; // [rsp+28h] [rbp-81h]
  int v25; // [rsp+30h] [rbp-79h]
  int v26; // [rsp+38h] [rbp-71h]
  char v27; // [rsp+A0h] [rbp-9h]
  struct tagPOINT v28[2]; // [rsp+A8h] [rbp-1h] BYREF
  struct tagRECT v29; // [rsp+B8h] [rbp+Fh] BYREF
  struct tagPOINT v30; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v31; // [rsp+118h] [rbp+6Fh]
  struct tagRECT *v32; // [rsp+128h] [rbp+7Fh]

  v31 = a2;
  v5 = *(struct tagRECT *)(a1 + 48);
  v32 = (struct tagRECT *)(a1 + 48);
  *(_QWORD *)a4 = a2;
  v29 = v5;
  if ( PtInRect(&v29, a2) )
    return 0;
  v9 = 0;
  v10 = 0;
  if ( IsRectEmptyInl(&v29) )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v28, v11, v12);
    v13 = 1;
    v27 = 1;
    v15 = 1;
LABEL_21:
    if ( InputConfig::Mouse::RegionFromPoint(*(_QWORD *)a4, v28, v15) )
    {
      v16 = (_OWORD *)v28[0];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)*(_QWORD *)v28;
      *(_OWORD *)(a1 + 64) = v16[1];
      *(_OWORD *)(a1 + 80) = v16[2];
      *(_OWORD *)(a1 + 96) = v16[3];
      *(_OWORD *)(a1 + 112) = v16[4];
      *(_OWORD *)(a1 + 128) = v16[5];
      *(_OWORD *)(a1 + 144) = v16[6];
      v17 = v16[7];
      v16 += 8;
      *(_OWORD *)(a1 + 160) = v17;
      *(_OWORD *)(a1 + 176) = *v16;
      *(_OWORD *)(a1 + 192) = v16[1];
      *(_OWORD *)(a1 + 208) = v16[2];
      *(_OWORD *)(a1 + 224) = v16[3];
      *(_QWORD *)(a1 + 240) = *((_QWORD *)v16 + 8);
    }
    goto LABEL_23;
  }
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v28, v11, v12);
  InputConfig::Mouse::RegionFromPoint(*(_QWORD *)a4, v28, 0);
  v13 = 1;
  v27 = 1;
  if ( v28[0] )
  {
    v9 = 0;
    if ( *(_QWORD *)&v29.left != **(_QWORD **)v28 || *(_QWORD *)&v29.right != *(_QWORD *)(*(_QWORD *)v28 + 8LL) )
    {
      v27 = 1;
      v10 = 1;
    }
  }
  else
  {
    v9 = 1;
  }
  v14 = *(struct tagPOINT *)a4;
  v30 = *(struct tagPOINT *)a4;
  if ( !*(_QWORD *)v28
    && (a3 & 4) != 0
    && CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
         (CCursorClip::DeadzoneJumping *)(a1 + 272),
         v14,
         &v29,
         &v30) )
  {
    v10 = 1;
  }
  else if ( !v10 )
  {
    goto LABEL_17;
  }
  if ( (a3 & 1) != 0 && CCursorClip::ApplySpeedBumpAndCornerLock((CCursorClip *)a1, (struct tagPOINT *)a4) )
  {
    InputTraceLogging::Cursor::SpeedBumpCornerLock((const struct tagPOINT *)a4);
    goto LABEL_18;
  }
LABEL_17:
  *(struct tagPOINT *)a4 = v30;
LABEL_18:
  if ( !PtInRect(&v29, *(_QWORD *)a4) )
  {
    v15 = 0;
    goto LABEL_21;
  }
LABEL_23:
  ExReleaseResourceAndLeaveCriticalRegion(**(PERESOURCE **)&v28[1]);
  v18 = *(_QWORD *)a4;
  v28[0] = *(struct tagPOINT *)a4;
  CCursorClip::ClipPointToRect(v28[0], v32, (struct tagPOINT *)a4);
  LOBYTE(v30.x) = 0;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 )
    {
      if ( !v10 )
      {
        if ( (_DWORD)v18 != *(_DWORD *)a4 || (v21 = *(_DWORD *)(a4 + 4), LOBYTE(v30.x) = 0, v28[0].y != v21) )
          LOBYTE(v30.x) = 1;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v13 = 0;
    v27 = 0;
  }
  LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v19, v20);
    WPP_RECORDER_AND_TRACE_SF_dddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      (char)v32,
      *(_QWORD *)(UserSessionState + 69136),
      v23,
      v24,
      v25,
      v26);
  }
  return v30.x;
}
