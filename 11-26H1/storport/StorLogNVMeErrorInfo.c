/*
 * XREFs of StorLogNVMeErrorInfo @ 0x140097970
 * Callers:
 *     StorGetAndLogNVMeErrorInfoWorkRoutine @ 0x1400CA1C0 (StorGetAndLogNVMeErrorInfoWorkRoutine.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssxhhhxquxqbr17_EtwWriteTransfer @ 0x14008E2E4 (McTemplateK0qjzszhhssxhhhxquxqbr17_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogNVMeErrorInfo(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 *v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  const wchar_t *v11; // rcx
  int v13; // [rsp+A0h] [rbp-90h]
  __int128 v14; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v15; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-60h] BYREF
  char v17; // [rsp+D8h] [rbp-58h]
  __int128 v18; // [rsp+E0h] [rbp-50h] BYREF
  int v19; // [rsp+F0h] [rbp-40h]
  char v20; // [rsp+F4h] [rbp-3Ch]
  __int128 v21; // [rsp+F8h] [rbp-38h] BYREF
  __int128 v22; // [rsp+108h] [rbp-28h]
  __int64 v23; // [rsp+118h] [rbp-18h]
  char v24; // [rsp+120h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v19 = 0;
    v14 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v24 = 0;
    v4 = *(_OWORD *)(a1 + 5128);
    v5 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    v15 = v4;
    v17 = 0;
    v18 = 0LL;
    LOWORD(v6) = RaidDriverGetName(v5, (__int64)&v14);
    v7 = *(unsigned __int16 **)(a1 + 6064);
    if ( v7 )
    {
      v21 = *(_OWORD *)(v7 + 12);
      v22 = *(_OWORD *)(v7 + 20);
      v23 = *((_QWORD *)v7 + 7);
      v16 = *((_QWORD *)v7 + 8);
      v18 = *(_OWORD *)(v7 + 2);
      v6 = *((_DWORD *)v7 + 5);
      v19 = v6;
    }
    if ( (byte_140173447 & 8) != 0 )
    {
      if ( v7 )
      {
        v8 = v7[1];
        v9 = *v7;
      }
      else
      {
        v8 = 0LL;
        v9 = 0LL;
      }
      v10 = *(_QWORD *)(a1 + 6224);
      if ( !v10 || (v11 = *(const wchar_t **)(v10 + 24)) == 0LL )
        v11 = (const wchar_t *)&unk_140153274;
      LOWORD(v6) = McTemplateK0qjzszhhssxhhhxquxqbr17_EtwWriteTransfer(
                     (__int64)v11,
                     v8,
                     v9,
                     *(_DWORD *)(a1 + 56),
                     (__int64)&v15,
                     *((const wchar_t **)&v14 + 1),
                     (const char *)&v18,
                     v11,
                     v9,
                     v8,
                     (const char *)&v21,
                     (const char *)&v16,
                     *(_QWORD *)a2,
                     *(_WORD *)(a2 + 8),
                     *(_WORD *)(a2 + 10),
                     *(_WORD *)(a2 + 12),
                     *(_QWORD *)(a2 + 16),
                     *(_DWORD *)(a2 + 24),
                     *(_BYTE *)(a2 + 28),
                     *(_QWORD *)(a2 + 32),
                     v13,
                     a2);
    }
  }
  return v6;
}
