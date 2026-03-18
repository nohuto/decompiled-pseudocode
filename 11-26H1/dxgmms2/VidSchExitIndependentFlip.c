/*
 * XREFs of VidSchExitIndependentFlip @ 0x1400038E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchExitIndependentFlipInternal @ 0x1400039F8 (VidSchExitIndependentFlipInternal.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

__int64 __fastcall VidSchExitIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        _DWORD *a8,
        _LUID DestinationLuid)
{
  _DWORD *v9; // rdi
  _QWORD *v11; // rsi
  __int64 result; // rax
  char v14; // [rsp+28h] [rbp-49h]
  __int64 v15; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-29h] BYREF
  char v17; // [rsp+58h] [rbp-19h]
  int v18; // [rsp+5Ch] [rbp-15h]
  _QWORD v19[4]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+B0h] [rbp+3Fh] BYREF

  v9 = a8;
  v11 = (_QWORD *)DestinationLuid;
  *a8 = 0;
  *v11 = 0LL;
  if ( *(_BYTE *)(a1 + 55) )
  {
    DestinationLuid = 0LL;
    RtlCopyLuid(&DestinationLuid, a3);
    LOBYTE(a8) = 0;
    v19[0] = a1 + 2016;
    v21 = 0LL;
    v20 = 0;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v19);
    v15 = a1;
    v17 = 0;
    v16[1] = v16;
    v18 = 2;
    v16[0] = v16;
    v14 = a7;
    ((void (__fastcall *)(__int64 *, __int64, _LUID *, __int64, int, char, _DWORD **, __int64 *))VidSchExitIndependentFlipInternal)(
      &v15,
      a1,
      &DestinationLuid,
      a4,
      a6,
      v14,
      &a8,
      &v21);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v15);
    AcquireSpinLock::Release((AcquireSpinLock *)v19);
    *v9 = (unsigned __int8)a8;
    result = v21;
    *v11 = v21;
  }
  return result;
}
