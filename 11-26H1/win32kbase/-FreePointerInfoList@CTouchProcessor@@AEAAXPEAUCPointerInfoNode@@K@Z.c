/*
 * XREFs of ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x14013A620
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x140063560 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoList(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rbx
  __int64 v6; // rsi

  if ( (_DWORD)a3 )
  {
    v5 = (char *)a2 + 24;
    v6 = (unsigned int)a3;
    do
    {
      CInputDest::~CInputDest((CInputDest *)(v5 + 328));
      CInputDest::~CInputDest((CInputDest *)v5);
      v5 += 480;
      --v6;
    }
    while ( v6 );
  }
  GreDeleteFastMutex((char *)a2, (__int64)a2, a3, a4);
}
