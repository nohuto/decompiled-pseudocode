/*
 * XREFs of ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE0U_GUID@@@Z @ 0x1806781C0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CActivatedEventArgsBase::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 *v9; // rcx
  int v10; // edi
  __int64 v11; // rax

  v9 = (__int64 *)(a1 - 16);
  if ( *((_BYTE *)v9 + 101) )
  {
    v10 = -2147418113;
    MicrosoftTelemetryAssertTriggeredNoArgs(v9, a2);
    RoOriginateError(2147549183LL, 0LL);
  }
  else
  {
    *(_BYTE *)(a1 + 86) = a6;
    *(_BYTE *)(a1 + 84) = a5;
    *(_QWORD *)(a1 + 104) = a7;
    *(_QWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 60) = a4;
    v11 = *v9;
    *(_OWORD *)(a1 + 112) = *a8;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v11 + 80))(v9, a3, a1 + 56);
    if ( v10 >= 0 )
      *(_BYTE *)(a1 + 85) = 1;
  }
  return (unsigned int)v10;
}
