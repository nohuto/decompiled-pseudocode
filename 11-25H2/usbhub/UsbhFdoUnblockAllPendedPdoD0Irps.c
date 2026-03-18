/*
 * XREFs of UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002F2F0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x140030B9C (UsbhFdoPower_PowerFailureEntry.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400494A8 (Usbh_BusRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004C0C0 (UsbhPdoUnblockPendedD0IrpWI.c)
 */

__int64 *__fastcall UsbhFdoUnblockAllPendedPdoD0Irps(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // al
  __int64 ****v6; // rdx
  KIRQL v7; // r8
  __int64 ***v8; // rcx
  __int64 **v9; // rax
  _QWORD *v10; // rax
  __int64 *result; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // [rsp+30h] [rbp-20h]
  __int64 *v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v16; // [rsp+48h] [rbp-8h]

  v2 = FdoExt(a1);
  v16 = &v15;
  v15 = (__int64 *)&v15;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
        *(_DWORD *)v4 = 809787765;
      }
    }
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 522);
  *((_BYTE *)v2 + 4184) = 0;
  v6 = (__int64 ****)(v2 + 1048);
  v7 = v5;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 == (__int64 ***)v6 )
      break;
    if ( v8[1] != (__int64 **)v6
      || (v9 = *v8, (*v8)[1] != (__int64 *)v8)
      || (*v6 = (__int64 ***)v9, v9[1] = (__int64 *)v6, v10 = v16, *v16 != (__int64 *)&v15) )
    {
LABEL_17:
      __fastfail(3u);
    }
    v8[1] = v16;
    *v8 = &v15;
    *v10 = v8;
    v16 = (__int64 **)v8;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 522, v7);
  while ( 1 )
  {
    result = v15;
    if ( v15 == (__int64 *)&v15 )
      return result;
    if ( (__int64 **)v15[1] != &v15 )
      goto LABEL_17;
    v12 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      goto LABEL_17;
    v14 = 0LL;
    v15 = v12;
    v13 = result - 12;
    v12[1] = (__int64)&v15;
    result[1] = (__int64)result;
    *result = (__int64)result;
    if ( (UsbhQueueWorkItemEx(
            a1,
            0,
            (unsigned int)UsbhPdoUnblockPendedD0IrpWI,
            (int)result - 96,
            *(_DWORD *)(*(result - 3) + 148),
            1230450788,
            v14) & 0xC0000000) == 0xC0000000 )
      UsbhPdoUnblockPendedD0IrpWI(a1, *(unsigned int *)(v13[9] + 148), v13);
  }
}
