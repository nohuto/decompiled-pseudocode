/*
 * XREFs of ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x18028D840
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180118BB8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180118C8C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?RoundUpToAlignDWORD@@YAJPEAI@Z @ 0x1801953DC (-RoundUpToAlignDWORD@@YAJPEAI@Z.c)
 */

__int64 __fastcall CDataStreamWriter::Initialize(CDataStreamWriter *this)
{
  int v1; // eax
  CDataStreamWriter *v2; // r9
  unsigned int v3; // ebx
  int NewBlock; // eax
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 512;
  v1 = RoundUpToAlignDWORD(&v6);
  v3 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x164u, 0LL);
  }
  else
  {
    NewBlock = CDataStreamWriter::AllocateNewBlock(v2, v6);
    v3 = NewBlock;
    if ( NewBlock < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, NewBlock, 0x165u, 0LL);
  }
  return v3;
}
