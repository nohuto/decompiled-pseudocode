/*
 * XREFs of PopDiagTracePowerLimitExtension @ 0x1407D711C
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407CD8A0 (PopAssociatePowerLimitRequest.c)
 *     PopDisablePowerLimitExtension @ 0x1407CDB28 (PopDisablePowerLimitExtension.c)
 *     PopPowerLimitPnpNotification @ 0x1407CE1B0 (PopPowerLimitPnpNotification.c)
 *     PopRundownPowerLimitRequests @ 0x140AC3600 (PopRundownPowerLimitRequests.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerLimitExtension(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  _DWORD *v4; // rsi
  int v5; // r15d
  char *Pool2; // rdi
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // r14
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // ecx
  int v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 i; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  int *v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-11h]
  __int64 v20; // [rsp+60h] [rbp-9h]
  int v21; // [rsp+68h] [rbp-1h]
  int v22; // [rsp+6Ch] [rbp+3h]
  __int64 v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  char *v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]

  v15 = 0;
  i = 0LL;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, a2) )
    {
      v4 = (_DWORD *)(a1 + 72);
      v5 = 44 * *(_DWORD *)(a1 + 72);
      if ( v5 )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 56), 0x67446F50u);
          v8 = DeviceAttachmentBaseRefWithTag;
          if ( DeviceAttachmentBaseRefWithTag )
          {
            v9 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
            if ( v9 )
            {
              v10 = 0LL;
              v15 = *(unsigned __int16 *)(v9 + 128) >> 1;
              for ( i = a1;
                    (unsigned int)v10 < *v4;
                    *(_DWORD *)&Pool2[v13 + 40] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12 + 12) )
              {
                v11 = 9 * v10;
                v12 = (unsigned int)v10;
                v10 = (unsigned int)(v10 + 1);
                v13 = 44 * v12;
                v12 *= 2LL;
                *(_DWORD *)&Pool2[v13] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11);
                *(_DWORD *)&Pool2[v13 + 4] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 4);
                *(_DWORD *)&Pool2[v13 + 8] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 12);
                *(_DWORD *)&Pool2[v13 + 12] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 8);
                *(_DWORD *)&Pool2[v13 + 16] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 16);
                *(_DWORD *)&Pool2[v13 + 20] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 20);
                *(_DWORD *)&Pool2[v13 + 24] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 24);
                *(_DWORD *)&Pool2[v13 + 28] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 28);
                *(_DWORD *)&Pool2[v13 + 32] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 32);
                *(_DWORD *)&Pool2[v13 + 36] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12 + 8);
              }
              *(_QWORD *)&UserData.Size = 8LL;
              UserData.Ptr = (ULONGLONG)&i;
              v19 = 4LL;
              v18 = &v15;
              v14 = *(unsigned __int16 *)(v9 + 128);
              v20 = *(_QWORD *)(v9 + 136);
              v21 = v14;
              v22 = 0;
              v23 = a1 + 72;
              v24 = 4LL;
              v25 = Pool2;
              v26 = v5;
              v27 = 0;
              EtwWrite(PopDiagHandle, a2, 0LL, 5u, &UserData);
            }
            ObfDereferenceObjectWithTag(v8, 0x67446F50u);
          }
          ExFreePoolWithTag(Pool2, 0x67696450u);
        }
      }
    }
  }
}
