/*
 * XREFs of NtUserGetKeyboardState @ 0x140060B00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x140060D68 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140060DC8 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x140060E40 (EtwTraceUIPIInputError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1)
{
  char v1; // bl
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rsi
  _BYTE *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int8 v9; // r8
  int i; // ecx
  __int64 v11; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[24]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h] BYREF
  int v21; // [rsp+68h] [rbp-30h]
  __int64 v23; // [rsp+B0h] [rbp+18h]
  __int64 v24; // [rsp+B8h] [rbp+20h]

  v1 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v19, 1LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    LODWORD(v3) = 0;
  if ( !(unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
      goto LABEL_5;
    v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18888);
    v23 = *(_QWORD *)(v15 + 448);
    v16 = *(_DWORD *)(v15 + 456);
    v18 = *(_QWORD *)(W32GetUserSessionState(v17, v15) + 18888);
    v20 = v23;
    v21 = v16;
    EtwTraceUIPIInputError(v3, 0, v18, (unsigned int)&v20, 3);
  }
  v1 = 0;
LABEL_5:
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[255] = v4[255];
  v5 = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  v24 = *(_QWORD *)(v6 + 472);
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  while ( (int)v8 < 256 )
  {
    *a1 = 0;
    if ( v1 || v9 < 0x20u )
      goto LABEL_16;
    for ( i = 0; (unsigned __int64)i < 0xE; ++i )
    {
      if ( byte_1402617C0[i] == (_BYTE)v7 )
        goto LABEL_16;
    }
    if ( (unsigned __int8)v7 == 165 )
    {
LABEL_16:
      v11 = v24 + ((unsigned __int64)(unsigned __int8)v7 >> 2);
      if ( ((unsigned __int8)(1 << (2 * (v7 & 3))) & *(_BYTE *)(v11 + 256)) != 0 )
        *a1 |= 0x80u;
      if ( ((unsigned __int8)(1 << (2 * (v7 & 3) + 1)) & *(_BYTE *)(v11 + 256)) != 0 )
        *a1 |= 1u;
    }
    else
    {
      switch ( (char)v7 )
      {
        case 91:
        case 92:
        case -96:
        case -95:
        case -94:
        case -93:
        case -92:
          goto LABEL_16;
        default:
          break;
      }
    }
    v8 = (unsigned int)++v7;
    ++a1;
    v9 = v7;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v8);
  return 1LL;
}
