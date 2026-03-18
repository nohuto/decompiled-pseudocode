/*
 * XREFs of _GetKeyboardType @ 0x140158DD4
 * Callers:
 *     NtUserGetKeyboardType @ 0x140158DA0 (NtUserGetKeyboardType.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyboardType(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 result; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  unsigned __int16 *v18; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // eax
  unsigned __int16 v29; // cx

  v3 = 0;
  if ( !a1 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 14216) )
      return *(unsigned __int8 *)(W32GetUserSessionState(v5, v4, v6) + 12824);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 14216) + 56LL) + 32LL);
    result = *(unsigned int *)(v5 + 96);
    if ( !(_DWORD)result || (_DWORD)result == 81 )
      return *(unsigned __int8 *)(W32GetUserSessionState(v5, v4, v6) + 12824);
    return result;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    v18 = *(unsigned __int16 **)(W32GetUserSessionState(0, a2, a3) + 14064);
    if ( *(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 14216) )
    {
      v26 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 14216);
      if ( *(_QWORD *)(*(_QWORD *)(v26 + 56) + 48LL) )
      {
        v26 = *(_QWORD *)(W32GetUserSessionState(v26, v25, v27) + 14216);
        v18 = *(unsigned __int16 **)(*(_QWORD *)(v26 + 56) + 48LL);
      }
      v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25, v27) + 14216) + 56LL) + 32LL)
                      + 100LL);
    }
    else
    {
      LOBYTE(v28) = *(_BYTE *)(W32GetUserSessionState(v23, v22, v24) + 12825);
    }
    if ( v18 )
    {
      v29 = v18[1];
      if ( (v29 & 0x10) != 0 )
        return 0LL;
      if ( (v29 & 0x20) != 0 )
        return 2LL;
      v3 = *v18 << 8;
    }
    return v3 | v28 & 0xF;
  }
  v9 = v8 - 1;
  if ( !v9 )
    return *(unsigned __int16 *)(W32GetUserSessionState(0, a2, a3) + 12828);
  v10 = v9 - 2147483644;
  if ( v10 )
  {
    if ( v10 == 1 && *(_QWORD *)(W32GetUserSessionState(1, a2, a3) + 14216) )
      return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 14216) + 48LL)
                                         + 32LL)
                             + 100LL);
    return 0LL;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 14216) )
    return 0LL;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 14216) + 48LL) + 32LL)
                  + 96LL);
  if ( !v14 )
    return 0LL;
  if ( v14 != 81 )
    return v14;
  return v3;
}
