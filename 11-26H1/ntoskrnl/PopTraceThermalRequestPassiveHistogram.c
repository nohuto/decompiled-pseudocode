/*
 * XREFs of PopTraceThermalRequestPassiveHistogram @ 0x140436950
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x140435360 (PopCoolingTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x1404359C0 (PopCoolingSxTransition.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CBDB4 (PopOrphanCoolingExtension.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PoStoreDiagnosticContext @ 0x1404372B0 (PoStoreDiagnosticContext.c)
 *     PopDiagSnapPassiveHistogram @ 0x1404379F4 (PopDiagSnapPassiveHistogram.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestPassiveHistogram(__int64 a1)
{
  _QWORD *v2; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rsi
  __int64 v5; // r14
  __int64 Pool2; // rax
  char *v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  __int64 v14; // [rsp+78h] [rbp-90h]
  _DWORD v15[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v16[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  void *v19; // [rsp+A8h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-58h]
  _BYTE v21[96]; // [rsp+B8h] [rbp-50h] BYREF

  v10[0] = 0LL;
  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                     0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( v5 )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, v10);
      Pool2 = ExAllocatePool2(0x100uLL);
      v2 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, v10) >= 0 )
        {
          v7 = (char *)v2 + v2[2];
          if ( ((unsigned __int8)PopDiagSnapPassiveHistogram(a1 + 40, v21) || PopThermalTelemetryVerbosity)
            && (unsigned int)dword_140E07598 > 5
            && (qword_140E075A8 & 0x400000000000LL) != 0
            && (qword_140E075B0 & 0x400000000000LL) == qword_140E075B0 )
          {
            v13 = 2LL;
            v12 = v15;
            v14 = *(_QWORD *)(v5 + 136);
            v15[0] = *(unsigned __int16 *)(v5 + 128);
            v15[1] = 0;
            tlgCreate1Sz_wchar_t(v16, v7, v8, v9);
            v18 = 84LL;
            v19 = &unk_140F10E80;
            v17 = v21;
            v20 = 21LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E07598,
              (unsigned __int8 *)byte_14004ADE8,
              0LL,
              0LL,
              7u,
              &v11);
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x50455654u);
  }
}
