/*
 * XREFs of std::call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___ @ 0x1801C8D10
 * Callers:
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C9B30 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18007DF7C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     _lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator() @ 0x1801C8D9C (_lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator().c)
 */

void __fastcall std::call_once__lambda_2f33fc4b0ac679fd125de0d601496fc7___(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v5 = HIDWORD(a1);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&MPCClickerProcessor::s_constantsInitialized, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v3[0] = &MPCClickerProcessor::s_constantsInitialized;
    lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator()(a2);
    v3[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v3);
  }
}
