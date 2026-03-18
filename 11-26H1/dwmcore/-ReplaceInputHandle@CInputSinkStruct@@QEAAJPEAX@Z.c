/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800A91AC
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A96D0 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800A9054 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x1800A92C0 (-SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v3; // ebx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  int CompositionInputSink; // eax
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  unsigned int v10; // [rsp+20h] [rbp-38h]
  _BYTE v11[24]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v11 = 24;
  memset(&v11[4], 0, 20);
  v3 = 0;
  CInputSinkStruct::SetCompositionInputHandle(this, a2);
  v4 = *(_OWORD *)v11;
  v5 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 72) = v4;
  *((_QWORD *)this + 11) = 0LL;
  if ( v5 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(v5, v11);
    if ( CompositionInputSink < 0 )
    {
      v10 = 52;
    }
    else
    {
      v8 = *((_QWORD *)this + 8);
      v9 = *(_QWORD *)&v11[16];
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v11;
      *((_QWORD *)this + 11) = v9;
      CompositionInputSink = NtQueryCompositionInputSinkLuid(v8, (char *)this + 96);
      if ( CompositionInputSink >= 0 )
      {
        CInputSinkStruct::InitializeQueues(this);
        return v3;
      }
      v10 = 55;
    }
    v3 = CompositionInputSink | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CompositionInputSink | 0x10000000, v10, 0LL);
  }
  return v3;
}
