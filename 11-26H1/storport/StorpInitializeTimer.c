/*
 * XREFs of StorpInitializeTimer @ 0x14005A2AC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeTimer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int *v6; // rsi
  int *v7; // rbp
  int *v8; // r9
  __int64 Pool; // rax
  _QWORD *v10; // rdi
  volatile signed __int32 *v11; // rsi
  int *v12; // [rsp+50h] [rbp+8h] BYREF
  int *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v13 = 0LL;
  v12 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 72LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 73LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return 3238002696LL;
  }
  RaidpPortGetAdapter(a1, &v13, &v12);
  v6 = v13;
  v7 = v12;
  if ( v13 )
  {
    v8 = v13 + 2;
  }
  else
  {
    if ( !v12 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          (unsigned int)((_DWORD)v12 + 74),
          &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
          a1);
      }
      return 3238002694LL;
    }
    v8 = v12 + 2;
  }
  Pool = RaidAllocatePool(64LL, 160LL, 1413570898LL, *(_QWORD *)v8);
  v10 = (_QWORD *)Pool;
  if ( Pool )
  {
    KeInitializeTimer((PKTIMER)(Pool + 8));
    KeInitializeDpc((PRKDPC)(v10 + 9), (PKDEFERRED_ROUTINE)StorportTimerDpc, v10);
    if ( v6 )
    {
      *v10 = v6;
      v11 = v6 + 1048;
    }
    else
    {
      *v10 = v7;
      v11 = v7 + 275;
    }
    _InterlockedIncrement(v11);
    *a2 = v10;
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v2;
}
