/*
 * XREFs of MiLogCommitRequestFailed @ 0x140881BEC
 * Callers:
 *     MiCommitRequestFailed @ 0x140B64818 (MiCommitRequestFailed.c)
 * Callees:
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 ProcessPartition; // rax
  int v8; // ett
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  int v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-78h] BYREF
  __int64 v33; // [rsp+98h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h] BYREF
  int v35; // [rsp+A8h] [rbp-60h] BYREF
  __int16 SessionId; // [rsp+ACh] [rbp-5Ch]
  __int16 v37; // [rsp+AEh] [rbp-5Ah]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+B8h] [rbp-50h] BYREF
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  __int64 *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  __int64 *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int64 *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  __int64 *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  __int64 *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  __int64 *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  __int64 *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]

  _m_prefetchw((const void *)(a2 + 1532));
  LODWORD(ProcessPartition) = *(_DWORD *)(a2 + 1532);
  do
  {
    v8 = ProcessPartition;
    LODWORD(ProcessPartition) = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)(a2 + 1532),
                                  ProcessPartition | 0x400,
                                  ProcessPartition);
  }
  while ( v8 != (_DWORD)ProcessPartition );
  if ( (ProcessPartition & 0x400) == 0 )
  {
    v35 = *(_DWORD *)(a2 + 464);
    SessionId = PsGetSessionId(a2);
    v37 = MEMORY[0xFFFFF780000002C4];
    v38 = *(_QWORD *)(a2 + 504);
    v9 = *(_QWORD *)(a2 + 760);
    v10 = *(_QWORD *)(v9 + 320);
    v11 = *(_QWORD *)(v9 + 256);
    v24 = *(_QWORD *)(a2 + 976);
    v25 = *(_QWORD *)(a2 + 984);
    v12 = *(_QWORD *)(a2 + 672);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 704);
    else
      v13 = 0LL;
    ProcessPartition = MiGetProcessPartition(a2);
    v14 = *(_QWORD *)(ProcessPartition + 23448);
    v15 = *(_QWORD *)(ProcessPartition + 23104);
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 2u )
    {
      LOBYTE(ProcessPartition) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000001000LL);
      if ( (_BYTE)ProcessPartition )
      {
        v32 = v17;
        v40 = &v35;
        v41 = 16LL;
        v42 = &v26;
        v26 = a3;
        v44 = &v23;
        v43 = 8LL;
        v46 = &v27;
        v48 = &v28;
        v50 = &v24;
        v52 = &v25;
        v54 = &v29;
        v56 = &v30;
        v58 = &v31;
        v60 = &v32;
        v62 = &v33;
        v64 = &v34;
        LODWORD(v23) = a4;
        v45 = 4LL;
        v27 = v10;
        v47 = 8LL;
        v28 = v11;
        v49 = 8LL;
        v51 = 8LL;
        v53 = 8LL;
        v29 = v19;
        v55 = 8LL;
        v30 = v13;
        v57 = 8LL;
        v31 = v18;
        v59 = 8LL;
        v61 = 8LL;
        v33 = v14;
        v63 = 8LL;
        v34 = v15;
        v65 = 8LL;
        LOBYTE(ProcessPartition) = tlgWriteEx_EtwWriteEx(
                                     v16,
                                     (unsigned __int8 *)&dword_14005A2D4,
                                     v16,
                                     1u,
                                     v21,
                                     v22,
                                     0xFu,
                                     &v39);
      }
    }
  }
  return ProcessPartition;
}
