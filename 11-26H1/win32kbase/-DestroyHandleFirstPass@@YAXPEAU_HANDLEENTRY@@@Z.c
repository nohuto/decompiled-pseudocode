/*
 * XREFs of ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401D6B70
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 */

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // r8d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int i; // r8d
  __int64 v11; // rcx

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v6 = *(_QWORD *)(UserSessionState + 19864);
  v7 = (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19920)) >> 5);
  v8 = 5 * v7;
  if ( *((_BYTE *)a1 + 24) == 22 )
    HMUnlockObject(*(_QWORD *)(*(_QWORD *)(v6 + 40 * v7) + 16LL), v7, v5);
  v9 = *(_QWORD *)(v6 + 8 * v8);
  if ( *(_DWORD *)(v9 + 8) )
  {
    if ( *((_BYTE *)a1 + 24) == 13 )
    {
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 56) = 0LL;
      if ( *(_QWORD *)(v9 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v9 + 88); *(_QWORD *)(*(_QWORD *)(v9 + 96) + 8 * v11) = 0LL )
          v11 = i++;
      }
      *(_DWORD *)(v9 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject(*(struct _HEAD **)(v6 + 8 * v8), v9, v5);
  }
}
