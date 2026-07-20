/*
 * XREFs of SmpExecPgm @ 0x140006990
 * Callers:
 *     <none>
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpUnlockKnownSubSysList @ 0x1400073F0 (SmpUnlockKnownSubSysList.c)
 *     SmpGetProcessMuSessionId @ 0x140007730 (SmpGetProcessMuSessionId.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpSetCoreProcessIds @ 0x14001893C (SmpSetCoreProcessIds.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpExecPgm(__int64 a1, int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned int v7; // edi
  bool v8; // zf
  BOOL v9; // r12d
  HANDLE *v10; // r15
  int Session; // eax
  unsigned int v12; // esi
  int v13; // r12d
  _DWORD *v14; // rdx
  _DWORD **v15; // r9
  __int64 v16; // r8
  _QWORD *i; // rcx
  __int128 *v19; // rdx
  __int64 v20; // r8
  char v21; // al
  __int128 *v22; // rax
  _OWORD *v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  int v36; // eax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  _DWORD **v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v41; // [rsp+50h] [rbp-B0h]
  HANDLE *v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int128 v45; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+80h] [rbp-80h]
  __int128 v47; // [rsp+90h] [rbp-70h]
  __int128 v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+C0h] [rbp-40h]
  __int128 v51; // [rsp+D0h] [rbp-30h]
  __int128 v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+F0h] [rbp-10h]
  __int128 v54; // [rsp+100h] [rbp+0h]
  __int128 v55; // [rsp+110h] [rbp+10h]
  __int128 v56; // [rsp+120h] [rbp+20h]
  __int128 v57; // [rsp+130h] [rbp+30h]
  __int128 v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  HANDLE v60; // [rsp+1B0h] [rbp+B0h]

  v2 = *a2;
  v3 = 0;
  v4 = *((_QWORD *)a2 + 4);
  LODWORD(v39) = 0;
  if ( (v2 & 0x10) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 64);
    v4 = *(_QWORD *)(v4 + 32);
    goto LABEL_4;
  }
  if ( (v2 & 8) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v4 = *(_QWORD *)(v4 + 48);
    goto LABEL_4;
  }
  if ( !v4 )
    goto LABEL_53;
  if ( (int)SmpGetProcessMuSessionId(v4, &v39) < 0 )
  {
    v7 = 0;
    v4 = 0LL;
LABEL_4:
    if ( v4 )
      goto LABEL_5;
LABEL_53:
    v12 = -1073741823;
    SmpLogFailure("SmpExecPgm", 165LL, 3221225473LL);
    return v12;
  }
  v7 = (unsigned int)v39;
LABEL_5:
  v8 = (*(_BYTE *)a2 & 8) == 0;
  v9 = 0;
  v10 = 0LL;
  v39 = 0LL;
  if ( !v8 )
  {
    v39 = (_DWORD **)*((_QWORD *)a2 + 4);
    v9 = *v39[2] == 2;
  }
  Session = SmpSbCreateSession(v7, v4, a1 + 48);
  v12 = Session;
  if ( v9 && Session >= 0 )
  {
    memset_0(&v45, 0, 0x148uLL);
    v13 = *(_DWORD *)(a1 + 120);
    if ( v13 == 1 )
    {
LABEL_10:
      v14 = (_DWORD *)SmpCoreProcessIds;
      v42 = v10;
      if ( v7 == *(_DWORD *)SmpCoreProcessIds )
      {
        if ( *(_DWORD *)(a1 + 120) == 1 )
          SmpCoreSubsysProcess[0] = (HANDLE)-1LL;
        else
          SmpCoreSubsysProcess[0] = v10[4];
      }
      v15 = v39;
      v16 = *(_QWORD *)(a1 + 72);
      v43 = v16;
      if ( v39[9] != (_DWORD *)SmpUniqueProcessId )
      {
        if ( !v10 || (v36 = *((_DWORD *)v10 + 6), v36 != 2) && v36 != 3 )
        {
          v12 = -1073741823;
          SmLogFailureInt((unsigned int)"SmpExecPgm", 297, v7, 0, -1073741823);
          goto LABEL_19;
        }
        if ( (*(_BYTE *)v39 & 1) != 0
          || (_m_prefetchw(v39), (_InterlockedOr((volatile signed __int32 *)v39, 1u) & 1) != 0) )
        {
          v12 = -1073741823;
          goto LABEL_35;
        }
        v37 = *((_OWORD *)v15 + 4);
        v38 = *((_OWORD *)v15 + 5);
        v59 = v16;
        v45 = v37;
        *(_QWORD *)&v47 = v15[12];
        v46 = v38;
        *((_QWORD *)&v47 + 1) = 5LL;
        LODWORD(v48) = v7;
        v60 = v10[6];
        ((void (__fastcall *)(__int64, __int64, __int128 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD **, __int64, _QWORD *, HANDLE *, __int64, __int64))NtAlpcSendWaitReceivePort)(
          SmpApiConnectionPort,
          0x10000LL,
          &v45,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        v14 = (_DWORD *)SmpCoreProcessIds;
      }
      if ( v7 != -1 )
      {
        while ( v3 < SmpNumberInitialSessions )
        {
          if ( v7 == v14[10 * v3] )
          {
            if ( v3 != -1 )
            {
              SmpSetCoreProcessIds(v7, &v42, 0LL);
              v14 = (_DWORD *)SmpCoreProcessIds;
            }
            break;
          }
          ++v3;
        }
      }
      if ( v7 != *v14 )
      {
LABEL_19:
        if ( !v10 )
          return v12;
LABEL_35:
        SmpDereferenceKnownSubSys(v10);
      }
    }
    else
    {
      v42 = (HANDLE *)v7;
      v40 = 1LL;
      v41 = (_QWORD *)(SmpKnownSubSysTable + 24LL * (v7 & 0x1F));
      RtlAcquireSRWLockShared(v41 + 2);
      for ( i = (_QWORD *)*v41; i != v41; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i - 2) == v7 )
        {
          if ( *((_DWORD *)i - 12) == v13 )
            v10 = (HANDLE *)(i - 9);
          if ( v10 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v10);
            SmpUnlockKnownSubSysList(&v40);
            goto LABEL_10;
          }
        }
      }
      SmpUnlockKnownSubSysList(&v40);
      memset_0(&v45, 0, 0xE0uLL);
      *((_QWORD *)&v57 + 1) = v42;
      v19 = &v45;
      *(_QWORD *)&v58 = 0LL;
      LODWORD(v57) = v12;
      DWORD2(v58) = 242;
      v20 = 64LL;
      do
      {
        if ( v20 == -2147483582 )
          break;
        v21 = *((_BYTE *)v19 + "SmpExecPgm" - (char *)&v45);
        if ( !v21 )
          break;
        *(_BYTE *)v19 = v21;
        v19 = (__int128 *)((char *)v19 + 1);
        --v20;
      }
      while ( v20 );
      v22 = (__int128 *)((char *)v19 - 1);
      if ( v20 )
        v22 = v19;
      *(_BYTE *)v22 = 0;
      v23 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_14002FE94) % 16));
      v24 = v46;
      *(_OWORD *)((char *)v23 + 8) = v45;
      v25 = v47;
      *(_OWORD *)((char *)v23 + 24) = v24;
      v26 = v48;
      *(_OWORD *)((char *)v23 + 40) = v25;
      v27 = v49;
      *(_OWORD *)((char *)v23 + 56) = v26;
      v28 = v50;
      *(_OWORD *)((char *)v23 + 72) = v27;
      v29 = v51;
      *(_OWORD *)((char *)v23 + 88) = v28;
      v30 = v53;
      *(_OWORD *)((char *)v23 + 104) = v29;
      v23 = (_OWORD *)((char *)v23 + 136);
      *(v23 - 1) = v52;
      v31 = v54;
      *v23 = v30;
      v32 = v55;
      v23[1] = v31;
      v33 = v56;
      v23[2] = v32;
      v34 = v57;
      v23[3] = v33;
      v35 = v58;
      v23[4] = v34;
      v23[5] = v35;
    }
  }
  return v12;
}
