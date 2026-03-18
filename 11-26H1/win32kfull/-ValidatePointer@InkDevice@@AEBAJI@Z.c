/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402FF280
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402FEB00 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1400918D4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x14028B868 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2)
{
  int PointerInfoByPointerId; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 UserSessionState; // rbx
  struct tagPOINTER_INFO *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  PointerInfoByPointerId = GetPointerInfoByPointerId(a2, &v11);
  if ( PointerInfoByPointerId >= 0 )
  {
    v4 = *(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)v11 + 2), 19) + 456);
    if ( *(_DWORD *)(v4 + 24) != 5 )
      return (unsigned int)-1073741811;
    v5 = *(_QWORD *)(v4 + 16);
    v6 = *(_DWORD *)(v5 + 1960);
    if ( v6 != 0x80000000 && v6 != 11 && v6 != 13 )
      return (unsigned int)-1073741811;
    v7 = *(_QWORD *)(v5 + 440);
    if ( *(unsigned __int16 *)(v7 + 112) != *((_DWORD *)this + 34)
      || *(unsigned __int16 *)(v7 + 110) != *((_DWORD *)this + 33) )
    {
      return (unsigned int)-1073741823;
    }
    v8 = *(_QWORD **)(v4 + 400);
    if ( v8 && *v8 )
    {
      UserSessionState = W32GetUserSessionState(v7, v4);
      if ( !*(_BYTE *)(UserSessionState + 19384) )
      {
        if ( (unsigned int)dword_1403AAAD8 > 5 && tlgKeywordOn((__int64)&dword_1403AAAD8, 0x400000000000LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)&dword_1403AAAD8,
            (__int64)&unk_140379A64);
        *(_BYTE *)(UserSessionState + 19384) = 1;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)PointerInfoByPointerId;
}
