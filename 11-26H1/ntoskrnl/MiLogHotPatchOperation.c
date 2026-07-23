/*
 * XREFs of MiLogHotPatchOperation @ 0x140877E0C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     MiFillLogProcessInfo @ 0x14046E5B0 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  _KPROCESS *Process; // rdi
  char result; // al
  void *FirstArgument; // rbx
  __int64 v15; // r8
  unsigned __int8 *v16; // rdx
  int v17; // eax
  unsigned int *v18; // rax
  int v19; // eax
  int v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D8h]
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int ProcessId; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v32; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+74h] [rbp-94h] BYREF
  const CHAR *v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *p_ProcessId; // [rsp+A8h] [rbp-60h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  _BYTE v39[16]; // [rsp+B8h] [rbp-50h] BYREF
  const CHAR **v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  int *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  int *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  int *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  int *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  __int64 v52; // [rsp+128h] [rbp+20h]
  int v53; // [rsp+130h] [rbp+28h] BYREF
  int v54; // [rsp+134h] [rbp+2Ch]
  int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  int *v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  int *v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  _DWORD *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  __int64 v65; // [rsp+188h] [rbp+80h]
  _DWORD v66[2]; // [rsp+190h] [rbp+88h] BYREF
  const CHAR **v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  unsigned int *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  int *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  __int64 *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]

  v34 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiFillLogProcessInfo((__int64)&Process[2].ReadyListHead.Blink, &ProcessId, &v34);
  FirstArgument = stru_140E366D8.FirstArgument;
  if ( a9 )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
    {
      result = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL);
      if ( result )
      {
        ProcessId = (unsigned int)PsGetProcessId(Process);
        p_ProcessId = &ProcessId;
        v38 = 4LL;
        tlgCreate1Sz_char((__int64)v39, v34);
        v40 = &v34;
        v16 = (unsigned __int8 *)&byte_140059B65;
        LODWORD(v34) = a8;
        v42 = &v33;
        v44 = &v32;
        v31 = *(_DWORD *)(a2 + 56);
        v46 = &v31;
        v30 = *(_DWORD *)(a2 + 60);
        v48 = &v30;
        v50 = &v53;
        v52 = *(_QWORD *)(a2 + 48);
        v53 = *(unsigned __int16 *)(a2 + 40);
        v29 = *(_DWORD *)(a2 + 64);
        v55 = &v29;
        v28 = a5;
        v57 = &v28;
        v27 = *a6;
        v59 = &v27;
        v26 = a6[1];
        v61 = &v26;
        v63 = v66;
        v65 = *((_QWORD *)a7 + 1);
        v66[0] = *a7;
        v25 = *(_DWORD *)(a2 + 16);
        v67 = (const CHAR **)&v25;
        v19 = (*(_DWORD *)(a2 + 68) >> 1) & 1;
        v41 = 4LL;
        v24 = v19;
        v18 = &v24;
        v33 = a3;
        v43 = 4LL;
        v32 = a4;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 2LL;
        v54 = 0;
        v56 = 4LL;
        goto LABEL_8;
      }
    }
  }
  else if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    result = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL);
    if ( result )
    {
      v24 = (unsigned int)PsGetProcessId(Process);
      p_ProcessId = &v24;
      v38 = 4LL;
      tlgCreate1Sz_char((__int64)v39, v34);
      v40 = (const CHAR **)&v25;
      v16 = (unsigned __int8 *)byte_140059CBB;
      v25 = a8;
      v42 = &v26;
      v44 = &v27;
      v28 = *(_DWORD *)(a2 + 56);
      v46 = &v28;
      v29 = *(_DWORD *)(a2 + 60);
      v48 = &v29;
      v50 = &v53;
      v52 = *(_QWORD *)(a2 + 48);
      v53 = *(unsigned __int16 *)(a2 + 40);
      v30 = *(_DWORD *)(a2 + 64);
      v55 = &v30;
      v31 = a5;
      v57 = &v31;
      v32 = *a6;
      v59 = &v32;
      v33 = a6[1];
      v61 = &v33;
      v63 = v66;
      v65 = *((_QWORD *)a7 + 1);
      v66[0] = *a7;
      LODWORD(v34) = *(_DWORD *)(a2 + 16);
      v67 = &v34;
      v17 = (*(_DWORD *)(a2 + 68) >> 1) & 1;
      v41 = 4LL;
      ProcessId = v17;
      v18 = &ProcessId;
      v26 = a3;
      v43 = 4LL;
      v27 = a4;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 2LL;
      v54 = 0;
      v56 = 4LL;
LABEL_8:
      v69 = v18;
      LOWORD(v22) = WORD2(Process[3].PerProcessorCycleTimes);
      v71 = &v22;
      v35 = 2164260864LL;
      v73 = &v35;
      v64 = 2LL;
      v62 = 4LL;
      v60 = 4LL;
      v58 = 4LL;
      v66[1] = 0;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 2LL;
      v74 = 8LL;
      return tlgWriteEx_EtwWriteEx((__int64)FirstArgument, v16, v15, 1u, v20, v21, 0x15u, &v36);
    }
  }
  return result;
}
