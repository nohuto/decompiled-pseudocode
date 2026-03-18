/*
 * XREFs of ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x14021E45C
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x140272790 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x14021E508 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnInputReport(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  __int64 i; // r10
  InteractiveControlDevice *v6; // rcx
  int Input; // ebx
  const char *v9; // [rsp+38h] [rbp-10h] BYREF

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 5 )
    {
      Input = -1073741275;
      if ( (unsigned int)dword_14039BBF8 <= 2 )
        return (unsigned int)Input;
      goto LABEL_11;
    }
    v6 = (InteractiveControlDevice *)*((_QWORD *)this + i + 5);
    if ( v6 )
    {
      if ( *(struct RawInputManagerDeviceObject **)v6 == a2 || !*((_DWORD *)v6 + 2) )
        break;
    }
  }
  Input = InteractiveControlDevice::QueueAndGenerateInput(v6, a3, a4);
  if ( Input < 0 && (unsigned int)dword_14039BBF8 > 2 )
  {
LABEL_11:
    v9 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B06D,
      (__int64)a3,
      a4,
      &v9);
  }
  return (unsigned int)Input;
}
