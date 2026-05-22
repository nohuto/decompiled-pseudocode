/*
 * XREFs of std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x18000BF88
 * Callers:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18000BF50 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18007DF7C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___(__int64 a1, __int64 a2)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]
  _QWORD *v5; // [rsp+40h] [rbp+8h]
  WINBOOL v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+4Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v6 = 0;
  if ( !__std_init_once_begin_initialize(&MPCGamepadInputHelper::s_singletonCreated, 0, &v6, 0LL) )
    abort();
  if ( v6 )
  {
    v2 = &MPCGamepadInputHelper::s_singletonCreated;
    v4 = 0;
    v5 = operator new(0x30uLL);
    *(_WORD *)v5 = 0;
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    *((_WORD *)v5 + 20) = 0;
    *((_DWORD *)v5 + 7) = GetCurrentProcessId();
    MPCGamepadInputHelper::s_instance = (struct MPCGamepadInputHelper *)v5;
    v3 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v2);
  }
}
