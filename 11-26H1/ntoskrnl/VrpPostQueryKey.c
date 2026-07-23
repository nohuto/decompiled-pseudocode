/*
 * XREFs of VrpPostQueryKey @ 0x140938F20
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x140469E00 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VrpInputBufferParameter @ 0x14093948C (VrpInputBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1409394B8 (VrpOutputBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x1409394EC (VrpUpdateKeyInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostQueryKey(__int64 a1)
{
  __int64 v2; // r12
  void *v3; // rsi
  __int64 v4; // r13
  KPROCESSOR_MODE PreviousMode; // al
  int v6; // ebx
  void *v7; // rdi
  unsigned __int8 v8; // r15
  unsigned int v9; // eax
  __int64 *v10; // rcx
  int v11; // r9d
  int v13; // eax
  __int64 Pool2; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 *v20; // r12
  int updated; // [rsp+30h] [rbp-79h] BYREF
  __int64 v22; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  __int16 *v27; // [rsp+80h] [rbp-29h]
  int v28; // [rsp+88h] [rbp-21h]
  int v29; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v30; // [rsp+90h] [rbp-19h]
  __int64 v31; // [rsp+98h] [rbp-11h]
  _QWORD *v32; // [rsp+A0h] [rbp-9h]
  __int64 v33; // [rsp+A8h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR *v34; // [rsp+B0h] [rbp+7h]
  _QWORD v35[3]; // [rsp+B8h] [rbp+Fh] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  PreviousMode = ExGetPreviousMode();
  v6 = *(_DWORD *)(a1 + 8);
  v7 = 0LL;
  v8 = PreviousMode;
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
    goto LABEL_30;
  v9 = *(_DWORD *)(v4 + 8);
  v10 = &EmptyUnicodeString;
  if ( v9 )
  {
    if ( v9 > 8 )
      goto LABEL_5;
    v11 = 282;
    if ( !_bittest(&v11, v9) )
      goto LABEL_5;
  }
  if ( (unsigned int)dword_140E0A5C0 > 5 )
  {
    updated = *(_DWORD *)(v4 + 8);
    v30 = (__int64 *)&updated;
    v31 = 4LL;
    if ( *(_QWORD *)(v2 + 24) )
      v10 = (__int64 *)(v2 + 16);
    v33 = 2LL;
    v32 = v35;
    v34 = (EVENT_DESCRIPTOR *)v10[1];
    v35[0] = *(unsigned __int16 *)v10;
    *(_DWORD *)&v23.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E0A5C8;
    *(_DWORD *)&v23.Id = 184549376;
    v23.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_140E0A5C8;
    v27 = (__int16 *)qword_14005BB38;
    UserData.Reserved = 2;
    v28 = 50;
    v29 = 1;
    LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E0A5E0, &v23, &ActivityId, 0LL, 5u, &UserData);
    v10 = &EmptyUnicodeString;
  }
  if ( (*(_DWORD *)(v2 + 36) & 0x20000000) == 0 )
  {
    v13 = *(_DWORD *)(v4 + 8);
    if ( v13 != 3 && v13 != 8 )
    {
LABEL_5:
      if ( v6 >= 0 )
        goto LABEL_6;
LABEL_31:
      if ( v6 == -1073740541 )
        goto LABEL_6;
      goto LABEL_32;
    }
  }
  Pool2 = 0LL;
  if ( v8 == 1 )
  {
    if ( *(_DWORD *)(v4 + 24) )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        goto LABEL_50;
    }
    v3 = (void *)Pool2;
  }
  else
  {
    v3 = *(void **)(v4 + 16);
  }
  v15 = *(unsigned int *)(v4 + 24);
  v16 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)&v23.Id = v3;
  v6 = VrpInputBufferParameter(v8, v16, v15, &v23);
  if ( v6 < 0 )
  {
LABEL_30:
    v10 = &EmptyUnicodeString;
    goto LABEL_31;
  }
  v17 = *(_QWORD *)(v4 + 32);
  if ( v8 == 1 )
  {
    v17 = ExAllocatePool2(0x100uLL);
    if ( !v17 )
    {
LABEL_50:
      v6 = -1073741670;
      v10 = &EmptyUnicodeString;
LABEL_32:
      if ( (unsigned int)dword_140E0A5C0 > 2 )
      {
        if ( *(_QWORD *)(v2 + 24) )
          v10 = (__int64 *)(v2 + 16);
        v31 = 2LL;
        v30 = &v33;
        v32 = (_QWORD *)v10[1];
        v33 = *(unsigned __int16 *)v10;
        v34 = &v23;
        *(_DWORD *)&EventDescriptor.Level = 2;
        UserData.Ptr = (ULONGLONG)off_140E0A5C8;
        *(_DWORD *)&v23.Id = v6;
        v35[0] = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 0LL;
        UserData.Size = *(unsigned __int16 *)off_140E0A5C8;
        v27 = &word_14005BB76;
        UserData.Reserved = 2;
        v28 = 47;
        v29 = 1;
        LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteTransfer(qword_140E0A5E0, &EventDescriptor, &ActivityId, 0LL, 5u, &UserData);
      }
      goto LABEL_6;
    }
  }
  v18 = *(_QWORD *)(v4 + 32);
  v22 = v17;
  v7 = (void *)v17;
  v6 = VrpInputBufferParameter(v8, v18, 4LL, &v22);
  if ( v6 < 0 )
    goto LABEL_30;
  updated = VrpUpdateKeyInformation(
              *(_DWORD *)(v4 + 8),
              (_DWORD)v3,
              *(_DWORD *)(v4 + 24),
              (_DWORD)v7,
              v2 + 16,
              *(_DWORD *)(v2 + 36));
  v6 = updated;
  if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
    goto LABEL_30;
  v19 = VrpOutputBufferParameter(v8, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v23);
  if ( v19 < 0 || (v19 = VrpOutputBufferParameter(v8, *(_QWORD *)(v4 + 32), 4LL, &v22), v19 < 0) )
  {
    v6 = v19;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 24) = v6;
  v6 = -1073740541;
  if ( (unsigned int)dword_140E0A5C0 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v20 = (__int64 *)(v2 + 16);
    else
      v20 = &EmptyUnicodeString;
    v31 = 2LL;
    v30 = &v33;
    v32 = (_QWORD *)v20[1];
    v33 = *(unsigned __int16 *)v20;
    LODWORD(v22) = *(_DWORD *)(v4 + 8);
    v34 = (EVENT_DESCRIPTOR *)&v22;
    v35[1] = &updated;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E0A5C8;
    v35[0] = 4LL;
    v35[2] = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_140E0A5C8;
    v27 = word_14005B932;
    UserData.Reserved = 2;
    v28 = 83;
    v29 = 1;
    *(_DWORD *)&v23.Id = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E0A5E0, &EventDescriptor, &ActivityId, 0LL, 6u, &UserData);
  }
LABEL_6:
  if ( v8 == 1 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0x67655256u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x67655256u);
  }
  return (unsigned int)v6;
}
