/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1402F15D0
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x1402B7510 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@55@Z @ 0x140004158 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U3@U3@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1401DCD48 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x14025F274 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1402FCF38 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x140301D20 (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z.c)
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
  int Device; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  void *v15; // rdx
  unsigned __int16 v17; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int16 v18; // [rsp+52h] [rbp-2Eh] BYREF
  __int16 v19; // [rsp+54h] [rbp-2Ch] BYREF
  int v20; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+5Ch] [rbp-24h] BYREF
  struct InteractiveControlDevice *v22; // [rsp+60h] [rbp-20h] BYREF
  struct InteractiveControlInput *v23; // [rsp+68h] [rbp-18h] BYREF
  void *v24[2]; // [rsp+70h] [rbp-10h] BYREF

  v7 = a4;
  v8 = a3;
  v22 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v21 = a2;
    v24[0] = "InteractiveControlManager::GetReportExtendedUsage entry";
    v17 = a6;
    v18 = a5;
    v19 = a4;
    v20 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      (__int64)this,
      (__int64)&unk_140378DC9,
      a3,
      a4,
      v24,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v22, 0LL);
  v14 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_1403AAA68 <= 2 )
      goto LABEL_12;
    v15 = &unk_140378C89;
    goto LABEL_11;
  }
  if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v22, v8, &v23) )
  {
    v14 = -1073741811;
    goto LABEL_12;
  }
  Device = InteractiveControlParser::ExtractCustomUsage(
             *(PHIDP_PREPARSED_DATA *)(*((_QWORD *)v23 + 5) + 256LL),
             *((PCHAR *)v23 + 10),
             *((_DWORD *)v23 + 22),
             v7,
             a5,
             a6,
             a7);
  v14 = Device;
  if ( Device < 0 && (unsigned int)dword_1403AAA68 > 2 )
  {
    v15 = &unk_140378CC1;
LABEL_11:
    v21 = Device;
    v24[0] = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)v15,
      v12,
      v13,
      v24,
      (__int64)&v21);
  }
LABEL_12:
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v21 = *a7;
    v20 = v14;
    v24[0] = "InteractiveControlManager::GetReportExtendedUsage exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      byte_140378CF9,
      v12,
      v13,
      v24,
      (__int64)&v20,
      (__int64)&v21);
  }
  return v14;
}
