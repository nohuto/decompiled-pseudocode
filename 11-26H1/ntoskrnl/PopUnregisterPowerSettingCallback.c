/*
 * XREFs of PopUnregisterPowerSettingCallback @ 0x1404E8EBC
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x140A401E0 (PopDispatchPowerSettingCallbacks.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B19570 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnregisterPowerSettingCallback(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 **v2; // rdx
  __int64 *v3; // r9

  v1 = (__int64 *)*a1;
  v2 = (__int64 **)a1[1];
  v3 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)a1 + 33) )
  {
    if ( v3 == a1 && *v2 == a1 )
    {
      *v2 = v1;
      v1[1] = (__int64)v2;
      a1[1] = (__int64)a1;
      *a1 = (__int64)a1;
      *((_DWORD *)a1 + 4) = 0;
      ExFreePoolWithTag(a1, 0x74655350u);
      return;
    }
LABEL_8:
    __fastfail(3u);
  }
  if ( v3 != a1 || *v2 != a1 )
    goto LABEL_8;
  *v2 = v1;
  v1[1] = (__int64)v2;
  a1[1] = (__int64)a1;
  *a1 = (__int64)a1;
  KeSetEvent((PRKEVENT)&stru_140F11D08.WaitBlockFill11[120], 0, 0);
}
