/*
 * XREFs of ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1402F13B8
 * Callers:
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1402B3C80 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ @ 0x1402FCF6C (-GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ.c)
 *     ?GetWaveformCount@InteractiveControlDevice@@QEAAIXZ @ 0x1402FCF88 (-GetWaveformCount@InteractiveControlDevice@@QEAAIXZ.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceSupportedWaveforms(
        InteractiveControlManager *this,
        unsigned int a2,
        struct _WAVEFORM_INFO **a3,
        int *a4)
{
  int v4; // ebx
  int WaveformCount; // ebp
  struct _WAVEFORM_INFO *SupportedWaveforms; // r14
  __int64 i; // rcx
  __int64 v12; // rdx
  InteractiveControlDevice *v13; // rcx
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  const char *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  WaveformCount = 0;
  SupportedWaveforms = 0LL;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v16 = a2;
    v17 = "InteractiveControlManager::GetDeviceSupportedWaveforms entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_140378631,
      (__int64)a3,
      (__int64)a4,
      (void **)&v17,
      (__int64)&v16);
  }
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v12 = *((_QWORD *)this + i + 5);
    if ( v12 && a2 == *(_DWORD *)(v12 + 8) )
    {
      SupportedWaveforms = InteractiveControlDevice::GetSupportedWaveforms(*((InteractiveControlDevice **)this + i + 5));
      WaveformCount = InteractiveControlDevice::GetWaveformCount(v13);
      v4 = 1;
      break;
    }
  }
  v14 = v4 == 0 ? 0xC000009D : 0;
  if ( a3 )
    *a3 = SupportedWaveforms;
  if ( a4 )
    *a4 = WaveformCount;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v16 = v14;
    v17 = "InteractiveControlManager::GetDeviceSupportedWaveforms exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_14037866B,
      (__int64)a3,
      (__int64)a4,
      (void **)&v17,
      (__int64)&v16);
  }
  return v14;
}
