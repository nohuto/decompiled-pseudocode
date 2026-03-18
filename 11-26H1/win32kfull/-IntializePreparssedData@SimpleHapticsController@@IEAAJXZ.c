/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x140300938
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x140300258 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x140300C20 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  void *v6; // rdx
  void *v7; // rax
  int v9; // [rsp+40h] [rbp-30h] BYREF
  const char *v10; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v11[2]; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+58h] [rbp-18h]

  *(_QWORD *)v11 = 0LL;
  v12 = 0;
  v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB01A8u, 0LL, 0, v11, 0xCu, 0LL);
  v5 = v2;
  if ( v2 >= 0 )
  {
    v7 = (void *)Win32AllocPoolNonPagedZInit(v11[0], 1147695957LL);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
    {
      v2 = SimpleHapticsController::SendDeviceIOControl(this, 0xB0193u, 0LL, 0, v7, v11[0], 0LL);
      v5 = v2;
      if ( v2 < 0 && (unsigned int)dword_1403AAAA0 > 2 )
      {
        v6 = &unk_14037A32E;
        goto LABEL_9;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( (unsigned int)dword_1403AAAA0 > 2 )
  {
    v6 = &unk_14037A2F7;
LABEL_9:
    v9 = v2;
    v10 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAAA0,
      (__int64)v6,
      v3,
      v4,
      (void **)&v10,
      (__int64)&v9);
  }
  return v5;
}
