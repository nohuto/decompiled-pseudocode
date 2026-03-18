/*
 * XREFs of ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x14013A82C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::FreePointerQFrameList(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        __int64 a3,
        __int64 a4)
{
  CInputDest *v5; // rbx
  __int64 v6; // rsi

  if ( (_DWORD)a3 )
  {
    v5 = (struct CPointerQFrame *)((char *)a2 + 16);
    v6 = (unsigned int)a3;
    do
    {
      CInputDest::~CInputDest(v5);
      v5 = (CInputDest *)((char *)v5 + 160);
      --v6;
    }
    while ( v6 );
  }
  GreDeleteFastMutex((char *)a2, (__int64)a2, a3, a4);
}
