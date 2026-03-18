/*
 * XREFs of _lambda_ff68d9f4220b437b53c0eb7366e88ea5_::operator() @ 0x1401C6F7C
 * Callers:
 *     _DXGKCALLONEXIT__lambda_ff68d9f4220b437b53c0eb7366e88ea5____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006DAEC (_DXGKCALLONEXIT__lambda_ff68d9f4220b437b53c0eb7366e88ea5____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x140403D8C (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403F6CC0 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

void __fastcall lambda_ff68d9f4220b437b53c0eb7366e88ea5_::operator()(unsigned int ***a1)
{
  int v2; // ebx
  __int64 v3; // rax
  unsigned int *v4; // r8
  unsigned __int64 v5; // kr00_8
  unsigned int **v6; // rax
  _BYTE v7[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)*a1 + 2, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v7);
  DispBrokerClientReference::Assign((DispBrokerClientHandle **)*a1 + 6, (struct DispBrokerClientHandle *)*a1[1]);
  v2 = *(_DWORD *)a1[2];
  if ( v2 >= 0 != DispBrokerClient::IsClientHandleValid((DispBrokerClient *)*a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 191;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!!NT_SUCCESS(Status) == IsClientHandleValid()",
      191LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = KeQueryInterruptTimePrecise(&v8);
  v4 = (unsigned int *)a1[2];
  v5 = v3;
  v6 = a1[3];
  v8 = v5 / 0xA;
  DxgkLogCodePointPacketForSession(112, ***a1, *v4, (v5 / 0xA - (unsigned __int64)*v6) / 0x3E8, 0, 0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
}
