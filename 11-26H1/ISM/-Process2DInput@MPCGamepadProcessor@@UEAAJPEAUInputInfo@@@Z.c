/*
 * XREFs of ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005F5B0
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C49D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801C34EC (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process2DInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  MPCGamepadProcessor *v4; // rcx

  v4 = (MPCGamepadProcessor *)((char *)this - 32);
  if ( *((_BYTE *)v4 + 4189) )
  {
    *((_BYTE *)this + 4157) = 0;
    MPCGamepadProcessor::ClearControllerProcessorState(v4, a2, *((_QWORD *)a2 + 4));
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 455) + 48LL))(
           *((_QWORD *)this + 455),
           a2);
}
