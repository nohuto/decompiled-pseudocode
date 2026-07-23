/*
 * XREFs of KeDisconnectInterrupt @ 0x140430D90
 * Callers:
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x140A9C840 (IoDisconnectInterrupt.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiIntSteerDisable @ 0x140430B9C (KiIntSteerDisable.c)
 *     KiDisconnectInterruptCommon @ 0x140430EB4 (KiDisconnectInterruptCommon.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140431368 (KiDisconnectSecondaryInterrupt.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 *     KiIsInterruptTypeSecondary @ 0x140431C94 (KiIsInterruptTypeSecondary.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeDisconnectInterrupt(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  unsigned int v6; // esi
  char IsInterruptTypeSecondary; // r13
  __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned __int8)a2;
  v5 = a1;
  v6 = 0;
  KeMaskInterrupt(a1, a2, a3, 0LL);
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v8 = (unsigned int)v3;
  KiIntSteerDisable(v5, v3);
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 31);
  if ( (_BYTE)v3 )
  {
    v9 = v5;
    v10 = (unsigned int)v3;
    do
    {
      v11 = *v9;
      if ( IsInterruptTypeSecondary )
        v12 = KiDisconnectSecondaryInterrupt(*v9, a3);
      else
        v12 = KiDisconnectInterruptCommon(0LL, *v9, a3);
      _InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u);
      if ( v12 < 0 )
      {
        v6 = v12;
      }
      else if ( v12 == 296 )
      {
        v6 = 296;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v3 = v8;
  }
  v16 = 31;
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v16);
  v13 = *(void **)(*v5 + 272);
  if ( v13 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        v15 = *v5++;
        *(_QWORD *)(v15 + 272) = 0LL;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v13, 0x5249654Bu);
  }
  return v6;
}
