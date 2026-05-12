/*
 * XREFs of RaCheckAllMiniportSystemThreadsExit @ 0x140091B34
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzzqq_EtwWriteTransfer @ 0x14008E784 (McTemplateK0qjzzqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall RaCheckAllMiniportSystemThreadsExit(__int64 a1)
{
  signed __int32 v1; // eax
  char v2; // di
  __int128 v3; // xmm1
  const wchar_t *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  const wchar_t *v9; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-28h] BYREF

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 6080), 0, 0);
  v2 = v1;
  if ( v1 )
  {
    if ( StorEtwLoggingEnabled )
    {
      v3 = *(_OWORD *)(a1 + 5128);
      v4 = *(const wchar_t **)(a1 + 5144);
      v5 = *(_QWORD *)(a1 + 16);
      v12 = v3;
      v11 = 0LL;
      LOWORD(v1) = RaidDriverGetName(v5, (__int64)&v11);
      if ( byte_140173446 < 0 )
      {
        v9 = (const wchar_t *)&unk_140153274;
        if ( v4 )
          v9 = v4;
        LOWORD(v1) = McTemplateK0qjzzqq_EtwWriteTransfer(
                       (__int64)v9,
                       v6,
                       v7,
                       *(_DWORD *)(v8 + 56),
                       (__int64)&v12,
                       *((const wchar_t **)&v11 + 1),
                       v9,
                       *(_DWORD *)(v8 + 6076),
                       v2);
      }
    }
  }
  return v1;
}
