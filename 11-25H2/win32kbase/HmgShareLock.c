/*
 * XREFs of HmgShareLock @ 0x140019A10
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019500 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLock(__int64 a1, char a2)
{
  __int64 v2; // r14
  unsigned int v4; // esi
  unsigned int *v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v20; // r9
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r10
  unsigned int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  unsigned int v35; // r9d
  unsigned int v36; // r15d
  __int64 v37; // rcx
  __int64 v38; // r8
  _DWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r11
  __int64 v42; // rax
  unsigned int *v43; // [rsp+20h] [rbp-20h] BYREF
  int v44; // [rsp+28h] [rbp-18h]
  __int16 v45; // [rsp+2Ch] [rbp-14h]
  __int64 v46; // [rsp+30h] [rbp-10h]

  v2 = 0LL;
  v43 = 0LL;
  v4 = a1;
  v44 = 0;
  v45 = 0;
  v46 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle((__int64 *)&v43, (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000, 1);
  if ( !v44 )
    return v2;
  v5 = v43;
  v6 = v46;
  if ( *((_BYTE *)v43 + 14) != a2 || *((_WORD *)v43 + 6) != HIWORD(v4) )
  {
    HIBYTE(v45) = 1;
    goto LABEL_40;
  }
  v7 = *v43;
  v8 = *(_QWORD *)(v46 + 5672);
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 <= 0x10000u )
    {
      v7 = (unsigned __int16)v7;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v7 >= v10 )
          v11 = (((unsigned __int16)v7 - v10) >> 16) + 1;
        else
          v11 = 0LL;
        v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
        if ( (_DWORD)v11 )
          v13 = (unsigned __int16)v7 + ((1 - (_DWORD)v11) << 16) - v10;
        else
          v13 = (unsigned __int16)v7;
        v14 = 0LL;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 + 20) )
          v14 = *(_QWORD *)v12 + 24 * v13;
      }
      if ( *(unsigned __int8 *)(v14 + 13) == WORD1(v7) )
        v7 = (unsigned __int16)v7;
    }
  }
  v20 = *(_QWORD *)(v8 + 16);
  v21 = *(_DWORD *)(v20 + 2056);
  if ( (unsigned int)v7 < v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v7 >= v21 )
      v22 = (((unsigned int)v7 - v21) >> 16) + 1;
    else
      v22 = 0LL;
    v23 = *(_QWORD *)(v20 + 8 * v22 + 8);
    if ( (_DWORD)v22 )
      v7 = ((1 - (_DWORD)v22) << 16) - v21 + (unsigned int)v7;
    if ( (unsigned int)v7 < *(_DWORD *)(v23 + 20) )
      v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  }
  ++*(_DWORD *)(v2 + 8);
  if ( a2 == 5 )
  {
    v24 = *(_QWORD *)(v2 + 680);
    v25 = 0LL;
    goto LABEL_39;
  }
  if ( a2 == 16 )
  {
    v24 = *(_QWORD *)(v2 + 136);
    v25 = 2LL;
LABEL_39:
    TrackObjectReferenceIncrement(v25, v24);
  }
LABEL_40:
  v26 = *v5;
  v27 = *(_QWORD *)(v6 + 5672);
  if ( (unsigned int)v26 >= 0x10000 )
  {
    if ( *(_DWORD *)v27 <= 0x10000u )
    {
      v26 = (unsigned __int16)v26;
    }
    else
    {
      v28 = *(_QWORD *)(v27 + 16);
      v29 = *(_DWORD *)(v28 + 2056);
      if ( (unsigned __int16)v26 >= v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
      {
        v33 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v26 >= v29 )
          v30 = (((unsigned __int16)v26 - v29) >> 16) + 1;
        else
          v30 = 0LL;
        v31 = *(_QWORD *)(v28 + 8 * v30 + 8);
        if ( (_DWORD)v30 )
          v32 = (unsigned __int16)v26 + ((1 - (_DWORD)v30) << 16) - v29;
        else
          v32 = (unsigned __int16)v26;
        v33 = 0LL;
        if ( (unsigned int)v32 < *(_DWORD *)(v31 + 20) )
          v33 = *(_QWORD *)v31 + 24 * v32;
      }
      if ( *(unsigned __int8 *)(v33 + 13) == WORD1(v26) )
        v26 = (unsigned __int16)v26;
    }
  }
  v34 = *(_QWORD *)(v27 + 16);
  v35 = *(_DWORD *)(v34 + 2056);
  v36 = v35 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16);
  if ( (unsigned int)v26 >= v36 )
    goto LABEL_76;
  if ( (unsigned int)v26 >= v35 )
    v37 = (((unsigned int)v26 - v35) >> 16) + 1;
  else
    v37 = 0LL;
  v38 = *(_QWORD *)(v34 + 8 * v37 + 8);
  if ( (_DWORD)v37 )
    v26 = ((1 - (_DWORD)v37) << 16) - v35 + (unsigned int)v26;
  if ( (unsigned int)v26 >= *(_DWORD *)(v38 + 20) )
LABEL_76:
    v39 = 0LL;
  else
    v39 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * (v26 >> 8)) + 16LL * (unsigned __int8)v26 + 8);
  v16 = (unsigned __int16)*v39 | (*v39 >> 8) & 0xFF0000;
  if ( v16 >= 0x10000 )
  {
    if ( *(_DWORD *)v27 <= 0x10000u )
    {
      v16 = (unsigned __int16)*v39;
    }
    else
    {
      if ( (unsigned __int16)*v39 >= v36 )
      {
        v15 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*v39 >= v35 )
          v40 = (((unsigned __int16)*v39 - v35) >> 16) + 1;
        else
          v40 = 0LL;
        v41 = *(_QWORD *)(v34 + 8 * v40 + 8);
        if ( (_DWORD)v40 )
          v42 = (unsigned __int16)*v39 + ((1 - (_DWORD)v40) << 16) - v35;
        else
          v42 = (unsigned __int16)*v39;
        v15 = 0LL;
        if ( (unsigned int)v42 < *(_DWORD *)(v41 + 20) )
          v15 = *(_QWORD *)v41 + 24 * v42;
      }
      if ( *(unsigned __int8 *)(v15 + 13) == HIWORD(v16) )
        v16 = (unsigned __int16)v16;
    }
  }
  if ( v16 < v36 )
  {
    if ( v16 >= v35 )
      v17 = ((v16 - v35) >> 16) + 1;
    else
      v17 = 0LL;
    v18 = *(_QWORD *)(v34 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v16 += ((1 - (_DWORD)v17) << 16) - v35;
    *(_BYTE *)(*(_QWORD *)v18 + 24LL * v16 + 6) = 0;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
      0LL);
    KeLeaveCriticalRegion();
  }
  v43 = 0LL;
  v44 = 0;
  KeLeaveCriticalRegion();
  return v2;
}
