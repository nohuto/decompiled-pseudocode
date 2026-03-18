/*
 * XREFs of GreSetDCOrg @ 0x1400FD7E0
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

__int64 __fastcall GreSetDCOrg(__int64 a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // rax
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 SessionState; // rax
  __int128 v21; // kr00_16
  __int64 result; // rax
  unsigned int *v23; // [rsp+20h] [rbp-40h] BYREF
  int v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int64 v26; // [rsp+38h] [rbp-28h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int128 v28; // [rsp+50h] [rbp-10h]

  v7 = a1;
  v8 = 0;
  v25 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v27 = 0LL;
  v28 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v10, v9);
  if ( CurrentThreadWin32Thread )
    v12 = *CurrentThreadWin32Thread;
  else
    v12 = 0LL;
  v13 = (v12 + 8) & -(__int64)(v12 != 0);
  *(_QWORD *)&v28 = &v23;
  *((_QWORD *)&v28 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  if ( v13 )
  {
    v14 = *(_QWORD *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0x58);
    if ( *(_QWORD *)(v14 + 8) != v13 + 88 )
      goto LABEL_5;
    *(_QWORD *)&v27 = *(_QWORD *)(v13 + 88);
    *((_QWORD *)&v27 + 1) = v13 + 88;
    *(_QWORD *)(v14 + 8) = &v27;
    *(_QWORD *)(v13 + 88) = &v27;
  }
  else
  {
    *((_QWORD *)&v27 + 1) = &v27;
    *(_QWORD *)&v27 = &v27;
  }
  v15 = (unsigned int *)HmgShareLock(v25, v7, 1, 1);
  v23 = v15;
  if ( v15 )
  {
    v8 = 1;
    v15[2 * (v15[10] & 1) + 254] = a2;
    v23[2 * (v23[10] & 1) + 255] = a3;
    v16 = v23;
    v17 = v23[10] & 1;
    v23[298] = v23[31] + v23[2 * v17 + 254];
    v16[299] = v16[32] + v16[2 * v17 + 255];
    if ( a4 )
      *(_OWORD *)(v23 + 258) = *a4;
    v18 = v23;
    v19 = v23[130];
    if ( (v19 & 1) != 0 && (v19 & 2) == 0 )
    {
      v19 = (unsigned int)v19 | 4;
      v23[9] |= 0x10u;
      v18[130] = v19;
      v18 = v23;
    }
    if ( v18 )
    {
      SessionState = W32GetSessionState(v19);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v23);
      v23 = 0LL;
    }
  }
  v21 = v27;
  if ( *(__int128 **)(v27 + 8) != &v27 || **((__int128 ***)&v27 + 1) != &v27 )
LABEL_5:
    __fastfail(3u);
  **((_QWORD **)&v27 + 1) = v27;
  result = v8;
  *(_QWORD *)(v21 + 8) = *((_QWORD *)&v21 + 1);
  return result;
}
