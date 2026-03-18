/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801A50FC
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x1801A5024 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x1801A5614 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlags.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801A56A0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 v6; // r8
  char v7; // cl
  char v8; // cl
  __int64 v9; // xmm1_8
  char v10; // r14
  char v11; // di
  unsigned __int8 v12; // si
  bool v13; // al
  bool v14; // al
  bool v15; // al
  unsigned int v16; // ecx
  bool v17; // al
  int v18; // eax
  bool v19; // cl
  int v20; // eax
  unsigned int v21; // eax
  unsigned __int8 v22; // dl
  int v23; // xmm1_4
  _QWORD *v24; // [rsp+38h] [rbp-41h] BYREF
  int v25; // [rsp+40h] [rbp-39h]
  unsigned int v26; // [rsp+48h] [rbp-31h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-11h] BYREF
  void *v30; // [rsp+78h] [rbp-1h]
  int v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+84h] [rbp+Bh]
  _QWORD *v33; // [rsp+88h] [rbp+Fh]
  __int64 v34; // [rsp+90h] [rbp+17h]

  if ( !*a1 )
    return 2147947423LL;
  v10 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || (v11 = 0, *((_DWORD *)a1 + 36) != a2[2]) )
  {
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v24,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) == 0 && (*a2 == 2 || (unsigned int)(*a2 - 3) <= 1) )
      v25 &= 0xFFFFFF3F;
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v24);
    if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
      v12 = v25 & 0x3F;
    else
      v12 = v25 | 0xC0;
    v13 = (v12 & 1) != 0 || (v12 & 2) != 0;
    v11 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v13 )
    {
      v14 = (v12 & 4) != 0 || (v12 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v14 )
      {
        v15 = (v12 & 0x10) != 0 || (v12 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v15 )
          v11 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(
                      *a1,
                      &UserData) != 1 )
      v11 = v11 || ((v12 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v12 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0;
    v16 = *((unsigned __int8 *)a1 + 148);
    if ( (v16 & 8) != 0 )
    {
      if ( !v11 )
      {
LABEL_38:
        if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 && (a1[17] & 2) != 0 )
          v11 = 1;
        goto LABEL_39;
      }
    }
    else
    {
      v17 = ((v16 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v16 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v11 |= v17;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v11 = 1;
    goto LABEL_38;
  }
LABEL_39:
  if ( *((_DWORD *)a1 + 39) != 2 || ((*((_BYTE *)a1 + 148) & 2) != 0) == (a1[17] & 1) )
  {
    if ( !v11 )
    {
      result = 0LL;
      if ( (*((_BYTE *)a1 + 148) & 4) == 0 )
        goto LABEL_9;
    }
  }
  else if ( (*((_BYTE *)a1 + 148) & 2) != 0
         && (unsigned int)dword_1803DC880 > 4
         && (qword_1803DC890 & 2) != 0
         && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v24 = a1;
    v33 = &v24;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1803DC888;
    v34 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1803DC888;
    v30 = &unk_1803B1037;
    UserData.Reserved = 2;
    v31 = 34;
    v32 = 1;
    v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *(_DWORD *)&EventDescriptor.Id = *((_DWORD *)a1 + 39);
  v18 = *a2;
  LODWORD(v28) = 0;
  v19 = v18 == 2 || (unsigned int)(v18 - 3) <= 1;
  v20 = *((_DWORD *)a1 + 4);
  if ( v19 )
    v21 = v20 & 0xFFFFFF3F;
  else
    v21 = v20 | 0xC0;
  v22 = *((_BYTE *)a1 + 148);
  *(_DWORD *)&EventDescriptor.Level = v21;
  if ( (v22 & 8) != 0 )
  {
    v23 = *((_DWORD *)a1 + 33);
    LODWORD(EventDescriptor.Keyword) = *((_DWORD *)a1 + 32);
    HIDWORD(EventDescriptor.Keyword) = v23;
  }
  else
  {
    LODWORD(EventDescriptor.Keyword) = 1110704128;
    if ( (v22 & 0x10) == 0 )
      LODWORD(EventDescriptor.Keyword) = 0;
    HIDWORD(EventDescriptor.Keyword) = 1110704128;
    if ( (v22 & 0x20) == 0 )
      HIDWORD(EventDescriptor.Keyword) = 0;
  }
  v6 = v22;
  if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
  {
    v7 = 0;
    v6 = v22;
  }
  else
  {
    v7 = v22 >> 1;
  }
  v8 = v7 & 1;
  *((_BYTE *)a1 + 148) = v6 ^ (v6 ^ (2 * v8)) & 2;
  if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 || (a2[6] & 4) == 0 )
    v10 = 0;
  HIDWORD(v28) = *((_DWORD *)a1 + 38);
  LOBYTE(v28) = v10 | v8 & 0xFD;
  result = (*(__int64 (__fastcall **)(_QWORD, EVENT_DESCRIPTOR *))(*(_QWORD *)*a1 + 16LL))(*a1, &EventDescriptor);
  if ( (int)result >= 0 )
  {
    v9 = v28;
    *(EVENT_DESCRIPTOR *)(a1 + 15) = EventDescriptor;
    a1[17] = v9;
LABEL_9:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return result;
}
