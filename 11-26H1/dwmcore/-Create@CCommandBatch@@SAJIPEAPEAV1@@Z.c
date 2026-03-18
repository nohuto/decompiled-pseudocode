/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180118BB8
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180117E48 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x180118210 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802323A4 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?Initialize@CDataStreamWriter@@QEAAJI@Z @ 0x18028D840 (-Initialize@CDataStreamWriter@@QEAAJI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // edx
  CCommandBatch *v5; // rbx
  CDataStreamWriter *v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = DefaultHeap::AllocClear(0x50uLL);
  v5 = (CCommandBatch *)v3;
  if ( v3 )
  {
    v3[1] = v3;
    v6 = (CDataStreamWriter *)v3;
    *v3 = v3;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    *((_DWORD *)v3 + 14) = 0;
    v7 = v3 + 2;
    v7[1] = v7;
    *v7 = v7;
    v8 = CDataStreamWriter::Initialize(v6, v4);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x27u, 0LL);
      CCommandBatch::`scalar deleting destructor'(v5, v10);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
  return v9;
}
