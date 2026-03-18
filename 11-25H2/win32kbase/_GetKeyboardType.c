/*
 * XREFs of _GetKeyboardType @ 0x140125EA8
 * Callers:
 *     NtUserGetKeyboardType @ 0x140125E70 (NtUserGetKeyboardType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyboardType(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 result; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax

  v2 = 0;
  if ( (_DWORD)a1 )
  {
    v3 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = (unsigned int)(v3 - 1);
      if ( !(_DWORD)v4 )
        return *(unsigned __int16 *)(W32GetUserSessionState(v4, a2) + 12828);
      v5 = (unsigned int)(v4 - 2147483644);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 == 1 && *(_QWORD *)(W32GetUserSessionState(v5, a2) + 14224) )
          return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 14224) + 48LL)
                                             + 32LL)
                                 + 100LL);
      }
      else if ( *(_QWORD *)(W32GetUserSessionState(v5, a2) + 14224) )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224) + 48LL) + 32LL)
                       + 96LL);
        if ( v8 )
        {
          if ( v8 != 81 )
            return v8;
          return v2;
        }
      }
      return 0LL;
    }
    v15 = *(unsigned __int16 **)(W32GetUserSessionState(v3, a2) + 14072);
    if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 14224) )
    {
      v21 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 14224);
      if ( *(_QWORD *)(*(_QWORD *)(v21 + 56) + 48LL) )
      {
        v21 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 14224);
        v15 = *(unsigned __int16 **)(*(_QWORD *)(v21 + 56) + 48LL);
      }
      v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v21, v20) + 14224) + 56LL) + 32LL)
                      + 100LL);
    }
    else
    {
      LOBYTE(v22) = *(_BYTE *)(W32GetUserSessionState(v19, v18) + 12825);
    }
    if ( v15 )
    {
      v10 = v15[1];
      if ( (v10 & 0x10) != 0 )
        return 0LL;
      if ( (v10 & 0x20) != 0 )
        return 2LL;
      v2 = *v15 << 8;
    }
    return v2 | v22 & 0xF;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 14224) )
    return *(unsigned __int8 *)(W32GetUserSessionState(v14, v13) + 12824);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 14224) + 56LL) + 32LL);
  result = *(unsigned int *)(v14 + 96);
  if ( !(_DWORD)result || (_DWORD)result == 81 )
    return *(unsigned __int8 *)(W32GetUserSessionState(v14, v13) + 12824);
  return result;
}
