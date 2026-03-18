/*
 * XREFs of SynthesizeMitTouchInput @ 0x140220114
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1401E1820 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ConvertPointCoordinates @ 0x140196130 (ConvertPointCoordinates.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z @ 0x1402161B4 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_N1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021FF8C (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeMitTouchInput(int *a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // r14
  char v19; // r12
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int *v23; // rax
  char *v24; // rcx
  __int64 v25; // rbx
  __int128 v26; // xmm6
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // rdx
  struct tagTHREADINFO *v36; // rax
  int v37; // edx
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rax
  unsigned int v46; // edx
  bool v47; // di
  PERESOURCE *v48; // rsi
  char v49; // bl
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct tagTHREADINFO *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  struct tagTHREADINFO *v58; // rax
  __int128 v60; // [rsp+30h] [rbp-50h] BYREF
  void (__fastcall *v61)(char *, __int64, __int64, __int64); // [rsp+40h] [rbp-40h]
  __int128 v62; // [rsp+50h] [rbp-30h] BYREF
  __int64 v63; // [rsp+60h] [rbp-20h]
  __int64 v64; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v65; // [rsp+C8h] [rbp+48h]

  if ( !*a1 || (unsigned int)*a1 > 0xA )
    return 0;
  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19320) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    LOBYTE(v8) = 19;
    if ( !HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 19360), v8) )
      *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19320) = 0LL;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19320) && !(unsigned int)CreateInjectionDevice(v10, v9, v11) )
    return 0;
  v12 = Win32AllocPoolWithQuotaZInitImpl(v10, 0xF0uLL, 0x7A747355u);
  v13 = Win32AllocPoolWithQuotaZInitImpl(*a1, 192LL * (unsigned int)*a1, 0x7A747355u);
  v18 = (char *)v13;
  if ( v12 && v13 )
  {
    *(_QWORD *)(v12 + 232) = v13;
    v19 = 1;
    v20 = 0LL;
    v21 = *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 19320);
    *(_QWORD *)(v12 + 32) = v21;
    *(_DWORD *)(v12 + 192) = 1;
    *(_QWORD *)(v12 + 48) = *((_QWORD *)a1 + 12);
    *(_DWORD *)(v12 + 28) = 0;
    *(_DWORD *)(v12 + 24) = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v64 = 0LL;
        v22 = 192 * v20;
        v65 = 144 * v20;
        v23 = (unsigned int *)&a1[36 * v20];
        v24 = &v18[v22];
        *((_OWORD *)v24 + 1) = *((_OWORD *)v23 + 1);
        *((_OWORD *)v24 + 2) = *((_OWORD *)v23 + 2);
        *((_OWORD *)v24 + 3) = *((_OWORD *)v23 + 3);
        *((_OWORD *)v24 + 4) = *((_OWORD *)v23 + 4);
        *((_OWORD *)v24 + 5) = *((_OWORD *)v23 + 5);
        *((_OWORD *)v24 + 6) = *((_OWORD *)v23 + 6);
        *((_OWORD *)v24 + 7) = *((_OWORD *)v23 + 7);
        *((_OWORD *)v24 + 8) = *((_OWORD *)v23 + 8);
        *((_OWORD *)v24 + 9) = *((_OWORD *)v23 + 9);
        v25 = *((_QWORD *)v23 + 8);
        *(_QWORD *)&v18[v22 + 48] = v25;
        v26 = *(_OWORD *)(W32GetUserSessionState(192 * (int)v20 + (int)v18, 144 * (int)v20, v16) + 19328);
        v30 = *(_OWORD *)(W32GetUserSessionState(v28, v27, v29) + 19344);
        v60 = v26;
        v62 = v30;
        if ( !(unsigned int)ConvertPointCoordinates(v25, &v62, (int *)&v60, &v64) )
          break;
        v31 = v64;
        v20 = (unsigned int)(v20 + 1);
        v21 = v65;
        *(_QWORD *)&v18[v22 + 56] = v64;
        *(_QWORD *)&v18[v22 + 72] = v31;
        *(_QWORD *)&v18[v22 + 32] = *(_QWORD *)(v12 + 32);
        *(_DWORD *)&v18[v22 + 80] = *(int *)((char *)a1 + v21 + 80);
        *(_QWORD *)&v18[v22 + 96] = *(_QWORD *)((char *)a1 + v21 + 96);
        *(_WORD *)&v18[v22 + 8] = *(_WORD *)((char *)a1 + v21 + 20);
        *(_DWORD *)&v18[v22 + 20] = 0;
        if ( (unsigned int)v20 >= *a1 )
          goto LABEL_13;
      }
      v19 = 0;
    }
    else
    {
LABEL_13:
      PtiCurrent(v21, v14);
      v34 = PtiCurrent(v33, v32);
      *(_QWORD *)&v60 = *((_QWORD *)v34 + 47);
      *((_QWORD *)v34 + 47) = &v60;
      *((_QWORD *)&v60 + 1) = v12;
      v61 = GreDeleteFastMutex;
      v36 = PtiCurrent((__int64)&v60, v35);
      *(_QWORD *)&v62 = *((_QWORD *)v36 + 47);
      *((_QWORD *)v36 + 47) = &v62;
      *((_QWORD *)&v62 + 1) = v18;
      v63 = (__int64)GreDeleteFastMutex;
      v39 = W32GetUserSessionState((unsigned int)&v62, v37, v38);
      LOBYTE(v40) = 19;
      v41 = HMValidateHandleNoSecure(*(_QWORD *)(v39 + 19360), v40);
      InputTraceLogging::RIM::InjectInput(v41, 0, 1);
      v45 = W32GetUserSessionState(v43, v42, v44);
      v46 = a1[1];
      v47 = a1[2] != 0;
      v48 = *(PERESOURCE **)(v45 + 3256);
      v49 = v46 != 0;
      v52 = W32GetUserSessionState(v50, v46, v51);
      CTouchProcessor::ProcessInjectedInput(v48, *(void **)(v52 + 19320), (struct RIMCOMPLETEFRAME *)v12, v49, v47);
      v55 = PtiCurrent(v54, v53);
      v56 = v62;
      *((_QWORD *)v55 + 47) = v62;
      v63 = -1LL;
      v58 = PtiCurrent(v56, v57);
      *((_QWORD *)v58 + 47) = v60;
    }
    goto LABEL_16;
  }
  v19 = 0;
  if ( v12 )
LABEL_16:
    GreDeleteFastMutex((char *)v12, v14, v16, v17);
  if ( v18 )
    GreDeleteFastMutex(v18, v14, v16, v17);
  return v19;
}
