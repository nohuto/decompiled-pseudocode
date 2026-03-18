/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402F17BC
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1402B3B80 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GetDPITransformationMonitor @ 0x14008BDAC (GetDPITransformationMonitor.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1401DCD48 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x14025F274 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1402FCF38 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  unsigned __int16 v5; // bx
  int Device; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v17; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-2Ch] BYREF
  struct InteractiveControlDevice *v19; // [rsp+48h] [rbp-28h] BYREF
  struct InteractiveControlInput *v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 DPITransformationMonitor; // [rsp+58h] [rbp-18h] BYREF
  void *v22[2]; // [rsp+60h] [rbp-10h] BYREF

  v5 = a3;
  v19 = 0LL;
  v20 = 0LL;
  DPITransformationMonitor = 0LL;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v18 = a2;
    v22[0] = "InteractiveControlManager::GetReportInfo entry";
    v17 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      byte_140378E6A,
      a3,
      (__int64)a4,
      v22,
      (__int64)&v18,
      (__int64)&v17);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v19, 0LL);
  v11 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v19, v5, &v20) )
    {
      v12 = v20;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v20 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v14 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), 1);
      if ( v14 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        if ( CurrentProcessWin32Process == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v14);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v11 = -1073741727;
        }
      }
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else if ( (unsigned int)dword_1403AAA68 > 2 )
  {
    v18 = Device;
    v22[0] = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_140378EAE,
      v9,
      v10,
      v22,
      (__int64)&v18);
  }
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v18 = v11;
    v22[0] = "InteractiveControlManager::GetReportInfo exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_140378D90,
      v9,
      v10,
      v22,
      (__int64)&v18);
  }
  return v11;
}
