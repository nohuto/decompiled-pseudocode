/*
 * XREFs of DeregisterKernelIdleDomains @ 0x140041A40
 * Callers:
 *     RegisterKernelIdleStates @ 0x140041490 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x140005E70 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     memset @ 0x140010740 (memset.c)
 *     UpdateKernelIdleDomains @ 0x1400290AC (UpdateKernelIdleDomains.c)
 *     DeregisterIdleDomain @ 0x1400293F8 (DeregisterIdleDomain.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned __int32 *v2; // rdx
  unsigned __int32 v3; // ecx
  unsigned __int32 v4; // eax
  unsigned __int32 *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  __m256i v13; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v14[272]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v15[272]; // [rsp+158h] [rbp+50h] BYREF

  memset(v15, 0, 0x108uLL);
  memset(&v13.m256i_u64[1], 0, 24);
  memset(v14, 0, 0x108uLL);
  KeInitializeAffinityEx2(v14, 32LL);
  v2 = *(unsigned __int32 **)(a1 + 728);
  if ( v2 )
  {
    v3 = 0;
    v13.m256i_i32[0] = 0;
    if ( *v2 )
    {
      v4 = 0;
      do
      {
        v5 = &v2[8 * v4];
        v6 = *((_QWORD *)v5 + 2);
        if ( v6 )
        {
          KeInitializeAffinityEx2(v15, 32LL);
          KeCopyAffinityEx2(v15, v6 + 48);
          if ( DeregisterIdleDomain(a1, (_QWORD *)v5 + 1) )
            KeOrAffinityEx2(v15, v14, v14);
          v3 = v13.m256i_i32[0];
        }
        v2 = *(unsigned __int32 **)(a1 + 728);
        v13.m256i_i32[0] = ++v3;
        v4 = v3;
      }
      while ( v3 < *v2 );
    }
    v7 = 0;
    KeInitializeEnumerationContext(&v13.m256i_u64[1], v14);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v13.m256i_u64[1]) )
    {
      DevExtFromIndex = GetDevExtFromIndex(v13.m256i_u32[0]);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v7 = updated;
    }
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 48LL);
    v13.m256i_i32[0] = 0;
    if ( v8 )
    {
      v9 = 0LL;
      do
      {
        *(_QWORD *)(88 * v9 + *(_QWORD *)(a1 + 712) + 128) = 0LL;
        v9 = (unsigned int)(v13.m256i_i32[0] + 1);
        v13.m256i_i32[0] = v9;
      }
      while ( (unsigned int)v9 < v8 );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), (ULONG)1919119952);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
  else
  {
    return 0;
  }
  return v7;
}
