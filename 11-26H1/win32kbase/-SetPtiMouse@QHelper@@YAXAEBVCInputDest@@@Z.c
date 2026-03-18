/*
 * XREFs of ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x14012CDA4
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall QHelper::SetPtiMouse(QHelper *this, const struct CInputDest *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx

  v2 = 0LL;
  if ( *(_DWORD *)this && *((_DWORD *)this + 23) )
  {
    v3 = *((_QWORD *)this + 10);
    v4 = v3 ? *(_QWORD *)(v3 + 16) : 0LL;
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 464);
      if ( v5 )
      {
        v6 = *((_QWORD *)this + 10);
        if ( v6 )
          v2 = *(_QWORD *)(v6 + 16);
        *(_QWORD *)(v5 + 96) = v2;
      }
    }
  }
}
