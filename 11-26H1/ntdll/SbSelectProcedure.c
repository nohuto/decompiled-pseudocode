/*
 * XREFs of SbSelectProcedure @ 0x1800631F0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180062FA0 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800D3DD4 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x1801595B0 (SbExecuteProcedure.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18000F380 (EtwpEventWriteFull.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     SbpTraceContextUpdate @ 0x1800621C0 (SbpTraceContextUpdate.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     SbpUpdateCache @ 0x180063EC0 (SbpUpdateCache.c)
 *     SbpResolveBasedOnName @ 0x180064918 (SbpResolveBasedOnName.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, signed __int64 a3, unsigned int a4)
{
  signed __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // r12
  char *pShimData; // r8
  char *v10; // r8
  _WORD *v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int16 v14; // dx
  bool v15; // cf
  bool v16; // zf
  _QWORD *v17; // rbx
  unsigned int *v18; // rcx
  unsigned int v19; // r12d
  __int64 v20; // r14
  unsigned int v21; // edi
  unsigned int i; // edx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned int v26; // ecx
  char *v27; // rax
  char *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rdi
  _QWORD *v32; // rbx
  __int64 *v33; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rsi
  unsigned int v37; // eax
  unsigned int j; // edi
  __int64 v39; // rsi
  __int64 v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r9
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  _RTL_USER_PROCESS_PARAMETERS *v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  _WORD v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+54h] [rbp-ACh] BYREF
  signed __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v59[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+64h] [rbp-9Ch]
  int v61; // [rsp+68h] [rbp-98h]
  __int64 *v62; // [rsp+180h] [rbp+80h] BYREF
  __int64 v63; // [rsp+188h] [rbp+88h]
  unsigned int *v64; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  __int64 v66; // [rsp+1A0h] [rbp+A0h]
  int v67; // [rsp+1A8h] [rbp+A8h]
  int v68; // [rsp+1ACh] [rbp+ACh]
  unsigned int *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  __int64 v71; // [rsp+1C0h] [rbp+C0h]
  int v72; // [rsp+1C8h] [rbp+C8h]
  int v73; // [rsp+1CCh] [rbp+CCh]
  __int128 v74; // [rsp+1D0h] [rbp+D0h]
  __int128 v75; // [rsp+1E0h] [rbp+E0h]
  __int128 v76; // [rsp+1F0h] [rbp+F0h]

  v4 = a3;
  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v58 = a3;
  v7 = a4;
  v57 = a4;
  v8 = -1LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v10 = pShimData + 2016;
    if ( v10 )
    {
      if ( *((_DWORD *)v10 + 12) )
      {
        v27 = (char *)NtCurrentPeb()->pShimData;
        if ( v27 && (v28 = v27 + 2016) != 0LL && *((_DWORD *)v28 + 12) )
          v29 = *(_QWORD *)v28;
        else
          v29 = 0LL;
        if ( v29 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, v4, v10 + 24, a2) )
          goto LABEL_41;
        return 0LL;
      }
    }
  }
  memset_thunk_772440563353939046(v59, 0, 0x11CuLL);
  if ( (int)RtlGetVersion(v59) < 0 )
    goto LABEL_41;
  v11 = &unk_180171896;
  v12 = -1LL;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *(v11 - 1);
    v15 = (unsigned __int16)v60 < v14;
    v16 = (_WORD)v60 == v14;
    if ( (unsigned __int16)v60 <= v14 )
    {
      if ( (_WORD)v60 != v14 )
        goto LABEL_24;
      if ( (unsigned __int16)v61 < *v11 )
        break;
    }
    v12 = v13;
LABEL_8:
    ++v13;
    v11 += 16;
    if ( v13 >= 5 )
      goto LABEL_9;
  }
  v15 = (unsigned __int16)v60 < v14;
  v16 = (_WORD)v60 == v14;
LABEL_24:
  if ( !v15 && (!v16 || (unsigned __int16)v61 >= *v11) )
    goto LABEL_8;
LABEL_9:
  if ( v12 == -1 )
    v17 = &unk_180171884;
  else
    v17 = (_QWORD *)((char *)&unk_180171884 + 32 * v12);
  v18 = *(unsigned int **)(v4 + 24);
  v19 = 0;
  if ( *v18 )
  {
    do
    {
      v20 = *(_QWORD *)&v18[2 * v19 + 2];
      if ( v20 )
      {
        v21 = 0;
LABEL_14:
        if ( v21 < *(_DWORD *)(v20 + 68) )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= 4 )
            {
              ++v21;
              goto LABEL_14;
            }
            v23 = *(_QWORD *)(v20 + 16 * (i + 8LL * v21) + 120) - *v17;
            if ( !v23 )
              v23 = *(_QWORD *)(v20 + 16 * (i + 8LL * v21) + 128) - v17[1];
            if ( !v23 )
              break;
          }
          v24 = ((unsigned __int64)v21 << 7) + v20;
          if ( !*(_QWORD *)(v24 + 80) && *(_DWORD *)(v24 + 88) == 2 )
            *(_QWORD *)(v24 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v24 + 72));
          v25 = v24 + 72;
          v4 = v58;
          *(_QWORD *)(v5 + 8LL * v19 + 16) = v25;
        }
        v26 = *(_DWORD *)(v20 + 68);
        if ( v21 >= v26 )
        {
          for ( j = 0; j < v26; ++j )
          {
            v39 = v20 + ((unsigned __int64)j << 7);
            if ( *(_DWORD *)(v39 + 104) )
            {
              if ( !*(_QWORD *)(v39 + 80) && *(_DWORD *)(v39 + 88) == 2 )
                *(_QWORD *)(v39 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v39 + 72));
              *(_QWORD *)(v5 + 8LL * v19 + 16) = v39 + 72;
              break;
            }
          }
          v4 = v58;
          if ( j >= *(_DWORD *)(v20 + 68) )
            break;
        }
      }
      v18 = *(unsigned int **)(v4 + 24);
      ++v19;
    }
    while ( v19 < *v18 );
    v7 = v57;
  }
  v8 = -1LL;
LABEL_41:
  if ( v7 < *(_DWORD *)(v5 + 12) )
  {
    _mm_lfence();
    v30 = *(_QWORD *)(v4 + 24);
    v74 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v31 = *(__int64 **)(v30 + 8LL * v7 + 8);
    if ( *((_DWORD *)v31 + 11) )
    {
      v58 = 0LL;
      v32 = NtCurrentPeb()->pShimData;
      if ( v32 )
      {
        if ( v32 != (_QWORD *)-2016LL && *((_DWORD *)v32 + 516) && *((_DWORD *)v32 + 507) )
        {
          v40 = v32[254];
          if ( !v40 )
          {
            v41 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3, 0LL, 0LL, (unsigned __int64 *)&v58);
            if ( v41 )
            {
              RtlSetLastWin32Error(v41);
              goto LABEL_46;
            }
            v42 = v58;
            v40 = _InterlockedCompareExchange64(v32 + 254, v58, 0LL);
            if ( v40 )
            {
              EtwNotificationUnregister(v42, 0LL);
            }
            else
            {
              v40 = v42;
              ProcessParameters = NtCurrentPeb()->ProcessParameters;
              SbpTraceContextUpdate(
                v42,
                (__int64)(v32 + 258),
                0,
                ProcessParameters->ImagePathName.Length,
                (__int64)ProcessParameters->ImagePathName.Buffer);
              if ( !v40 )
                goto LABEL_46;
            }
          }
          v44 = *v31;
          v62 = (__int64 *)((char *)v31 + 52);
          v45 = -1LL;
          v63 = 16LL;
          do
            ++v45;
          while ( *(_WORD *)(v44 + 2 * v45) );
          v66 = v44;
          v46 = v31[1];
          v64 = (unsigned int *)v56;
          v47 = (unsigned __int16)(2 * (v45 + 1));
          v56[0] = v47;
          v67 = v47;
          v48 = -1LL;
          v65 = 2LL;
          v68 = 0;
          do
            ++v48;
          while ( *(_WORD *)(v46 + 2 * v48) );
          v71 = v46;
          v70 = 2LL;
          v49 = (unsigned __int16)(2 * (v48 + 1));
          LOWORD(v57) = v49;
          v72 = v49;
          v69 = &v57;
          v73 = 0;
          EtwpEventWriteFull(v40, &AeSbCallEvent, 0LL, 0, 0, 0LL, 0LL, 5, (__int64)&v62);
        }
      }
    }
LABEL_46:
    v74 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v33 = *(__int64 **)(v5 + 8LL * v7 + 16);
    if ( *((_DWORD *)v33 + 10) )
    {
      v58 = 0LL;
      v35 = NtCurrentPeb()->pShimData;
      if ( v35 )
      {
        if ( v35 != (_QWORD *)-2016LL && *((_DWORD *)v35 + 516) && *((_DWORD *)v35 + 507) )
        {
          v36 = v35[254];
          if ( v36 )
            goto LABEL_85;
          v37 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3, 0LL, 0LL, (unsigned __int64 *)&v58);
          if ( v37 )
          {
            RtlSetLastWin32Error(v37);
            return v33[1];
          }
          v50 = v58;
          v36 = _InterlockedCompareExchange64(v35 + 254, v58, 0LL);
          if ( v36 )
          {
            EtwNotificationUnregister(v50, 0LL);
            goto LABEL_85;
          }
          v36 = v50;
          v51 = NtCurrentPeb()->ProcessParameters;
          SbpTraceContextUpdate(
            v50,
            (__int64)(v35 + 258),
            0,
            v51->ImagePathName.Length,
            (__int64)v51->ImagePathName.Buffer);
          if ( v36 )
          {
LABEL_85:
            v52 = *v33;
            v62 = v33 + 14;
            v53 = -1LL;
            v63 = 16LL;
            do
              ++v53;
            while ( *(_WORD *)(v52 + 2 * v53) );
            v66 = v52;
            v54 = v33[3];
            v64 = &v57;
            v55 = (unsigned __int16)(2 * (v53 + 1));
            LOWORD(v57) = v55;
            v67 = v55;
            v65 = 2LL;
            v68 = 0;
            do
              ++v8;
            while ( *(_WORD *)(v54 + 2 * v8) );
            v71 = v54;
            v70 = 2LL;
            v56[0] = 2 * (v8 + 1);
            v72 = v56[0];
            v69 = (unsigned int *)v56;
            v73 = 0;
            EtwpEventWriteFull(v36, &AeSbImplEvent, 0LL, 0, 0, 0LL, 0LL, 5, (__int64)&v62);
          }
        }
      }
    }
    return v33[1];
  }
  return v6;
}
