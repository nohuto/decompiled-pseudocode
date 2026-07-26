/*
 * XREFs of ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140175470
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1400A5D78 (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140174EC4 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

__int64 __fastcall ndisReferenceProtocolByName(
        PCUNICODE_STRING SourceString,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int v8; // edi
  KIRQL v9; // al
  struct _NDIS_PROTOCOL_BLOCK *v10; // rbp
  KIRQL v11; // r12
  struct _NDIS_PROTOCOL_BLOCK *NextProtocol; // rbx
  size_t Length; // rsi
  unsigned __int16 v14; // ax
  size_t v15; // r8
  wchar_t *Buffer; // rcx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v8 = -1073741772;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x27u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      &SourceString->Length);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182LL);
  if ( !DestinationString.Buffer )
  {
    *a2 = 0LL;
    v8 = -1073741670;
    goto LABEL_23;
  }
  RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  v10 = *a2;
  v11 = v9;
  NextProtocol = ndisProtocolList;
  if ( *a2 )
    NextProtocol = v10->NextProtocol;
  Length = DestinationString.Length;
  while ( NextProtocol )
  {
    if ( a3 )
    {
      if ( NextProtocol == v10 )
        goto LABEL_18;
      v14 = NextProtocol->Name.Length;
      if ( (_WORD)Length == v14 )
        goto LABEL_18;
      if ( (unsigned __int16)Length < v14 )
        v14 = Length;
      v15 = v14;
    }
    else
    {
      if ( (_WORD)Length != NextProtocol->Name.Length )
        goto LABEL_18;
      v15 = Length;
    }
    if ( !memcmp(DestinationString.Buffer, NextProtocol->Name.Buffer, v15) )
    {
      if ( ndisReferenceProtocol(NextProtocol, a4) )
        v8 = 0;
      else
        NextProtocol = 0LL;
      break;
    }
LABEL_18:
    NextProtocol = NextProtocol->NextProtocol;
  }
  KeReleaseSpinLock(&ndisProtocolListLock, v11);
  Buffer = DestinationString.Buffer;
  *a2 = NextProtocol;
  ExFreePoolWithTag(Buffer, 0);
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x28u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)*a2,
      v8);
  return v8;
}
