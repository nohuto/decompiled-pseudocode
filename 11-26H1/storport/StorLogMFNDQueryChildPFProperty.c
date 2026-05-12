/*
 * XREFs of StorLogMFNDQueryChildPFProperty @ 0x1400CBA14
 * Callers:
 *     StorQueryMFNDChildPFGlobalProperty @ 0x140192A90 (StorQueryMFNDChildPFGlobalProperty.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshhuuuuuq_EtwWriteTransfer @ 0x1400C8280 (McTemplateK0qjzszhhsshhuuuuuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDQueryChildPFProperty(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int16 *v12; // r11
  char v13; // r10
  char v14; // r9
  __int16 v15; // dx
  __int16 v16; // r14
  __int16 v17; // bx
  __int16 v18; // r11
  __int64 v19; // rcx
  const wchar_t *v20; // rcx
  __int128 v22; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-60h] BYREF
  char v25; // [rsp+C8h] [rbp-58h]
  __int128 v26; // [rsp+D0h] [rbp-50h] BYREF
  int v27; // [rsp+E0h] [rbp-40h]
  char v28; // [rsp+E4h] [rbp-3Ch]
  __int128 v29; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v30; // [rsp+F8h] [rbp-28h]
  __int64 v31; // [rsp+108h] [rbp-18h]
  char v32; // [rsp+110h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v27 = 0;
    v22 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    v32 = 0;
    v8 = *(_OWORD *)(a1 + 5128);
    v9 = *(_QWORD *)(a1 + 16);
    v24 = 0LL;
    v23 = v8;
    v25 = 0;
    v26 = 0LL;
    LOWORD(v10) = RaidDriverGetName(v9, (__int64)&v22);
    v12 = *(__int16 **)(a1 + 6064);
    if ( v12 )
    {
      v29 = *(_OWORD *)(v12 + 12);
      v30 = *(_OWORD *)(v12 + 20);
      v31 = *((_QWORD *)v12 + 7);
      v24 = *((_QWORD *)v12 + 8);
      v26 = *(_OWORD *)(v12 + 2);
      v10 = *((_DWORD *)v12 + 5);
      v27 = v10;
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( a2 )
      {
        v13 = *(_BYTE *)(a2 + 10);
        v14 = *(_BYTE *)(a2 + 9);
        LOBYTE(v11) = *(_BYTE *)(a2 + 8);
        v15 = *(_WORD *)(a2 + 6);
        v16 = *(_WORD *)(a2 + 4);
      }
      else
      {
        v13 = 0;
        v14 = 0;
        LOBYTE(v11) = 0;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
      }
      if ( v12 )
      {
        v17 = v12[1];
        v18 = *v12;
      }
      else
      {
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
      }
      v19 = *(_QWORD *)(a1 + 6224);
      if ( !v19 || (v20 = *(const wchar_t **)(v19 + 24)) == 0LL )
        v20 = (const wchar_t *)&unk_140153274;
      LOWORD(v10) = McTemplateK0qjzszhhsshhuuuuuq_EtwWriteTransfer(
                      (__int64)v20,
                      &EventMFNDQueryChildPFProperty,
                      v11,
                      *(_DWORD *)(a1 + 56),
                      (__int64)&v23,
                      *((const wchar_t **)&v22 + 1),
                      (const char *)&v26,
                      v20,
                      v18,
                      v17,
                      (const char *)&v29,
                      (const char *)&v24,
                      v16,
                      v15,
                      v11,
                      v14,
                      v13,
                      a3 >> 1,
                      (a3 >> 9) & 7,
                      a4);
    }
  }
  return v10;
}
