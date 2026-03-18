/*
 * XREFs of ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005E70C
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140039948 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x14018C660 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14005E7B8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ @ 0x14005E8AC (-WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x14005E8F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ExecuteMoveMouseWindowManagement(CMouseProcessor *this)
{
  __int128 v2; // [rsp+20h] [rbp-98h] BYREF
  __int64 v3; // [rsp+30h] [rbp-88h]
  _BYTE v4[96]; // [rsp+40h] [rbp-78h] BYREF

  InputTraceLogging::Mouse::WindowManagementExecute();
  v3 = 0LL;
  v2 = 0LL;
  ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64))CMouseProcessor::MouseInputDataEx::MouseInputDataEx)(
    v4,
    &v2,
    4LL,
    2304LL);
  if ( IS_USERCRIT_OWNED_AT_ALL() )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v2);
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v4, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v2);
  }
  else
  {
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v4, 0LL);
  }
}
