/*
 * XREFs of RtlHpHeapManagerStart @ 0x18008B080
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x180089A00 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapStart @ 0x18008B0E4 (RtlCSparseBitmapStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x18008CA10 (RtlpHpVaMgrCtxStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d

  qword_1801C78B8 = 0LL;
  result = RtlCSparseBitmapStart(&unk_1801C78C0, 2 * (a5 >> 20), a3, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((unsigned int)&unk_1801C7908, v6, v7, v8, a5 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
