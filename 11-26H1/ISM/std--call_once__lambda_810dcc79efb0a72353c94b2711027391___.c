/*
 * XREFs of std::call_once__lambda_810dcc79efb0a72353c94b2711027391___ @ 0x180023DC0
 * Callers:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18007DF7C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0MPCGestureHandlerManager@@QEAA@XZ @ 0x1800B1A44 (--0MPCGestureHandlerManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_810dcc79efb0a72353c94b2711027391___(__int64 a1, __int64 a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  MPCGestureHandlerManager *v3; // [rsp+40h] [rbp+8h]
  WINBOOL v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+4Ch] [rbp+14h]

  v5 = HIDWORD(a2);
  v4 = 0;
  if ( !__std_init_once_begin_initialize(&MPCGestureHandlerManager::s_singletonCreated, 0, &v4, 0LL) )
    abort();
  if ( v4 )
  {
    v2[0] = &MPCGestureHandlerManager::s_singletonCreated;
    v3 = (MPCGestureHandlerManager *)operator new(0x40uLL);
    MPCGestureHandlerManager::s_instance = MPCGestureHandlerManager::MPCGestureHandlerManager(v3);
    v2[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v2);
  }
}
