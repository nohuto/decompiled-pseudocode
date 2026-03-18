/*
 * XREFs of ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x14014419C
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14016B110 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140186F40 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHidInput::IsTouchpadDevice(CHidInput *this, struct DEVICEINFO *a2)
{
  bool result; // al
  __int64 v3; // rcx

  result = 0;
  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 57);
    if ( v3 )
      return *(_DWORD *)(v3 + 24) == 7;
  }
  return result;
}
