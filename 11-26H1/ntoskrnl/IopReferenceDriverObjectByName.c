/*
 * XREFs of IopReferenceDriverObjectByName @ 0x14091695C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140916458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetDefaultMessageString @ 0x140A26864 (PiGetDefaultMessageString.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 */

PVOID __fastcall IopReferenceDriverObjectByName(_WORD *a1)
{
  POBJECT_TYPE v1; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v4; // ebx
  _DWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  _WORD *v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int128 v10; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  v5[1] = 0;
  v9 = 0;
  Handle = 0LL;
  if ( !*a1 )
    return 0LL;
  v1 = IoDriverObjectType;
  v10 = 0LL;
  v5[0] = 48;
  v6 = 0LL;
  v8 = 576;
  v7 = a1;
  CurrentSilo = PsGetCurrentSilo();
  if ( (int)ObOpenObjectByNameEx((__int64)v5, (__int64)v1, 0, 0LL, 128, 0LL, (__int64)CurrentSilo, &Handle) < 0 )
    return 0LL;
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
  ZwClose(Handle);
  if ( v4 >= 0 )
    return Object;
  else
    return 0LL;
}
