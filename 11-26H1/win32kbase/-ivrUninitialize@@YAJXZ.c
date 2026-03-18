/*
 * XREFs of ?ivrUninitialize@@YAJXZ @ 0x14021F948
 * Callers:
 *     InputUnInitialize @ 0x140117884 (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ivrUninitialize(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _QWORD *v6; // rdx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19464) )
  {
    v6 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 19464) + 24LL);
    if ( *v6 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, v6, 8uLL);
  }
  return 0LL;
}
