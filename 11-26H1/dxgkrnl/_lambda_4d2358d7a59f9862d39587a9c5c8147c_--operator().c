/*
 * XREFs of _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x14040DD78
 * Callers:
 *     _DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14005FBFC (_DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403F6C4C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

void __fastcall lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator()(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  unsigned int v4; // r9d
  DispBrokerClientHandle *v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = **(_DWORD **)a1;
  if ( v2 < 0 && v2 != -1073741772 )
  {
    **(_DWORD **)(a1 + 8) |= 1u;
    DispBrokerClient::ReferencePort(*(struct _KTHREAD ***)(a1 + 16), &v5);
    **(_DWORD **)(a1 + 8) = (v5 != 0LL ? 8 : 0) | **(_DWORD **)(a1 + 8) & 0xFFFFFFF7;
    v3 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)v3 )
      v4 = *(_DWORD *)(*(_QWORD *)v3 + 40LL);
    else
      v4 = -1;
    DxgkLogCodePointPacketForSession(
      105,
      ***(unsigned int ***)(a1 + 16),
      **(_DWORD **)a1,
      v4,
      **(_DWORD **)(a1 + 8),
      0LL);
    DispBrokerClientReference::Assign(&v5, 0LL);
  }
}
