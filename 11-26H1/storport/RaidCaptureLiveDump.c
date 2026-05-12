/*
 * XREFs of RaidCaptureLiveDump @ 0x1400536B8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0quuujjzssszqqd_EtwWriteTransfer @ 0x14008EF1C (McTemplateK0quuujjzssszqqd_EtwWriteTransfer.c)
 *     RaCaptureLiveDumpAllowed @ 0x140091AE4 (RaCaptureLiveDumpAllowed.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidCaptureLiveDump(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // r15
  bool v5; // zf
  __int64 v8; // rsi
  int v9; // r10d
  __int64 v10; // r8
  int v11; // r10d
  __int64 v12; // r11
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // r14
  int v18; // ecx
  void *v19; // rax
  const int *v20; // r8
  const int *v21; // rdx
  const int *v22; // rdi
  int v24; // [rsp+90h] [rbp-78h]
  __int128 v25; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-50h] BYREF

  LOBYTE(v3) = RaidNullAddress;
  LOBYTE(v4) = 0;
  v24 = RaidNullAddress;
  v5 = *(_DWORD *)a3 == 40;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( v5
    && *(_DWORD *)(a3 + 4) == 40
    && *(_QWORD *)(a3 + 32)
    && (v8 = *(_QWORD *)(a3 + 16)) != 0
    && *(_DWORD *)(a3 + 24) == 1
    && ((v9 = *(_DWORD *)(a3 + 8), v9 == 1) || v9 == 2) )
  {
    if ( (unsigned __int8)RaCaptureLiveDumpAllowed() )
    {
      v4 = *(int *)(v10 + 12);
      v14 = 0;
      if ( v11 == 1 )
        v14 = 2;
      if ( a2 )
        v15 = 0LL;
      else
        v15 = *(unsigned __int16 *)(a1 + 4800);
      v13 = DbgkWerCaptureLiveKernelDump(v8, 481LL, 1LL, v4, v15, v12, v10, RaidCaptureLiveDumpCallBack, v14);
    }
    else
    {
      v13 = -1073741823;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a2 + 104);
      v24 = v3;
      v27 = *(_OWORD *)(a2 + 2104);
    }
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(void **)(a1 + 5144);
    v26 = *(_OWORD *)(a1 + 5128);
    RaidDriverGetName(v16, (__int64)&v25);
    if ( (byte_140173446 & 8) != 0 )
    {
      if ( a2 )
        v18 = 0;
      else
        v18 = *(unsigned __int16 *)(a1 + 4800);
      v19 = &unk_140153274;
      if ( v17 )
        v19 = v17;
      if ( a2 )
      {
        v20 = (const int *)(a2 + 242);
        v21 = (const int *)(a2 + 177);
        v22 = (const int *)(a2 + 168);
      }
      else
      {
        v22 = &dword_140154ADC;
        v20 = &dword_140154ADC;
        v21 = &dword_140154ADC;
      }
      McTemplateK0quuujjzssszqqd_EtwWriteTransfer(
        v18,
        (_DWORD)v21,
        (_DWORD)v20,
        *(_DWORD *)(a1 + 56),
        v3,
        SBYTE1(v24),
        SBYTE2(v24),
        (__int64)&v27,
        (__int64)&v26,
        *((__int64 *)&v25 + 1),
        (__int64)v22,
        (__int64)v21,
        (__int64)v20,
        (__int64)v19,
        v18,
        v4,
        v13);
    }
  }
  return v13;
}
