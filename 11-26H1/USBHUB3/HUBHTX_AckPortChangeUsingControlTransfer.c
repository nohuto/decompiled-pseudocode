/*
 * XREFs of HUBHTX_AckPortChangeUsingControlTransfer @ 0x140002954
 * Callers:
 *     HUBPSM20_AckingConnectChangeOnResume @ 0x140012410 (HUBPSM20_AckingConnectChangeOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dL @ 0x1400073A0 (WPP_RECORDER_SF_dL.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_AckPortChangeUsingControlTransfer(__int64 a1, int a2, int a3, int a4)
{
  char v5; // al
  __int64 *v6; // rdi
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 1;
  *(_BYTE *)(a1 + 168) = v5 | 0x23;
  *(_WORD *)(a1 + 170) = *(_WORD *)(a1 + 12);
  *(_DWORD *)(a1 + 172) = *(unsigned __int16 *)(a1 + 200);
  v6 = (__int64 *)(a1 + 1432);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dL(*v6, a2, a3, a4);
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2288LL));
  *(_DWORD *)(a1 + 12) = 1000;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      WPP_RECORDER_SF_d(*v6, 2u, 4u, 0x2Du, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v8);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
