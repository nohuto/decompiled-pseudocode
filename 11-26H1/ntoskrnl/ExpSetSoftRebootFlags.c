/*
 * XREFs of ExpSetSoftRebootFlags @ 0x1406CEE28
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSetSoftRebootFlags(int a1)
{
  char PreviousMode; // r9
  int v3; // r13d
  unsigned int v4; // esi
  unsigned int v5; // r8d
  char *v6; // rdx
  signed __int32 v7; // eax
  __int32 v8; // edi
  int v9; // ebx
  int v10; // r12d
  int v11; // r14d
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  int v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  char v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  char v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  __int64 (__fastcall *v31)(int, int); // [rsp+A8h] [rbp-60h]
  char v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B8h] [rbp-50h]
  int v34; // [rsp+BCh] [rbp-4Ch]
  __int64 (__fastcall *v35)(int, int); // [rsp+C0h] [rbp-48h]
  char v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall *v38)(int, int); // [rsp+D8h] [rbp-30h]
  char v39; // [rsp+E0h] [rbp-28h]
  int v40; // [rsp+E8h] [rbp-20h]
  int v41; // [rsp+ECh] [rbp-1Ch]
  __int64 (__fastcall *v42)(int, int); // [rsp+F0h] [rbp-18h]
  char v43; // [rsp+F8h] [rbp-10h]
  int v44; // [rsp+100h] [rbp-8h]
  int v45; // [rsp+104h] [rbp-4h]
  __int64 v46; // [rsp+108h] [rbp+0h]
  char v47; // [rsp+110h] [rbp+8h]
  __int64 v48; // [rsp+118h] [rbp+10h]
  __int64 (__fastcall *v49)(int, int); // [rsp+120h] [rbp+18h]
  char v50; // [rsp+128h] [rbp+20h]
  int v51; // [rsp+130h] [rbp+28h]
  int v52; // [rsp+134h] [rbp+2Ch]
  __int64 (__fastcall *v53)(int, __int64); // [rsp+138h] [rbp+30h]
  char v54; // [rsp+140h] [rbp+38h]
  int v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+14Ch] [rbp+44h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  char v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+5Ch]
  __int64 v61; // [rsp+168h] [rbp+60h]
  char v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+17Ch] [rbp+74h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  char v66; // [rsp+188h] [rbp+80h]
  int v67; // [rsp+190h] [rbp+88h]
  int v68; // [rsp+194h] [rbp+8Ch]
  __int64 (__fastcall *v69)(int, int); // [rsp+198h] [rbp+90h]
  char v70; // [rsp+1A0h] [rbp+98h]
  int v71; // [rsp+1A8h] [rbp+A0h]
  int v72; // [rsp+1ACh] [rbp+A4h]
  __int64 (__fastcall *v73)(int, int); // [rsp+1B0h] [rbp+A8h]
  char v74; // [rsp+1B8h] [rbp+B0h]
  int v75; // [rsp+1C0h] [rbp+B8h]
  int v76; // [rsp+1C4h] [rbp+BCh]
  __int64 (__fastcall *v77)(unsigned int, int); // [rsp+1C8h] [rbp+C0h]
  char v78; // [rsp+1D0h] [rbp+C8h]
  int v79; // [rsp+1D8h] [rbp+D0h]
  int v80; // [rsp+1DCh] [rbp+D4h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  char v82; // [rsp+1E8h] [rbp+E0h]
  int v83; // [rsp+1F0h] [rbp+E8h]
  int v84; // [rsp+1F4h] [rbp+ECh]
  __int64 (__fastcall *v85)(int, int); // [rsp+1F8h] [rbp+F0h]
  char v86; // [rsp+200h] [rbp+F8h]
  int v87; // [rsp+208h] [rbp+100h]
  int v88; // [rsp+20Ch] [rbp+104h]
  __int64 (__fastcall *v89)(int, int); // [rsp+210h] [rbp+108h]
  char v90; // [rsp+218h] [rbp+110h]
  __int64 v91; // [rsp+220h] [rbp+118h]
  __int64 v92; // [rsp+228h] [rbp+120h]
  char v93; // [rsp+230h] [rbp+128h]
  int v94; // [rsp+238h] [rbp+130h]
  int v95; // [rsp+23Ch] [rbp+134h]
  __int64 v96; // [rsp+240h] [rbp+138h]
  char v97; // [rsp+248h] [rbp+140h]

  Buffer = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  LOBYTE(v22) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = 0x2000000000LL;
  v24 = 0LL;
  v35 = BapdpKsrCompleteScenarioPhase0;
  v38 = BapdpKsrCancelScenario;
  v49 = BapdpKsrCancelScenario;
  v53 = BapdpKsrCompleteScenario;
  v60 = 80;
  v63 = 80;
  v77 = BapdpKsrComplete;
  v25 = 0;
  v26 = 32LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 8;
  v31 = BapdpKsrInitiateScenarioPhase0;
  v32 = 0;
  v33 = 8;
  v34 = 16;
  v36 = 0;
  v37 = 8LL;
  v39 = 0;
  v40 = 0;
  v41 = 16;
  v42 = BapdpKsrpInitiateScenario;
  v43 = 0;
  v44 = 16;
  v45 = 16;
  v46 = 0LL;
  v47 = 0;
  v48 = 16LL;
  v50 = 0;
  v51 = 16;
  v52 = 2;
  v54 = 0;
  v55 = 0;
  v56 = 1;
  v57 = 0LL;
  v58 = 0;
  v59 = 16;
  v61 = 0LL;
  v62 = 1;
  v64 = 16;
  v65 = 0LL;
  v66 = 1;
  v67 = 2;
  v68 = 8;
  v69 = BapdpKsrInitiateScenarioPhase0;
  v70 = 0;
  v71 = 2;
  v72 = 16;
  v73 = BapdpKsrpInitiateScenario;
  v74 = 0;
  v75 = 2;
  v76 = 1;
  v78 = 0;
  v79 = 1;
  v80 = 1;
  v81 = 0LL;
  v82 = 0;
  v84 = 8;
  v3 = a1 & 0x20000000;
  v83 = 1;
  v85 = BapdpKsrInitiateScenarioPhase0;
  v86 = 0;
  v87 = 1;
  v88 = 16;
  v89 = BapdpKsrpInitiateScenario;
  v90 = 0;
  v91 = 1LL;
  v92 = 0LL;
  v93 = 0;
  v94 = 1;
  v95 = 32;
  v96 = 0LL;
  v97 = 0;
  v4 = a1 & 0xC000017B;
  if ( a1 < 0 || (a1 & 0x40000000) != 0 )
    return 3221225485LL;
  v5 = 0;
  v6 = (char *)&v20 + 4;
  while ( v5 < 0x15 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v4 == *(_DWORD *)v6 && (!v6[12] || !PreviousMode) )
    {
      v8 = _InterlockedCompareExchange(&ExSoftRebootState, a1 & 0x4000017B | 0x80000000, v7);
      if ( v7 == v8 )
      {
        _m_prefetchw(&ExSoftRebootFlags);
        v9 = ExSoftRebootFlags;
        v10 = ExSoftRebootFlags & 0x40000000;
        if ( *(&v21 + 3 * (int)v5) )
          v11 = guard_dispatch_icall_no_overrides((unsigned int)ExSoftRebootFlags, (unsigned int)a1);
        else
          v11 = 0;
        v12 = ExSoftRebootFlags & 0x3EFFFE84;
        v13 = a1 & 0xC100017B;
        v14 = v9 & 0xC100017B;
        if ( v11 < 0 )
        {
          ExSoftRebootFlags = v12 | v14;
          _InterlockedExchange(&ExSoftRebootState, v8);
        }
        else
        {
          v15 = v13 | 0x40000000;
          if ( !v10 )
            v15 = v13;
          v16 = v12 | v15;
          ExSoftRebootFlags = v16;
          if ( v4 == 32 )
          {
            v17 = v16 | 0x40000000;
            goto LABEL_21;
          }
          if ( v8 == 32 && v3 )
          {
            v17 = v16 & 0xBFFFFFFF;
LABEL_21:
            ExSoftRebootFlags = v17;
          }
          _InterlockedExchange(&ExSoftRebootState, v4);
          Buffer = __PAIR64__(v4, v8);
          ZwUpdateWnfStateData(&WNF_KSR_STATE_TRANSITION, &Buffer, 8u, 0LL, 0LL, 0, 0);
        }
        return (unsigned int)v11;
      }
    }
    ++v5;
    v6 += 24;
  }
  return 3221266435LL;
}
