/*
 * XREFs of ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x140224D4C
 * Callers:
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x140225960 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140005E74 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1402EDCF4 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::AcquireDeviceBackgroundAccess(
        InteractiveControlManager *this,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagWND *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // edi
  InteractiveControlDevice **v10; // rdi
  __int64 v11; // r15
  InteractiveControlDevice *v12; // rcx
  _QWORD v14[2]; // [rsp+60h] [rbp-10h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v14[0] = "InteractiveControlManager::AcquireDeviceBackgroundAccess entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)this,
      (__int64)&unk_14036B22D,
      a3,
      a4,
      v14);
  }
  while ( v7 <= v6 )
    v5 |= 1 << (v7++ + 24);
  v10 = (InteractiveControlDevice **)((char *)this + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *((_DWORD *)v12 + 2)) )
      InteractiveControlDevice::SetBackgroundAccessor(v12, a5, v5);
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 )
  {
    if ( a5 == *((struct tagWND **)this + 2) )
    {
      *((_DWORD *)this + 6) |= v5;
    }
    else
    {
      *((_DWORD *)this + 6) = v5;
      v14[0] = (char *)this + 16;
      v14[1] = a5;
      HMAssignmentLock(v14, 0LL);
    }
  }
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v14[0] = "InteractiveControlManager::AcquireDeviceBackgroundAccess exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B034,
      a3,
      a4,
      v14);
  }
  return 0LL;
}
