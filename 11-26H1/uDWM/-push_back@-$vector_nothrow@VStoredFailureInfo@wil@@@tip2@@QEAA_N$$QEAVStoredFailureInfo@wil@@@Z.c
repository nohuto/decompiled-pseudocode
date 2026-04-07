/*
 * XREFs of ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800D4DD4
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800D32F0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Pri.c)
 * Callees:
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x1800D4FAC (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z.c)
 */

char __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rdx
  char result; // al
  __int64 v7; // rdx

  v2 = a1[1];
  if ( a1[2] < v2 )
    goto LABEL_5;
  v5 = 2 * v2;
  if ( !v2 )
    v5 = 10LL;
  result = tip2::vector_nothrow<wil::StoredFailureInfo>::reserve(a1, v5);
  if ( result )
  {
LABEL_5:
    v7 = *a1 + 168LL * a1[2];
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v7 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(v7 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(v7 + 128) = *(_OWORD *)(a2 + 128);
    *(_QWORD *)(v7 + 144) = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(v7 + 152) = *(_QWORD *)(a2 + 152);
    *(_QWORD *)(v7 + 160) = *(_QWORD *)(a2 + 160);
    result = 1;
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_QWORD *)(a2 + 160) = 0LL;
    ++a1[2];
  }
  return result;
}
