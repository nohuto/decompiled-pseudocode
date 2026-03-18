/*
 * XREFs of ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1401930EC
 * Callers:
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1401BFD0C (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x140225120 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x140225234 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14008BEF4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1401B4CD8 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1401B86CC (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall DelayZoneTelemetry::UploadTelemetryData(DelayZoneTelemetry *this, char a2)
{
  unsigned __int64 v2; // rsi
  char *v3; // rdi
  char v5; // r12
  char *v6; // r10
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = (char *)this + 16;
  v14 = 0LL;
  v5 = 0;
  v6 = (char *)this + 16;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !a2 && (unsigned int)(v7 - *((_DWORD *)this + 3)) < 0x2710 )
    return;
  v8 = *((_DWORD *)this + 2);
  v9 = 0;
  if ( v8 > 0xD5 )
  {
    *((_DWORD *)this + 2) = 213;
    goto LABEL_6;
  }
  *((_DWORD *)this + 2) = v8;
  if ( v8 )
  {
    do
    {
LABEL_6:
      v10 = v9 % 0xD5;
      if ( !*v3 )
      {
        RtlStringCchPrintfA(v6, 2048 - v2, "%lu,%lu_", *(_DWORD *)this, *((_DWORD *)this + 1));
        RtlStringCchLengthA(v3, v11, &v14);
        v2 = v14;
        v6 = (char *)this + v14 + 16;
      }
      v12 = 6 * v10;
      RtlStringCchPrintfA(
        v6,
        2048 - v2,
        "%d,%ld,%ld,%d,%lu,0x%x,%d,%d,%d,%ld,%ld,%lu;",
        *((_DWORD *)this + 12 * v10 + 516),
        *((_DWORD *)this + 2 * v12 + 517),
        *((_DWORD *)this + 2 * v12 + 518),
        *((_DWORD *)this + 2 * v12 + 519),
        *((_DWORD *)this + 2 * v12 + 520),
        *((_DWORD *)this + 2 * v12 + 521),
        *((_DWORD *)this + 2 * v12 + 522),
        *((_DWORD *)this + 2 * v12 + 523),
        *((_DWORD *)this + 2 * v12 + 524),
        *((_DWORD *)this + 2 * v12 + 525),
        *((_DWORD *)this + 2 * v12 + 526),
        *((_DWORD *)this + 2 * v12 + 527));
      RtlStringCchLengthA(v3, v13, &v14);
      v2 = v14;
      if ( v14 + 96 >= 0x800 )
      {
        if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
        {
          v14 = (unsigned __int64)v3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1402A9F58,
            byte_14028CBDD,
            0LL,
            0LL,
            (void **)&v14);
        }
        v2 = 0LL;
        v14 = 0LL;
        v5 = 1;
        memset((char *)this + 17, 0, 0x7FFuLL);
        *v3 = 0;
      }
      ++v9;
      v6 = (char *)this + v2 + 16;
    }
    while ( v9 < *((_DWORD *)this + 2) );
  }
  if ( v2 )
  {
    if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
    {
      v14 = (unsigned __int64)v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1402A9F58,
        byte_14028CC11,
        0LL,
        0LL,
        (void **)&v14);
    }
  }
  else if ( !v5 )
  {
    return;
  }
  *((_DWORD *)this + 2) = 0;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset(v3, 0, 0x800uLL);
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 3) = v7;
}
