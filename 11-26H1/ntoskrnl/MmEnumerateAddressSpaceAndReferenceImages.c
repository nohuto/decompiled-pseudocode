/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140921CD0 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A33C00 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x14027E1C0 (MiUnlockVadShared.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 */

__int64 __fastcall MmEnumerateAddressSpaceAndReferenceImages(
        PRKPROCESS PROCESS,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r8
  int v6; // ecx
  int v7; // edx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rsi
  struct _LIST_ENTRY *Blink; // rbx
  unsigned __int64 v12; // rbx
  int CurrentProcessorColor; // eax
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  _QWORD *v16; // rcx
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  unsigned __int64 VadFlags; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r10d
  unsigned __int64 v23; // r14
  __int64 v24; // rcx
  __int64 VadFlags2; // rdi
  __int64 v26; // r11
  signed __int64 v27; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // r14
  _QWORD **v33; // rcx
  __int64 v34; // r15
  _QWORD *i; // rcx
  unsigned __int64 v36; // rdx
  int v37; // r10d
  int v38; // eax
  unsigned __int64 v39; // rax
  int v41; // [rsp+20h] [rbp-88h]
  struct _KTHREAD *v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+38h] [rbp-70h]
  __int64 PoolMm; // [rsp+40h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  v4 = a2;
  v6 = a2 & 1;
  memset(&ApcState, 0, 32);
  v7 = v6 | 2;
  if ( (v4 & 2) == 0 )
    v7 = v6;
  *(_OWORD *)&ApcState.Process = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = v7 | 4;
  v42 = CurrentThread;
  if ( (v4 & 4) == 0 )
    v9 = v7;
  v10 = 0LL;
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    v41 = 0;
  }
  else
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v41 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS, v4, a4);
  Blink = PROCESS[3].Header.WaitListHead.Blink;
  if ( Blink )
  {
    v12 = (unsigned __int64)&Blink->Flink + 1;
    if ( v12 <= 0x555555555555555LL )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(256LL, 48 * v12, 808546381, CurrentProcessorColor | 0x80000000);
      v10 = PoolMm;
      if ( PoolMm )
      {
        v16 = *(_QWORD **)&PROCESS[3].Header.Lock;
        v17 = 0LL;
        while ( v16 )
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( 1 )
        {
          if ( !v17 )
          {
            *(_QWORD *)v10 = 0LL;
            v10 = PoolMm;
            break;
          }
          v33 = (_QWORD **)v17[1];
          v32 = (__int64)v17;
          v34 = (__int64)v17;
          v18 = v17;
          if ( v33 )
          {
            v17 = (_QWORD *)v17[1];
            for ( i = *v33; i; i = (_QWORD *)*i )
              v17 = i;
          }
          else
          {
            while ( 1 )
            {
              v17 = (_QWORD *)(v17[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v17 || (_QWORD *)*v17 == v18 )
                break;
              v18 = v17;
            }
          }
          MiLockVadShared((__int64)CurrentThread, v34, v14, v15);
          VadFlags = (unsigned int)MiReadVadFlags(v34);
          if ( !(unsigned int)MiVadDeleted(v20) && v22 != 1 )
          {
            if ( (VadFlags & 0x80000) != 0 )
            {
              if ( v9 >= 4 )
              {
                *(_QWORD *)v10 = (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) << 12;
                *(_QWORD *)(v10 + 8) = ((*(unsigned int *)(v34 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 33) << 32))
                                      - (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32))
                                      + 1) << 12;
                if ( (*(unsigned int *)(v34 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 32)) >= 0x7FFFFFFFDLL )
                  v36 = 0LL;
                else
                  v36 = (*(unsigned int *)(v34 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 32)) << 12;
                *(_QWORD *)(v10 + 24) = v36;
                *(_DWORD *)(v10 + 16) = PROCESS[1].Header.WaitListHead.Flink;
                *(_DWORD *)(v10 + 20) = 0x2000;
                v37 = v22 - 3;
                if ( v37 )
                {
                  if ( v37 == 1 )
                  {
                    *(_DWORD *)(v10 + 20) = 8396800;
                    v38 = 10493952;
                  }
                  else if ( (VadFlags & 0x200000) != 0 || (VadFlags & 0x60000) >= 0x40000 )
                  {
                    *(_DWORD *)(v10 + 20) = 536879104;
                    v38 = 538976256;
                  }
                  else
                  {
LABEL_46:
                    v38 = 2105344;
                  }
                }
                else
                {
                  if ( (VadFlags & 0x880000) == 0x880000 )
                    goto LABEL_46;
                  *(_DWORD *)(v10 + 20) = 4202496;
                  v38 = 6299648;
                }
                if ( (VadFlags & 0x180000) == 0x180000 )
                  *(_DWORD *)(v10 + 20) = v38;
                v39 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL | 2;
                goto LABEL_52;
              }
            }
            else
            {
              if ( v22 == 2 && (VadFlags & 0x3E0) == 0xE0 && (v9 & 1) != 0 )
              {
                v43 = **(_QWORD **)(v34 + 80);
                v23 = (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) << 12;
                if ( (unsigned int)MiVadMapsLargeImage(v34) )
                  v23 += (unsigned __int64)*(unsigned __int8 *)(MiLocateLockedVadEvent(v24, 0x10u) + 24) << 16;
                VadFlags2 = (unsigned int)MiReadVadFlags2(v34);
                v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v26 + 24LL), -1LL, -1LL);
                *(_QWORD *)(v10 + 24) = v28;
                v29 = (v27 + 4095) & 0xFFFFFFFFFFFFF000uLL;
                if ( v28 > v29 )
                  *(_QWORD *)(v10 + 24) = v29;
                *(_QWORD *)v10 = MiReferenceControlAreaFile(v26);
                *(_QWORD *)(v10 + 8) = v23;
                *(_QWORD *)(v10 + 16) = *(_QWORD *)(*(_QWORD *)v43 + 32LL);
                *(_DWORD *)(v10 + 40) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43 + 56LL) + 60LL);
                if ( (VadFlags2 & 8) != 0 )
                {
                  v31 = v23 & 0xFFFFFFFFFFFFE3FFuLL;
                }
                else
                {
                  v30 = (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)v43 + 15LL) << 6;
                  v31 = ((unsigned __int64)(*(_BYTE *)(*(_QWORD *)v43 + 15LL) & 0xF0) << 6) ^ (*(_QWORD *)(v10 + 8) ^ v30) & 0xFFFFFFFFFFFFE03FuLL ^ (v30 ^ ((unsigned __int64)(*(_BYTE *)(*(_QWORD *)v43 + 15LL) & 0xF0) << 6)) & 0xFFFFFFFFFFFFE3FFuLL;
                }
                *(_QWORD *)(v10 + 8) = v31;
                if ( (v9 & 2) != 0 )
                {
                  *(_QWORD *)(v10 + 8) = (VadFlags >> 4) & 0xFFFFFFFFFFFFFFELL ^ (VadFlags2 ^ (VadFlags >> 4) & 0xFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFC1uLL ^ (v31 ^ VadFlags2) & 0xFFFFFFFFFFFFFFC0uLL;
                  *(_QWORD *)(v10 + 32) = (*(unsigned int *)(v34 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 32)) << 12;
                }
                CurrentThread = v42;
                v32 = v34;
                goto LABEL_32;
              }
              if ( (v9 & 2) != 0 )
              {
                MiFillMapFileInfo(v21, v10);
                v39 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_52:
                *(_QWORD *)v10 = v39;
LABEL_32:
                v10 += 48LL;
              }
            }
          }
          MiUnlockVadShared((__int64)CurrentThread, v32);
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS);
  if ( v41 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  return v10;
}
