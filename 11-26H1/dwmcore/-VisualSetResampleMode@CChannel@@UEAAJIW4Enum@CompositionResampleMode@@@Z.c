/*
 * XREFs of ?VisualSetResampleMode@CChannel@@UEAAJIW4Enum@CompositionResampleMode@@@Z @ 0x180119E20
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualSetResampleMode(CChannel *a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle((__int64)a1, a2, 156);
  v9[0] = 299;
  v9[1] = a2;
  v9[2] = a3;
  v7 = CChannel::SendCommand(a1, v9, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v7;
}
