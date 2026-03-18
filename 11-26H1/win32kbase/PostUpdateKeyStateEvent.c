/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1400419B0
 * Callers:
 *     UpdateAsyncKeyState @ 0x14008A330 (UpdateAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x14021E04C (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetWakeBit @ 0x1400B9C7C (SetWakeBit.c)
 *     CoalesceUpdateKeyStateEventMsg @ 0x14016B460 (CoalesceUpdateKeyStateEventMsg.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x14019CD78 (ApiSetEditionPostUpdateKeyStateEvent.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _OWORD *v10; // rsi
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  _BYTE *v16; // r14
  int v17; // r10d
  _BYTE *v18; // rdi
  int v19; // r11d
  char v20; // r15
  int v21; // r12d
  int v22; // r8d
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _OWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax

  result = *(unsigned int *)(a1 + 436);
  if ( (result & 1) != 0 )
  {
    result = W32GetUserSessionState(a1, a2, a3, a4);
    v9 = *(_QWORD *)(result + 18696);
    if ( *(_QWORD *)(a1 + 104) != v9 )
    {
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v10 = (_OWORD *)(a1 + 248);
        UserSessionState = W32GetUserSessionState(v6, v9, v7, v8);
        v16 = (_BYTE *)(a1 + 248);
        v17 = 0;
        v18 = (_BYTE *)(UserSessionState + 14328);
        do
        {
          if ( *v16 )
          {
            v19 = 0;
            v20 = 8 * v17;
            do
            {
              v15 = (unsigned __int8)(v19 + v20);
              v13 = ((_BYTE)v19 + v20) & 7;
              v12 = (unsigned int)(1 << v13);
              if ( ((unsigned __int8)v12 & *((_BYTE *)v10 + (v15 >> 3))) != 0 )
              {
                v21 = v15 & 3;
                v15 >>= 2;
                v22 = *(unsigned __int8 *)(v15 + a1 + 280);
                v23 = 2 * v21;
                if ( ((unsigned __int8)(1 << (2 * v21)) & v18[v15]) != 0 )
                  LODWORD(v14) = v22 | (1 << v23);
                else
                  LODWORD(v14) = v22 & ~(1 << v23);
                v13 = (unsigned int)(2 * v21 + 1);
                v14 = (unsigned __int8)v14;
                *(_BYTE *)(v15 + a1 + 280) = v14;
                v12 = (unsigned int)(1 << (2 * v21 + 1));
                if ( ((unsigned __int8)v12 & v18[v15]) != 0 )
                  LODWORD(v14) = (unsigned __int8)v14 | (1 << (2 * v21 + 1));
                else
                  LODWORD(v14) = (unsigned __int8)v14 & ~(1 << (2 * v21 + 1));
                *(_BYTE *)(v15 + a1 + 280) = v14;
              }
              ++v19;
            }
            while ( v19 < 8 );
          }
          ++v17;
          ++v16;
        }
        while ( v17 < 32 );
        v24 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14, v15) + 19904);
        ++*(_DWORD *)(v24 + 6984);
        result = W32GetUserSessionState(v25, v24, v26, v27) + 14328;
        if ( v18 != (_BYTE *)result )
          result = GreDeleteFastMutex(v18);
        goto LABEL_17;
      }
      v28 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v28 + 96) == 4 )
      {
        v10 = (_OWORD *)(a1 + 248);
        v35 = W32GetUserSessionState(v6, v9, v7, v8);
        CoalesceUpdateKeyStateEventMsg(v28, v35 + 14328, a1 + 248);
        result = SetWakeBit(*(_QWORD *)(a1 + 104), 8256LL);
LABEL_17:
        *v10 = 0LL;
        v10[1] = 0LL;
        *(_DWORD *)(a1 + 436) &= ~1u;
        return result;
      }
      result = (__int64)Win32AllocPoolZInitImpl(0x100uLL, 0x60uLL, 0x736B7355u);
      v33 = (_OWORD *)result;
      if ( result )
      {
        v34 = W32GetUserSessionState(v30, v29, v31, v32);
        v10 = (_OWORD *)(a1 + 248);
        *v33 = *(_OWORD *)(v34 + 14328);
        v33[1] = *(_OWORD *)(v34 + 14344);
        v33[2] = *(_OWORD *)(v34 + 14360);
        v33[3] = *(_OWORD *)(v34 + 14376);
        v33[4] = *(_OWORD *)(a1 + 248);
        v33[5] = *(_OWORD *)(a1 + 264);
        result = ApiSetEditionPostUpdateKeyStateEvent(a1, v33);
        if ( !(_DWORD)result )
          return GreDeleteFastMutex(v33);
        goto LABEL_17;
      }
    }
  }
  return result;
}
