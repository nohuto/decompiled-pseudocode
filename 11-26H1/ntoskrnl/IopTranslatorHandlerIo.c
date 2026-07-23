/*
 * XREFs of IopTranslatorHandlerIo @ 0x1407B07B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopTranslatorHandlerIo(__int64 a1, _OWORD *a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  _OWORD *Pool2; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *a4 = 1;
  *Pool2 = *a2;
  Pool2[1] = a2[1];
  *a5 = Pool2;
  return 0LL;
}
