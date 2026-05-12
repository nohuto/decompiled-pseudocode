/*
 * XREFs of StRtlIoStorInfoSetNvmeStatus @ 0x1401306D8
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StRtlIoStorInfoSetNvmeStatus(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  result = IoGetGenericIrpExtension(a1, &v6, 4LL);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741275 )
  {
    BYTE1(v6) |= 4u;
    HIWORD(v6) = a2;
    LOBYTE(v5) = 1;
    return IoSetGenericIrpExtension(a1, &v6, 4LL, v5);
  }
  return result;
}
