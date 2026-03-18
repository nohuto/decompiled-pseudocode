/*
 * XREFs of ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021A9B8
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1401BAF54 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     IntersectRect @ 0x14011D9FC (IntersectRect.c)
 *     GetUserHandedness @ 0x140193BEC (GetUserHandedness.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x14021A904 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

bool __fastcall CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        struct tagRECT *a3)
{
  const struct CompositionInputObject *v4; // r8
  int v7; // edx
  CPalmRejectZoneInfo *v8; // rcx
  const struct CompositionInputObject *v9; // r8
  int v10; // eax
  INT v11; // r12d
  INT v12; // r14d
  LONG left; // esi
  LONG top; // edi
  __int64 v15; // rcx
  __int64 i; // r8
  unsigned int UserHandedness; // eax
  LONG right; // ecx
  LONG v19; // eax
  struct tagRECT v21; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-20h] BYREF

  v4 = (const struct CompositionInputObject *)*((_QWORD *)this + 9);
  v21 = *(struct tagRECT *)((char *)this + 24);
  CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(this, &v22, v4, &v21);
  v9 = (const struct CompositionInputObject *)*((_QWORD *)this + 10);
  if ( !v9
    || (v21 = *(struct tagRECT *)((char *)this + 40),
        CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(v8, &v23, v9, &v21),
        v21 = 0LL,
        (v10 = IntersectRect(&v21, &v22.left, &v23.left)) != 0) )
  {
    v11 = *((_DWORD *)this + 22);
    v12 = 0;
    left = v22.left;
    top = v22.top;
    v21.left = v22.left;
    v21.top = v22.top;
    v15 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v8, v7, (_DWORD)v9) + 56968);
    for ( i = *(_QWORD *)(v15 + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v15 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v15 + 24) & 1) != 0 && PtInRect((_DWORD *)(v15 + 28), *(unsigned __int64 *)&v21.left) )
      {
        v12 = EngMulDiv(v11, *(unsigned __int16 *)(i + 72), 96);
        break;
      }
    }
    UserHandedness = (unsigned int)GetUserHandedness(v15);
    right = v22.right;
    if ( UserHandedness )
    {
      right = v12 + v22.right;
    }
    else
    {
      left -= v12;
      top -= v12;
    }
    v21.right = right;
    v19 = v12 + v22.bottom;
    v21.bottom = v12 + v22.bottom;
    v21.top = top;
    v21.left = left;
    a3->left = left;
    a3->top = top;
    a3->right = right;
    a3->bottom = v19;
    a3[1] = v22;
    LOBYTE(v10) = PtInRect(&v21, *(_QWORD *)&a2);
  }
  return v10;
}
