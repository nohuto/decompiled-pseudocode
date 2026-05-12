/*
 * XREFs of StorLogMFNDSetChildPFQoS @ 0x1400CCD5C
 * Callers:
 *     StorSetMFNDChildPFQoS @ 0x140195250 (StorSetMFNDChildPFQoS.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer @ 0x1400C87E8 (McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDSetChildPFQoS(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  _UNKNOWN **v4; // rax
  __int128 v8; // xmm0
  __int64 v9; // rcx
  unsigned __int16 *v10; // r11
  __int16 v11; // dx
  int v12; // ecx
  int v13; // r13d
  int v14; // r12d
  int v15; // r15d
  int v16; // r14d
  int v17; // r10d
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  const wchar_t *v23; // rcx
  char v25; // [rsp+D8h] [rbp-80h]
  char v26; // [rsp+DCh] [rbp-7Ch]
  char v27; // [rsp+E0h] [rbp-78h]
  __int128 v29; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+100h] [rbp-58h] BYREF
  __int64 v31; // [rsp+110h] [rbp-48h] BYREF
  char v32; // [rsp+118h] [rbp-40h]
  __int128 v33; // [rsp+120h] [rbp-38h] BYREF
  int v34; // [rsp+130h] [rbp-28h]
  char v35; // [rsp+134h] [rbp-24h]
  __int128 v36; // [rsp+138h] [rbp-20h] BYREF
  __int128 v37; // [rsp+148h] [rbp-10h]
  __int64 v38; // [rsp+158h] [rbp+0h]
  char v39; // [rsp+160h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+1A0h] [rbp+48h] BYREF

  v4 = &retaddr;
  if ( StorEtwLoggingEnabled )
  {
    v34 = 0;
    v29 = 0LL;
    v35 = 0;
    v36 = 0LL;
    v38 = 0LL;
    v37 = 0LL;
    v39 = 0;
    v8 = *(_OWORD *)(a1 + 5128);
    v9 = *(_QWORD *)(a1 + 16);
    v31 = 0LL;
    v30 = v8;
    v32 = 0;
    v33 = 0LL;
    LOWORD(v4) = RaidDriverGetName(v9, (__int64)&v29);
    v10 = *(unsigned __int16 **)(a1 + 6064);
    if ( v10 )
    {
      v36 = *(_OWORD *)(v10 + 12);
      v37 = *(_OWORD *)(v10 + 20);
      v38 = *((_QWORD *)v10 + 7);
      v31 = *((_QWORD *)v10 + 8);
      v33 = *(_OWORD *)(v10 + 2);
      LODWORD(v4) = *((_DWORD *)v10 + 5);
      v34 = (int)v4;
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_WORD *)(a2 + 8);
        v12 = *(_DWORD *)(a2 + 52);
        v13 = *(_DWORD *)(a2 + 44);
        v14 = *(_DWORD *)(a2 + 40);
        v15 = *(_DWORD *)(a2 + 36);
        v16 = *(_DWORD *)(a2 + 32);
        v17 = *(_DWORD *)(a2 + 28);
        v18 = *(_DWORD *)(a2 + 20);
        v19 = *(_DWORD *)(a2 + 48);
        LODWORD(a2) = *(_DWORD *)(a2 + 56);
        v27 = v11;
      }
      else
      {
        LOBYTE(v19) = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
        v27 = 0;
        LOBYTE(v14) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
      }
      v26 = v19;
      v25 = v12;
      if ( v10 )
      {
        v20 = v10[1];
        v21 = *v10;
      }
      else
      {
        v20 = 0LL;
        v26 = v19;
        v21 = 0LL;
        v25 = v12;
      }
      v22 = *(_QWORD *)(a1 + 6224);
      if ( !v22 || (v23 = *(const wchar_t **)(v22 + 24)) == 0LL )
        v23 = (const wchar_t *)&unk_140153274;
      LOWORD(v4) = McTemplateK0qjzszhhsshqqqqqqqqquuq_EtwWriteTransfer(
                     (__int64)v23,
                     v20,
                     v21,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v30,
                     *((const wchar_t **)&v29 + 1),
                     (const char *)&v33,
                     v23,
                     v21,
                     v20,
                     (const char *)&v36,
                     (const char *)&v31,
                     v27,
                     v18,
                     v17,
                     v16,
                     v15,
                     v14,
                     v13,
                     v26,
                     v25,
                     a2,
                     a3 >> 1,
                     (a3 >> 9) & 7,
                     a4);
    }
  }
  return (__int16)v4;
}
