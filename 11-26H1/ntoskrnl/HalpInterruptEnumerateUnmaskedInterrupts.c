/*
 * XREFs of HalpInterruptEnumerateUnmaskedInterrupts @ 0x14057DD10
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140591F94 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedInterrupts(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned int v3; // eax
  char v5; // di
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  ULONG_PTR *v8; // r12
  ULONG_PTR *v9; // rdx
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  _QWORD *v12; // rbp
  int i; // r14d
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 v20; // [rsp+80h] [rbp+18h]
  ULONG_PTR *v21; // [rsp+88h] [rbp+20h]

  v3 = (unsigned __int16)a3[1];
  if ( *a3 && v3 >= 0x20 )
  {
    memset_0(a3, 0, v3 - 4);
    v5 = 1;
    v6 = 0;
    v7 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
    v8 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v20 = v7;
    while ( v8 != &HalpRegisteredInterruptControllers )
    {
      v9 = v8;
      v8 = (ULONG_PTR *)*v8;
      v21 = v9;
      v10 = v9 + 33;
      v11 = (_QWORD *)v9[33];
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        if ( *((_DWORD *)v12 + 7) != -1 )
        {
          for ( i = *((_DWORD *)v12 + 5); i < *((_DWORD *)v12 + 6); ++i )
          {
            v14 = v12[5];
            v15 = (unsigned int)(i - *((_DWORD *)v12 + 5));
            v16 = 56 * v15;
            if ( (*(_DWORD *)(56 * v15 + v14 + 12) & 1) != 0 )
            {
              *((_DWORD *)a3 + 4) = *((_DWORD *)v12 + 7) + v15;
              a3[2] = 0;
              *((_DWORD *)a3 + 2) = *(_DWORD *)(v16 + v14 + 8);
              *((_DWORD *)a3 + 3) = *(_DWORD *)(v16 + v14);
              *((_QWORD *)a3 + 3) = v9[46];
              v5 = guard_dispatch_icall_no_overrides(a2, a3);
              if ( !v5 )
                goto LABEL_15;
              v9 = v21;
            }
          }
        }
      }
    }
LABEL_15:
    HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v20);
    if ( v5 && SecondaryIcServicesEnabled )
      return (unsigned int)HalpInterruptEnumerateUnmaskedSecondaryInterrupts(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
