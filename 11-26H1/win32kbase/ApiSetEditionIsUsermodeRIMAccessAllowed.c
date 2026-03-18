/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x140227898
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1401FEFC0 (NtRIMAreSiblingDevices.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1401FF1A0 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMSetTestModeStatus @ 0x1401FF700 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsUsermodeRIMAccessAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v4)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4304LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 4312LL);
      if ( v4 )
        return v4();
    }
  }
  return v1;
}
