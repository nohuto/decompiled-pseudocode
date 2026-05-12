/*
 * XREFs of StorLogMFNDSetCCQueuesState @ 0x1400CC658
 * Callers:
 *     StorSetMFNDChildPFQueuesState @ 0x1401956CC (StorSetMFNDChildPFQueuesState.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer @ 0x1400C7760 (McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDSetCCQueuesState(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int16 v4; // r13
  int v7; // ebx
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r11
  __int16 *v11; // rdx
  __int64 v12; // r8
  __int16 v13; // r9
  __int16 v14; // r10
  __int16 v15; // r14
  __int16 v16; // r15
  __int16 v17; // r12
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // r11
  char v21; // al
  __int64 v22; // rdx
  const wchar_t *v23; // rdx
  char v24; // [rsp+100h] [rbp-80h]
  char v25; // [rsp+101h] [rbp-7Fh]
  __int16 v26; // [rsp+104h] [rbp-7Ch]
  __int16 v27; // [rsp+108h] [rbp-78h]
  __int16 v28; // [rsp+10Ch] [rbp-74h]
  __int16 v29; // [rsp+110h] [rbp-70h]
  __int16 v30; // [rsp+114h] [rbp-6Ch]
  char v31; // [rsp+118h] [rbp-68h]
  char v32; // [rsp+11Ch] [rbp-64h]
  __int16 v33; // [rsp+120h] [rbp-60h]
  __int128 v35; // [rsp+128h] [rbp-58h] BYREF
  __int128 v36; // [rsp+138h] [rbp-48h] BYREF
  __int64 v37; // [rsp+148h] [rbp-38h] BYREF
  char v38; // [rsp+150h] [rbp-30h]
  __int128 v39; // [rsp+158h] [rbp-28h] BYREF
  int v40; // [rsp+168h] [rbp-18h]
  char v41; // [rsp+16Ch] [rbp-14h]
  __int128 v42; // [rsp+170h] [rbp-10h] BYREF
  __int128 v43; // [rsp+180h] [rbp+0h]
  __int64 v44; // [rsp+190h] [rbp+10h]
  char v45; // [rsp+198h] [rbp+18h]

  LOBYTE(v4) = 0;
  if ( StorEtwLoggingEnabled )
  {
    v40 = 0;
    v41 = 0;
    v44 = 0LL;
    v45 = 0;
    v37 = 0LL;
    v38 = 0;
    v35 = 0LL;
    v39 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    if ( a2 )
      v7 = *(unsigned __int16 *)(a2 + 24) + *(unsigned __int16 *)(a2 + 26);
    else
      v7 = 0;
    v8 = *(_OWORD *)(a1 + 5128);
    v9 = *(_QWORD *)(a1 + 16);
    v36 = v8;
    RaidDriverGetName(v9, (__int64)&v35);
    v11 = *(__int16 **)(a1 + 6064);
    if ( v11 )
    {
      v42 = *(_OWORD *)(v11 + 12);
      v43 = *(_OWORD *)(v11 + 20);
      v44 = *((_QWORD *)v11 + 7);
      v37 = *((_QWORD *)v11 + 8);
      v39 = *(_OWORD *)(v11 + 2);
      v40 = *((_DWORD *)v11 + 5);
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      v12 = (v10 + 60) & -(__int64)(v10 != 0);
      if ( v10 )
      {
        v13 = *(_WORD *)(v10 + 50);
        v14 = *(_WORD *)(v10 + 48);
        v15 = *(_WORD *)(v10 + 46);
        v16 = *(_WORD *)(v10 + 44);
        v17 = *(_WORD *)(v10 + 40);
        v4 = *(_WORD *)(v10 + 38);
        v18 = *(_WORD *)(v10 + 32);
        v24 = *(_BYTE *)(v10 + 52);
        v25 = *(_BYTE *)(v10 + 42);
        v26 = *(_WORD *)(v10 + 36);
        v27 = *(_WORD *)(v10 + 28);
        v28 = *(_WORD *)(v10 + 26);
        v29 = *(_WORD *)(v10 + 24);
        v19 = *(_WORD *)(v10 + 8);
        v20 = *(_WORD *)(v10 + 30);
        v32 = v19;
        v21 = v26;
      }
      else
      {
        v21 = 0;
        v24 = 0;
        LOBYTE(v18) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v20) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v14) = 0;
        v32 = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
        v25 = 0;
        LOBYTE(v17) = 0;
      }
      v31 = v18;
      if ( v11 )
      {
        v33 = v11[1];
        v30 = *v11;
      }
      else
      {
        LOBYTE(v26) = v21;
        LOBYTE(v33) = 0;
        LOBYTE(v30) = 0;
        v31 = v18;
      }
      v22 = *(_QWORD *)(a1 + 6224);
      if ( !v22 || (v23 = *(const wchar_t **)(v22 + 24)) == 0LL )
        v23 = (const wchar_t *)&unk_140153274;
      McTemplateK0qjzszhhsshhhhhhhhhuhhhhuqbr24uuq_EtwWriteTransfer(
        (a3 >> 9) & 7,
        &EventMFNDSetCCQueuesState,
        v12,
        *(_DWORD *)(a1 + 56),
        (__int64)&v36,
        *((const wchar_t **)&v35 + 1),
        (const char *)&v39,
        v23,
        v30,
        v33,
        (const char *)&v42,
        (const char *)&v37,
        v32,
        v29,
        v28,
        v27,
        v20,
        v31,
        v26,
        v4,
        v17,
        v25,
        v16,
        v15,
        v14,
        v13,
        v24,
        24 * v7,
        v12,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
