/*
 * XREFs of ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401D2B2C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x1401D2ADC (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     EditionIsHotKey @ 0x14028B900 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x14019C310 (GetDesktopView.c)
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline @ 0x14027714C (Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x14028BA1C (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 */

struct tagHOTKEY *__fastcall IsHotKey(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // r15d
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  const struct tagUIPI_INFO *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  char v28; // bp
  bool v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  int v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+60h] [rbp-38h] BYREF
  int v37; // [rsp+68h] [rbp-30h]
  __int64 v38; // [rsp+B0h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = v2 & 0x7F;
  for ( i = *(_BYTE **)(UserSessionState + 8 * v7 + 12952); ; i = (_BYTE *)*((_QWORD *)i + 6) )
  {
    if ( !i )
      return (struct tagHOTKEY *)i;
    if ( *((unsigned __int16 *)i + 16) == v3
      && *((_DWORD *)i + 9) == v2
      && !_bittest16((const signed __int16 *)i + 17, 8u) )
    {
      break;
    }
  }
  Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v6, v5, v7);
  v11 = *(_QWORD *)i;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)i + 528LL), 0, 0) & 0xC) != 0 )
    return (struct tagHOTKEY *)i;
  v12 = W32GetUserSessionState(v11, v10);
  if ( GetDesktopView(*(_QWORD *)(*(_QWORD *)i + 464LL), *(_QWORD *)(v12 + 19144)) )
  {
    if ( (i[32] & 0xB) == 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18888) )
      {
        if ( (unsigned int)(v2 - 173) > 6 && v2 != 7 )
        {
          v17 = W32GetUserSessionState(v16, v15);
          if ( !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)i + 464LL) + 864LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v17 + 18888) + 448LL),
                  v18) )
          {
            v21 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18888);
            v22 = *(_DWORD *)(v21 + 456);
            v38 = *(_QWORD *)(v21 + 448);
            v24 = W32GetUserSessionState(v21, v23);
            v25 = *(_QWORD *)i;
            v36 = v38;
            v26 = *(_QWORD *)(v24 + 18888);
            v37 = v22;
            EtwTraceUIPIInputError(v25, 0LL, v26, &v36, 7);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
              || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v28 = 0;
            }
            v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
              v32 = W32GetUserSessionState(v31, v30);
              LOBYTE(v33) = v29;
              LOBYTE(v34) = v28;
              WPP_RECORDER_AND_TRACE_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v34,
                v33,
                *(_QWORD *)(v32 + 69160),
                v35);
            }
            return 0LL;
          }
        }
      }
    }
    return (struct tagHOTKEY *)i;
  }
  return 0LL;
}
