/*
 * XREFs of KiPreprocessFault @ 0x1403D5010
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x1403D53A8 (KiOpDecode.c)
 *     KiCheckForAtlThunk @ 0x1403D5594 (KiCheckForAtlThunk.c)
 *     KiOpPreprocessSecureFault @ 0x1403D5924 (KiOpPreprocessSecureFault.c)
 *     KiEnableOptionalXStateFeatures @ 0x1403D5A0C (KiEnableOptionalXStateFeatures.c)
 *     KiOpCheckUnhandledSecurePciAccessViolation @ 0x1403D5E8C (KiOpCheckUnhandledSecurePciAccessViolation.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, unsigned __int8 a3)
{
  char v3; // r14
  __int16 v7; // ax
  void *v8; // rcx
  void *KernelShadowStack; // rdx
  bool v10; // cf
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  char v15; // di
  struct _KTHREAD *CurrentThread; // rcx
  void *v18; // rax
  unsigned __int16 SListFaultCount; // ax
  unsigned __int16 v20; // ax
  _OWORD v21[3]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v22; // [rsp+60h] [rbp-68h]
  __int128 v23; // [rsp+70h] [rbp-58h]
  __int128 v24; // [rsp+80h] [rbp-48h]
  __int128 v25; // [rsp+90h] [rbp-38h]

  memset(v21, 0, sizeof(v21));
  v3 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( *(_DWORD *)a1 != 268435460 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0x10000001:
        v11 = 0x80000000;
        *(_DWORD *)a1 = -1073741819;
        goto LABEL_8;
      case 0x10000002:
        break;
      case 0x10000003:
        v11 = 0x20000000;
        *(_DWORD *)a1 = -1073741676;
        goto LABEL_8;
      case 0x10000006:
        v3 = 1;
        if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
          return 1;
        goto LABEL_2;
      case 0x10000007:
        *(_DWORD *)a1 = -1073741819;
        v11 = 0x4000000;
        goto LABEL_8;
      case 0x10000010:
        if ( (int)KiEnableOptionalXStateFeatures(KeGetCurrentThread(), *(_QWORD *)(a1 + 32)) >= 0 )
          return 1;
        break;
      default:
        return 0;
    }
    v11 = 0x40000000;
    *(_DWORD *)a1 = -1073741795;
LABEL_8:
    v12 = KiOpDecode(a1, a2, a3, v11, v21);
    if ( v12 < 0 )
    {
      v15 = 0;
    }
    else
    {
      if ( v3 )
      {
        HIDWORD(v22) |= 0x2000000u;
        *((_QWORD *)&v25 + 1) = -1LL;
      }
      v14 = *((_QWORD *)&v24 + 1);
      if ( *((_QWORD *)&v24 + 1) )
        v12 = guard_dispatch_icall_no_overrides(v21, v13);
      v15 = 0;
      if ( v12 >= 0 )
      {
        if ( v14 )
        {
          v15 = v25;
          if ( (_BYTE)v25 )
            return v15;
        }
      }
    }
    if ( v11 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !BYTE1(v25) )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = -1LL;
      }
    }
    else if ( v11 == 0x8000000 )
    {
      if ( (int)KiCheckForAtlThunk(v21) >= 0 )
        return v25;
    }
    else if ( v11 == 0x10000000 && (HIDWORD(v22) & 0x2000000) != 0 )
    {
      KiOpCheckUnhandledSecurePciAccessViolation(v21, a1);
      if ( *(_DWORD *)a1 == 268435465 )
        KeBugCheckEx(0x1EAu, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56));
    }
    return v15;
  }
LABEL_2:
  v7 = *(_WORD *)(a2 + 56);
  if ( v7 == 16 )
  {
    v8 = &ExpInterlockedPopEntrySListFault;
    KernelShadowStack = &ExpInterlockedPopEntrySListResume;
  }
  else
  {
    if ( v7 != 51 )
      goto LABEL_6;
    v8 = *(void **)&stru_140FC11F0.SchedulerAssistPriorityFloor;
    KernelShadowStack = stru_140FC11F0.KernelShadowStack;
  }
  if ( *(void **)(a2 + 248) == v8 )
  {
    if ( v7 == 16 )
    {
      *(_QWORD *)(a2 + 248) = KernelShadowStack;
      if ( (_BYTE)KiKernelCetEnabled && (*(_DWORD *)(a2 + 48) & 0x100080) == 0x100080 )
      {
        *(_QWORD *)(*(int *)(a2 + 1256) + a2 + 1240) = KernelShadowStack;
        return 1;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v18 = *(void **)(a1 + 40);
      if ( v18 == CurrentThread->SListFaultAddress )
      {
        SListFaultCount = CurrentThread->SListFaultCount;
        if ( SListFaultCount > 0x400u )
        {
          CurrentThread->SListFaultCount = 0;
          goto LABEL_6;
        }
        v20 = SListFaultCount + 1;
      }
      else
      {
        CurrentThread->SListFaultAddress = v18;
        v20 = 0;
      }
      CurrentThread->SListFaultCount = v20;
      *(_QWORD *)(a2 + 248) = KernelShadowStack;
    }
    return 1;
  }
LABEL_6:
  v10 = *(_DWORD *)(a1 + 24) < 2u;
  v11 = 0x10000000;
  *(_DWORD *)a1 = -1073741819;
  if ( v10 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
    goto LABEL_8;
  if ( a3 )
  {
    v11 = 0x8000000;
    goto LABEL_8;
  }
  return 0;
}
