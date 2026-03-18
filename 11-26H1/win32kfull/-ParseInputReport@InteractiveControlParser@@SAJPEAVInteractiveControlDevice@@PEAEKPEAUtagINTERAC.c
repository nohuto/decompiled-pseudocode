/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x14025D090
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1402FDBC8 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1400022A8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x140004748 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x140301E00 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x140302138 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        ULONG ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  int v4; // eax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  NTSTATUS ScaledUsageValue; // r14d
  struct InteractiveControlDevice *v9; // r12
  struct InteractiveControlDevice *v10; // rcx
  struct InteractiveControlDevice *v11; // rbx
  struct InteractiveControlDevice *v12; // r13
  USAGE *v13; // r15
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int DigitizerForDevice; // eax
  int v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS Usages; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  LONG v24; // eax
  __int16 v25; // cx
  int ScaledComponentValue; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  int v32; // r10d
  int v33; // eax
  __int16 v34; // ax
  __int64 v35; // rcx
  ULONG v37; // [rsp+50h] [rbp-59h]
  int v38; // [rsp+54h] [rbp-55h]
  LONG UsageValue; // [rsp+58h] [rbp-51h] BYREF
  CHAR *v40; // [rsp+60h] [rbp-49h]
  struct _HIDP_PREPARSED_DATA *v41; // [rsp+68h] [rbp-41h]
  ULONG UsageLength; // [rsp+70h] [rbp-39h] BYREF
  int v43; // [rsp+74h] [rbp-35h] BYREF
  ULONG v44; // [rsp+78h] [rbp-31h] BYREF
  int v45; // [rsp+7Ch] [rbp-2Dh] BYREF
  NTSTATUS v46; // [rsp+80h] [rbp-29h] BYREF
  const char *v47; // [rsp+88h] [rbp-21h] BYREF
  __int64 v48; // [rsp+90h] [rbp-19h] BYREF
  const char *v49; // [rsp+98h] [rbp-11h] BYREF
  USHORT UsageList[4]; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v51; // [rsp+A8h] [rbp-1h]

  v4 = 0;
  v37 = ReportLength;
  v40 = Report;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 32);
  v41 = PreparsedData;
  UsageLength = 5;
  *(_OWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 6) = 0;
  ScaledUsageValue = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  *(_QWORD *)UsageList = 0LL;
  v51 = 0;
  v48 = 0LL;
  v38 = 0;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)ScaledUsageValue;
  v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    v11 = v9;
    UsageValue = 0;
    v12 = v9;
    v13 = (USAGE *)v9;
    v9 = *(struct InteractiveControlDevice **)v9;
    if ( *((_DWORD *)v11 + 25) )
      continue;
    v14 = *((_DWORD *)v11 + 4);
    if ( v14 == 5 || v14 == 7 )
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 v13[12],
                 v13[15],
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 ReportLength);
      v22 = 0LL;
      ScaledUsageValue = Usages;
      v15 = 1LL;
      while ( (unsigned int)v22 < UsageLength )
      {
        if ( UsageList[v22] == v13[40] )
        {
          v17 = 1LL;
          UsageValue = 1;
          goto LABEL_9;
        }
        v22 = (unsigned int)(v22 + 1);
      }
      goto LABEL_8;
    }
    if ( v14 != 1 )
    {
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v11 + 12),
                           v13[15],
                           v13[40],
                           &UsageValue,
                           PreparsedData,
                           Report,
                           ReportLength);
LABEL_8:
      v17 = (unsigned int)UsageValue;
      goto LABEL_9;
    }
    v20 = HidP_GetUsageValue(
            HidP_Input,
            v13[12],
            v13[15],
            v13[40],
            (PULONG)&UsageValue,
            PreparsedData,
            Report,
            ReportLength);
    v17 = (unsigned int)UsageValue;
    ScaledUsageValue = v20;
    if ( UsageValue < *((_DWORD *)v12 + 16) || UsageValue > *((_DWORD *)v12 + 17) )
      ScaledUsageValue = -2146369535;
