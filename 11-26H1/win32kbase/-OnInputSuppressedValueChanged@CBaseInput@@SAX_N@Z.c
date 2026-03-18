/*
 * XREFs of ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x140182B60
 * Callers:
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140006E1C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void __fastcall CBaseInput::OnInputSuppressedValueChanged(int a1, int a2, int a3)
{
  char v3; // si
  struct W32_PUSH_LOCK *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 i; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  v4 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1, a2, a3) + 3064);
  W32AcquirePushLockExclusiveEx(v4);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 3072); i; i = *(_QWORD *)(i + 56) )
  {
    if ( v3 )
    {
      *(_DWORD *)(i + 2296) = 0;
    }
    else if ( *(_DWORD *)(i + 2296)
           && (unsigned int)dword_1402A9F58 > 5
           && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
    {
      v12 = v10;
      v13 = (unsigned __int16 *)(i + 192);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_14028ABF9,
        v10,
        v11,
        &v13,
        (__int64)&v12);
    }
  }
  W32ReleasePushLockExclusiveEx(v4);
}
