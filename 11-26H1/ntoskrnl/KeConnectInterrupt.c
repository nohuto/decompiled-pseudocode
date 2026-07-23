/*
 * XREFs of KeConnectInterrupt @ 0x140431458
 * Callers:
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 * Callees:
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140430668 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiUnmaskInterruptInternal @ 0x1404307FC (KiUnmaskInterruptInternal.c)
 *     KeDisconnectInterrupt @ 0x140430D90 (KeDisconnectInterrupt.c)
 *     KiConnectInterrupt @ 0x140431660 (KiConnectInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404318E8 (KiConnectSecondaryInterrupt.c)
 *     KiIsInterruptTypeSecondary @ 0x140431C94 (KiIsInterruptTypeSecondary.c)
 *     KiIntSteerConnect @ 0x140431CC8 (KiIntSteerConnect.c)
 *     HalEnableInterrupt @ 0x140432390 (HalEnableInterrupt.c)
 *     KiIntSteerEnable @ 0x140432500 (KiIntSteerEnable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeConnectInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rdi
  char IsInterruptTypeSecondary; // r13
  char v7; // r12
  unsigned __int8 i; // si
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  char v15; // r12
  _QWORD *v16; // rdi
  __int16 v17; // r13
  __int64 v19; // rcx
  int v20; // eax
  int v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h]
  __int128 v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+58h] BYREF

  v4 = a2;
  v25 = 0;
  LOBYTE(v24) = 0;
  v23 = 0LL;
  v22 = 0LL;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 31);
  v7 = 0;
  for ( i = 0; i < (unsigned __int8)v4; ++i )
  {
    v9 = a1[i];
    *(_DWORD *)(v9 + 104) |= 1u;
    if ( IsInterruptTypeSecondary )
      v10 = KiConnectSecondaryInterrupt(v9, 1LL);
    else
      v10 = KiConnectInterrupt(v9, 1LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v24 = 31;
      KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v24);
      goto LABEL_27;
    }
    if ( v10 == 295 )
      v7 = 1;
  }
  v21 = 31;
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v21);
  v21 = v4;
  v11 = KiIntSteerConnect((_DWORD)a1, v4, (int)a3 + 8, (unsigned int)&v24, (__int64)&v23);
  if ( v11 >= 0 )
  {
    i = 0;
    if ( (_BYTE)v4 )
    {
      v13 = a1;
      v14 = v4;
      i = v4;
      do
      {
        _InterlockedAnd((volatile signed __int32 *)(*v13++ + 104), 0xFFFFFFFE);
        --v14;
      }
      while ( v14 );
    }
    if ( v7 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(a3 + 8, &v25) < 0 )
        return 295;
      v19 = *a1;
      v20 = IsInterruptTypeSecondary
          ? KiUnmaskSecondaryInterruptInternal(*(_DWORD *)(v19 + 88), v25)
          : KiUnmaskInterruptInternal(v19, v25);
      v11 = v20;
      if ( v20 >= 0 )
        return 295;
    }
    else
    {
      v15 = v24;
      v16 = (_QWORD *)(a3 + 32);
      if ( (_BYTE)v24 )
      {
        v17 = *(_WORD *)(a3 + 40);
        *(_QWORD *)&v22 = *v16;
        *(_WORD *)(a3 + 40) = WORD4(v23);
        *v16 = v23;
      }
      else
      {
        v17 = WORD4(v22);
      }
      v11 = HalEnableInterrupt(a3);
      if ( v15 )
      {
        *v16 = v22;
        *(_WORD *)(a3 + 40) = v17;
      }
      if ( v11 >= 0 )
      {
        KiIntSteerEnable(a1, (unsigned int)v21);
        return (unsigned int)v11;
      }
    }
  }
LABEL_27:
  if ( i )
  {
    LOBYTE(v12) = i;
    KeDisconnectInterrupt(a1, v12, a3);
  }
  return (unsigned int)v11;
}
