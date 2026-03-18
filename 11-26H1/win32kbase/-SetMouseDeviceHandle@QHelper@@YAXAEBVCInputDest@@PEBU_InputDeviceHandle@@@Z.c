/*
 * XREFs of ?SetMouseDeviceHandle@QHelper@@YAXAEBVCInputDest@@PEBU_InputDeviceHandle@@@Z @ 0x140224A64
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x140117D38 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

void __fastcall QHelper::SetMouseDeviceHandle(
        QHelper *this,
        const struct CInputDest *a2,
        const struct _InputDeviceHandle *a3)
{
  __int64 Queue; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  Queue = CInputDest::GetQueue((__int64)this, 2);
  if ( Queue )
  {
    if ( a2 )
    {
      v5[0] = *(_OWORD *)a2;
      *(_QWORD *)&v5[1] = *((_QWORD *)a2 + 2);
    }
    else
    {
      memset(v5, 0, 24);
    }
    *(_OWORD *)(Queue + 224) = v5[0];
    *(_QWORD *)(Queue + 240) = *(_QWORD *)&v5[1];
  }
}
