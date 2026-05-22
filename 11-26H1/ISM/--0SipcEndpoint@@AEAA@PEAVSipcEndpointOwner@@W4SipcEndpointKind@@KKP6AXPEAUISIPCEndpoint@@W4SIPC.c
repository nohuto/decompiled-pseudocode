/*
 * XREFs of ??0SipcEndpoint@@AEAA@PEAVSipcEndpointOwner@@W4SipcEndpointKind@@KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@4PEAX@ZP6AX2W4SIPC_ENDPOINT_STATUS@@5@Z5@Z @ 0x18010F698
 * Callers:
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@52@ZP6AX3W4SIPC_ENDPOINT_STATUS@@2@Z2PEAPEAV1@@Z @ 0x18011150C (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoin.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcEndpoint::SipcEndpoint(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD),
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  *(_QWORD *)(a1 + 8) = 2LL;
  *(_QWORD *)a1 = &SipcEndpoint::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 56) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = a7;
  *(_QWORD *)(a1 + 88) = a8;
  *(_BYTE *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_BYTE *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 52) = a4;
  (**a2)(a2);
  return a1;
}
