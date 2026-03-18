/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x140051410
 * Callers:
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  struct tagBWL *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 UserSessionState; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 *v16; // r15
  __int64 v17; // rbx
  __int16 *v18; // rdi
  __int16 v19; // di
  _QWORD *v20; // rdx
  __int64 i; // rax

  v1 = a1;
  v3 = (_QWORD *)Win32AllocPoolZInit(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_QWORD *)v1 + 4);
    v6 = (_QWORD *)((char *)v1 + 32);
    v7 = (_QWORD *)((char *)v1 + 32);
    if ( v5 != 1 )
    {
      do
      {
        PsGetCurrentThreadWin32Thread(v2);
        v2 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
        if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(v2 + 8) )
        {
          UserSessionState = W32GetUserSessionState(v2, v10);
          v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 19928) * (unsigned int)(unsigned __int16)v5
              + *(_QWORD *)(UserSessionState + 19920);
          LOWORD(v5) = WORD1(v5) & 0x7FFF;
          v16 = (__int64 *)HMPkheFromPhe(v14);
          if ( ((WORD1(v5) & 0x7FFF) == *(_WORD *)(v14 + 26)
             || (_WORD)v5 == 0x7FFF
             || !(_WORD)v5 && PsGetCurrentProcessWow64Process(v2, v15))
            && (*(_BYTE *)(v14 + 25) & 1) == 0
            && *(_BYTE *)(v14 + 24) == 1 )
          {
            v17 = *v16;
            if ( *v16 )
            {
              while ( v17 )
              {
                v18 = *(__int16 **)(*(_QWORD *)(v17 + 136) + 8LL);
                if ( (v18[5] & 1) != 0
                  || (v19 = *v18, v2 = *(_QWORD *)(W32GetUserSessionState(v2, v15) + 19904), v19 == *(_WORD *)(v2 + 898)) )
                {
                  *v4++ = *v7;
                  goto LABEL_13;
                }
                v17 = *(_QWORD *)(v17 + 120);
              }
            }
          }
        }
        *v6++ = *v7;
LABEL_13:
        v5 = v7[1];
        ++v7;
      }
      while ( v5 != 1 );
      v1 = a1;
    }
    v20 = v3;
    *v4 = 0LL;
    for ( i = *v3; *v20; ++v6 )
    {
      *v6 = i;
      i = *++v20;
    }
    Win32FreePool(v3);
  }
  return v1;
}
