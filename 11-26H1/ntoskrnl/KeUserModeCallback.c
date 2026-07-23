/*
 * XREFs of KeUserModeCallback @ 0x140923D90
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x14072D150 (KiCallUserMode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, void *a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int IdealNodeNumberThread; // edi
  int KernelStack; // r13d
  _QWORD *v11; // r14
  _KERNEL_SHADOW_STACK_LIMIT v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  char UCharFromUser; // al
  _KPRCB_BPB_RETPOLINE_STATE v18; // di
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  signed __int64 **v22; // r10
  signed __int64 v23; // rdx
  struct _EX_RUNDOWN_REF *v24; // r14
  unsigned __int128 v26; // kr00_16
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C0h]
  unsigned __int64 *v31; // [rsp+40h] [rbp-B8h]
  __int64 v32; // [rsp+48h] [rbp-B0h]
  unsigned __int64 TrapFrame; // [rsp+50h] [rbp-A8h]
  int v34; // [rsp+58h] [rbp-A0h] BYREF
  int v35; // [rsp+5Ch] [rbp-9Ch]
  __int64 v36; // [rsp+60h] [rbp-98h]
  struct _KTHREAD *v37; // [rsp+68h] [rbp-90h]
  _BYTE v38[24]; // [rsp+70h] [rbp-88h] BYREF
  int ULongFromUser; // [rsp+88h] [rbp-70h]
  int v40; // [rsp+8Ch] [rbp-6Ch]
  signed __int64 *v41; // [rsp+90h] [rbp-68h]
  _RTL_RUN_ONCE *Win32Callouts; // [rsp+98h] [rbp-60h]
  __int64 v43; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *v44; // [rsp+A8h] [rbp-50h]
  _OWORD v45[4]; // [rsp+B0h] [rbp-48h] BYREF
  ULONG_PTR retaddr; // [rsp+F8h] [rbp+0h]

  HIDWORD(v36) = 0;
  memset(v38, 0, sizeof(v38));
  v5 = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44 = CurrentThread;
  if ( (CurrentThread->SameThreadTransientFlags & 1) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( CurrentThread->ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  *(_QWORD *)&v45[0] = &CurrentThread->CallbackNestingLevel;
  if ( ++CurrentThread->CallbackNestingLevel > 0x1Fu )
  {
    KernelStack = -1073741571;
  }
  else
  {
    IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)CurrentThread);
    v34 = 16;
    v35 = 5;
    LODWORD(v36) = IdealNodeNumberThread;
    v37 = CurrentThread;
    KernelStack = MmCreateKernelStack((__int64)&v34);
    v5 = *(_QWORD *)v38;
    v43 = *(_QWORD *)v38;
    if ( KernelStack >= 0 )
    {
      v11 = (_QWORD *)((*(_QWORD *)v38 - 80LL) & 0xFFFFFFFFFFFFFFC0uLL);
      *v11 = *(_QWORD *)v38;
      v11[1] = v5 - (unsigned int)KeKernelStackSize;
      v11[2] = CurrentThread->StackBase;
      v11[3] = CurrentThread->StackLimit;
      v11[5] = CurrentThread->InitialStack;
      if ( (_BYTE)KiKernelCetEnabled )
      {
        memset(v38, 0, sizeof(v38));
        v34 = 16;
        v35 = 2;
        v36 = IdealNodeNumberThread;
        v37 = CurrentThread;
        KernelStack = MmCreateKernelStack((__int64)&v34);
        if ( KernelStack < 0 )
        {
          v6 = 0LL;
        }
        else
        {
          v26 = *(_OWORD *)v38;
          v32 = v26 >> 64;
          v6 = v26;
          v30 = *(_QWORD *)v38;
        }
        if ( KernelStack < 0 )
        {
LABEL_27:
          v7 = v32;
          goto LABEL_28;
        }
        *(_QWORD *)(((v5 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = CurrentThread->KernelShadowStackInitial;
        *(_QWORD *)(((v5 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = CurrentThread->KernelShadowStackBase;
        v12.AllFields = (unsigned __int64)CurrentThread->KernelShadowStackLimit;
      }
      else
      {
        *(_QWORD *)(((v5 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
        *(_QWORD *)(((v5 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
        *(_QWORD *)(((v5 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
        v12.AllFields = 0LL;
      }
      *(_KERNEL_SHADOW_STACK_LIMIT *)(((v5 - 80) & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v12;
      TrapFrame = (unsigned __int64)CurrentThread->TrapFrame;
      v31 = (unsigned __int64 *)(TrapFrame + 384);
      v41 = *(signed __int64 **)(TrapFrame + 384);
      Win32Callouts = (_RTL_RUN_ONCE *)v41;
      v13 = ((a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) + 88;
      v14 = ((unsigned __int64)v41 - v13) & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = v14;
      v16 = v14 + v13;
      if ( v16 <= v14 || v16 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v29 = ((v16 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v15);
        RtlWriteUCharToUser((_BYTE *)v15, UCharFromUser);
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v29 );
      RtlCopyToUser((void *)(v14 + 88), a2, a3);
      RtlWriteULong64ToUser((_QWORD *)(v14 + 32), v14 + 88);
      RtlWriteULongToUser((_DWORD *)(v14 + 40), a3);
      RtlWriteULongToUser((_DWORD *)(v14 + 44), a1);
      RtlWriteULong64ToUser((_QWORD *)(v14 + 72), (__int64)v41);
      RtlWriteULong64ToUser((_QWORD *)(v14 + 48), *(_QWORD *)(TrapFrame + 360));
      TrapFrame = 0LL;
      v29 = 0LL;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v27 = __readmsr(0x6A0u);
        if ( (v27 & 1) != 0 )
        {
          v28 = __readmsr(0x6A7u);
          TrapFrame = v28;
          if ( KiUserCetPl3SspCanonicalizeMask )
          {
            v28 &= KiUserCetPl3SspCanonicalizeMask;
            TrapFrame = v28;
          }
          v29 = v28;
        }
      }
      v18.0 = ($C97C507C7AE1403CABDDE5329A3FB6A7)KeGetPcr()->Prcb.BpbRetpolineState;
      *v31 = v14;
      KernelStack = KiCallUserMode(a4, a5, (v5 - 80) & 0xFFFFFFC0, v5, v30, v32);
      v40 = KernelStack;
      if ( (v18.AllFlags & 1) != 0 )
        KeExitRetpoline(v20, v19);
      _mm_lfence();
      ULongFromUser = RtlReadULongFromUser((unsigned int *)CurrentThread->Teb + 1488);
      v21 = TrapFrame;
      v22 = (signed __int64 **)v31;
      if ( ULongFromUser )
      {
        *v31 -= 256LL;
        v45[0] = 0LL;
        if ( (unsigned int)PspUpdateCalloutParameters(7, (__int64)v45, 0, 0LL) )
        {
          Win32Callouts = PsSessionGetWin32Callouts();
          v29 = 0LL;
          v24 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts, v23);
          if ( v24 )
          {
            KeCallbackValidationPrologue((__int64)&v29);
            guard_dispatch_icall_no_overrides(v24[2].Count, 7LL);
            KeCallbackValidationEpilogue((__int64)&v29, v24[1].Count, 0x103u);
            ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v24);
          }
          v22 = (signed __int64 **)v31;
        }
      }
      if ( v21 )
        __writemsr(0x6A7u, v21);
      *v22 = v41;
      v6 = v30;
      goto LABEL_27;
    }
    v6 = 0LL;
  }
LABEL_28:
  --CurrentThread->CallbackNestingLevel;
  if ( v5 )
  {
    v36 = 0LL;
    *(_OWORD *)&v38[8] = 0LL;
    v34 = 4;
    v35 = 5;
    *(_QWORD *)v38 = v5;
    v37 = CurrentThread;
    MmDeleteKernelStack(&v34);
  }
  if ( v7 )
  {
    v36 = 0LL;
    v34 = 4;
    v35 = 2;
    *(_OWORD *)v38 = (unsigned __int64)v6;
    *(_QWORD *)&v38[16] = v7;
    v37 = CurrentThread;
    MmDeleteKernelStack(&v34);
  }
  return (unsigned int)KernelStack;
}
