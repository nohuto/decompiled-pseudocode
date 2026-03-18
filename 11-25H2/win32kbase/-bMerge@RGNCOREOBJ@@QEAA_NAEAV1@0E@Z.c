/*
 * XREFs of ?bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z @ 0x1400DB8B8
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F310C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall RGNCOREOBJ::bMerge(Win32kRS **this, Win32kRS **a2, Win32kRS **a3, unsigned __int8 a4)
{
  struct REGION_CORE *v4; // rdi
  Win32kRS *v6; // rsi
  char *v7; // rbx
  Win32kRS *v8; // rbp
  Win32kRS *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r9
  int v12; // esi

  v4 = qword_1402A10B0;
  if ( !qword_1402A10B0 )
    return RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(this, a2, a3, a4, (RGNCOREOBJ *)this);
  v6 = *a3;
  v7 = (char *)qword_1402A10B0 + 8;
  v8 = *a2;
  v9 = *this;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v4 + 8, 2LL);
  v10 = *(_QWORD *)v4;
  LOBYTE(v11) = a4;
  v12 = (*(__int64 (__fastcall **)(Win32kRS *, Win32kRS *, Win32kRS *, __int64))(v10 + 184))(v9, v8, v6, v11);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v10 + 216))(v9) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v9, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v7, 2LL);
  KeLeaveCriticalRegion();
  return v12 != 0;
}
