/*
 * XREFs of ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x180652840
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_PreviousExecutionState(
        CActivatedEventArgsBase *this,
        enum Windows::ApplicationModel::Activation::ApplicationExecutionState *a2,
        __int64 a3,
        __int64 a4)
{
  if ( !*((_BYTE *)this + 101) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2, a3, a4);
  *(_DWORD *)a2 = *((_DWORD *)this + 19);
  return 0LL;
}
