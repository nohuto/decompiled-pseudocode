/*
 * XREFs of ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F33C
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140081830 (EngMulDiv.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x14012DBD0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x14012DF14 (-GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z.c)
 */

void __fastcall CCursorClip::ApplyCursorDisplayChangeOptions(__int64 a1, char a2)
{
  char v3; // di
  _DWORD *v4; // r14
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  _QWORD **v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r15
  int v14; // edx
  int v15; // r8d
  _QWORD *i; // rcx
  _DWORD *v17; // rsi
  int v18; // eax
  INT v19; // edi
  INT v20; // ebx
  __int64 v21; // rax
  int v22; // ebx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rcx
  INT v27; // edi
  INT v28; // ebx
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rax
  int v32; // ebx
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // ebx
  int v40; // ecx
  int v41; // ebx
  int v42; // r8d
  _QWORD v43[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = 0;
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v43);
    v4 = 0LL;
    UserSessionState = W32GetUserSessionState(v6, v5, v7);
    CInputConfig::GetMouseInputSpace(*(CInputConfig **)(UserSessionState + 18680), (struct CLockedInputSpace *)v43);
    v9 = (_QWORD **)(v43[0] + 1456LL);
    v13 = W32GetUserSessionState(v11, v10, v12);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v13 + 18688));
    for ( i = *v9; ; i = (_QWORD *)*i )
    {
      v17 = 0LL;
      if ( i != v9 )
        v17 = i + 2;
      if ( !v17 )
        break;
      v18 = v17[4];
      if ( (v18 & 1) != 0 )
        v4 = v17;
      if ( (*(_BYTE *)(a1 + 64) & (unsigned __int8)v18 & 2) != 0
        && v17[6] == *(_DWORD *)(a1 + 72)
        && v17[7] == *(_DWORD *)(a1 + 76)
        && v17[8] == *(_DWORD *)(a1 + 80) )
      {
        v19 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
        v20 = v17[2] - *v17;
        v21 = W32GetUserSessionState((_DWORD)i, v14, v15);
        v22 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v21 + 19904) + 4960LL) - *(_DWORD *)(a1 + 48), v20, v19) + *v17;
        v26 = *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 19904);
        *(_DWORD *)(v26 + 4960) = v22;
        v27 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
        v28 = v17[3] - v17[1];
        v31 = W32GetUserSessionState(v26, v29, v30);
        v32 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v31 + 19904) + 4964LL) - *(_DWORD *)(a1 + 52), v28, v27) + v17[1];
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v33, v35) + 19904) + 4964LL) = v32;
        break;
      }
    }
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v13 + 18688));
    if ( !v3 )
    {
      if ( v4 )
      {
        v39 = (v4[2] - *v4) / 2 + *v4;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(*v4, (v4[2] - *v4) % 2, v38) + 19904) + 4960LL) = v39;
        v40 = v4[1];
        v41 = (v4[3] - v40) / 2 + v40;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v40, (v4[3] - v40) % 2, v42) + 19904) + 4964LL) = v41;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v37, v36, v38) + 19904) + 4960LL) = 0LL;
      }
    }
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v43[1]);
  }
}
