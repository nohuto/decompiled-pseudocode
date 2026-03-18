/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801A5DA4
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227D90 (-ProcessInput@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?GetConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA?AUDwmPenInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801A62C0 (-GetConfig@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Flag.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAXAEBUDwmPenInteractionConfigurationPrimitive@@@Z @ 0x1801A6364 (-UpdateActiveConfig@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  __int64 result; // rax
  int v6; // xmm1_4
  unsigned __int8 v7; // r8
  char v8; // cl
  char v9; // cl
  __int64 v10; // xmm1_8
  char v11; // r14
  char v12; // di
  unsigned __int8 v13; // si
  bool v14; // al
  bool v15; // al
  bool v16; // al
  unsigned int v17; // ecx
  bool v18; // al
  int v19; // eax
  bool v20; // cl
  int v21; // eax
  unsigned int v22; // eax
  unsigned __int8 v23; // dl
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
  v11 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || (v12 = 0, *((_DWORD *)a1 + 36) != a2[2]) )
  {
    CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v24,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) == 0 && (*a2 == 2 || (unsigned int)(*a2 - 3) <= 1) )
      v25 &= 0xFFFFFF3F;
    CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v24);
    if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
      v13 = v25 & 0x3F;
    else
      v13 = v25 | 0xC0;
    v14 = (v13 & 1) != 0 || (v13 & 2) != 0;
    v12 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v14 )
    {
      v15 = (v13 & 4) != 0 || (v13 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v15 )
      {
        v16 = (v13 & 0x10) != 0 || (v13 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v16 )
          v12 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(
                      *a1,
                      &UserData) != 1 )
      v12 = v12 || ((v13 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v13 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0;
    v17 = *((unsigned __int8 *)a1 + 148);
    if ( (v17 & 8) != 0 )
    {
      if ( !v12 )
      {
LABEL_41:
        if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 && (a1[17] & 2) != 0 )
          v12 = 1;
        goto LABEL_42;
      }
    }
    else
    {
      v18 = ((v17 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v17 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v12 |= v18;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v12 = 1;
    goto LABEL_41;
  }
LABEL_42:
  if ( *((_DWORD *)a1 + 39) != 2 || ((*((_BYTE *)a1 + 148) & 2) != 0) == (a1[17] & 1) )
  {
    if ( !v12 )
    {
      result = 0LL;
      if ( (*((_BYTE *)a1 + 148) & 4) == 0 )
        goto LABEL_10;
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
    v30 = &unk_1803B1065;
    UserData.Reserved = 2;
    v31 = 34;
    v32 = 1;
    v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *(_DWORD *)&EventDescriptor.Id = *((_DWORD *)a1 + 39);
  v19 = *a2;
  LODWORD(v28) = 0;
  v20 = v19 == 2 || (unsigned int)(v19 - 3) <= 1;
  v21 = *((_DWORD *)a1 + 4);
  if ( v20 )
    v22 = v21 & 0xFFFFFF3F;
  else
    v22 = v21 | 0xC0;
  v23 = *((_BYTE *)a1 + 148);
  *(_DWORD *)&EventDescriptor.Level = v22;
  if ( (v23 & 8) != 0 )
  {
    v6 = *((_DWORD *)a1 + 33);
    LODWORD(EventDescriptor.Keyword) = *((_DWORD *)a1 + 32);
    HIDWORD(EventDescriptor.Keyword) = v6;
  }
  else
  {
    LODWORD(EventDescriptor.Keyword) = 1110704128;
    if ( (v23 & 0x10) == 0 )
      LODWORD(EventDescriptor.Keyword) = 0;
    HIDWORD(EventDescriptor.Keyword) = 1110704128;
    if ( (v23 & 0x20) == 0 )
      HIDWORD(EventDescriptor.Keyword) = 0;
  }
  v7 = v23;
  if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
  {
    v8 = 0;
    v7 = v23;
  }
  else
  {
    v8 = v23 >> 1;
  }
  v9 = v8 & 1;
  *((_BYTE *)a1 + 148) = v7 ^ (v7 ^ (2 * v9)) & 2;
  if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 || (a2[6] & 4) == 0 )
    v11 = 0;
  HIDWORD(v28) = *((_DWORD *)a1 + 38);
  LOBYTE(v28) = v11 | v9 & 0xFD;
  result = (*(__int64 (__fastcall **)(_QWORD, EVENT_DESCRIPTOR *))(*(_QWORD *)*a1 + 16LL))(*a1, &EventDescriptor);
  if ( (int)result >= 0 )
  {
    v10 = v28;
    *(EVENT_DESCRIPTOR *)(a1 + 15) = EventDescriptor;
    a1[17] = v10;
LABEL_10:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return result;
}
