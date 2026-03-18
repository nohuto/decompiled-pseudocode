/*
 * XREFs of ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1402556D4
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14025560C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x14028BBC0 (-UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYP.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1402D1FD8 (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1402FDC90 (-ProcessGetAppSessionGuid@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall HandleIntObjUsageTelemetry(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int128 v8; // rtt
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int128 v11; // xmm8
  struct _GUID v12; // xmm7
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r13
  struct tagINTOBJTELEMETRYSTATE *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebx
  __int64 v33; // rax
  __int128 v34; // xmm6
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _GUID v37; // xmm0
  __int64 v38; // rax
  unsigned __int16 v39; // r8
  unsigned __int16 v40; // dx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // xmm1_8
  int v48; // eax
  _QWORD Buf2[4]; // [rsp+30h] [rbp-B9h] BYREF
  int v51; // [rsp+50h] [rbp-99h]
  struct _GUID v52; // [rsp+58h] [rbp-91h] BYREF
  __int128 Buf1_8; // [rsp+68h] [rbp-81h] BYREF
  _BYTE v54[144]; // [rsp+78h] [rbp-71h] BYREF

  v5 = a4;
  v8 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL);
  v9 = v8 / gliQpcFreq;
  v11 = 0LL;
  v12 = 0LL;
  Buf1_8 = 0LL;
  v13 = v9 - *(_QWORD *)(W32GetUserSessionState(v10, v8 % gliQpcFreq) + 17264);
  v52 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18944) )
  {
    v17 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944);
    if ( *(_QWORD *)(v17 + 456) )
    {
      UserSessionState = W32GetUserSessionState(v17, v16);
      v11 = (__int128)*ProcessGetAppSessionGuid(
                         (struct _GUID *)&Buf2[1],
                         *(struct tagPROCESSINFO **)(*(_QWORD *)(UserSessionState + 18944) + 456LL));
      Buf1_8 = v11;
    }
  }
  if ( a2 )
  {
    v16 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a2 + 16) + 456LL);
    if ( v16 )
    {
      v12 = *ProcessGetAppSessionGuid((struct _GUID *)&Buf2[1], v16);
      v52 = v12;
    }
  }
  if ( v13 > 0xEA60
    || (*(_OWORD *)&Buf2[1] = *(_OWORD *)(W32GetUserSessionState(v17, v16) + 17316), memcmp(&Buf1_8, &Buf2[1], 0x10uLL))
    || (*(_OWORD *)&Buf2[1] = *(_OWORD *)(W32GetUserSessionState(v20, v19) + 17332), memcmp(&v52, &Buf2[1], 0x10uLL)) )
  {
    memset_0(v54, 0, 0x60uLL);
    v23 = W32GetUserSessionState(v22, v21);
    v24 = (struct tagINTOBJTELEMETRYSTATE *)(v23 + 17168);
    if ( memcmp((const void *)(v23 + 17168), v54, 0x60uLL) )
    {
      v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 17280);
      if ( v27 < *(_QWORD *)(W32GetUserSessionState(v29, v28) + 17272) )
      {
        v32 = *(_DWORD *)(v23 + 17308) & 2;
        v31 = v9 - *(_QWORD *)(W32GetUserSessionState(v31, v30) + 17272);
        v33 = v32 != 0 ? 0x30 : 0;
        *(_QWORD *)((char *)v24 + v33 + 40) += v31;
      }
      v34 = *(_OWORD *)(W32GetUserSessionState(v31, v30) + 17332);
      v37 = *(struct _GUID *)(W32GetUserSessionState(v36, v35) + 17316);
      v38 = *(_QWORD *)(a1 + 512);
      v39 = *(_WORD *)(v38 + 112);
      v40 = *(_WORD *)(v38 + 110);
      *(_OWORD *)&Buf2[1] = v34;
      v52 = v37;
      TraceLoggingIntObjUsageSummaryEvent(v24, v40, v39, &v52, (struct _GUID *)&Buf2[1], v13);
      memset_0(v24, 0, 0x60uLL);
      v5 = a4;
    }
    *(_QWORD *)(W32GetUserSessionState(v26, v25) + 17272) = v9;
    *(_QWORD *)(W32GetUserSessionState(v42, v41) + 17264) = v9;
    *(_OWORD *)(W32GetUserSessionState(v44, v43) + 17316) = v11;
    *(struct _GUID *)(W32GetUserSessionState(v46, v45) + 17332) = v12;
  }
  v47 = *(_QWORD *)(a3 + 16);
  v48 = *(_DWORD *)(a3 + 24);
  *(_OWORD *)&Buf2[1] = *(_OWORD *)a3;
  Buf2[3] = v47;
  v51 = v48;
  return UpdateIntObjUsage(a2, &Buf2[1], v5, a5, v9);
}
