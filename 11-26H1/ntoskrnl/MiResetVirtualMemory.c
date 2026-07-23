/*
 * XREFs of MiResetVirtualMemory @ 0x140AAF5F0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiReleaseFaultCharges @ 0x1404A5730 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140704598 (MiRetainSubsection.c)
 *     MiCheckResetDiscardVirtualMemory @ 0x140AAF800 (MiCheckResetDiscardVirtualMemory.c)
 */

__int64 __fastcall MiResetVirtualMemory(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, int a5, char a6)
{
  int VadFlags; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ebx
  __int64 *v15; // rax
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned __int8 v21; // [rsp+30h] [rbp-39h]
  unsigned int v22; // [rsp+34h] [rbp-35h]
  __int64 v23; // [rsp+40h] [rbp-29h]
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  __int64 ProtoPteAddress; // [rsp+50h] [rbp-19h]
  __int64 v26; // [rsp+58h] [rbp-11h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+70h] [rbp+7h]
  _QWORD v29[3]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v30; // [rsp+D8h] [rbp+6Fh]

  if ( a5 == 0x80000 )
  {
    VadFlags = MiReadVadFlags(a4);
    if ( (VadFlags & v13) == 0 )
    {
      v14 = MiCheckResetDiscardVirtualMemory(v11, a2, v12, a1, a6);
      if ( v14 < 0 )
        goto LABEL_14;
      v15 = *(__int64 **)(a4 + 80);
      v28 = 0LL;
      v24 = *v15;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      ProtoPteAddress = MiGetProtoPteAddress(a4, a2 >> 12, 0, (unsigned int **)BugCheckParameter2);
      v16 = MiGetProtoPteAddress(a4, a3 >> 12, 0, (unsigned int **)&BugCheckParameter2[1]);
      v26 = v16;
      if ( ProtoPteAddress )
      {
        if ( v16 )
        {
          if ( (unsigned int)MiRetainSubsection((__int64 *)BugCheckParameter2[0], 2) )
          {
            v22 = *(_DWORD *)(a4 + 24);
            v30 = *(_BYTE *)(a4 + 32);
            v23 = *(unsigned int *)(a4 + 28);
            CurrentThread = KeGetCurrentThread();
            v21 = *(_BYTE *)(a4 + 33);
            MiUnlockVad((__int64)CurrentThread, a4);
            v29[0] = 0LL;
            v29[1] = a4;
            v29[2] = -1LL;
            MiTrimSection(&v24, (__int64)v29, 33);
            MiReleaseFaultCharges((__int64 *)BugCheckParameter2[0]);
            MiLockVad((__int64)CurrentThread, a4, v18, v19);
            if ( (unsigned int)MiVadDeleted(a4)
              || (v22 | ((unsigned __int64)v30 << 32)) != (*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32))
              || (v23 | ((unsigned __int64)v21 << 32)) != (*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) )
            {
              v14 = -1073741800;
              goto LABEL_14;
            }
          }
        }
      }
    }
  }
  v14 = MiCheckResetDiscardVirtualMemory(a4, a2, a3, a1, a6);
  if ( v14 >= 0 )
  {
    v14 = MiWalkVaRange(a2, a3, a4, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      v14 = 0;
  }
LABEL_14:
  MiUnlockAndDereferenceVad((volatile signed __int32 *)a4);
  return (unsigned int)v14;
}
