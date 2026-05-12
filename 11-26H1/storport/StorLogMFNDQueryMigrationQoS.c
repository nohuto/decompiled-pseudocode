/*
 * XREFs of StorLogMFNDQueryMigrationQoS @ 0x1400CBF44
 * Callers:
 *     StorQueryMFNDMigrationQoS @ 0x140193EE4 (StorQueryMFNDMigrationQoS.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssqqqqquuq_EtwWriteTransfer @ 0x14005DCF0 (McTemplateK0qjzszhhssqqqqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDQueryMigrationQoS(__int64 a1, _DWORD *a2, unsigned __int16 a3, char a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int16 *v11; // r11
  int v12; // r10d
  int v13; // r9d
  __int64 v14; // r8
  int v15; // edx
  int v16; // r14d
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
    v11 = *(__int16 **)(a1 + 6064);
    if ( v11 )
    {
      v29 = *(_OWORD *)(v11 + 12);
      v30 = *(_OWORD *)(v11 + 20);
      v31 = *((_QWORD *)v11 + 7);
      v24 = *((_QWORD *)v11 + 8);
      v26 = *(_OWORD *)(v11 + 2);
      v10 = *((_DWORD *)v11 + 5);
      v27 = v10;
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( a2 )
      {
        v12 = a2[6];
        v13 = a2[5];
        v14 = (unsigned int)a2[4];
        v15 = a2[3];
        v16 = a2[2];
      }
      else
      {
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
        v14 = 0LL;
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
      }
      if ( v11 )
      {
        v17 = v11[1];
        v18 = *v11;
      }
      else
      {
        LOBYTE(v17) = 0;
        LOBYTE(v18) = 0;
      }
      v19 = *(_QWORD *)(a1 + 6224);
      if ( !v19 || (v20 = *(const wchar_t **)(v19 + 24)) == 0LL )
        v20 = (const wchar_t *)&unk_140153274;
      LOWORD(v10) = McTemplateK0qjzszhhssqqqqquuq_EtwWriteTransfer(
                      (__int64)v20,
                      &EventMFNDQueryMigrationQoS,
                      v14,
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
                      v14,
                      v13,
                      v12,
                      a3 >> 1,
                      (a3 >> 9) & 7,
                      a4);
    }
  }
  return v10;
}
