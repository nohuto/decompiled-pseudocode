/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402E032C
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x140297E30 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140005910 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     GetDPITransformationMonitor @ 0x140044BBC (GetDPITransformationMonitor.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x140225AB4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1402ED5D0 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  unsigned __int16 v5; // bx
  int Device; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct InteractiveControlDevice *v17; // [rsp+48h] [rbp-28h] BYREF
  struct InteractiveControlInput *v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 DPITransformationMonitor; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-10h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v5 = a3;
  DPITransformationMonitor = 0LL;
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v20[0] = "InteractiveControlManager::GetReportInfo entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B38C,
      a3,
      (__int64)a4,
      v20);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v17, 0LL);
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v17, v5, &v18) )
    {
      v12 = v18;
      LOBYTE(v11) = 1;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v18 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v14 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), v11);
      if ( v14 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v9 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v9 == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 464LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v14);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          Device = -1073741727;
        }
      }
    }
    else
    {
      Device = -1073741811;
    }
  }
  else if ( (unsigned int)dword_14039BBF8 > 2 )
  {
    v20[0] = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B06D,
      v9,
      v10,
      v20);
  }
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v20[0] = "InteractiveControlManager::GetReportInfo exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B034,
      v9,
      v10,
      v20);
  }
  return (unsigned int)Device;
}
