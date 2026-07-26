/*
 * XREFs of ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x14016BB90
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140079CC0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x140052710 (-ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ??$ReadAcquire@EX@mem@@YAEPEDE@Z @ 0x1400911D8 (--$ReadAcquire@EX@mem@@YAEPEDE@Z.c)
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x140091730 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1401390DC (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1401392F8 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x140166030 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverStats(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int64 a2,
        const struct _GUID *a3)
{
  union _LARGE_INTEGER *SelectiveSuspend; // rdi
  LONGLONG TimeInterval; // r13
  unsigned __int64 v8; // r14
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // [rsp+20h] [rbp-C8h]
  __int64 v14; // [rsp+20h] [rbp-C8h]
  int v15; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 QuadPart; // [rsp+78h] [rbp-70h]
  _QWORD v18[2]; // [rsp+80h] [rbp-68h] BYREF
  GUID v19; // [rsp+90h] [rbp-58h] BYREF

  SelectiveSuspend = (union _LARGE_INTEGER *)a1->SelectiveSuspend;
  if ( SelectiveSuspend )
  {
    v19 = GUID_CS_BLOCKER_GEN;
    TimeInterval = ndisGetTimeInterval(SelectiveSuspend + 91);
    v8 = SelectiveSuspend[86].QuadPart - SelectiveSuspend[90].QuadPart;
    v9 = SelectiveSuspend[80].HighPart - SelectiveSuspend[88].LowPart;
    v10 = SelectiveSuspend[84].QuadPart - SelectiveSuspend[89].QuadPart;
    QuadPart = SelectiveSuspend[83].QuadPart;
    if ( mem::ReadAcquire<unsigned char,void>() )
    {
      v18[1] = 25LL;
      a3 = &v19;
      v16[1] = 36LL;
      v18[0] = L"Events preventing Nic Dx";
      v16[0] = L"Breakdown of OIDs preventing Nic Dx";
      v19.Data3 = a1->IfIndex;
      v15 = 1;
      v19.Data4[0] = 0x80;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
          (__int64)L"Nic Auto Power Saver",
          v11,
          &a1->InterfaceGuid,
          a2,
          v12,
          21,
          (__int64)L"Nic Auto Power Saver",
          (__int64)&v19,
          0,
          a2);
      ndisPublishSleepStudyNapsCustomData(
        (__int64)a1,
        a2,
        (__int64)&v19,
        (__int64)v18,
        v13,
        (__int64)&SelectiveSuspend[92],
        (char *)&v15);
      ndisPublishSleepStudyNapsOidCustomData(
        (__int64)a1,
        a2,
        (__int64)&v19,
        (__int64)v16,
        v14,
        (__int64)&SelectiveSuspend[190],
        &v15);
    }
    ndisPublishSleepStudyNicAutoPowerSaverCustomData((__int64)a1, a2, a3, TimeInterval, QuadPart, v8, v9, v10);
  }
}
