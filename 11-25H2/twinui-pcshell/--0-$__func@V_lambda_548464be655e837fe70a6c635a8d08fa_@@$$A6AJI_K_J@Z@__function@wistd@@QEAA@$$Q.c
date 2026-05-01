/*
 * XREFs of ??0?$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@QEAA@$$QEAV_lambda_548464be655e837fe70a6c635a8d08fa_@@@Z @ 0x18036A1B8
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x180369918 (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 *     ?__move@?$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x180370F40 (-__move@-$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@UEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &wistd::__function::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a1 + 8 != a2 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  return result;
}
