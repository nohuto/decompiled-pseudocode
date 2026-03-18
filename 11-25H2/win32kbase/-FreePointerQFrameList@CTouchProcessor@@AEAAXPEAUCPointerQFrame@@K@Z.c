/*
 * XREFs of ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x140038A90
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x14018742C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::FreePointerQFrameList(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        unsigned int a3)
{
  CInputDest *v4; // rbx
  __int64 v5; // rsi

  if ( a3 )
  {
    v4 = (struct CPointerQFrame *)((char *)a2 + 16);
    v5 = a3;
    do
    {
      CInputDest::~CInputDest(v4);
      v4 = (CInputDest *)((char *)v4 + 160);
      --v5;
    }
    while ( v5 );
  }
  GreDeleteFastMutex((char *)a2);
}
