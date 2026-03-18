/*
 * XREFs of ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x140038AE4
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1400E5470 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x14018742C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoList(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        unsigned int a3)
{
  char *v4; // rbx
  __int64 v5; // rsi

  if ( a3 )
  {
    v4 = (char *)a2 + 24;
    v5 = a3;
    do
    {
      CInputDest::~CInputDest((CInputDest *)(v4 + 328));
      CInputDest::~CInputDest((CInputDest *)v4);
      v4 += 480;
      --v5;
    }
    while ( v5 );
  }
  GreDeleteFastMutex((char *)a2);
}
