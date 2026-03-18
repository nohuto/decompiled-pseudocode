/*
 * XREFs of ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF43C
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF310 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1400623C0 (EngMulDiv.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x1400E6D70 (-GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E7680 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall CCursorClip::ApplyCursorDisplayChangeOptions(__int64 a1, char a2)
{
  char v3; // di
  unsigned int *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  _QWORD **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *i; // rcx
  unsigned int *v14; // rsi
  unsigned int v15; // eax
  INT v16; // edi
  INT v17; // ebx
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  INT v23; // edi
  INT v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // ebx
  _QWORD v38[2]; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v39; // [rsp+30h] [rbp-38h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = 0;
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v38);
    v4 = 0LL;
    UserSessionState = W32GetUserSessionState(v6, v5);
    CInputConfig::GetMouseInputSpace(*(CInputConfig **)(UserSessionState + 18632), (struct CLockedInputSpace *)v38);
    v8 = (_QWORD **)(v38[0] + 1456LL);
    v11 = W32GetUserSessionState(v10, v9);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v39, (struct CEResourceLock *)(v11 + 18640));
    for ( i = *v8; ; i = (_QWORD *)*i )
    {
      v14 = 0LL;
      if ( i != v8 )
        v14 = (unsigned int *)(i + 2);
      if ( !v14 )
        break;
      v15 = v14[4];
      if ( (v15 & 1) != 0 )
        v4 = v14;
      if ( (*(_BYTE *)(a1 + 64) & (unsigned __int8)v15 & 2) != 0
        && v14[6] == *(_DWORD *)(a1 + 72)
        && v14[7] == *(_DWORD *)(a1 + 76)
        && v14[8] == *(_DWORD *)(a1 + 80) )
      {
        v16 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
        v17 = v14[2] - *v14;
        v18 = W32GetUserSessionState(i, v12);
        v19 = *v14 + EngMulDiv(*(_DWORD *)(*(_QWORD *)(v18 + 19872) + 4960LL) - *(_DWORD *)(a1 + 48), v17, v16);
        v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19872);
        *(_DWORD *)(v22 + 4960) = v19;
        v23 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
        v24 = v14[3] - v14[1];
        v26 = W32GetUserSessionState(v22, v25);
        v27 = v14[1] + EngMulDiv(*(_DWORD *)(*(_QWORD *)(v26 + 19872) + 4964LL) - *(_DWORD *)(a1 + 52), v24, v23);
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28) + 19872) + 4964LL) = v27;
        break;
      }
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v39);
    if ( !v3 )
    {
      if ( v4 )
      {
        v32 = *v4;
        v33 = (unsigned int)((int)(v4[2] - v32) >> 31);
        LODWORD(v33) = (int)(v4[2] - v32) % 2;
        v34 = v32 + (int)(v4[2] - v32) / 2;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v32, v33) + 19872) + 4960LL) = v34;
        v35 = v4[1];
        v36 = (unsigned int)((int)(v4[3] - v35) >> 31);
        LODWORD(v36) = (int)(v4[3] - v35) % 2;
        v37 = v35 + (int)(v4[3] - v35) / 2;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v36) + 19872) + 4964LL) = v37;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19872) + 4960LL) = 0LL;
      }
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v38[1]);
  }
}
