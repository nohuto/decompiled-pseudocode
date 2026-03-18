/*
 * XREFs of DeleteStringPropertyAtoms @ 0x14009CB60
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x14009CE8C (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 *     UserDeleteAtomFromAtomTable @ 0x14009D060 (UserDeleteAtomFromAtomTable.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall DeleteStringPropertyAtoms(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _RTL_ATOM_TABLE *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  char v14; // [rsp+28h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+40h] [rbp-28h]
  char v17; // [rsp+48h] [rbp-20h]

  v4 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    v14 = 0;
    v16 = 0;
    v13 = W32GetUserSessionState(v3, v2) + 42360;
    v15 = 0LL;
    v17 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v17 = 1;
      DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>(&v13, v5);
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
    v8 = *(_DWORD *)(v7 + 4);
    if ( v8 )
    {
      v9 = v7 + 16;
      do
      {
        v10 = *(_WORD *)(v9 + 2);
        if ( (v10 & 2) != 0 && *(_WORD *)v9 && (v10 & 0x10) == 0 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
          if ( CurrentProcessWin32Process )
          {
            v6 = -*(_QWORD *)CurrentProcessWin32Process;
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          }
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 808) & 0x4000000) == 0 )
          {
            v12 = PsGetCurrentProcessWin32Process(v6);
            if ( v12 )
            {
              v6 = -*(_QWORD *)v12;
              v12 &= -(__int64)(*(_QWORD *)v12 != 0LL);
            }
            if ( *(_DWORD *)(v9 + 4) == *(_DWORD *)(v12 + 868) )
            {
              UserDeleteAtomFromAtomTable(v4);
              *(_WORD *)v9 = 0;
            }
          }
        }
        v9 += 16LL;
        --v8;
      }
      while ( v8 );
    }
    if ( v16 && v17 )
    {
      if ( (_QWORD)v15 )
        RIMUnlockExclusive(v15);
    }
  }
}
