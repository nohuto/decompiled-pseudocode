/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x180077B48
 * Callers:
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005BCD4 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C130 (-OnConnectedToStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x180077B10 (-OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixPr.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(
        struct _RTL_CRITICAL_SECTION *this,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int DebugInfo; // edx
  int v6; // eax
  ULONG_PTR SpinCount; // rcx

  v4 = this + 3;
  EnterCriticalSection(this + 3);
  DebugInfo = (int)this[4].DebugInfo;
  v6 = DebugInfo + a2;
  LODWORD(this[4].DebugInfo) = DebugInfo + a2;
  SpinCount = this[2].SpinCount;
  if ( SpinCount && DebugInfo != v6 && (!DebugInfo || !v6) )
    (*(void (__fastcall **)(ULONG_PTR, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)SpinCount + 128LL))(SpinCount, this);
  if ( v4 )
    LeaveCriticalSection(v4);
}
