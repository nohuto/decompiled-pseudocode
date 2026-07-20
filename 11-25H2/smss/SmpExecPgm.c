/*
 * XREFs of SmpExecPgm @ 0x140006F70
 * Callers:
 *     <none>
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpUnlockKnownSubSysList @ 0x1400079F0 (SmpUnlockKnownSubSysList.c)
 *     SmpGetProcessMuSessionId @ 0x140007D90 (SmpGetProcessMuSessionId.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpSetCoreProcessIds @ 0x140018CC4 (SmpSetCoreProcessIds.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
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
  _DWORD **v15; // r8
  _QWORD *i; // rcx
  __int64 v18; // r8
  _BYTE *v19; // rdx
  char v20; // al
  _BYTE *v21; // rax
  _OWORD *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-B0h]
  _DWORD **v39; // [rsp+58h] [rbp-A8h]
  HANDLE *v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  _OWORD v42[12]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v43; // [rsp+140h] [rbp+40h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  _OWORD v45[2]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD *v46; // [rsp+180h] [rbp+80h]
  __int64 v47; // [rsp+188h] [rbp+88h]
  int v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+298h] [rbp+198h]
  HANDLE v50; // [rsp+2A0h] [rbp+1A0h]

  v2 = *a2;
  v3 = 0;
  v4 = *((_QWORD *)a2 + 4);
  v36 = 0;
  if ( (v2 & 0x10) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 64);
    v4 = *(_QWORD *)(v4 + 32);
    v36 = v7;
    goto LABEL_4;
  }
  if ( (v2 & 8) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v4 = *(_QWORD *)(v4 + 48);
    v36 = v7;
    goto LABEL_4;
  }
  if ( !v4 )
    goto LABEL_52;
  if ( (int)SmpGetProcessMuSessionId(v4, &v36) < 0 )
  {
    v7 = 0;
    v36 = 0;
    v4 = 0LL;
LABEL_4:
    if ( v4 )
      goto LABEL_5;
LABEL_52:
    v12 = -1073741823;
    SmpLogFailure("SmpExecPgm", 165LL, 3221225473LL);
    return v12;
  }
  v7 = v36;
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
    memset_0(v45, 0, 0x148uLL);
    v13 = *(_DWORD *)(a1 + 120);
    if ( v13 == 1 )
    {
LABEL_10:
      v14 = (_DWORD *)SmpCoreProcessIds;
      v40 = v10;
      if ( v7 == *(_DWORD *)SmpCoreProcessIds )
      {
        if ( *(_DWORD *)(a1 + 120) == 1 )
          SmpCoreSubsysProcess[0] = (HANDLE)-1LL;
        else
          SmpCoreSubsysProcess[0] = v10[4];
      }
      v15 = v39;
      v41 = *(_QWORD *)(a1 + 72);
      if ( v39[9] != (_DWORD *)SmpUniqueProcessId )
      {
        if ( !v10 || (unsigned int)(*((_DWORD *)v10 + 6) - 2) > 1 )
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
        v35 = *((_OWORD *)v15 + 5);
        v7 = v36;
        v45[0] = *((_OWORD *)v15 + 4);
        v46 = v15[12];
        v45[1] = v35;
        v47 = 5LL;
        v48 = v36;
        v49 = v41;
        v50 = v10[6];
        NtAlpcSendWaitReceivePort(SmpApiConnectionPort, 0x10000LL, v45, 0LL, 0LL, 0LL, 0LL, 0LL, v36);
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
              SmpSetCoreProcessIds(v7, &v40, 0LL);
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
      v40 = (HANDLE *)v7;
      v37 = 1LL;
      v38 = (_QWORD *)(SmpKnownSubSysTable + 24LL * (v7 & 0x1F));
      RtlAcquireSRWLockShared(v38 + 2);
      for ( i = (_QWORD *)*v38; i != v38; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i - 2) == v7 )
        {
          if ( *((_DWORD *)i - 12) == v13 )
            v10 = (HANDLE *)(i - 9);
          if ( v10 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v10);
            SmpUnlockKnownSubSysList(&v37);
            v7 = v36;
            goto LABEL_10;
          }
        }
      }
      SmpUnlockKnownSubSysList(&v37);
      memset_0(v42, 0, 0xE0uLL);
      *((_QWORD *)&v43 + 1) = v40;
      v18 = 64LL;
      *(_QWORD *)&v44 = 0LL;
      LODWORD(v43) = v12;
      DWORD2(v44) = 242;
      v19 = v42;
      do
      {
        if ( v18 == -2147483582 )
          break;
        v20 = v19["SmpExecPgm" - (char *)v42];
        if ( !v20 )
          break;
        *v19++ = v20;
        --v18;
      }
      while ( v18 );
      v21 = v19 - 1;
      if ( v18 )
        v21 = v19;
      *v21 = 0;
      v22 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_140030ED4) % 16));
      v23 = v42[1];
      *(_OWORD *)((char *)v22 + 8) = v42[0];
      v24 = v42[2];
      *(_OWORD *)((char *)v22 + 24) = v23;
      v25 = v42[3];
      *(_OWORD *)((char *)v22 + 40) = v24;
      v26 = v42[4];
      *(_OWORD *)((char *)v22 + 56) = v25;
      v27 = v42[5];
      *(_OWORD *)((char *)v22 + 72) = v26;
      v28 = v42[6];
      *(_OWORD *)((char *)v22 + 88) = v27;
      v29 = v42[8];
      *(_OWORD *)((char *)v22 + 104) = v28;
      v22 = (_OWORD *)((char *)v22 + 136);
      *(v22 - 1) = v42[7];
      v30 = v42[9];
      *v22 = v29;
      v31 = v42[10];
      v22[1] = v30;
      v32 = v42[11];
      v22[2] = v31;
      v33 = v43;
      v22[3] = v32;
      v34 = v44;
      v22[4] = v33;
      v22[5] = v34;
    }
  }
  return v12;
}
