/*
 * XREFs of StorLogIdentifyMFNDFailure @ 0x1400CAAFC
 * Callers:
 *     StorQueryMFNDCapability @ 0x1401925B8 (StorQueryMFNDCapability.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsstqquuq_EtwWriteTransfer @ 0x1400C9970 (McTemplateK0qjzszhhsstqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorLogIdentifyMFNDFailure(__int64 a1, char a2, unsigned __int16 a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int16 *v8; // r11
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // r9d
  __int16 v12; // r10
  __int16 v13; // r11
  const wchar_t *v14; // rdx
  __int128 v15; // [rsp+90h] [rbp-80h] BYREF
  __int128 v16; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-60h] BYREF
  char v18; // [rsp+B8h] [rbp-58h]
  __int128 v19; // [rsp+C0h] [rbp-50h] BYREF
  int v20; // [rsp+D0h] [rbp-40h]
  char v21; // [rsp+D4h] [rbp-3Ch]
  __int128 v22; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v23; // [rsp+E8h] [rbp-28h]
  __int64 v24; // [rsp+F8h] [rbp-18h]
  char v25; // [rsp+100h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v20 = 0;
    v15 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v25 = 0;
    v6 = *(_OWORD *)(a1 + 5128);
    v7 = *(_QWORD *)(a1 + 16);
    v17 = 0LL;
    v16 = v6;
    v18 = 0;
    v19 = 0LL;
    RaidDriverGetName(v7, (__int64)&v15);
    v8 = *(__int16 **)(a1 + 6064);
    if ( v8 )
    {
      v22 = *(_OWORD *)(v8 + 12);
      v23 = *(_OWORD *)(v8 + 20);
      v24 = *((_QWORD *)v8 + 7);
      v17 = *((_QWORD *)v8 + 8);
      v19 = *(_OWORD *)(v8 + 2);
      v20 = *((_DWORD *)v8 + 5);
    }
    if ( (byte_140173449 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 6224);
      if ( v9 )
      {
        v10 = *(unsigned int *)(v9 + 32);
        v11 = *(_DWORD *)(v9 + 36);
      }
      else
      {
        LOBYTE(v11) = -1;
        v10 = 0xFFFFFFFFLL;
      }
      if ( v8 )
      {
        v12 = v8[1];
        v13 = *v8;
      }
      else
      {
        LOBYTE(v12) = 0;
        LOBYTE(v13) = 0;
      }
      if ( !v9 || (v14 = *(const wchar_t **)(v9 + 24)) == 0LL )
        v14 = (const wchar_t *)&unk_140153274;
      McTemplateK0qjzszhhsstqquuq_EtwWriteTransfer(
        (a3 >> 9) & 7,
        (__int64)v14,
        v10,
        *(_DWORD *)(a1 + 56),
        (__int64)&v16,
        *((const wchar_t **)&v15 + 1),
        (const char *)&v19,
        v14,
        v13,
        v12,
        (const char *)&v22,
        (const char *)&v17,
        *(_BYTE *)(a1 + 111) & 1,
        v11,
        v10,
        a3 >> 1,
        (a3 >> 9) & 7,
        a2);
    }
  }
}
