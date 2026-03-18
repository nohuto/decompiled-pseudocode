/*
 * XREFs of ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800A90C8
 * Callers:
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800A9054 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CInputSinkStruct::InitializeQueueInfo(
        CInputSinkStruct *this,
        struct CInputSinkStruct::InputQueueInfo *a2)
{
  unsigned int v4; // edi
  int CompositionInputQueueAndTransform; // eax
  _OWORD v7[3]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+60h] [rbp-68h]
  _BYTE v9[64]; // [rsp+70h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = -2147467259;
  v8 = 0LL;
  memset_0(v9, 0, sizeof(v9));
  CompositionInputQueueAndTransform = NtQueryCompositionInputQueueAndTransform(
                                        *((_QWORD *)this + 8),
                                        *(unsigned int *)a2,
                                        v7,
                                        v9);
  if ( CompositionInputQueueAndTransform < 0 )
  {
    v4 = CompositionInputQueueAndTransform | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositionInputQueueAndTransform | 0x10000000, 0xECu, 0LL);
  }
  else if ( (unsigned int)(LODWORD(v7[0]) - 2) <= 1 )
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)&v7[0] + 1);
  }
  return v4;
}
