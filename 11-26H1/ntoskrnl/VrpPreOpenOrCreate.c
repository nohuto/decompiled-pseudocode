/*
 * XREFs of VrpPreOpenOrCreate @ 0x140937770
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     CmpFreeExtraParameter @ 0x140937FE0 (CmpFreeExtraParameter.c)
 *     VrpTranslatePath @ 0x140938020 (VrpTranslatePath.c)
 *     CmAllocateExtraParameter @ 0x140939AB4 (CmAllocateExtraParameter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(__int64 ***a1, void *a2)
{
  __int64 **v2; // r13
  __int64 v3; // r15
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 ExtraParameter; // r14
  const UNICODE_STRING *v7; // rcx
  const UNICODE_STRING *v8; // rbx
  unsigned __int16 v9; // cx
  wchar_t *Buffer; // rdi
  const UNICODE_STRING *v11; // rdx
  __int16 v12; // dx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 i; // rax
  char *v17; // r9
  struct _LIST_ENTRY *Flink; // r12
  __int16 v19; // dx
  __int64 *v20; // r14
  PVOID v21; // r12
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // ebx
  __int64 Pool2; // rax
  __int64 v26; // rsi
  UNICODE_STRING v27; // xmm1
  __int128 v28; // xmm0
  int v29; // eax
  UNICODE_STRING v30; // xmm0
  __int64 *v31; // rax
  UNICODE_STRING *v32; // rax
  const UNICODE_STRING *v34; // r14
  const UNICODE_STRING *v35; // rbx
  unsigned __int16 v36; // cx
  unsigned __int16 *v37; // r15
  SIZE_T v38; // rax
  __int64 v39; // rax
  __int16 j; // dx
  __int64 v41; // rax
  wchar_t *k; // r14
  struct _LIST_ENTRY *v43; // r12
  __int16 v44; // dx
  wchar_t *v45; // r15
  SIZE_T v46; // rax
  SIZE_T v47; // rax
  wchar_t *v48; // rbx
  wchar_t *m; // r11
  wchar_t v50; // r14
  int v51; // edx
  __int16 v52; // ax
  __int16 v53; // r10
  SIZE_T v54; // rax
  unsigned __int16 *v55; // r8
  wchar_t *v56; // r14
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r10
  UNICODE_STRING v59; // xmm0
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  _QWORD *n; // r8
  _QWORD *v63; // rax
  __int64 v64; // r9
  void *v65; // rcx
  __int64 *v66; // rax
  __int64 *v67; // rdx
  int v68; // ecx
  __int64 *v69; // rdx
  int v70; // ecx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-98h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v77; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v78[2]; // [rsp+A0h] [rbp-60h] BYREF
  const UNICODE_STRING *v79; // [rsp+B0h] [rbp-50h]
  __int64 *v80; // [rsp+B8h] [rbp-48h]
  PVOID v81; // [rsp+C0h] [rbp-40h]
  __int64 v82[2]; // [rsp+C8h] [rbp-38h] BYREF
  GUID ActivityId; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  char *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  int *v88; // [rsp+110h] [rbp+10h]
  __int64 v89; // [rsp+118h] [rbp+18h]
  __int64 v90; // [rsp+120h] [rbp+20h]
  int v91; // [rsp+128h] [rbp+28h] BYREF
  int v92; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]

  v2 = *a1;
  v81 = a2;
  v3 = (__int64)a1;
  v72 = (__int64)a1;
  LODWORD(v73) = 0;
  v4 = v2[1];
  v5 = *v2;
  v79 = (const UNICODE_STRING *)v2[11];
  ExtraParameter = 0LL;
  v80 = v4;
  DestinationString = 0LL;
  Object = 0LL;
  v77 = 0LL;
  v74 = 0LL;
  *(_OWORD *)v82 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v7 = v79 + 1;
  if ( !v79 )
    v7 = 0LL;
  if ( *(_WORD *)v5 && *(_WORD *)v5[1] == 92 )
  {
    v8 = (const UNICODE_STRING *)*v2;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    v9 = v8->Length + 2;
    DestinationString.MaximumLength = v8->Length;
    if ( (unsigned __int16)(DestinationString.MaximumLength + 2) < DestinationString.MaximumLength )
    {
      Buffer = DestinationString.Buffer;
      v23 = -1073741811;
      goto LABEL_89;
    }
    DestinationString.MaximumLength = v9;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
    {
      v23 = -1073741670;
      goto LABEL_89;
    }
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    if ( v8->Length )
    {
      if ( *v8->Buffer != 92 )
        RtlAppendUnicodeToString(&DestinationString, L"\\");
      v11 = v8;
LABEL_11:
      RtlAppendUnicodeStringToString(&DestinationString, v11);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  if ( !v79 )
  {
    Buffer = DestinationString.Buffer;
    v23 = 0;
    goto LABEL_30;
  }
  v34 = (const UNICODE_STRING *)*v2;
  v35 = (const UNICODE_STRING *)v78;
  v78[0] = 0LL;
  v78[1] = 0LL;
  if ( v7 )
    v35 = v7;
  v36 = v34->Length + v35->Length;
  if ( v36 < v35->Length
    || (DestinationString.MaximumLength = v34->Length + v35->Length, (unsigned __int16)(v36 + 2) < v36) )
  {
    Buffer = DestinationString.Buffer;
    v23 = -1073741811;
LABEL_28:
    ExtraParameter = 0LL;
    goto LABEL_29;
  }
  DestinationString.MaximumLength = v36 + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  Buffer = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
  {
    v23 = -1073741670;
    goto LABEL_28;
  }
  RtlCopyUnicodeString(&DestinationString, v35);
  if ( v34->Length )
  {
    if ( *v34->Buffer != 92 && (!v35->Length || v35->Buffer[((unsigned __int64)v35->Length >> 1) - 1] != 92) )
      RtlAppendUnicodeToString(&DestinationString, L"\\");
    v11 = v34;
    goto LABEL_11;
  }
LABEL_12:
  v12 = 0;
  Buffer = DestinationString.Buffer;
  v13 = 0LL;
  if ( DestinationString.Length )
  {
    v14 = 0LL;
    do
    {
      if ( DestinationString.Buffer[v14] != 92 )
        break;
      v14 = ++v13;
    }
    while ( 2 * v13 < (unsigned __int64)DestinationString.Length );
  }
  v15 = v13;
  for ( *(_QWORD *)&SourceString.Length = &DestinationString.Buffer[v13];
        2 * v13 < (unsigned __int64)DestinationString.Length;
        v15 = v13 )
  {
    if ( DestinationString.Buffer[v15] == 92 )
      break;
    ++v13;
    v12 += 2;
  }
  for ( i = v13; 2 * v13 < (unsigned __int64)DestinationString.Length; i = v13 )
  {
    if ( DestinationString.Buffer[i] != 92 )
      break;
    ++v13;
  }
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  if ( v19 != 16 )
    goto LABEL_22;
  v37 = (unsigned __int16 *)(v17 + 16);
  v38 = RtlCompareMemory(v17, VrpRegistryString.Buffer, 0x10uLL);
  if ( v38 != 16 )
  {
    v54 = v38 >> 1;
    v55 = (unsigned __int16 *)(v54 * 2 + *(_QWORD *)&SourceString.Length);
    v56 = &VrpRegistryString.Buffer[v54];
    while ( v55 < v37 )
    {
      v57 = *v55;
      v58 = *v56;
      if ( (_WORD)v57 != (_WORD)v58 )
      {
        if ( (unsigned int)v57 >= 0x61 )
        {
          if ( (unsigned int)v57 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v57 >= 0xC0u )
              LOWORD(v57) = *((_WORD *)&Flink->Flink
                            + (v57 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v57 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v57 >> 8))))
                          + v57;
          }
          else
          {
            LOWORD(v57) = v57 - 32;
          }
        }
        if ( (unsigned int)v58 >= 0x61 )
        {
          if ( (unsigned int)v58 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v58 >= 0xC0u )
              LOWORD(v58) = *((_WORD *)&Flink->Flink
                            + (v58 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v58 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v58 >> 8))))
                          + v58;
          }
          else
          {
            LOWORD(v58) = v58 - 32;
          }
        }
        if ( (_WORD)v57 != (_WORD)v58 )
          goto LABEL_60;
      }
      ++v55;
      ++v56;
    }
  }
  v39 = v13;
  for ( j = 0; 2 * v13 < (unsigned __int64)DestinationString.Length; v39 = v13 )
  {
    if ( Buffer[v39] != 92 )
      break;
    ++v13;
  }
  v41 = v13;
  for ( k = &Buffer[v13]; 2 * v13 < (unsigned __int64)DestinationString.Length; v41 = v13 )
  {
    if ( Buffer[v41] == 92 )
      break;
    ++v13;
    j += 2;
  }
  v43 = PsGetCurrentServerSiloGlobals()[75].Flink;
  if ( v44 == 4 )
  {
    v45 = k + 2;
    v46 = RtlCompareMemory(k, VrpWcString.Buffer, 4uLL);
    if ( v46 != 4 )
    {
      v47 = v46 >> 1;
      v48 = &VrpWcString.Buffer[v47];
      for ( m = &k[v47]; m < v45; ++m )
      {
        v50 = *m;
        v51 = *v48;
        if ( *m != (_WORD)v51 )
        {
          NLS_UPCASE((__int64)v43, v51);
          v52 = NLS_UPCASE((__int64)v43, v50);
          if ( v52 != v53 )
            goto LABEL_60;
        }
        ++v48;
      }
    }
    v23 = -1073741790;
    goto LABEL_28;
  }
LABEL_60:
  v3 = v72;
LABEL_22:
  v20 = v80;
  v21 = v81;
  LODWORD(v72) = 0;
  v22 = VrpTranslatePath(v81, (__int64)&v77, (__int64)&Object, (__int64)v82, (__int64)&v73, (__int64)&v72);
  v23 = v22;
  if ( v22 == -1073741772 )
  {
    v23 = 0;
    ExtraParameter = 0LL;
    goto LABEL_30;
  }
  if ( v22 >= 0 )
  {
    v24 = v73;
    if ( (v73 & 4) == 0 )
    {
      *((_WORD *)Object + 25) = *((_WORD *)v20 + 25);
      Pool2 = ExAllocatePool2(0x100uLL);
      v26 = Pool2;
      if ( Pool2 )
      {
        v27 = DestinationString;
        *(_QWORD *)Pool2 = v2[1];
        *(_OWORD *)(Pool2 + 16) = *(_OWORD *)*v2;
        v28 = *(_OWORD *)v2[14];
        *(UNICODE_STRING *)(Pool2 + 48) = v27;
        *(_OWORD *)(Pool2 + 32) = v28;
        RtlInitUnicodeString(&DestinationString, 0LL);
        v29 = v72;
        v30 = v77;
        *(_DWORD *)(v26 + 64) = v24;
        *(_DWORD *)(v3 + 8) = v29;
        v23 = 0;
        v31 = (__int64 *)Object;
        *(_QWORD *)(v26 + 8) = v21;
        v2[1] = v31;
        v32 = (UNICODE_STRING *)*v2;
        v2[10] = (__int64 *)v26;
        Object = 0LL;
        *v32 = v30;
        RtlInitUnicodeString(&v77, 0LL);
        ExtraParameter = 0LL;
        Buffer = DestinationString.Buffer;
        *(_OWORD *)v2[14] = *(_OWORD *)v82;
        goto LABEL_30;
      }
      ExtraParameter = v74;
      v23 = -1073741670;
      goto LABEL_29;
    }
    ExtraParameter = CmAllocateExtraParameter();
    if ( ExtraParameter )
    {
      ObfReferenceObjectWithTag(v21, 0x67655256u);
      v59 = DestinationString;
      *(_QWORD *)ExtraParameter = v21;
      *(_DWORD *)(ExtraParameter + 8) = v24 & 0xFFFFFFFB;
      *(UNICODE_STRING *)(ExtraParameter + 16) = v59;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v60 = *(_QWORD **)(v3 + 16);
      v61 = (_QWORD *)(ExtraParameter - 48);
      for ( n = (_QWORD *)*v60; n != v60; n = (_QWORD *)*n )
      {
        v64 = n[2] - v61[2];
        if ( !v64 )
          v64 = n[3] - v61[3];
        if ( !v64 )
        {
          Buffer = DestinationString.Buffer;
          v23 = -1073741771;
          goto LABEL_29;
        }
      }
      v63 = (_QWORD *)v60[1];
      if ( (_QWORD *)*v63 != v60 )
        __fastfail(3u);
      *v61 = v60;
      v61[1] = v63;
      *v63 = v61;
      v60[1] = v61;
      ExtraParameter = 0LL;
      v65 = (void *)(*v2)[1];
      if ( v65 )
        ExFreePoolWithTag(v65, 0x67655256u);
      *(UNICODE_STRING *)*v2 = v77;
      RtlInitUnicodeString(&v77, 0LL);
      Buffer = DestinationString.Buffer;
      v23 = -1073740541;
      *(_DWORD *)(v3 + 12) = 872;
      goto LABEL_90;
    }
    v23 = -1073741670;
LABEL_29:
    if ( (unsigned int)dword_140E0A5C0 > 2 )
    {
      v66 = *v2;
      v67 = &EmptyUnicodeString;
      *(_DWORD *)&DestinationString.Length = 184549376;
      if ( v66[1] )
        v67 = v66;
      v68 = *(unsigned __int16 *)v67;
      v90 = v67[1];
      v93 = &v72;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 2;
      UserData.Ptr = (ULONGLONG)off_140E0A5C8;
      v88 = &v91;
      v91 = v68;
      v92 = 0;
      DestinationString.Buffer = 0LL;
      v89 = 2LL;
      LODWORD(v72) = v23;
      v94 = 4LL;
      UserData.Size = *(unsigned __int16 *)off_140E0A5C8;
      v85 = byte_14005B9D9;
      UserData.Reserved = 2;
      v86 = 40;
      v87 = 1;
      LODWORD(v73) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_140E0A5E0, (PCEVENT_DESCRIPTOR)&DestinationString, &ActivityId, 0LL, 5u, &UserData);
    }
    goto LABEL_30;
  }
  ExtraParameter = 0LL;
LABEL_89:
  if ( v23 != -1073740541 )
    goto LABEL_29;
LABEL_90:
  if ( (unsigned int)dword_140E0A5C0 > 5 )
  {
    v69 = &EmptyUnicodeString;
    if ( (*v2)[1] )
      v69 = *v2;
    v70 = *(unsigned __int16 *)v69;
    v90 = v69[1];
    v93 = &v72;
    v88 = &v91;
    v91 = v70;
    v89 = 2LL;
    v92 = 0;
    LODWORD(v72) = -1073740541;
    v94 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5C0,
      (unsigned __int8 *)byte_14005B8B9,
      &ActivityId,
      0LL,
      5u,
      &UserData);
  }
LABEL_30:
  if ( v77.Buffer )
    ExFreePoolWithTag(v77.Buffer, 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 48);
  return v23;
}
