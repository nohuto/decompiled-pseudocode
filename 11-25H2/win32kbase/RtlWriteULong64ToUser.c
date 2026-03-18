/*
 * XREFs of RtlWriteULong64ToUser @ 0x1402C90A8
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x14011E8A0 (NtDCompositionCreateAndBindSharedSection.c)
 *     RtlWriteULong64ToUser$thunk$4480820996488585629 @ 0x140246040 (RtlWriteULong64ToUser$thunk$4480820996488585629.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A4EE6 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULong64ToUser(_QWORD *a1, __int64 a2)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  *a1 = a2;
}
