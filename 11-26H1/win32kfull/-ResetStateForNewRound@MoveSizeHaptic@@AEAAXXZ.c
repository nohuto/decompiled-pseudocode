/*
 * XREFs of ?ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ @ 0x1402F013C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ @ 0x1402EFC08 (-CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MoveSizeHaptic::ResetStateForNewRound(MoveSizeHaptic *this)
{
  __int64 v1; // r9
  unsigned int v2; // r8d

  *((_DWORD *)this + 2) &= 0xFFFFFF3F;
  v1 = *(_QWORD *)this;
  v2 = *((_DWORD *)this + 2) & 0xFFFFFFDF | (*(_BYTE *)(*(_QWORD *)this + 372LL) != 0 ? 0x20 : 0);
  *((_DWORD *)this + 2) = v2;
  *(_OWORD *)((char *)this + 44) = *(_OWORD *)(v1 + 356);
  *(_OWORD *)((char *)this + 12) = *(_OWORD *)(v1 + 72);
  *((_DWORD *)this + 2) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(*(_DWORD *)(v1 + 200) >> 15)) & 0x10;
  *(_OWORD *)((char *)this + 28) = *(_OWORD *)(v1 + 40);
}
