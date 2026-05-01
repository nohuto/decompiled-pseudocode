/*
 * XREFs of ??0?$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@__function@wistd@@QEAA@$$QEAV_lambda_8d135f07ec1e4c768c6672246a6f5092_@@@Z @ 0x1803AD5B0
 * Callers:
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x1803A7B98 (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@S.c)
 *     ?__move@?$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@23@@Z @ 0x1803BAB10 (-__move@-$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MOD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::`vftable';
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
