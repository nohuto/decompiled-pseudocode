/*
 * XREFs of IopLiveDumpTraceChunkCRCMismatchWrite @ 0x1405DA0F0
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IopLiveDumpTraceChunkCRCMismatchWrite(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _QWORD v7[6]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v8[6]; // [rsp+50h] [rbp+7h] BYREF

  v8[0] = a1;
  v7[0] = L"ChunkIndex";
  v8[1] = a2;
  v7[1] = L"ChunkCRC";
  v8[3] = a4;
  v7[2] = L"WriteComplete";
  v7[3] = L"WriteBufferCRC";
  v7[4] = L"WriteLength";
  v7[5] = L"ByteOffset";
  v8[2] = a3;
  v8[4] = a5;
  v8[5] = a6;
  return IopLiveDumpTraceEventGeneric(L"ChunkCRCMismatchWrite", 6LL, v7, v8);
}
