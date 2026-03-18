/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1402DFD70
 * Callers:
 *     NtUserGetInteractiveControlDeviceInfo @ 0x140297D20 (NtUserGetInteractiveControlDeviceInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x140225AB4 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetWaveformCount@InteractiveControlDevice@@QEAAIXZ @ 0x1402ED61C (-GetWaveformCount@InteractiveControlDevice@@QEAAIXZ.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3,
        __int64 a4)
{
  int Device; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  struct InteractiveControlDevice *v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  unsigned int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  struct InteractiveControlDevice *v19; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+78h] [rbp+28h] BYREF
  int v22; // [rsp+7Ch] [rbp+2Ch]

  v19 = 0LL;
  v18 = 0LL;
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v21 = a2;
    v20[0] = "InteractiveControlManager::GetDeviceInfo entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B0A5,
      (__int64)a3,
      a4,
      v20);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v19, 0LL);
  v10 = Device;
  if ( Device >= 0 )
  {
    v11 = v19;
    v12 = 1;
    *(_DWORD *)a3 = *((_DWORD *)v19 + 2);
    *((_DWORD *)a3 + 5) = *((_DWORD *)v11 + 40);
    *((_DWORD *)a3 + 6) = *((_DWORD *)v11 + 38);
    v13 = *((_QWORD *)v11 + 48);
    if ( v13 )
      v12 = *(_DWORD *)(v13 + 76);
    *((_DWORD *)a3 + 8) = v12;
    *((_DWORD *)a3 + 9) = InteractiveControlDevice::GetWaveformCount(v11);
    v15 = *(_QWORD *)(v14 + 240);
    if ( v15 )
    {
      v21 = *(_DWORD *)(v14 + 220) - *(_DWORD *)(v14 + 212);
      v22 = *(_DWORD *)(v14 + 224) - *(_DWORD *)(v14 + 216);
      RIMTransformDimensionFromDigitizer(v15, 0LL, &v21, &v18);
      v16 = v18;
      *((_DWORD *)a3 + 1) = 0;
      *((_DWORD *)a3 + 2) = 0;
      *(_QWORD *)((char *)a3 + 12) = __PAIR64__(HIDWORD(v18), v16);
    }
    else
    {
      *(_OWORD *)((char *)a3 + 4) = *(_OWORD *)(v14 + 212);
    }
  }
  else if ( (unsigned int)dword_14039BBF8 > 2 )
  {
    v21 = Device;
    v20[0] = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B06D,
      v8,
      v9,
      v20);
  }
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v21 = v10;
    v20[0] = "InteractiveControlManager::GetDeviceInfo exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B034,
      v8,
      v9,
      v20);
  }
  return v10;
}
