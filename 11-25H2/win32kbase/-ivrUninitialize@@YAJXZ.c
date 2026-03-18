/*
 * XREFs of ?ivrUninitialize@@YAJXZ @ 0x14021B474
 * Callers:
 *     InputUnInitialize @ 0x1400CED9C (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ivrUninitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19432) )
  {
    v4 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 19432) + 24LL);
    if ( *v4 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, v4, 8uLL);
  }
  return 0LL;
}
