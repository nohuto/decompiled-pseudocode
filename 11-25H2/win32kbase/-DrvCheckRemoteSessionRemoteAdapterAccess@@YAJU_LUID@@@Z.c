/*
 * XREFs of ?DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x14004CF48
 * Callers:
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x14004CF30 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x14004D190 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall DrvCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1)
{
  DWORD LowPart; // ebx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int16 SuiteMask; // ax
  LONG HighPart; // [rsp+34h] [rbp+Ch]
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v2 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD))W32GetSessionState)(a1) + 88);
  if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v4, v3, v5, v6) )
    return 0LL;
  if ( !*(_QWORD *)(v2 + 2936) )
    return 0LL;
  v8 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess() == v8 )
    return 0LL;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
    return 0LL;
  ProductType = 0;
  v10 = *(_QWORD *)(W32GetSessionState(v9) + 88);
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10 )
    return 0LL;
  if ( LowPart == *(_DWORD *)(v10 + 2924) )
    return *(_DWORD *)(v10 + 2928) != HighPart ? 0xC000000D : 0;
  return 3221225485LL;
}
