/*
 * XREFs of PopHiberReadChecksums @ 0x140C0F654
 * Callers:
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopGetIoLocation @ 0x140BEF524 (PopGetIoLocation.c)
 */

unsigned __int64 __fastcall PopHiberReadChecksums(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 result; // rax
  char *v2; // rsi
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 IoLocation; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  int v13; // r9d
  unsigned __int64 v14; // rax
  bool v15; // cf
  size_t v16; // rcx
  size_t v17; // rbp
  unsigned __int64 v18; // r9
  unsigned int v19; // r13d
  unsigned __int64 v20; // rbp
  int v21; // eax
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v23; // rax
  size_t v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  unsigned __int64 v26; // [rsp+48h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  unsigned __int64 v28; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  char *v30; // [rsp+B8h] [rbp+20h]

  result = (unsigned __int64)&retaddr;
  v2 = *(char **)(BugCheckParameter3 + 464);
  v3 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(BugCheckParameter3 + 216);
    v6 = *(_QWORD *)(BugCheckParameter3 + 352);
    v25 = v5;
    v7 = *(_QWORD *)(v5 + 120) << 12;
    v26 = __rdtsc();
    v8 = (2LL * *(_QWORD *)(v5 + 128) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    while ( v8 )
    {
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 176), v7, &v28);
      v10 = *(_QWORD *)(BugCheckParameter3 + 160);
      v11 = *(unsigned int *)(BugCheckParameter3 + 168);
      v12 = *(unsigned int *)(BugCheckParameter3 + 440);
      v13 = *(_DWORD *)(BugCheckParameter3 + 160);
      v29 = IoLocation;
      v14 = v28;
      v15 = v8 < v28;
      *(_WORD *)(v6 + 10) = 0;
      *(_QWORD *)v6 = 0LL;
      if ( v15 )
        v14 = v8;
      v16 = v11 << 12;
      if ( v14 < v16 )
        v16 = v14;
      v17 = v12 << 12;
      if ( v16 < v17 )
        v17 = v16;
      *(_DWORD *)(v6 + 40) = v17;
      v24 = v17;
      v18 = (v17 + (v13 & 0xFFF) + 4095LL) >> 12;
      *(_QWORD *)(v6 + 32) = v10 & 0xFFFFFFFFFFFFF000uLL;
      *(_WORD *)(v6 + 8) = 8 * (((v17 + (v10 & 0xFFF) + 4095) >> 12) + 6);
      *(_DWORD *)(v6 + 44) = v10 & 0xFFF;
      *(_QWORD *)(v6 + 24) = *(_QWORD *)(BugCheckParameter3 + 160);
      *(_WORD *)(v6 + 10) = 1;
      if ( v18 )
      {
        v19 = 0;
        v20 = v18;
        do
        {
          ++v19;
          *(_QWORD *)(v6 + 8 * v3 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(BugCheckParameter3 + 160)
                                                                                       + (v3 << 12))).QuadPart >> 12;
          v3 = v19;
        }
        while ( v19 < v20 );
        v2 = v30;
        v17 = v24;
        v5 = v25;
      }
      v21 = guard_dispatch_icall_no_overrides(0LL, (__int64)&v29);
      BugCheckParameter4 = v21;
      if ( v21 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      memmove(v2, *(const void **)(BugCheckParameter3 + 160), v17);
      v2 += v17;
      v8 -= v17;
      v7 += v17;
      v30 = v2;
      v3 = 0LL;
    }
    *(_QWORD *)(BugCheckParameter3 + 448) = *(_QWORD *)(v5 + 128);
    v23 = __rdtsc();
    result = (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v26;
    qword_140F10BD8 += result;
  }
  return result;
}
