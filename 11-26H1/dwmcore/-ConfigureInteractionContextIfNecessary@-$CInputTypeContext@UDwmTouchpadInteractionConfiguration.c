/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801AEA28
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227E68 (-ProcessInput@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801A56A0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x1801AEE8C (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  __int64 result; // rax
  char v6; // r14
  char v7; // di
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  bool v12; // cl
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int8 v15; // cl
  int v16; // xmm1_4
  unsigned __int8 v17; // r8
  char v18; // dl
  char v19; // dl
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // xmm1_8
  unsigned __int8 v23; // si
  bool v24; // al
  unsigned int v25; // ecx
  bool v26; // al
  bool v27; // al
  bool v28; // al
  __int128 v29; // [rsp+38h] [rbp-31h] BYREF
  __int64 v30; // [rsp+48h] [rbp-21h]
  _BYTE v31[64]; // [rsp+50h] [rbp-19h] BYREF

  if ( !*a1 )
    return 2147947423LL;
  v6 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || (v7 = 0, *((_DWORD *)a1 + 36) != a2[2]) )
  {
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
      (__int64)a1,
      (unsigned int *)&v29,
      a2[2],
      a3);
    if ( (a2[6] & 8) == 0 && (*a2 == 2 || (unsigned int)(*a2 - 3) <= 1) )
      DWORD2(v29) &= 0xFFFFFF3F;
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v29);
    if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
      v23 = BYTE8(v29) & 0x3F;
    else
      v23 = BYTE8(v29) | 0xC0;
    v24 = (v23 & 1) != 0 || (v23 & 2) != 0;
    v7 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v24 )
    {
      v27 = (v23 & 4) != 0 || (v23 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v27 )
      {
        v28 = (v23 & 0x10) != 0 || (v23 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v28 )
          v7 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v31) != 1
      && (v7 || ((v23 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v23 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
    {
      v7 = 1;
    }
    v25 = *((unsigned __int8 *)a1 + 148);
    if ( (v25 & 8) != 0 )
    {
      if ( !v7 )
      {
LABEL_45:
        if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 && (a1[17] & 2) != 0 )
          v7 = 1;
        goto LABEL_5;
      }
    }
    else
    {
      v26 = ((v25 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v25 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v7 |= v26;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v7 = 1;
    goto LABEL_45;
  }
LABEL_5:
  if ( *((_DWORD *)a1 + 39) != 2 || ((*((_BYTE *)a1 + 148) & 2) != 0) == (a1[17] & 1) )
  {
    if ( !v7 )
    {
      result = 0LL;
      if ( (*((_BYTE *)a1 + 148) & 4) == 0 )
        goto LABEL_8;
    }
  }
  else if ( (*((_BYTE *)a1 + 148) & 2) != 0
         && (unsigned int)dword_1803DC880 > 4
         && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    *(_QWORD *)&v29 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_1803B1088,
      v9,
      v10,
      (__int64)&v29);
  }
  LODWORD(v29) = *((_DWORD *)a1 + 39);
  v11 = *a2;
  LODWORD(v30) = 0;
  v12 = v11 == 2 || (unsigned int)(v11 - 3) <= 1;
  v13 = *((_DWORD *)a1 + 4);
  if ( v12 )
    v14 = v13 & 0xFFFFFF3F;
  else
    v14 = v13 | 0xC0;
  v15 = *((_BYTE *)a1 + 148);
  DWORD1(v29) = v14;
  if ( (v15 & 8) != 0 )
  {
    v16 = *((_DWORD *)a1 + 33);
    DWORD2(v29) = *((_DWORD *)a1 + 32);
    HIDWORD(v29) = v16;
  }
  else
  {
    DWORD2(v29) = 1110704128;
    if ( (v15 & 0x10) == 0 )
      DWORD2(v29) = 0;
    HIDWORD(v29) = 1110704128;
    if ( (v15 & 0x20) == 0 )
      HIDWORD(v29) = 0;
  }
  v17 = v15;
  if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
  {
    v18 = 0;
    v17 = v15;
  }
  else
  {
    v18 = v15 >> 1;
  }
  v19 = v18 & 1;
  *((_BYTE *)a1 + 148) = v17 ^ (v17 ^ (2 * v19)) & 2;
  if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 || (a2[6] & 4) == 0 )
    v6 = 0;
  v20 = *((_DWORD *)a1 + 38);
  v21 = *a1;
  LOBYTE(v30) = v6 | v19 & 0xFD;
  HIDWORD(v30) = v20;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 16LL))(v21, &v29);
  if ( (int)result >= 0 )
  {
    v22 = v30;
    *(_OWORD *)(a1 + 15) = v29;
    a1[17] = v22;
LABEL_8:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return result;
}
