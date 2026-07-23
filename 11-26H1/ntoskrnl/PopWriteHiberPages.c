/*
 * XREFs of PopWriteHiberPages @ 0x140C02C1C
 * Callers:
 *     PopWriteSecurePages @ 0x14060A050 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x14060A100 (PopWriteSecurePagesCallback.c)
 *     PopHiberWriteBootFreePageMap @ 0x140C00D84 (PopHiberWriteBootFreePageMap.c)
 *     PopWriteChecksumPages @ 0x140C02820 (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140C028B8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140C02EA4 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     MmGetNumberOfPhysicalPages @ 0x1404A8DD0 (MmGetNumberOfPhysicalPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x140603874 (_PopInternalError.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetIoLocation @ 0x140BEF524 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140C00800 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140C012F0 (PopRecordHibernateDiagnosticInfo.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 IoLocation; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r9
  unsigned __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rbx
  unsigned int i; // edi
  unsigned __int64 v22; // rbx
  int v23; // ecx
  unsigned __int64 v24; // rax
  ULONG MaxDataSize[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  BugCheckParameter4 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v7 = a2;
  result = (unsigned int)PopWatchdogTimerCount;
  v9 = a1;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = guard_dispatch_icall_no_overrides(a1, a2);
  ++PopWatchdogTimerCount;
  if ( *(int *)(v9 + 204) >= 0 )
  {
    if ( (a3 + a4) << 12 > qword_140F108F0 )
    {
      PopCheckpointSystemSleep(22LL);
      v10 = *(_DWORD *)(v9 + 200);
      if ( v10 == 4 || v10 == 5 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v9);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v9);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140F108F0, *(unsigned int *)(v9 + 200), BugCheckParameter4);
    }
    v11 = *(_QWORD *)(v9 + 352);
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA263AuLL);
    result = *(_QWORD *)(v9 + 176);
    v12 = a4 << 12;
    v27 = result;
    v13 = a3 << 12;
    while ( v13 )
    {
      IoLocation = PopGetIoLocation(result, v12, &v29);
      v15 = *(unsigned int *)(v9 + 440);
      v16 = v13;
      v30 = IoLocation;
      if ( v13 > v29 )
        v16 = v29;
      v17 = v7 & 0xFFF;
      v18 = ((unsigned __int64)v16 + v17 + 4095) >> 12;
      if ( v18 > v15 )
      {
        v19 = ((_DWORD)v15 << 12) - ((_DWORD)v18 << 12);
        v18 = (unsigned int)v15;
        v16 += v19;
      }
      v26 = v16;
      *(_QWORD *)v11 = 0LL;
      *(_DWORD *)(v11 + 44) = v7 & 0xFFF;
      *(_WORD *)(v11 + 8) = 8 * (((v17 + (unsigned __int64)v16 + 4095) >> 12) + 6);
      *(_DWORD *)(v11 + 40) = v16;
      *(_QWORD *)(v11 + 32) = v7 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v11 + 24) = v7;
      *(_WORD *)(v11 + 10) = 1;
      if ( v18 )
      {
        v20 = 0LL;
        for ( i = 0; i < v18; v20 = i )
        {
          ++i;
          *(_QWORD *)(v11 + 8 * v20 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v7 + (v20 << 12))).QuadPart >> 12;
        }
        v9 = a1;
      }
      v22 = __rdtsc();
      v23 = guard_dispatch_icall_no_overrides((__int64)&v30, v11);
      v24 = __rdtsc();
      dword_140F10C38 += v18;
      qword_140F10A58 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v22;
      v13 -= v26;
      v12 += v26;
      v7 += v26;
      result = v27;
      if ( v23 < 0 )
      {
        *(_DWORD *)(v9 + 204) = v23;
        return result;
      }
    }
  }
  return result;
}
