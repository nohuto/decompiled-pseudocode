/*
 * XREFs of StorLogMFNDQueryCCQoSStatisticsProperty @ 0x1400CB15C
 * Callers:
 *     StorQueryMFNDChildPFQoSStatisticsProperty @ 0x1401935F4 (StorQueryMFNDChildPFQoSStatisticsProperty.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssthhuuq_EtwWriteTransfer @ 0x1400C9728 (McTemplateK0qjzszhhssthhuuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDQueryCCQoSStatisticsProperty(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int16 *v11; // r11
  __int16 v12; // dx
  __int64 v13; // r8
  char v14; // bl
  __int16 v15; // r9
  __int16 v16; // r10
  __int64 v17; // rcx
  const wchar_t *v18; // rcx
  __int128 v20; // [rsp+90h] [rbp-80h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-60h] BYREF
  char v23; // [rsp+B8h] [rbp-58h]
  __int128 v24; // [rsp+C0h] [rbp-50h] BYREF
  int v25; // [rsp+D0h] [rbp-40h]
  char v26; // [rsp+D4h] [rbp-3Ch]
  __int128 v27; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v28; // [rsp+E8h] [rbp-28h]
  __int64 v29; // [rsp+F8h] [rbp-18h]
  char v30; // [rsp+100h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v25 = 0;
    v20 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v30 = 0;
    v8 = *(_OWORD *)(a1 + 5128);
    v9 = *(_QWORD *)(a1 + 16);
    v22 = 0LL;
    v21 = v8;
    v23 = 0;
    v24 = 0LL;
    LOWORD(v10) = RaidDriverGetName(v9, (__int64)&v20);
    v11 = *(__int16 **)(a1 + 6064);
    if ( v11 )
    {
      v27 = *(_OWORD *)(v11 + 12);
      v28 = *(_OWORD *)(v11 + 20);
      v29 = *((_QWORD *)v11 + 7);
      v22 = *((_QWORD *)v11 + 8);
      v24 = *(_OWORD *)(v11 + 2);
      v10 = *((_DWORD *)v11 + 5);
      v25 = v10;
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( a2 )
      {
        v12 = *(_WORD *)(a2 + 10);
        v13 = *(unsigned __int16 *)(a2 + 8);
        v14 = *(_BYTE *)(a2 + 4);
      }
      else
      {
        LOBYTE(v12) = 0;
        v13 = 0LL;
        v14 = 0;
      }
      if ( v11 )
      {
        v15 = v11[1];
        v16 = *v11;
      }
      else
      {
        LOBYTE(v15) = 0;
        LOBYTE(v16) = 0;
      }
      v17 = *(_QWORD *)(a1 + 6224);
      if ( !v17 || (v18 = *(const wchar_t **)(v17 + 24)) == 0LL )
        v18 = (const wchar_t *)&unk_140153274;
      LOWORD(v10) = McTemplateK0qjzszhhssthhuuq_EtwWriteTransfer(
                      (__int64)v18,
                      &EventMFNDQueryCCQoSStatisticsProperty,
                      v13,
                      *(_DWORD *)(a1 + 56),
                      (__int64)&v21,
                      *((const wchar_t **)&v20 + 1),
                      (const char *)&v24,
                      v18,
                      v16,
                      v15,
                      (const char *)&v27,
                      (const char *)&v22,
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
