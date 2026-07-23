/*
 * XREFs of MmCopyMemory @ 0x14033B4D0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MiCheckPhysicalAddressRange @ 0x14033A5D4 (MiCheckPhysicalAddressRange.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiCopySinglePage @ 0x14033D2C8 (MiCopySinglePage.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x14072AEC0 (ZwReadVirtualMemoryEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        _BYTE *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T BufferSize,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  int v9; // r8d
  __int16 v11; // cx
  struct _KTHREAD *CurrentThread; // r13
  int v13; // edi
  char v14; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // r13
  _BYTE *v20; // r15
  _BYTE *v21; // rcx
  char v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-D0h]
  _BYTE *v29; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  char v31[8]; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  struct _KTHREAD *v35; // [rsp+70h] [rbp-90h]
  PSIZE_T v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]

  v29 = Buffer;
  v36 = NumberOfBytesRead;
  *(_DWORD *)v31 = a4;
  memset_0(v37, 0, 0x80uLL);
  v32 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v9 = a4 & 1;
  v28 = v9;
  if ( (a4 & 1) != 0 )
  {
    if ( !(unsigned int)MiCheckPhysicalAddressRange(BaseAddress, BufferSize) )
      return -1073741800;
    v9 = a4 & 1;
  }
  else
  {
    if ( BufferSize + BaseAddress <= BaseAddress )
      return -1073741800;
    if ( BaseAddress < 0x7FFFFFFF0000LL )
    {
      if ( BufferSize + BaseAddress >= 0x7FFFFFFF0000LL )
        return -1073741800;
      return ZwReadVirtualMemoryEx(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID)BaseAddress,
               Buffer,
               BufferSize,
               NumberOfBytesRead,
               1u);
    }
    if ( BaseAddress < 0xFFFF800000000000uLL )
      return -1073741800;
    v11 = BaseAddress;
  }
  if ( (BufferSize + (v11 & 0xFFF) + 4095LL) >> 12 < 0x100000000LL )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0;
    v35 = CurrentThread;
    v14 = BaseAddress;
    v15 = 4096 - (BaseAddress & 0xFFF);
    if ( v15 > BufferSize )
      v15 = BufferSize;
    if ( v9 )
      v16 = BaseAddress >> 12;
    else
      v16 = -1LL;
    v30 = v16;
    while ( 1 )
    {
      if ( !BufferSize )
      {
LABEL_37:
        *v36 += v32;
        return v13;
      }
      v17 = 0LL;
      *(_QWORD *)&v33 = 0LL;
      v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( v9 )
        break;
      v18 = MiTranslatePageForCopy(BaseAddress, (__int64)v37, &v30, (__int64 *)&v33, &v34);
      v13 = v18;
      if ( v18 < 0 )
      {
        if ( v18 != -1073741608 )
          goto LABEL_37;
        v33 = 0LL;
        MiGetEffectivePagePriorityThread(CurrentThread);
        *(_QWORD *)&v33 = BaseAddress;
        v27 = BufferSize;
        if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
          v27 = 0x200000 - (BaseAddress & 0x1FFFFF);
        *((_QWORD *)&v33 + 1) = v27;
        if ( BaseAddress <= qword_140E2DFD0 && BaseAddress >= qword_140E2DFC0 )
        {
          v13 = -1073741585;
          goto LABEL_37;
        }
        v13 = MiPrefetchVirtualMemory(1LL, &v33, 1LL);
        if ( v13 < 0 )
          goto LABEL_37;
        v9 = v28;
      }
      else
      {
        v19 = v38;
        if ( v18 == 273 )
        {
          MiUnlockSystemVa((__int64)v37);
          v20 = v29;
          v13 = 0;
          if ( v15 )
          {
            v21 = v29;
            v22 = v14 - (_BYTE)v29;
            v23 = v15;
            do
            {
              *v21 = *((_BYTE *)&v34 + ((v22 + (_BYTE)v21) & 7));
              ++v21;
              --v23;
            }
            while ( v23 );
          }
          goto LABEL_33;
        }
        v17 = v33;
LABEL_27:
        v24 = v30;
        v13 = MiCopySinglePage(v29, v31[0]);
        if ( v19 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v24 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
          {
            LOBYTE(v25) = 17;
            MiUnlockProtoPoolPage(v17, v25, v26);
          }
          MiUnlockSystemVa((__int64)v37);
        }
        if ( v13 < 0 )
          goto LABEL_37;
        v20 = v29;
LABEL_33:
        v32 += v15;
        ++v30;
        BufferSize -= v15;
        v9 = v28;
        BaseAddress += v15;
        CurrentThread = v35;
        v29 = &v20[v15];
        v15 = BufferSize;
        if ( BufferSize > 0x1000 )
          v15 = 4096LL;
        v14 = 0;
      }
    }
    v19 = 0LL;
    goto LABEL_27;
  }
  return -1073741583;
}
