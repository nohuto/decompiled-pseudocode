/*
 * XREFs of ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x140214F4C
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1402150C4 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     IntersectRect @ 0x1400CE748 (IntersectRect.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     GetUserHandedness @ 0x140157278 (GetUserHandedness.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x140214E98 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

bool __fastcall CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        struct tagRECT *a3)
{
  const struct CompositionInputObject *v4; // r8
  __int64 v7; // rdx
  CPalmRejectZoneInfo *v8; // rcx
  const struct CompositionInputObject *v9; // r8
  int v10; // eax
  INT v11; // r12d
  INT v12; // edi
  LONG left; // r14d
  LONG top; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 i; // r8
  unsigned int UserHandedness; // eax
  LONG right; // ecx
  LONG v20; // eax
  struct tagRECT v22; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+40h] [rbp-20h] BYREF

  v4 = (const struct CompositionInputObject *)*((_QWORD *)this + 9);
  v22 = *(struct tagRECT *)((char *)this + 24);
  CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(this, &v23, v4, &v22);
  v9 = (const struct CompositionInputObject *)*((_QWORD *)this + 10);
  if ( !v9
    || (v22 = *(struct tagRECT *)((char *)this + 40),
        CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(v8, &v24, v9, &v22),
        v22 = 0LL,
        (v10 = IntersectRect(&v22, &v23.left, &v24.left)) != 0) )
  {
    v11 = *((_DWORD *)this + 22);
    v12 = 0;
    left = v23.left;
    top = v23.top;
    v22.left = v23.left;
    v22.top = v23.top;
    v16 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968);
    for ( i = *(_QWORD *)(v16 + 112); i; i = *(_QWORD *)(i + 56) )
    {
      v16 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v16 + 24) & 1) != 0 && PtInRect((_DWORD *)(v16 + 28), *(unsigned __int64 *)&v22.left) )
      {
        v12 = EngMulDiv(v11, *(unsigned __int16 *)(i + 72), 96);
        break;
      }
    }
    UserHandedness = (unsigned int)GetUserHandedness(v16, v15);
    right = v23.right;
    if ( UserHandedness )
    {
      right = v12 + v23.right;
    }
    else
    {
      left -= v12;
      top -= v12;
    }
    v22.right = right;
    v20 = v12 + v23.bottom;
    v22.bottom = v12 + v23.bottom;
    v22.top = top;
    v22.left = left;
    a3->left = left;
    a3->top = top;
    a3->right = right;
    a3->bottom = v20;
    a3[1] = v23;
    LOBYTE(v10) = PtInRect(&v22, *(_QWORD *)&a2);
  }
  return v10;
}
