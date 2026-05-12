/*
 * XREFs of StorLogMFNDCCAsyncEvent @ 0x140097770
 * Callers:
 *     RaProcessMFNDChildControllerEvent @ 0x140092038 (RaProcessMFNDChildControllerEvent.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer @ 0x14008E058 (McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDCCAsyncEvent(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  int v9; // eax
  __int16 *v10; // r11
  __int16 v11; // r14
  __int16 v12; // r15
  __int64 v13; // rsi
  const wchar_t *v14; // rsi
  unsigned int v15; // edx
  __int128 v17; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v18; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-60h] BYREF
  char v20; // [rsp+D8h] [rbp-58h]
  __int128 v21; // [rsp+E0h] [rbp-50h] BYREF
  int v22; // [rsp+F0h] [rbp-40h]
  char v23; // [rsp+F4h] [rbp-3Ch]
  __int128 v24; // [rsp+F8h] [rbp-38h] BYREF
  __int128 v25; // [rsp+108h] [rbp-28h]
  __int64 v26; // [rsp+118h] [rbp-18h]
  char v27; // [rsp+120h] [rbp-10h]

  v5 = a4;
  if ( StorEtwLoggingEnabled )
  {
    v22 = 0;
    v17 = 0LL;
    v23 = 0;
    v24 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0;
    v7 = *(_OWORD *)(a1 + 5128);
    v8 = *(_QWORD *)(a1 + 16);
    v19 = 0LL;
    v18 = v7;
    v20 = 0;
    v21 = 0LL;
    LOWORD(v9) = RaidDriverGetName(v8, (__int64)&v17);
    v10 = *(__int16 **)(a1 + 6064);
    if ( v10 )
    {
      v24 = *(_OWORD *)(v10 + 12);
      v25 = *(_OWORD *)(v10 + 20);
      v26 = *((_QWORD *)v10 + 7);
      v19 = *((_QWORD *)v10 + 8);
      v21 = *(_OWORD *)(v10 + 2);
      v9 = *((_DWORD *)v10 + 5);
      v22 = v9;
    }
    if ( (byte_140173449 & 1) != 0 )
    {
      if ( v10 )
      {
        v11 = v10[1];
        v12 = *v10;
      }
      else
      {
        LOBYTE(v11) = 0;
        LOBYTE(v12) = 0;
      }
      v13 = *(_QWORD *)(a1 + 6224);
      if ( !v13 || (v14 = *(const wchar_t **)(v13 + 24)) == 0LL )
        v14 = (const wchar_t *)&unk_140153274;
      v15 = *(unsigned __int8 *)(a2 + 16 * v5 + 17);
      LOWORD(v9) = McTemplateK0qjzszhhsshtttttqqq_EtwWriteTransfer(
                     *(unsigned __int8 *)(a2 + 16 * v5 + 16),
                     (v15 >> 1) & 1,
                     (v15 >> 2) & 1,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v18,
                     *((const wchar_t **)&v17 + 1),
                     (const char *)&v21,
                     v14,
                     v12,
                     v11,
                     (const char *)&v24,
                     (const char *)&v19,
                     *(_BYTE *)(a2 + 16 * v5 + 16),
                     v15 & 1,
                     (v15 & 2) != 0,
                     (v15 & 4) != 0,
                     (v15 & 8) != 0,
                     (v15 & 0x10) != 0,
                     *(_DWORD *)(a2 + 16 * v5 + 20),
                     *(_DWORD *)(a2 + 16 * v5 + 24),
                     *(_DWORD *)(a2 + 16 * v5 + 28));
    }
  }
  return v9;
}