LABEL_9:
    if ( ScaledUsageValue < 0 )
    {
      if ( ScaledUsageValue != -2146369535 && (unsigned int)dword_1403AAA68 > 2 )
      {
        v43 = *((unsigned __int16 *)a1 + 40);
        v44 = v37;
        v45 = *((_DWORD *)v11 + 4);
        v47 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v46 = ScaledUsageValue;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          (__int64)&unk_14037A905,
          v15,
          v16,
          (void **)&v47,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43);
      }
      ScaledUsageValue = 0;
      goto LABEL_14;
    }
    v23 = *((unsigned int *)v11 + 4);
    switch ( *((_DWORD *)v11 + 4) )
    {
      case 1:
        if ( *((_WORD *)v11 + 12) == 1 )
        {
          v34 = *((_WORD *)v12 + 40);
          if ( v34 == 48 )
          {
            LODWORD(v48) = v17;
            goto LABEL_61;
          }
          if ( v34 == 49 )
          {
            HIDWORD(v48) = v17;
LABEL_61:
            *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
          }
        }
        v4 = 1;
        v38 = 1;
        goto LABEL_15;
      case 3:
        if ( (_DWORD)v17 )
        {
          if ( *((_DWORD *)v11 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v17);
            v27 = *((_DWORD *)v11 + 26);
            v28 = v27 + ScaledComponentValue;
            v29 = *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) = v28;
            v30 = v28 / v29;
            v31 = v30 * v29;
            v32 = v30;
            *((_DWORD *)a4 + 6) = v31;
            if ( (v27 ^ *((_DWORD *)v11 + 26)) < 0 )
            {
              v33 = *((_DWORD *)v11 + 27);
              if ( *((int *)v11 + 26) <= 0 )
                *((_DWORD *)a4 + 6) = v31 - v33;
              else
                *((_DWORD *)a4 + 6) = v31 + v33;
            }
            *((_DWORD *)a4 + 6) = *((_DWORD *)v11 + 27) * v32;
            *((_DWORD *)v11 + 26) -= *((_DWORD *)v11 + 27) * v32;
          }
          else if ( (unsigned int)dword_1403AAA68 > 2 )
          {
            v46 = *((_DWORD *)v11 + 27);
            v44 = *((_DWORD *)v11 + 26);
            v49 = "InteractiveControlParser::ParseInputReport -> Invalid component configuration";
            v45 = 0;
            v43 = v23;
            LODWORD(v47) = ScaledUsageValue;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v17,
              (__int64)&unk_14037A889,
              v23,
              v16,
              (void **)&v49,
              (__int64)&v47,
              (__int64)&v43,
              (__int64)&v44,
              (__int64)&v45,
              (__int64)&v46);
          }
        }
        goto LABEL_14;
      case 5:
      case 7:
        if ( (_DWORD)v17 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_14;
    }
    if ( *((_DWORD *)v11 + 4) == 8 && (_DWORD)v17 )
    {
      *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
      v24 = InteractiveControlParser::GetScaledComponentValue(v11, v17);
      UsageValue = v24;
      if ( *((_DWORD *)a1 + 43) == 1 )
      {
        *((_DWORD *)a1 + 55) = v24;
      }
      else
      {
        v25 = *((_WORD *)v12 + 40);
        if ( v25 == 72 )
        {
          *((_DWORD *)a1 + 55) = v24;
          goto LABEL_14;
        }
        if ( v25 != 73 )
          goto LABEL_14;
      }
      *((_DWORD *)a1 + 56) = v24;
    }
LABEL_14:
    v4 = v38;
LABEL_15:
    PreparsedData = v41;
    v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    Report = v40;
    ReportLength = v37;
  }
  while ( v9 != v10 );
  if ( v4 )
  {
    if ( *((_QWORD *)a1 + 30) )
      goto LABEL_65;
    if ( *((_DWORD *)a1 + 62) != 100 )
      goto LABEL_23;
    if ( (unsigned int)dword_1403AAA68 > 3 )
    {
      v49 = "No mapped digitizer found for positional data. Attempting to rematch...";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1403AAA68,
        byte_14037A829,
        0LL,
        0LL,
        (void **)&v49);
    }
    DigitizerForDevice = InteractiveControlParser::FindDigitizerForDevice(a1);
    *((_DWORD *)a1 + 62) = 0;
    if ( DigitizerForDevice >= 0 )
    {
      v19 = v38;
    }
    else
    {
LABEL_23:
      *((_DWORD *)a4 + 5) &= ~2u;
      v19 = 0;
    }
    ++*((_DWORD *)a1 + 62);
    if ( v19 )
    {
LABEL_65:
      v35 = *((_QWORD *)a1 + 30);
      if ( v35 )
        RIMTransformCoordinatesFromDigitizer(v35, &v48, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)ScaledUsageValue;
}
