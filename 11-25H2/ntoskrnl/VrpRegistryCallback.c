/*
 * XREFs of VrpRegistryCallback @ 0x14084D490
 * Callers:
 *     CmpFireCleanupNotifications @ 0x14084AAD0 (CmpFireCleanupNotifications.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwWriteTransfer @ 0x14041EDF0 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140420DD0 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     VrpPreOpenOrCreate @ 0x1409475FC (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x140948380 (VrpPostQueryKey.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     VrpFindExactNamespaceNode @ 0x1409491E0 (VrpFindExactNamespaceNode.c)
 *     VrpPostOpenOrCreate @ 0x1409494F0 (VrpPostOpenOrCreate.c)
 *     VrpShouldOperateOnCall @ 0x14094A4A0 (VrpShouldOperateOnCall.c)
 *     VrpUnlockJobContextExclusive @ 0x14094AB0C (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14094AC6C (VrpLockJobContextExclusive.c)
 *     VrpPreQueryKeyName @ 0x140A04290 (VrpPreQueryKeyName.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpRegistryCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int Key; // edi
  UNICODE_STRING *v6; // rbx
  wchar_t *v7; // rcx
  UNICODE_STRING *v8; // rbx
  wchar_t *Buffer; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 ExactNamespaceNode; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 *v19; // rax
  int v20; // ecx
  __int64 v22; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-41h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  GUID v25; // [rsp+50h] [rbp-29h] BYREF
  GUID v26; // [rsp+60h] [rbp-19h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-9h] BYREF
  int *v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+8Ch] [rbp+13h]
  _DWORD *v31; // [rsp+90h] [rbp+17h]
  __int64 v32; // [rsp+98h] [rbp+1Fh]
  __int64 v33; // [rsp+A0h] [rbp+27h]
  _DWORD v34[2]; // [rsp+A8h] [rbp+2Fh] BYREF

  Key = 0;
  v22 = 0LL;
  v24 = 0LL;
  ActivityId = 0LL;
  if ( a2 <= 0x33 && (unsigned int)VrpShouldOperateOnCall(a2, a3, &v24, &v22) )
  {
    EtwActivityIdControl(1u, &ActivityId);
    switch ( a2 )
    {
      case 4u:
        v25 = 0LL;
        EtwActivityIdControl(3u, &v25);
        v18 = *(_QWORD *)(a3 + 24);
        if ( (*(_DWORD *)(v18 + 36) & 0x20000000) != 0 )
        {
          if ( (unsigned int)dword_140E0A400 > 5 )
          {
            v19 = (__int64 *)(v18 + 16);
            if ( !*(_QWORD *)(v18 + 24) )
              v19 = &EmptyUnicodeString;
            v20 = *(unsigned __int16 *)v19;
            v33 = v19[1];
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_QWORD *)&ActivityId.Data1 = off_140E0A408;
            v34[0] = v20;
            v31 = v34;
            v32 = 2LL;
            v34[1] = 0;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 0LL;
            *(_DWORD *)ActivityId.Data4 = *(unsigned __int16 *)off_140E0A408;
            v28 = (int *)byte_140057803;
            *(_DWORD *)&ActivityId.Data4[4] = 2;
            v29 = 57;
            v30 = 1;
            LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E0A420, &EventDescriptor, &v25, 0LL, 4u, (PEVENT_DATA_DESCRIPTOR)&ActivityId);
          }
          Key = -1073741790;
        }
        break;
      case 0xEu:
        v8 = *(UNICODE_STRING **)(a3 + 16);
        if ( v8 )
        {
          Buffer = v8[1].Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0x67655256u);
            RtlInitUnicodeString(v8 + 1, 0LL);
          }
        }
        break;
      case 0x14u:
        Key = VrpPostEnumerateKey(a3, v22);
        break;
      case 0x16u:
        Key = VrpPostQueryKey(a3);
        break;
      case 0x1Au:
      case 0x1Cu:
        Key = VrpPreOpenOrCreate(a3, v22);
        break;
      case 0x1Bu:
      case 0x1Du:
        Key = VrpPostOpenOrCreate(a3, v22);
        break;
      case 0x1Eu:
        v26 = 0LL;
        EtwActivityIdControl(3u, &v26);
        if ( (*(_DWORD *)(v22 + 80) & 1) != 0 )
        {
          if ( (unsigned int)dword_140E0A400 > 5 )
          {
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_QWORD *)&ActivityId.Data1 = off_140E0A408;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 0LL;
            *(_DWORD *)ActivityId.Data4 = *(unsigned __int16 *)off_140E0A408;
            v28 = (int *)((char *)&dword_140057BA3 + 2);
            *(_DWORD *)&ActivityId.Data4[4] = 2;
            v29 = 22;
            v30 = 1;
            LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E0A420, &EventDescriptor, &v26, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&ActivityId);
          }
          Key = -1073740541;
        }
        else if ( (unsigned int)dword_140E0A400 > 5 )
        {
          *(_DWORD *)&EventDescriptor.Level = 5;
          *(_QWORD *)&ActivityId.Data1 = off_140E0A408;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 0LL;
          *(_DWORD *)ActivityId.Data4 = *(unsigned __int16 *)off_140E0A408;
          v28 = &dword_140057B84;
          *(_DWORD *)&ActivityId.Data4[4] = 2;
          v29 = 21;
          v30 = 1;
          LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwWriteTransfer(qword_140E0A420, &EventDescriptor, &v26, 0LL, 2u, (PEVENT_DATA_DESCRIPTOR)&ActivityId);
        }
        break;
      case 0x20u:
        Key = VrpPreLoadKey(a3, v22);
        break;
      case 0x22u:
        v10 = v22;
        v11 = *(_QWORD *)(a3 + 24);
        VrpLockJobContextExclusive(v22);
        ExactNamespaceNode = VrpFindExactNamespaceNode(v10, v11 + 16, &EventDescriptor);
        if ( !ExactNamespaceNode )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 16));
          v13 = v10 + 16;
          goto LABEL_28;
        }
        if ( *(int *)(ExactNamespaceNode + 56) < 0 )
        {
          *(_QWORD *)(a3 + 16) = ExactNamespaceNode;
        }
        else
        {
          Key = -1073741790;
          VrpUnlockJobContextExclusive(v10);
        }
        break;
      case 0x23u:
        v25 = 0LL;
        EtwActivityIdControl(3u, &v25);
        if ( *(_QWORD *)(a3 + 32) )
        {
          v14 = v22;
          if ( *(int *)(a3 + 8) >= 0 )
            VrpDestroyNamespaceNode(v22);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 16));
          v13 = v14 + 16;
LABEL_28:
          KeAbPostRelease(v13);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
        }
        break;
      case 0x28u:
        v6 = *(UNICODE_STRING **)(a3 + 8);
        v7 = v6[1].Buffer;
        if ( v7 )
        {
          ExFreePoolWithTag(v7, 0x67655256u);
          RtlInitUnicodeString(v6 + 1, 0LL);
        }
        ObDereferenceObjectDeferDeleteWithTag(v6[2].Buffer, 0x67655256u);
        ExFreePoolWithTag(v6, 0x67655256u);
        break;
      case 0x2Fu:
        Key = VrpPreQueryKeyName(a3);
        break;
      default:
        return Key;
    }
  }
  return Key;
}
