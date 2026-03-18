/*
 * XREFs of ??0CInputSinkStruct@@QEAA@XZ @ 0x1800A8FCC
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A96D0 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x1800A9038 (--0InputQueueInfo@CInputSinkStruct@@QEAA@XZ.c)
 */

CInputSinkStruct *__fastcall CInputSinkStruct::CInputSinkStruct(CInputSinkStruct *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  CInputSinkStruct::InputQueueInfo *v4; // rsi
  int v5; // eax
  CInputSinkStruct *v6; // rcx

  v1 = 4LL;
  v3 = 4LL;
  v4 = this;
  do
  {
    CInputSinkStruct::InputQueueInfo::InputQueueInfo(v4);
    v4 = (CInputSinkStruct::InputQueueInfo *)((char *)v4 + 16);
    --v3;
  }
  while ( v3 );
  *((_BYTE *)this + 104) = 0;
  v5 = 1;
  v6 = this;
  do
  {
    *(_DWORD *)v6 = v5++;
    v6 = (CInputSinkStruct *)((char *)v6 + 16);
    --v1;
  }
  while ( v1 );
  return this;
}
