/*
 * XREFs of ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1801002B0
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18001E3EC (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C560 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfLazyRequestClients(__int64 this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this + 104);
  *(_DWORD *)(this + 104) = v3 + a2;
  if ( v3 != v3 + a2 && (!v3 || !(v3 + a2)) )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(this + 200) + 336LL))(
      *(_QWORD *)(this + 200),
      (this + 8) & -(__int64)(this != 0),
      -this);
}
