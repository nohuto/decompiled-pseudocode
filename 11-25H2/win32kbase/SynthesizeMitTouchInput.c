/*
 * XREFs of SynthesizeMitTouchInput @ 0x14021C740
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1401BB800 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ConvertPointCoordinates @ 0x14015D084 (ConvertPointCoordinates.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140207858 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021C5BC (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1, __int64 a2)
{
  char v2; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // rax
  char *v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // xmm6
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  struct tagTHREADINFO *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // ebx
  unsigned int v36; // esi
  unsigned int v37; // edi
  PERESOURCE *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int128 v43; // [rsp+30h] [rbp-50h] BYREF
  void (__fastcall *v44)(char *); // [rsp+40h] [rbp-40h]
  __int128 v45; // [rsp+50h] [rbp-30h] BYREF
  __int64 v46; // [rsp+60h] [rbp-20h]
  __int64 v47; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+48h]

  v2 = 1;
  if ( *a1 - 1 > 9 )
    return 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19288) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    if ( !HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 19328), 19) )
      *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19288) = 0LL;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19288) && !(unsigned int)CreateInjectionDevice(v8, v7) )
    return 0;
  v9 = Win32AllocPoolWithQuotaZInitImpl(v8, 0xF0uLL, 0x7A747355u);
  v11 = Win32AllocPoolWithQuotaZInitImpl(v10, 192LL * *a1, 0x7A747355u);
  v14 = (char *)v11;
  if ( v9 && v11 )
  {
    *(_QWORD *)(v9 + 232) = v11;
    v15 = 0LL;
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19288);
    *(_DWORD *)(v9 + 192) = 1;
    v16 = *((_QWORD *)a1 + 12);
    *(_DWORD *)(v9 + 28) = 0;
    *(_QWORD *)(v9 + 48) = v16;
    *(_DWORD *)(v9 + 24) = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v47 = 0LL;
        v17 = 192 * v15;
        v48 = 144 * v15;
        v18 = &a1[36 * v15];
        v19 = &v14[v17];
        *((_OWORD *)v19 + 1) = *((_OWORD *)v18 + 1);
        *((_OWORD *)v19 + 2) = *((_OWORD *)v18 + 2);
        *((_OWORD *)v19 + 3) = *((_OWORD *)v18 + 3);
        *((_OWORD *)v19 + 4) = *((_OWORD *)v18 + 4);
        *((_OWORD *)v19 + 5) = *((_OWORD *)v18 + 5);
        *((_OWORD *)v19 + 6) = *((_OWORD *)v18 + 6);
        *((_OWORD *)v19 + 7) = *((_OWORD *)v18 + 7);
        *((_OWORD *)v19 + 8) = *((_OWORD *)v18 + 8);
        *((_OWORD *)v19 + 9) = *((_OWORD *)v18 + 9);
        v20 = *((_QWORD *)v18 + 8);
        *(_QWORD *)&v14[v17 + 48] = v20;
        v21 = *(_OWORD *)(W32GetUserSessionState(&v14[192 * v15], 144 * v15) + 19296);
        v24 = *(_OWORD *)(W32GetUserSessionState(v23, v22) + 19312);
        v43 = v21;
        v45 = v24;
        if ( !(unsigned int)ConvertPointCoordinates(v20, (int *)&v45, (int *)&v43, &v47) )
          break;
        v25 = v47;
        v15 = (unsigned int)(v15 + 1);
        v26 = v48;
        *(_QWORD *)&v14[v17 + 56] = v47;
        *(_QWORD *)&v14[v17 + 72] = v25;
        *(_QWORD *)&v14[v17 + 32] = *(_QWORD *)(v9 + 32);
        *(_DWORD *)&v14[v17 + 80] = *(unsigned int *)((char *)a1 + v26 + 80);
        *(_QWORD *)&v14[v17 + 96] = *(_QWORD *)((char *)a1 + v26 + 96);
        LOWORD(v25) = *(_WORD *)((char *)a1 + v26 + 20);
        *(_DWORD *)&v14[v17 + 20] = 0;
        *(_WORD *)&v14[v17 + 8] = v25;
        if ( (unsigned int)v15 >= *a1 )
          goto LABEL_12;
      }
      v2 = 0;
    }
    else
    {
LABEL_12:
      PtiCurrent();
      v27 = PtiCurrent();
      *(_QWORD *)&v43 = *((_QWORD *)v27 + 48);
      *((_QWORD *)v27 + 48) = &v43;
      *((_QWORD *)&v43 + 1) = v9;
      v44 = GreDeleteFastMutex;
      v28 = PtiCurrent();
      *(_QWORD *)&v45 = *((_QWORD *)v28 + 48);
      *((_QWORD *)v28 + 48) = &v45;
      *((_QWORD *)&v45 + 1) = v14;
      v46 = (__int64)GreDeleteFastMutex;
      v30 = W32GetUserSessionState(v28, v29);
      v31 = HMValidateHandleNoSecure(*(_QWORD *)(v30 + 19328), 19);
      InputTraceLogging::RIM::InjectInput(v31);
      v34 = W32GetUserSessionState(v33, v32);
      v35 = a1[2];
      v36 = a1[3];
      v37 = a1[1];
      v38 = *(PERESOURCE **)(v34 + 3256);
      v41 = W32GetUserSessionState(v40, v39);
      CTouchProcessor::ProcessInjectedInput(
        v38,
        *(_QWORD *)(v41 + 19288),
        (struct RIMCOMPLETEFRAME *)v9,
        v37 != 0,
        v36,
        v35 != 0);
      *((_QWORD *)PtiCurrent() + 48) = v45;
      v46 = -1LL;
      *((_QWORD *)PtiCurrent() + 48) = v43;
    }
    goto LABEL_15;
  }
  v2 = 0;
  if ( v9 )
LABEL_15:
    GreDeleteFastMutex((char *)v9);
  if ( v14 )
    GreDeleteFastMutex(v14);
  return v2;
}
