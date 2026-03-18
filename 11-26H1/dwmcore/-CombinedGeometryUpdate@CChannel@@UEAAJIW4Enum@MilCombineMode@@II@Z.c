/*
 * XREFs of ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x180119390
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117068 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CombinedGeometryUpdate(
        CChannel *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v10; // ebx
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  CChannel::CheckHandle((__int64)a1, a2, 22);
  CChannel::CheckOptionalHandle((__int64)a1, a4, 56);
  CChannel::CheckOptionalHandle((__int64)a1, a5, 56);
  v12[0] = 340;
  v12[1] = a2;
  v12[2] = a3;
  v12[3] = a4;
  v12[4] = a5;
  v10 = CChannel::SendCommand(a1, v12, 0x14u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  return v10;
}
