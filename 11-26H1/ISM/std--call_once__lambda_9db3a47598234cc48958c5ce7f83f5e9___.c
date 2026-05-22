/*
 * XREFs of std::call_once__lambda_9db3a47598234cc48958c5ce7f83f5e9___ @ 0x1801BE218
 * Callers:
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18019CA4C (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18007DF7C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator() @ 0x1801BE2A4 (_lambda_9db3a47598234cc48958c5ce7f83f5e9_--operator().c)
 */

void __fastcall std::call_once__lambda_9db3a47598234cc48958c5ce7f83f5e9___(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&stru_180254D08, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v3[0] = &stru_180254D08;
    lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator()(a2);
    v3[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v3);
  }
}
