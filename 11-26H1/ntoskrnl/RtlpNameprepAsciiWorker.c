/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x14080C10C
 * Callers:
 *     RtlIdnToAscii @ 0x14080C010 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x14080C040 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpNameprepAsciiRealWorker @ 0x1404F4690 (RtlpNameprepAsciiRealWorker.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, const WCHAR *a2, int a3, void *a4, LONG *a5, char a6)
{
  WCHAR *Pool2; // rsi
  void *v11; // rax
  void *v12; // rbx
  unsigned int v13; // edi
  char v15; // [rsp+38h] [rbp-40h]
  char v16; // [rsp+48h] [rbp-30h]

  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
  v11 = (void *)ExAllocatePool2(0x100uLL);
  v12 = v11;
  if ( Pool2 && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, Pool2, v15, v11, v16);
  }
  else
  {
    v13 = -1073741801;
    if ( !Pool2 )
      goto LABEL_6;
  }
  ExFreePoolWithTag(Pool2, 0);
LABEL_6:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v13;
}
