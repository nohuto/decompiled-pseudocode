/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x14033AC14
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x140339970 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x14033AF58 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033B030 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  NTSTATUS v4; // eax
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-59h] BYREF
  int v19; // [rsp+80h] [rbp-29h] BYREF
  __int128 v20; // [rsp+88h] [rbp-21h]
  __int64 v21; // [rsp+98h] [rbp-11h]
  __int16 v22; // [rsp+A0h] [rbp-9h]
  __int128 v23; // [rsp+A8h] [rbp-1h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  void *v25; // [rsp+C0h] [rbp+17h]
  void *KeyHandle; // [rsp+110h] [rbp+67h] BYREF
  void *Disposition; // [rsp+118h] [rbp+6Fh] BYREF
  void *v28; // [rsp+128h] [rbp+7Fh]

  HIDWORD(Disposition) = HIDWORD(a2);
  KeyHandle = 0LL;
  LODWORD(Disposition) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, (PULONG)&Disposition);
  LODWORD(TopologySetIdDescriptorCallback) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      v4,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
      a3);
    WdLogGlobalForLineNumber = 2248;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      Disposition = 0LL;
      v28 = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(KeyHandle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v13[3] = i;
        v13[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v13[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v13[6] = a3;
        WdLogGlobalForLineNumber = 2274;
        goto LABEL_13;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v10 = v28;
      DestinationString.Length = *((_WORD *)v28 + 6);
      DestinationString.MaximumLength = *((_WORD *)v28 + 6);
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.Buffer = (wchar_t *)((char *)v28 + 16);
      if ( DestinationString.Length != *((_DWORD *)v28 + 3) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2298;
      }
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      TopologySetIdDescriptorCallback = ZwOpenKey(&Disposition, 0xF003Fu, &ObjectAttributes);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          TopologySetIdDescriptorCallback,
          i,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
          a3);
        WdLogGlobalForLineNumber = 2315;
        goto LABEL_13;
      }
      v19 = 0;
      v24 = 0LL;
      v21 = 0LL;
      v22 = 0;
      v25 = Disposition;
      v20 = 0LL;
      v23 = 0LL;
      if ( !Disposition )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1844;
      }
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)&v19,
                                               a3);
      ZwClose(Disposition);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
        v15[4] = i;
        v15[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v15[3] = TopologySetIdDescriptorCallback;
        v15[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v15[7] = a3;
        WdLogGlobalForLineNumber = 2334;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
        goto LABEL_13;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v16[4] = i;
    v16[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v16[3] = TopologySetIdDescriptorCallback;
    v16[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v16[7] = a3;
    WdLogGlobalForLineNumber = 2286;
LABEL_13:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
