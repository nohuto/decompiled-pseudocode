/*
 * XREFs of ?__clone@?$__func@V_lambda_80f486269bcaf8b2d31746acb73fd1bd_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAG_KPEA_K@Z@23@@Z @ 0x1804DFCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_80f486269bcaf8b2d31746acb73fd1bd_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &wistd::__function::__func<_lambda_80f486269bcaf8b2d31746acb73fd1bd_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
