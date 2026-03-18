/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1402F11E4
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1402F0B04 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1402F14C4 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rax
  const char *v7; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v8[2]; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+58h] [rbp-18h]

  *(_QWORD *)v8 = 0LL;
  v9 = 0;
  v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB01A8u, 0LL, 0, v8, 0xCu, 0LL);
  if ( v2 >= 0 )
  {
    v5 = (void *)Win32AllocPoolNonPagedZInit(v8[0], 1147695957LL);
    *((_QWORD *)this + 2) = v5;
    if ( v5 )
    {
      v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB0193u, 0LL, 0, v5, v8[0], 0LL);
      if ( v2 < 0 && (unsigned int)dword_14039BC30 > 2 )
        goto LABEL_8;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( (unsigned int)dword_14039BC30 > 2 )
  {
LABEL_8:
    v7 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BC30,
      (__int64)&unk_14036BA7F,
      v3,
      v4,
      &v7);
  }
  return (unsigned int)v2;
}
