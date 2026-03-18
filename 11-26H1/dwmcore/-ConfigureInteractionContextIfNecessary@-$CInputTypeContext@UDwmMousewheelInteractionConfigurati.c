/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801C59F4
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227CB8 (-ProcessInput@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA?AUDwmMousewheelInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801C5DF8 (-GetConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x1801C5EA0 (-UpdateActiveConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMIL.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801D0720 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  char v5; // r14
  unsigned __int8 v6; // si
  bool v7; // al
  char v8; // di
  unsigned int v9; // ecx
  bool v10; // al
  __int64 result; // rax
  bool v12; // al
  bool v13; // al
  int v14; // eax
  bool v15; // cl
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // cl
  int v19; // xmm1_4
  unsigned __int8 v20; // r8
  char v21; // dl
  char v22; // dl
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // xmm1_8
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int128 v29; // [rsp+38h] [rbp-31h] BYREF
  __int64 v30; // [rsp+48h] [rbp-21h]
  _BYTE v31[64]; // [rsp+50h] [rbp-19h] BYREF

  if ( !*a1 )
    return 2147947423LL;
  v5 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || (v8 = 0, *((_DWORD *)a1 + 36) != a2[2]) )
  {
    CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v29,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) == 0 && (*a2 == 2 || (unsigned int)(*a2 - 3) <= 1) )
      DWORD2(v29) &= 0xFFFFFF3F;
    CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v29);
    if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
      v6 = BYTE8(v29) & 0x3F;
    else
      v6 = BYTE8(v29) | 0xC0;
    v7 = (v6 & 1) != 0 || (v6 & 2) != 0;
    v8 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v7 )
    {
      v12 = (v6 & 4) != 0 || (v6 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v12 )
      {
        v13 = (v6 & 0x10) != 0 || (v6 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v13 )
          v8 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v31) != 1
      && (v8 || ((v6 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v6 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
    {
      v8 = 1;
    }
    v9 = *((unsigned __int8 *)a1 + 148);
    if ( (v9 & 8) != 0 )
    {
      if ( !v8 )
      {
LABEL_28:
        if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 && (a1[17] & 2) != 0 )
          v8 = 1;
        goto LABEL_78;
      }
    }
    else
    {
      v10 = ((v9 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v9 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v8 |= v10;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v8 = 1;
    goto LABEL_28;
  }
LABEL_78:
  if ( *((_DWORD *)a1 + 39) != 2 || ((*((_BYTE *)a1 + 148) & 2) != 0) == (a1[17] & 1) )
  {
    if ( !v8 )
    {
      result = 0LL;
      if ( (*((_BYTE *)a1 + 148) & 4) == 0 )
        goto LABEL_47;
    }
  }
  else if ( (*((_BYTE *)a1 + 148) & 2) != 0
         && (unsigned int)dword_1803DC880 > 4
         && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
  {
    *(_QWORD *)&v29 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v26,
      (unsigned int)&unk_1803B0FFE,
      v27,
      v28,
      (__int64)&v29);
  }
  LODWORD(v29) = *((_DWORD *)a1 + 39);
  v14 = *a2;
  LODWORD(v30) = 0;
  v15 = v14 == 2 || (unsigned int)(v14 - 3) <= 1;
  v16 = *((_DWORD *)a1 + 4);
  if ( v15 )
    v17 = v16 & 0xFFFFFF3F;
  else
    v17 = v16 | 0xC0;
  v18 = *((_BYTE *)a1 + 148);
  DWORD1(v29) = v17;
  if ( (v18 & 8) != 0 )
  {
    v19 = *((_DWORD *)a1 + 33);
    DWORD2(v29) = *((_DWORD *)a1 + 32);
    HIDWORD(v29) = v19;
  }
  else
  {
    DWORD2(v29) = 1110704128;
    if ( (v18 & 0x10) == 0 )
      DWORD2(v29) = 0;
    HIDWORD(v29) = 1110704128;
    if ( (v18 & 0x20) == 0 )
      HIDWORD(v29) = 0;
  }
  v20 = v18;
  if ( *a2 == 2 || (unsigned int)(*a2 - 3) <= 1 )
  {
    v21 = 0;
    v20 = v18;
  }
  else
  {
    v21 = v18 >> 1;
  }
  v22 = v21 & 1;
  *((_BYTE *)a1 + 148) = v20 ^ (v20 ^ (2 * v22)) & 2;
  if ( *a2 != 2 && (unsigned int)(*a2 - 3) > 1 || (a2[6] & 4) == 0 )
    v5 = 0;
  v23 = *((_DWORD *)a1 + 38);
  v24 = *a1;
  LOBYTE(v30) = v5 | v22 & 0xFD;
  HIDWORD(v30) = v23;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 16LL))(v24, &v29);
  if ( (int)result >= 0 )
  {
    v25 = v30;
    *(_OWORD *)(a1 + 15) = v29;
    a1[17] = v25;
LABEL_47:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return result;
}
