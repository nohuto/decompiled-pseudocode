/*
 * XREFs of StorLogMFNDQueryChildPFSettings @ 0x1400CBC04
 * Callers:
 *     StorQueryMFNDChildPFSettings @ 0x140193BD4 (StorQueryMFNDChildPFSettings.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C7EB4 (McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDQueryChildPFSettings(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int16 v4; // r14
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int16 *v10; // r11
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r13d
  int v15; // r12d
  int v16; // r15d
  __int16 v17; // r9
  __int16 v18; // r10
  int v19; // eax
  int v20; // esi
  __int64 v21; // rcx
  const wchar_t *v22; // rcx
  int v23; // [rsp+110h] [rbp-80h]
  int v24; // [rsp+114h] [rbp-7Ch]
  int v25; // [rsp+118h] [rbp-78h]
  int v26; // [rsp+11Ch] [rbp-74h]
  int v27; // [rsp+120h] [rbp-70h]
  int v28; // [rsp+124h] [rbp-6Ch]
  __int16 v29; // [rsp+128h] [rbp-68h]
  int v30; // [rsp+12Ch] [rbp-64h]
  char v31; // [rsp+130h] [rbp-60h]
  char v32; // [rsp+134h] [rbp-5Ch]
  __int16 v33; // [rsp+138h] [rbp-58h]
  __int16 v34; // [rsp+13Ch] [rbp-54h]
  __int128 v37; // [rsp+150h] [rbp-40h] BYREF
  __int128 v38; // [rsp+160h] [rbp-30h] BYREF
  __int64 v39; // [rsp+170h] [rbp-20h] BYREF
  char v40; // [rsp+178h] [rbp-18h]
  __int128 v41; // [rsp+180h] [rbp-10h] BYREF
  int v42; // [rsp+190h] [rbp+0h]
  char v43; // [rsp+194h] [rbp+4h]
  __int128 v44; // [rsp+198h] [rbp+8h] BYREF
  __int128 v45; // [rsp+1A8h] [rbp+18h]
  __int64 v46; // [rsp+1B8h] [rbp+28h]
  char v47; // [rsp+1C0h] [rbp+30h]

  LOBYTE(v4) = 0;
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
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 36);
        v12 = *(unsigned __int16 *)(a2 + 34);
        v13 = *(unsigned __int16 *)(a2 + 32);
        v14 = *(_DWORD *)(a2 + 24);
        v15 = *(_DWORD *)(a2 + 20);
        v16 = *(_DWORD *)(a2 + 16);
        v17 = *(_WORD *)(a2 + 10);
        v18 = *(_WORD *)(a2 + 8);
        v4 = *(_WORD *)(a2 + 6);
        v23 = *(_DWORD *)(a2 + 72);
        v24 = *(_DWORD *)(a2 + 68);
        v25 = *(_DWORD *)(a2 + 64);
        v26 = *(_DWORD *)(a2 + 60);
        v27 = *(_DWORD *)(a2 + 56);
        v28 = *(_DWORD *)(a2 + 52);
        v30 = *(_DWORD *)(a2 + 48);
        v19 = *(_DWORD *)(a2 + 28);
        v33 = *(_WORD *)(a2 + 4);
        v20 = *(_DWORD *)(a2 + 44);
      }
      else
      {
        LOBYTE(v19) = 0;
        LOBYTE(v23) = 0;
        LOBYTE(v33) = 0;
        LOBYTE(v20) = 0;
        LOBYTE(v24) = 0;
        LOBYTE(v11) = 0;
        LOBYTE(v25) = 0;
        v12 = 0LL;
        LOBYTE(v26) = 0;
        v13 = 0LL;
        LOBYTE(v27) = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v28) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v30) = 0;
        LOBYTE(v16) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
      }
      v32 = v19;
      v31 = v11;
      if ( v10 )
      {
        v34 = v10[1];
        v29 = *v10;
      }
      else
      {
        v32 = v19;
        LOBYTE(v34) = 0;
        LOBYTE(v29) = 0;
        v31 = v11;
      }
      v21 = *(_QWORD *)(a1 + 6224);
      if ( !v21 || (v22 = *(const wchar_t **)(v21 + 24)) == 0LL )
        v22 = (const wchar_t *)&unk_140153274;
      McTemplateK0qjzszhhsshhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer(
        (__int64)v22,
        v12,
        v13,
        *(_DWORD *)(a1 + 56),
        (__int64)&v38,
        *((const wchar_t **)&v37 + 1),
        (const char *)&v41,
        v22,
        v29,
        v34,
        (const char *)&v44,
        (const char *)&v39,
        v33,
        v4,
        v18,
        v17,
        v16,
        v15,
        v14,
        v32,
        v13,
        v12,
        v31,
        v20,
        v30,
        v28,
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
