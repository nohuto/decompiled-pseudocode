/*
 * XREFs of ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1402C2E94
 * Callers:
 *     EdgyRegisterListener @ 0x1402C3A30 (EdgyRegisterListener.c)
 * Callees:
 *     ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1402C2FF8 (-_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1402C324C (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1402C3544 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall Edgy::_AddOrUpdateListener(Edgy *a1, struct tagDESKTOP *a2, unsigned int a3, __int64 a4)
{
  struct tagEDGY_DATA *v4; // rbx
  struct tagEDGY_DATA *v8; // rdx
  __int64 Listener; // rcx
  __int64 v10; // rcx
  bool v11; // zf

  v4 = (struct tagEDGY_DATA *)*((_QWORD *)a1 + 31);
  if ( !v4 )
  {
    v4 = Edgy::_InitializeData(a1, a2);
    if ( !v4 )
      return 0LL;
  }
  Listener = Edgy::_FindListener(v4, a2, a3);
  if ( !Listener )
  {
    if ( *(_DWORD *)v4 >= *((_DWORD *)v4 + 1) && !(unsigned int)Edgy::_GrowListeners(v4, v8) )
      return 0LL;
    v10 = 32LL * *(unsigned int *)v4;
    v11 = *((_QWORD *)v4 + 1) + v10 == 0;
    Listener = *((_QWORD *)v4 + 1) + v10;
    ++*(_DWORD *)v4;
    *(_QWORD *)Listener = a2;
    *(_DWORD *)(Listener + 16) = a3;
    *(_QWORD *)(Listener + 8) = 0LL;
    if ( v11 )
      return 0LL;
  }
  *(_QWORD *)(Listener + 8) = a4;
  return 1LL;
}
