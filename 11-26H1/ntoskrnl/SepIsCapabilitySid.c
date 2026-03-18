/*
 * XREFs of SepIsCapabilitySid @ 0x1402B0010
 * Callers:
 *     SepMaximumAccessCheckEx @ 0x1402ACD9C (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1402AF210 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)&RtlpBootStatHandleLock.ThreadFlags2;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == **(_BYTE **)&RtlpBootStatHandleLock.ThreadFlags2
      && RtlCompareMemory(
           (const void *)(a1 + 2),
           (const void *)(*(_QWORD *)&RtlpBootStatHandleLock.ThreadFlags2 + 2LL),
           6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
