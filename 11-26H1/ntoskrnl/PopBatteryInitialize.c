/*
 * XREFs of PopBatteryInitialize @ 0x140B76BD0
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoSynchronousCallDriver @ 0x1404ABE20 (IoSynchronousCallDriver.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1406066D8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryInitialize(__int64 a1)
{
  unsigned int v1; // eax
  IRP *v3; // rcx
  NTSTATUS result; // eax
  int v5; // eax
  const char *v6; // rcx
  __int128 v7; // xmm1
  bool v8; // zf
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-69h]
  __int64 v13; // [rsp+28h] [rbp-61h]
  int v14; // [rsp+70h] [rbp-19h] BYREF
  __m256i v15; // [rsp+78h] [rbp-11h] BYREF
  int v16; // [rsp+98h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+A0h] [rbp+17h] BYREF
  int *v18; // [rsp+C0h] [rbp+37h]
  __int64 v19; // [rsp+C8h] [rbp+3Fh]
  int v20; // [rsp+D0h] [rbp+47h] BYREF
  char v21; // [rsp+D4h] [rbp+4Bh]

  v1 = *(_DWORD *)(a1 + 108);
  v3 = *(IRP **)(a1 + 56);
  v16 = 0;
  memset(&v15.m256i_u64[1], 0, 24);
  v15.m256i_i64[0] = v1;
  PopPrepareIoctl(v3, 0x294044u, 0, (struct _IRP *)&v15, 0xCu, 0x24u);
  result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( result >= 0 )
  {
    v5 = v16;
    v6 = "non-rechargeable";
    v7 = *(_OWORD *)&v15.m256i_u64[2];
    v21 = 0;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)v15.m256i_i8;
    *(_OWORD *)(a1 + 128) = v7;
    *(_DWORD *)(a1 + 144) = v5;
    v8 = *(_BYTE *)(a1 + 116) == 0;
    v20 = *(_DWORD *)(a1 + 120);
    if ( !v8 )
      v6 = "rechargeable";
    LODWORD(v13) = *(_DWORD *)(a1 + 112);
    LODWORD(v12) = *(_DWORD *)(a1 + 108);
    DbgPrintEx(
      0x92u,
      2u,
      "\n"
      "Battery Information [%p]\n"
      "|-- Tag                 = %u\n"
      "|-- Capabilities        = 0x%08x\n"
      "|-- Technology          = %s\n"
      "|-- Chemistry           = %s\n"
      "|-- DesignedCapacity    = %u\n"
      "|-- FullChargedCapacity = %u\n"
      "|-- DefaultAlert1       = %u\n"
      "|-- DefaultAlert2       = %u\n"
      "|-- CriticalBias        = %u\n"
      "|-- CycleCount          = %u\n",
      a1,
      v12,
      v13,
      v6,
      &v20,
      *(_DWORD *)(a1 + 124),
      *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 132),
      *(_DWORD *)(a1 + 136),
      *(_DWORD *)(a1 + 140),
      *(_DWORD *)(a1 + 144));
    *(_DWORD *)(a1 + 104) = 3;
    if ( (unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( PopBatteryTestExemptPolicy && (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
      {
        if ( (unsigned int)dword_140E07560 > 5 )
        {
          v14 = *(_DWORD *)(a1 + 108);
          v19 = 4LL;
          v18 = &v14;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07560,
            (unsigned __int8 *)byte_14004D9F3,
            0LL,
            0LL,
            3u,
            &v17);
        }
        goto LABEL_15;
      }
      v9 = (_QWORD *)qword_140F10658;
      v10 = (_QWORD *)(a1 + 64);
      if ( *(__int64 **)qword_140F10658 == &qword_140F10650 )
      {
        *v10 = &qword_140F10650;
        v10[1] = v9;
        *v9 = v10;
LABEL_14:
        ++dword_140F10634;
        byte_140F10638 = 1;
        qword_140F10658 = (__int64)v10;
LABEL_15:
        ++dword_140F106AC;
        return 0;
      }
    }
    else
    {
      v11 = (_QWORD *)qword_140F10658;
      v10 = (_QWORD *)(a1 + 64);
      if ( *(__int64 **)qword_140F10658 == &qword_140F10650 )
      {
        *v10 = &qword_140F10650;
        v10[1] = v11;
        *v11 = v10;
        goto LABEL_14;
      }
    }
    __fastfail(3u);
  }
  return result;
}
