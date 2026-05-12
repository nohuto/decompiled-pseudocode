/*
 * XREFs of StorLogMFNDSetChildPFSettings @ 0x1400CCFB0
 * Callers:
 *     StorSetMFNDChildPFSettings @ 0x1401959F8 (StorSetMFNDChildPFSettings.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C7B00 (McTemplateK0qjzszhhsshhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDSetChildPFSettings(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int16 *v9; // r11
  __int16 v10; // r10
  int v11; // ecx
  int v12; // r13d
  int v13; // r12d
  int v14; // r15d
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int16 v18; // r9
  int v19; // eax
  int v20; // esi
  __int64 v21; // rcx
  const wchar_t *v22; // rcx
  int v23; // [rsp+110h] [rbp-80h]
  int v24; // [rsp+114h] [rbp-7Ch]
  int v25; // [rsp+118h] [rbp-78h]
  int v26; // [rsp+11Ch] [rbp-74h]
  int v27; // [rsp+120h] [rbp-70h]
  __int16 v28; // [rsp+124h] [rbp-6Ch]
  int v29; // [rsp+128h] [rbp-68h]
  char v30; // [rsp+12Ch] [rbp-64h]
  char v31; // [rsp+130h] [rbp-60h]
  __int16 v32; // [rsp+134h] [rbp-5Ch]
  __int16 v33; // [rsp+138h] [rbp-58h]
  __int128 v36; // [rsp+148h] [rbp-48h] BYREF
  __int128 v37; // [rsp+158h] [rbp-38h] BYREF
  __int64 v38; // [rsp+168h] [rbp-28h] BYREF
  char v39; // [rsp+170h] [rbp-20h]
  __int128 v40; // [rsp+178h] [rbp-18h] BYREF
  int v41; // [rsp+188h] [rbp-8h]
  char v42; // [rsp+18Ch] [rbp-4h]
  __int128 v43; // [rsp+190h] [rbp+0h] BYREF
  __int128 v44; // [rsp+1A0h] [rbp+10h]
  __int64 v45; // [rsp+1B0h] [rbp+20h]
  char v46; // [rsp+1B8h] [rbp+28h]

  if ( StorEtwLoggingEnabled )
  {
    v41 = 0;
    v36 = 0LL;
    v42 = 0;
    v43 = 0LL;
    v45 = 0LL;
    v44 = 0LL;
    v46 = 0;
    v7 = *(_OWORD *)(a1 + 5128);
    v8 = *(_QWORD *)(a1 + 16);
    v38 = 0LL;
    v37 = v7;
    v39 = 0;
    v40 = 0LL;
    RaidDriverGetName(v8, (__int64)&v36);
    v9 = *(__int16 **)(a1 + 6064);
    LOBYTE(v10) = 0;
    if ( v9 )
    {
      v43 = *(_OWORD *)(v9 + 12);
      v44 = *(_OWORD *)(v9 + 20);
      v45 = *((_QWORD *)v9 + 7);
      v38 = *((_QWORD *)v9 + 8);
      v40 = *(_OWORD *)(v9 + 2);
      v41 = *((_DWORD *)v9 + 5);
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 60);
        v12 = *(_DWORD *)(a2 + 44);
        v13 = *(_DWORD *)(a2 + 40);
        v14 = *(_DWORD *)(a2 + 36);
        v15 = *(_DWORD *)(a2 + 32);
        v16 = *(unsigned __int16 *)(a2 + 26);
        v17 = *(unsigned __int16 *)(a2 + 24);
        v18 = *(_WORD *)(a2 + 22);
        v10 = *(_WORD *)(a2 + 20);
        v23 = *(_DWORD *)(a2 + 88);
        v24 = *(_DWORD *)(a2 + 84);
        v25 = *(_DWORD *)(a2 + 80);
        v26 = *(_DWORD *)(a2 + 76);
        v27 = *(_DWORD *)(a2 + 72);
        v29 = *(_DWORD *)(a2 + 68);
        v19 = *(_DWORD *)(a2 + 52);
        v32 = *(_WORD *)(a2 + 8);
        v20 = *(_DWORD *)(a2 + 64);
      }
      else
      {
        LOBYTE(v19) = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v32) = 0;
        LOBYTE(v20) = 0;
        LOBYTE(v24) = 0;
        LOBYTE(v11) = 0;
        LOBYTE(v25) = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v26) = 0;
        LOBYTE(v13) = 0;
        LOBYTE(v27) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v29) = 0;
        LOBYTE(v15) = 0;
        v16 = 0LL;
        v17 = 0LL;
        LOBYTE(v18) = 0;
      }
      v31 = v19;
      v30 = v11;
      if ( v9 )
      {
        v33 = v9[1];
        v28 = *v9;
      }
      else
      {
        v31 = v19;
        LOBYTE(v33) = 0;
        LOBYTE(v28) = 0;
        v30 = v11;
      }
      v21 = *(_QWORD *)(a1 + 6224);
      if ( !v21 || (v22 = *(const wchar_t **)(v21 + 24)) == 0LL )
        v22 = (const wchar_t *)&unk_140153274;
      McTemplateK0qjzszhhsshhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer(
        (__int64)v22,
        v16,
        v17,
        *(_DWORD *)(a1 + 56),
        (__int64)&v37,
        *((const wchar_t **)&v36 + 1),
        (const char *)&v40,
        v22,
        v28,
        v33,
        (const char *)&v43,
        (const char *)&v38,
        v32,
        v10,
        v18,
        v17,
        v16,
        v15,
        v14,
        v13,
        v12,
        v31,
        v30,
        v20,
        v29,
        v27,
        v26,
        v25,
        v24,
        v23,
        a3 >> 1,
        (a3 >> 9) & 7,
        a4);
    }
  }
}
