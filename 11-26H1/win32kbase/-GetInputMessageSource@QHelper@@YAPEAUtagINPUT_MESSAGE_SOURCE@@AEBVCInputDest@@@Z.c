/*
 * XREFs of ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x14006CC30
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@_K3W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x14006CA1C (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     <none>
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall QHelper::GetInputMessageSource(QHelper *this, const struct CInputDest *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0LL;
  if ( *(_DWORD *)this && *((_DWORD *)this + 23) )
  {
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = 0LL;
    if ( v4 )
      v2 = *(_QWORD *)(v4 + 464);
  }
  return (struct tagINPUT_MESSAGE_SOURCE *)((v2 + 460) & -(__int64)(v2 != 0));
}
