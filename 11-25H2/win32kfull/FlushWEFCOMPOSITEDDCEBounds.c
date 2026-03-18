/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x140152270
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x140152568 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140152674 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  bool v8; // al
  struct tagWND *v9; // rcx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  result = GreGetBounds(v2, &v10, 4LL);
  if ( (_DWORD)result )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    Prop = GetProp(*(_QWORD *)(a1 + 96), *(unsigned __int16 *)(UserSessionState + 41358), 1u);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 27LL) & 0x10) != 0 )
    {
      return UnionRect(Prop + 16, Prop + 16, &v10);
    }
    else
    {
      v8 = IS_USERCRIT_OWNED_EXCLUSIVE();
      v9 = *(struct tagWND **)(a1 + 96);
      if ( v8 )
        return InvalidateWEFCOMPOSITEDWindow(v9, &v10);
      else
        return PostCOMPOSITEDInvalidateAPC(v9, &v10);
    }
  }
  return result;
}
