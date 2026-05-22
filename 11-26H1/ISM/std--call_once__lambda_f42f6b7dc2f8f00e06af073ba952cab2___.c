/*
 * XREFs of std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___ @ 0x1800950A0
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F8BC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180023864 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18007DF7C (--1_Init_once_completer@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___(__int64 a1, _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&MPCMouseProcessor::s_constantsInitialized, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v3[0] = &MPCMouseProcessor::s_constantsInitialized;
    lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()(a2);
    v3[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v3);
  }
}
