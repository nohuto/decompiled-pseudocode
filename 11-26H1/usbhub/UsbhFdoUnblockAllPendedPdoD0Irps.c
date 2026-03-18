/*
 * XREFs of UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002B710
 * Callers:
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004BC70 (UsbhPdoUnblockPendedD0IrpWI.c)
 */

__int64 *__fastcall UsbhFdoUnblockAllPendedPdoD0Irps(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  signed __int32 v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  KIRQL v8; // al
  __int64 ****v9; // rdx
  KIRQL v10; // r8
  __int64 ***v11; // rcx
  __int64 **v12; // rax
  _QWORD *v13; // rax
  __int64 *result; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 *v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v19; // [rsp+48h] [rbp-8h]

  v2 = FdoExt(a1);
  v19 = &v18;
  v18 = (__int64 *)&v18;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 880), 0xFFFFFFFF);
        v5 = *(_DWORD *)(v3 + 884);
        v6 = *(_QWORD *)(v3 + 888);
        v7 = 32LL * ((v4 - 1) & v5);
        *(_DWORD *)(v7 + v6) = 809787765;
        *(_QWORD *)(v7 + v6 + 8) = 0LL;
        *(_QWORD *)(v7 + v6 + 16) = 0LL;
        *(_QWORD *)(v7 + v6 + 24) = 0LL;
      }
    }
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 522);
  *((_BYTE *)v2 + 4184) = 0;
  v9 = (__int64 ****)(v2 + 1048);
  v10 = v8;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 == (__int64 ***)v9 )
      break;
    if ( v11[1] != (__int64 **)v9
      || (v12 = *v11, (*v11)[1] != (__int64 *)v11)
      || (*v9 = (__int64 ***)v12, v12[1] = (__int64 *)v9, v13 = v19, *v19 != (__int64 *)&v18) )
    {
LABEL_17:
      __fastfail(3u);
    }
    v11[1] = v19;
    *v11 = &v18;
    *v13 = v11;
    v19 = (__int64 **)v11;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 522, v10);
  while ( 1 )
  {
    result = v18;
    if ( v18 == (__int64 *)&v18 )
      return result;
    if ( (__int64 **)v18[1] != &v18 )
      goto LABEL_17;
    v15 = (__int64 *)*v18;
    if ( *(__int64 **)(*v18 + 8) != v18 )
      goto LABEL_17;
    v18 = (__int64 *)*v18;
    v16 = result - 12;
    v17 = 0LL;
    v15[1] = (__int64)&v18;
    result[1] = (__int64)result;
    *result = (__int64)result;
    if ( (UsbhQueueWorkItemEx(
            a1,
            0,
            (unsigned int)UsbhPdoUnblockPendedD0IrpWI,
            (int)result - 96,
            *(_DWORD *)(*(result - 3) + 148),
            1230450788,
            v17) & 0xC0000000) == 0xC0000000 )
      UsbhPdoUnblockPendedD0IrpWI(a1, *(unsigned int *)(v16[9] + 148), v16);
  }
}
