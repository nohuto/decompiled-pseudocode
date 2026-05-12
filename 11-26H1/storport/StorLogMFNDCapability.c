/*
 * XREFs of StorLogMFNDCapability @ 0x14006E24C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer @ 0x14005E6E0 (McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogMFNDCapability(__int64 a1, char a2, unsigned __int16 a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int16 *v9; // r11
  __int64 v10; // rax
  int v11; // r9d
  int v12; // edi
  __int16 v13; // si
  __int16 v14; // r11
  const wchar_t *v15; // r10
  __int64 v16; // r8
  __int128 v17; // [rsp+170h] [rbp-80h] BYREF
  __int128 v18; // [rsp+180h] [rbp-70h] BYREF
  __int64 v19; // [rsp+190h] [rbp-60h] BYREF
  char v20; // [rsp+198h] [rbp-58h]
  __int128 v21; // [rsp+1A0h] [rbp-50h] BYREF
  int v22; // [rsp+1B0h] [rbp-40h]
  char v23; // [rsp+1B4h] [rbp-3Ch]
  __int128 v24; // [rsp+1B8h] [rbp-38h] BYREF
  __int128 v25; // [rsp+1C8h] [rbp-28h]
  __int64 v26; // [rsp+1D8h] [rbp-18h]
  char v27; // [rsp+1E0h] [rbp-10h]

  if ( StorEtwLoggingEnabled && *(_QWORD *)(a1 + 6216) )
  {
    v22 = 0;
    v17 = 0LL;
    v23 = 0;
    v24 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0;
    v6 = *(_OWORD *)(a1 + 5128);
    v7 = *(_QWORD *)(a1 + 16);
    v19 = 0LL;
    v18 = v6;
    v20 = 0;
    v21 = 0LL;
    RaidDriverGetName(v7, (__int64)&v17);
    v9 = *(__int16 **)(a1 + 6064);
    if ( v9 )
    {
      v24 = *(_OWORD *)(v9 + 12);
      v25 = *(_OWORD *)(v9 + 20);
      v26 = *((_QWORD *)v9 + 7);
      v19 = *((_QWORD *)v9 + 8);
      v21 = *(_OWORD *)(v9 + 2);
      v22 = *((_DWORD *)v9 + 5);
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 6224);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 32);
        v12 = *(_DWORD *)(v10 + 36);
      }
      else
      {
        LOBYTE(v12) = -1;
        LOBYTE(v11) = -1;
      }
      if ( v9 )
      {
        v13 = v9[1];
        v14 = *v9;
      }
      else
      {
        LOBYTE(v13) = 0;
        LOBYTE(v14) = 0;
      }
      if ( !v10 || (v15 = *(const wchar_t **)(v10 + 24)) == 0LL )
        v15 = (const wchar_t *)&unk_140153274;
      v16 = *(_QWORD *)(a1 + 6216);
      McTemplateK0qjzszhhssttqqquuhhhhhhhhqqqqqqqqqqqquuuuuu_EtwWriteTransfer(
        v8,
        *(_BYTE *)(a1 + 111) & 1,
        v16,
        *(_DWORD *)(a1 + 56),
        (__int64)&v18,
        *((const wchar_t **)&v17 + 1),
        (const char *)&v21,
        v15,
        v14,
        v13,
        (const char *)&v24,
        (const char *)&v19,
        *(_BYTE *)(a1 + 111) & 1,
        a2,
        v12,
        v11,
        *(_DWORD *)v16,
        *(_BYTE *)(v16 + 4),
        *(_BYTE *)(v16 + 5),
        *(_WORD *)(v16 + 8),
        *(_WORD *)(v16 + 10),
        *(_WORD *)(v16 + 12),
        *(_WORD *)(v16 + 14),
        *(_WORD *)(v16 + 16),
        *(_WORD *)(v16 + 18),
        *(_WORD *)(v16 + 20),
        *(_WORD *)(v16 + 22),
        *(_DWORD *)(v16 + 24),
        *(_DWORD *)(v16 + 28),
        *(_DWORD *)(v16 + 32),
        *(_DWORD *)(v16 + 36),
        *(_DWORD *)(v16 + 40),
        *(_DWORD *)(v16 + 44),
        *(_DWORD *)(v16 + 48),
        *(_DWORD *)(v16 + 52),
        *(_DWORD *)(v16 + 56),
        *(_DWORD *)(v16 + 60),
        *(_DWORD *)(v16 + 64),
        *(_DWORD *)(v16 + 68),
        *(_BYTE *)(v16 + 72),
        *(_BYTE *)(v16 + 73),
        *(_BYTE *)(v16 + 74),
        *(_BYTE *)(v16 + 75),
        a3 >> 1,
        (a3 >> 9) & 7);
    }
  }
}
