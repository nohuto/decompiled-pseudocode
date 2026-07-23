/*
 * XREFs of MmInsertSecureImageActivePatch @ 0x14087AF00
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiAllocateSecureImageActivePatch @ 0x140873E2C (MiAllocateSecureImageActivePatch.c)
 *     MiInsertSecureImageActivePatch @ 0x140876F28 (MiInsertSecureImageActivePatch.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1408790B0 (MiLogInsertSecureImageActivePatch.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 */

void __fastcall MmInsertSecureImageActivePatch(unsigned int a1, unsigned int a2, int a3, unsigned int a4, int a5)
{
  int HotPatchRecord; // esi
  UNICODE_STRING *v10; // rax
  UNICODE_STRING *v11; // rdi
  struct _KTHREAD *Lock; // rbx
  __int64 v13; // rcx
  _BYTE v14[8]; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-30h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  HotPatchRecord = MiFindHotPatchRecord(
                     (unsigned int)&xmmword_140E366C0,
                     0,
                     a1,
                     a2,
                     34404,
                     (__int64)v14,
                     (__int64)&UnicodeString);
  if ( HotPatchRecord >= 0 )
  {
    v10 = MiAllocateSecureImageActivePatch(&UnicodeString);
    v11 = v10;
    if ( v10 )
    {
      LODWORD(v10[1].Buffer) = a1;
      HIDWORD(v10[1].Buffer) = a2;
      *(_DWORD *)&v10[2].Length = a4;
      *(_DWORD *)(&v10[2].MaximumLength + 1) = a5;
      LODWORD(v10[2].Buffer) = a3;
      Lock = MmAcquireLoadLock();
      MiInsertSecureImageActivePatch(v11);
      MmReleaseLoadLock(Lock);
    }
    else
    {
      HotPatchRecord = -1073741670;
    }
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
  {
    MiLogInsertSecureImageActivePatch(v13, a1, a2, a4, a5, a3, HotPatchRecord);
  }
  RtlFreeAnsiString(&UnicodeString);
}
