/*
 * XREFs of ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1402538D4
 * Callers:
 *     PostDeviceNotification @ 0x140171974 (PostDeviceNotification.c)
 * Callees:
 *     ?_RemoveListenersForDevice@Edgy@@YAXAEAUtagEDGY_DATA@@PEAX@Z @ 0x1402C38C0 (-_RemoveListenersForDevice@Edgy@@YAXAEAUtagEDGY_DATA@@PEAX@Z.c)
 */

void __fastcall Edgy::OnDeviceRemoval(Edgy *this, void *a2)
{
  __int64 i; // rdi
  void *v4; // r8
  __int64 j; // rbx
  Edgy *v6; // rcx

  for ( i = *(_QWORD *)(W32GetUserSessionState(this, a2) + 63512); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      v6 = *(Edgy **)(j + 248);
      if ( v6 )
        Edgy::_RemoveListenersForDevice(v6, this, v4);
    }
  }
}
