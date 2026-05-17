/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x1800E9830
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x18013A520 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  HANDLE *v2; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm0
  __int64 v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  HANDLE *v9; // [rsp+68h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp-10h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h] BYREF
  HANDLE *v12; // [rsp+B0h] [rbp+30h] BYREF
  char *v13; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v1 = (a1 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v1 > 0xFFFFFFFF )
      return 0LL;
  }
  else
  {
    v1 = 0x400000LL;
  }
  v11 = 0LL;
  if ( is_mul_ok(v1, 2uLL) )
  {
    v11 = 2 * v1;
    v10 = 2 * v1;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL, &v10, 4, 0x4000000, 0LL) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, &v9, 0LL, 0LL, 0LL, &v11, 2, 0, 4) >= 0 )
    {
      v12 = v9;
      v6 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v6, 4096, 4) >= 0 )
      {
        v13 = (char *)v12 + v1;
        v7 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v13, 0LL, &v7, 4096, 4) >= 0 )
        {
          *v12 = Handle;
          v12[1] = v12;
          v12[9] = (HANDLE)208;
          v12[10] = (HANDLE)v6;
          v12[11] = (HANDLE)v1;
          v2 = v12;
          v3 = v13;
          *(_OWORD *)v13 = *(_OWORD *)v12;
          v3[1] = *((_OWORD *)v2 + 1);
          v3[2] = *((_OWORD *)v2 + 2);
          v3[3] = *((_OWORD *)v2 + 3);
          v3[4] = *((_OWORD *)v2 + 4);
          v3[5] = *((_OWORD *)v2 + 5);
          v3[6] = *((_OWORD *)v2 + 6);
          v3 += 8;
          v4 = *((_OWORD *)v2 + 7);
          v2 += 16;
          *(v3 - 1) = v4;
          *v3 = *(_OWORD *)v2;
          v3[1] = *((_OWORD *)v2 + 1);
          v3[2] = *((_OWORD *)v2 + 2);
          v3[3] = *((_OWORD *)v2 + 3);
          v3[4] = *((_OWORD *)v2 + 4);
          *((_QWORD *)v13 + 1) = v13;
          *((_QWORD *)v13 + 10) = v7;
          *(_QWORD *)v13 = 0LL;
          return v12;
        }
      }
    }
    if ( v12 )
      ZwFreeVirtualMemory(-1LL, &v12, &v6, 0x8000LL);
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v13, &v7, 0x8000LL);
    if ( v9 )
      NtUnmapViewOfSection(-1LL, v9);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
