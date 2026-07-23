/*
 * XREFs of PopFxAcpiRegisterDevice @ 0x140615144
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140614E40 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     PopFxDestroyDeviceCommon @ 0x1404E8FC0 (PopFxDestroyDeviceCommon.c)
 *     PopFxCreateDeviceCommon @ 0x1405077F0 (PopFxCreateDeviceCommon.c)
 *     PopFxInsertAcpiDevice @ 0x140607B34 (PopFxInsertAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x140616DC4 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiRegisterDevice(__int64 a1, ULONG_PTR a2, __int64 a3, PVOID **a4, _QWORD *a5)
{
  int DeviceCommon; // eax
  PVOID *v9; // rbx
  unsigned int v10; // edi
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KLOCK_ENTRIES *v15; // r9
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  v20 = 0LL;
  P = 0LL;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v19 = 0LL;
  DeviceCommon = PopFxCreateDeviceCommon(a1, a2, a3, 4, (__int64 *)&P);
  v9 = (PVOID *)P;
  v10 = DeviceCommon;
  if ( DeviceCommon >= 0 )
  {
    v11 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)a3;
    v12 = *(_QWORD *)(a3 + 32);
    *((_QWORD *)&v19 + 1) = *((_QWORD *)&v11 + 1);
    *(_QWORD *)&v19 = P;
    v20 = v12;
    PopPluginAcpiNotificationStrict(a2, 3uLL, (ULONG_PTR)BugCheckParameter4);
    if ( *((_QWORD *)&v19 + 1) )
    {
      PopFxInsertAcpiDevice(v14, v13, (__int64)v9, v15);
      if ( *((_QWORD *)&v19 + 1) )
      {
        v9[10] = (PVOID)a2;
        v9[11] = (PVOID)*((_QWORD *)&v19 + 1);
        *a5 = *((_QWORD *)&v19 + 1);
        *a4 = v9;
        return v10;
      }
    }
    v10 = -1073741823;
    *a4 = 0LL;
    *a5 = 0LL;
  }
  if ( v9 )
  {
    v9[10] = 0LL;
    v9[11] = 0LL;
    PopFxDestroyDeviceCommon(v9, 2);
  }
  return v10;
}
