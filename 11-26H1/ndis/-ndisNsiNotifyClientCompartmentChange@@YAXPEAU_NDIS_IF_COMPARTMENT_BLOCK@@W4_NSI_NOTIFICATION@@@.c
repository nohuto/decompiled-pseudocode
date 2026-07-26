/*
 * XREFs of ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x140147004
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400CFBB8 (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1400D0394 (ndisIfDeleteCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400526B0 (-ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall ndisNsiNotifyClientCompartmentChange(const struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2)
{
  char result; // al
  int v5; // edx
  char v6; // cl
  __int64 v7; // [rsp+30h] [rbp-50h]
  _QWORD v8[8]; // [rsp+40h] [rbp-40h] BYREF

  result = ndisIsCompartmentEnumerable(a1);
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x14u,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        v6,
        v5);
    memset(v8, 0, sizeof(v8));
    v8[0] = ndisNsiSavedClientNpi;
    LOWORD(v8[1]) = 7;
    v8[2] = (char *)a1 + 16;
    HIDWORD(v8[1]) = a2;
    LODWORD(v8[3]) = 4;
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      LODWORD(v8[4]) = 0;
      v8[5] = (char *)a1 + 1144;
      v8[6] = 0x43800000010LL;
    }
    else
    {
      v8[5] = 0LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD *))(qword_14011F688 + 8))(v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = a2;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4u,
               0x16u,
               0x15u,
               (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
               (char)a1,
               v7);
    }
  }
  return result;
}
