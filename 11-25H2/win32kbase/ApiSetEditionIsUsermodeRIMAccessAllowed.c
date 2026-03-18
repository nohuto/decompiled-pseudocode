/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1402259B4
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1401D7E20 (NtRIMAreSiblingDevices.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1401D8050 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMSetTestModeStatus @ 0x1401D8660 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsUsermodeRIMAccessAllowed(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (*v6)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4752LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 4760LL);
      if ( v6 )
        return v6();
    }
  }
  return v2;
}
