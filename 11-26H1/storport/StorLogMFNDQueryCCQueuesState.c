/*
 * XREFs of StorLogMFNDQueryCCQueuesState @ 0x1400CB324
 * Callers:
 *     StorQueryMFNDChildPFQueuesState @ 0x1401937F8 (StorQueryMFNDChildPFQueuesState.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer @ 0x1400C7760 (McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDQueryCCQueuesState(__int64 a1, char a2, __int64 a3, unsigned __int16 a4, char a5)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int16 *v10; // r11
  __int64 v11; // r8
  __int16 v12; // r10
  __int16 v13; // r14
  __int16 v14; // r15
  __int16 v15; // r12
  int v16; // r9d
  __int16 v17; // r13
  __int16 v18; // cx
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // bx
  char v22; // al
  int v23; // r9d
  __int64 v24; // rdx
  const wchar_t *v25; // rdx
  char v26; // [rsp+100h] [rbp-80h]
  char v27; // [rsp+101h] [rbp-7Fh]
  __int16 v28; // [rsp+104h] [rbp-7Ch]
  __int16 v29; // [rsp+108h] [rbp-78h]
  __int16 v30; // [rsp+10Ch] [rbp-74h]
  __int16 v32; // [rsp+114h] [rbp-6Ch]
  char v33; // [rsp+118h] [rbp-68h]
  char v34; // [rsp+11Ch] [rbp-64h]
  char v35; // [rsp+120h] [rbp-60h]
  __int16 v36; // [rsp+124h] [rbp-5Ch]
  __int128 v37; // [rsp+128h] [rbp-58h] BYREF
  __int128 v38; // [rsp+138h] [rbp-48h] BYREF
  __int64 v39; // [rsp+148h] [rbp-38h] BYREF
  char v40; // [rsp+150h] [rbp-30h]
  __int128 v41; // [rsp+158h] [rbp-28h] BYREF
  int v42; // [rsp+168h] [rbp-18h]
  char v43; // [rsp+16Ch] [rbp-14h]
  __int128 v44; // [rsp+170h] [rbp-10h] BYREF
  __int128 v45; // [rsp+180h] [rbp+0h]
  __int64 v46; // [rsp+190h] [rbp+10h]
  char v47; // [rsp+198h] [rbp+18h]

  if ( StorEtwLoggingEnabled )
  {
    v42 = 0;
    v37 = 0LL;
    v43 = 0;
    v44 = 0LL;
    v46 = 0LL;
    v45 = 0LL;
    v47 = 0;
    v8 = *(_OWORD *)(a1 + 5128);
    v9 = *(_QWORD *)(a1 + 16);
    v39 = 0LL;
    v38 = v8;
    v40 = 0;
    v41 = 0LL;
    RaidDriverGetName(v9, (__int64)&v37);
    v10 = *(__int16 **)(a1 + 6064);
    if ( v10 )
    {
      v44 = *(_OWORD *)(v10 + 12);
      v45 = *(_OWORD *)(v10 + 20);
      v46 = *((_QWORD *)v10 + 7);
      v39 = *((_QWORD *)v10 + 8);
      v41 = *(_OWORD *)(v10 + 2);
      v42 = *((_DWORD *)v10 + 5);
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      v11 = (a3 + 44) & -(__int64)(a3 != 0);
      if ( a3 )
      {
        v12 = *(_WORD *)(a3 + 34);
        v13 = *(_WORD *)(a3 + 32);
        v14 = *(_WORD *)(a3 + 30);
        v15 = *(_WORD *)(a3 + 28);
        v16 = 3 * (*(unsigned __int16 *)(a3 + 8) + *(unsigned __int16 *)(a3 + 10));
        v17 = *(_WORD *)(a3 + 24);
        v18 = *(_WORD *)(a3 + 20);
        v19 = *(_WORD *)(a3 + 16);
        v26 = *(_BYTE *)(a3 + 36);
        v27 = *(_BYTE *)(a3 + 26);
        v28 = *(_WORD *)(a3 + 22);
        v32 = *(_WORD *)(a3 + 12);
        v29 = *(_WORD *)(a3 + 10);
        v20 = *(_WORD *)(a3 + 8);
        v21 = *(_WORD *)(a3 + 14);
        v35 = v20;
        v22 = v28;
        v23 = 8 * v16;
      }
      else
      {
        v22 = 0;
        v23 = 0;
        LOBYTE(v12) = 0;
        v26 = 0;
        LOBYTE(v13) = 0;
        v27 = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v32) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v18) = 0;
        v35 = 0;
        LOBYTE(v19) = 0;
        LOBYTE(v21) = 0;
      }
      v34 = v19;
      v33 = v18;
      if ( v10 )
      {
        v36 = v10[1];
        v30 = *v10;
      }
      else
      {
        LOBYTE(v28) = v22;
        LOBYTE(v36) = 0;
        LOBYTE(v30) = 0;
        v34 = v19;
        v33 = v18;
      }
      v24 = *(_QWORD *)(a1 + 6224);
      if ( !v24 || (v25 = *(const wchar_t **)(v24 + 24)) == 0LL )
        v25 = (const wchar_t *)&unk_140153274;
      McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer(
        (a4 >> 9) & 7,
        &EventMFNDQueryCCQueuesState,
        v11,
        *(_DWORD *)(a1 + 56),
        (__int64)&v38,
        *((const wchar_t **)&v37 + 1),
        (const char *)&v41,
        v25,
        v30,
        v36,
        (const char *)&v44,
        (const char *)&v39,
        a2,
        v35,
        v29,
        v32,
        v21,
        v34,
        v33,
        v28,
        v17,
        v27,
        v15,
        v14,
        v13,
        v12,
        v26,
        v23,
        v11,
        a4 >> 1,
        (a4 >> 9) & 7,
        a5);
    }
  }
}
