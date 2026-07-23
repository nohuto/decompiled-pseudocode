/*
 * XREFs of PopTraceThermalRequestActiveActivity @ 0x1404255AC
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x1404244F8 (PopCoolingTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x140424E88 (PopCoolingSxTransition.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CEE54 (PopOrphanCoolingExtension.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PoStoreDiagnosticContext @ 0x140426240 (PoStoreDiagnosticContext.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestActiveActivity(__int64 a1)
{
  _QWORD *v2; // rdi
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // r14
  __int64 v5; // rsi
  __int64 Pool2; // rax
  __int64 v7; // r8
  char v8; // r10
  char *v9; // r11
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+30h] [rbp-99h] BYREF
  int v19; // [rsp+38h] [rbp-91h] BYREF
  __int64 v20; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-79h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp-59h]
  __int64 v23; // [rsp+78h] [rbp-51h]
  __int64 v24; // [rsp+80h] [rbp-49h]
  _DWORD v25[2]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v26[16]; // [rsp+90h] [rbp-39h] BYREF
  int *v27; // [rsp+A0h] [rbp-29h]
  __int64 v28; // [rsp+A8h] [rbp-21h]
  __int64 *v29; // [rsp+B0h] [rbp-19h]
  __int64 v30; // [rsp+B8h] [rbp-11h]
  __int64 *v31; // [rsp+C0h] [rbp-9h]
  __int64 v32; // [rsp+C8h] [rbp-1h]
  _DWORD v33[10]; // [rsp+D0h] [rbp+7h]

  v18 = 0LL;
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
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &v18);
      Pool2 = ExAllocatePool2(0x100uLL);
      v2 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), Pool2, &v18) >= 0 )
        {
          v8 = 0;
          v9 = (char *)v2 + v2[2];
          v10 = 0LL;
          if ( *(_BYTE *)(a1 + 41) )
          {
            do
            {
              v14 = *(_QWORD *)(a1 + 8 * v10 + 480);
              v15 = *(_QWORD *)(a1 + 8 * v10 + 400) - v14;
              *(_QWORD *)(a1 + 8 * v10 + 400) = v14;
              v16 = v15 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
              v17 = *(unsigned __int8 *)(a1 + 41);
              *((_QWORD *)&v16 + 1) >>= 23;
              v33[v10] = DWORD2(v16);
              if ( DWORD2(v16) )
                v8 = 1;
              v10 = (unsigned int)(v10 + 1);
            }
            while ( (unsigned int)v10 < v17 );
          }
          v11 = *(_QWORD *)(a1 + 568);
          v12 = *(_QWORD *)(a1 + 560) - v11;
          *(_QWORD *)(a1 + 560) = v11;
          if ( (unsigned int)(v12 / 0x989680)
            && (v8 || PopThermalTelemetryVerbosity)
            && (unsigned int)dword_140E07560 > 5
            && (qword_140E07570 & 0x400000000000LL) != 0
            && (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
          {
            v23 = 2LL;
            v22 = v25;
            v24 = *(_QWORD *)(v5 + 136);
            v25[0] = *(unsigned __int16 *)(v5 + 128);
            v25[1] = 0;
            tlgCreate1Sz_wchar_t(v26, v9, v7, v12 / 0x989680);
            v19 = v13;
            v27 = &v19;
            LODWORD(v18) = v33[0];
            v32 = 8LL;
            v29 = &v18;
            v28 = 4LL;
            v31 = &v20;
            v30 = 4LL;
            v20 = 0x1000000LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E07560,
              (unsigned __int8 *)byte_14004B1B1,
              0LL,
              0LL,
              8u,
              &v21);
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x50455654u);
  }
}
