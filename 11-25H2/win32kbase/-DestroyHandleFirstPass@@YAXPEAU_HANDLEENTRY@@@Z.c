/*
 * XREFs of ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B3110
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 */

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned int i; // r8d
  __int64 v9; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 19832);
  v5 = (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19888)) >> 5);
  v6 = 5 * v5;
  if ( *((_BYTE *)a1 + 24) == 22 )
    HMUnlockObject(*(int **)(*(_QWORD *)(v4 + 40 * v5) + 16LL), v5);
  v7 = *(_QWORD *)(v4 + 8 * v6);
  if ( *(_DWORD *)(v7 + 8) )
  {
    if ( *((_BYTE *)a1 + 24) == 13 )
    {
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_QWORD *)(v7 + 56) = 0LL;
      if ( *(_QWORD *)(v7 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v7 + 88); *(_QWORD *)(*(_QWORD *)(v7 + 96) + 8 * v9) = 0LL )
          v9 = i++;
      }
      *(_DWORD *)(v7 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject(*(struct _HEAD **)(v4 + 8 * v6), v7);
  }
}
