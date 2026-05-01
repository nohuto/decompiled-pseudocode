/*
 * XREFs of ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18017EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x1802EE524 (-_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct APP_TRANSITION_INFORMATION *const a2)
{
  unsigned int v2; // r8d
  int v3; // r10d
  char v4; // r9
  char v5; // al
  int v7; // r10d

  v2 = 0;
  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_DWORD *)a2 + 5);
    v4 = 1;
    if ( v3 == 1 || (v5 = 0, (unsigned int)(v3 - 2) <= 1) )
      v5 = 1;
    if ( (v3 == 6 || v5 && (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8))
      && !*((_DWORD *)this + 16)
      && *((_DWORD *)a2 + 3) != 6 )
    {
      v7 = *((_DWORD *)a2 + 4);
      if ( v7 != 6 )
      {
        if ( !*((_BYTE *)a2 + 56) || v7 != 1 && v7 != 8 || v7 == 1 || *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 4) )
          v4 = 0;
        if ( *((_DWORD *)a2 + 5) == 6 || v4 )
          return (unsigned int)CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
                                 (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
                                 a2);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483638;
  }
  return v2;
}
