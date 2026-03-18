/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1402E0148
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x14029AAE0 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140005910 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@55@Z @ 0x140005F44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U3@U3@@-$_tlgWrit.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x140225AB4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1402ED5D0 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1402F25A8 (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int *a7)
{
  unsigned __int16 v7; // si
  unsigned __int16 v8; // di
  int Device; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  struct InteractiveControlDevice *v15; // [rsp+60h] [rbp-20h] BYREF
  struct InteractiveControlInput *v16; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-10h] BYREF

  v15 = 0LL;
  v7 = a4;
  v16 = 0LL;
  v8 = a3;
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v17[0] = "InteractiveControlManager::GetReportExtendedUsage entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (__int64)this,
      (__int64)&unk_14036B324,
      a3,
      a4,
      v17);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v15, 0LL);
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_14039BBF8 <= 2 )
      goto LABEL_11;
LABEL_10:
    v17[0] = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B06D,
      v12,
      v13,
      v17);
    goto LABEL_11;
  }
  if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v15, v8, &v16) )
  {
    Device = -1073741811;
    goto LABEL_11;
  }
  Device = InteractiveControlParser::ExtractCustomUsage(
             *(PHIDP_PREPARSED_DATA *)(*((_QWORD *)v16 + 5) + 256LL),
             *((PCHAR *)v16 + 10),
             *((_DWORD *)v16 + 22),
             v7,
             a5,
             a6,
             a7);
  if ( Device < 0 && (unsigned int)dword_14039BBF8 > 2 )
    goto LABEL_10;
LABEL_11:
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v17[0] = "InteractiveControlManager::GetReportExtendedUsage exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B28D,
      v12,
      v13,
      v17);
  }
  return (unsigned int)Device;
}
