/*
 * XREFs of PopFxAcpiForwardNotification @ 0x140612104
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140612000 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402DF200 (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1404578E0 (IoAcquireRemoveLockEx.c)
 *     PopPluginAcpiNotification @ 0x140613EE0 (PopPluginAcpiNotification.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  struct _IO_REMOVE_LOCK *v5; // rsi
  NTSTATUS v9; // edi
  char v10; // bl

  v5 = (struct _IO_REMOVE_LOCK *)(a1 + 312);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 312), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    v10 = PopPluginAcpiNotification(*(_QWORD *)(a1 + 80), a2, a3);
    IoReleaseRemoveLockEx(v5, (PVOID)0x72466F50, 0x20u);
    *a5 = v10;
  }
  return (unsigned int)v9;
}
