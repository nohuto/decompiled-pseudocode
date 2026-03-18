/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x1400BCF1C
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BC968 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x140223E48 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ?GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x140223E88 (-GetMouseSensitivityFactor@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  signed int v7; // r8d

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16368);
  LODWORD(v4) = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivityFactor((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v3 + 104));
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v3 + 104));
  if ( a1 )
  {
    v5 = *(unsigned __int16 *)(a1 + 20);
    if ( (unsigned int)v5 > 0x60 )
    {
      v6 = -(int)v4;
      v7 = ((int)v4 >> 31) & 0xFFFFFFFE;
      if ( (v4 & 0x80000000) == 0LL )
        v6 = v4;
      v4 = (v5 * v6 + 48) / 96;
      if ( v4 > 0x7FFFFFFF )
      {
        LODWORD(v4) = 0x80000000;
        if ( v7 > -1 )
          LODWORD(v4) = 0x7FFFFFFF;
      }
      else if ( v7 <= -1 )
      {
        LODWORD(v4) = (v5 * v6 + 48) / -96;
      }
    }
  }
  return (unsigned int)v4;
}
