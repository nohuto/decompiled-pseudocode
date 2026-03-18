/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1402F1000
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402FD944 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1402FD650 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearBackgroundAccessors(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  InteractiveControlDevice **v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF
  const char *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v11 = 0;
    v12 = "InteractiveControlManager::ClearBackgroundAccessors entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_140378B0A,
      a3,
      a4,
      (void **)&v12,
      (__int64)&v11);
  }
  v5 = (InteractiveControlDevice **)((char *)this + 40);
  v6 = 5LL;
  do
  {
    if ( *v5 )
      InteractiveControlDevice::SetBackgroundAccessor(*v5, 0LL, 0);
    ++v5;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)this + 6) = 0;
  v10[0] = (char *)this + 16;
  v10[1] = 0LL;
  HMAssignmentLock(v10, 0LL);
  if ( (unsigned int)dword_1403AAA68 > 4 )
  {
    v11 = 0;
    v12 = "InteractiveControlManager::ClearBackgroundAccessors exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAA68,
      (__int64)&unk_140378B44,
      v7,
      v8,
      (void **)&v12,
      (__int64)&v11);
  }
  return 0LL;
}
