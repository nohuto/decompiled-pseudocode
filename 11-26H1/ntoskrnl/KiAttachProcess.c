/*
 * XREFs of KiAttachProcess @ 0x140312370
 * Callers:
 *     KeAttachProcess @ 0x1403111B0 (KeAttachProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetAddressPolicy @ 0x140248DB0 (KiSetAddressPolicy.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     KiInSwapSingleProcess @ 0x140312684 (KiInSwapSingleProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAttachProcess(LegacyAutoBoost *this, __int64 a2, unsigned __int8 a3, char a4, __int64 a5)
{
  char *v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v10; // rdx
  char **v11; // r9
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  int v14; // ebp
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v16; // r13
  unsigned __int64 GroupIndex; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 result; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 CurrentIrql; // rcx
  unsigned int v26; // r15d
  unsigned __int64 v27; // rax

  v6 = (char *)this + 152;
  v7 = a3;
  *(_QWORD *)(a5 + 32) = *((_QWORD *)v6 + 4);
  *(_BYTE *)(a5 + 40) = v6[40];
  *(_BYTE *)(a5 + 41) = v6[41];
  *(_BYTE *)(a5 + 42) = v6[42];
  v10 = *(_QWORD *)v6;
  if ( *(char **)v6 == v6 )
  {
    *(_QWORD *)(a5 + 8) = a5;
    v11 = (char **)(v6 + 8);
    *(_QWORD *)a5 = a5;
    *(_BYTE *)(a5 + 41) = 0;
  }
  else
  {
    v11 = (char **)((char *)this + 160);
    v22 = (_QWORD *)*((_QWORD *)this + 20);
    *(_QWORD *)a5 = v10;
    *(_QWORD *)(a5 + 8) = v22;
    *(_QWORD *)(v10 + 8) = a5;
    *v22 = a5;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 21);
  v13 = (_QWORD *)(a5 + 16);
  if ( v12 == (_QWORD *)((char *)this + 168) )
  {
    *(_QWORD *)(a5 + 24) = a5 + 16;
    *v13 = v13;
    *(_BYTE *)(a5 + 42) = 0;
  }
  else
  {
    v23 = (_QWORD *)*((_QWORD *)this + 22);
    *v13 = v12;
    *(_QWORD *)(a5 + 24) = v23;
    v12[1] = v13;
    *v23 = v13;
  }
  *v11 = v6;
  *(_QWORD *)v6 = v6;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  *((_WORD *)this + 96) = 0;
  *((_BYTE *)this + 194) = 0;
  if ( (LegacyAutoBoost *)a5 == (LegacyAutoBoost *)((char *)this + 600) )
    *((_BYTE *)this + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 264), 8u) & 7) != 0 )
  {
    *((_QWORD *)this + 8) = 0LL;
    KiInSwapSingleProcess(this);
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
    }
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((_QWORD *)this + 8) );
    }
  }
  *((_DWORD *)this + 29) |= 0x800u;
  *((_QWORD *)this + 23) = a2;
  v14 = a4 & 2;
  if ( !v14 )
    *((_QWORD *)this + 8) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = *(_QWORD *)(a5 + 32);
  GroupIndex = CurrentPrcb->GroupIndex;
  v18 = 8LL * CurrentPrcb->Group;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a2 + 128) + v18 + 8), GroupIndex);
  v19 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v20 = v19 | 0x8000000000000000uLL;
    if ( (v19 & 2) == 0 )
      v20 = *(_QWORD *)(a2 + 40);
    __writegsqword(0xB000u, v20);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 352), (__int64)v13);
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(v19);
  else
    __writecr3(v19);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v24 = __readcr4();
    if ( (v24 & 0x20080) != 0 )
    {
      __writecr4(v24 ^ 0x80);
      __writecr4(v24);
    }
    else
    {
      v27 = __readcr3();
      __writecr3(v27);
    }
  }
  result = *(_QWORD *)(v16 + 128);
  _interlockedbittestandreset64((volatile signed __int32 *)(result + v18 + 8), GroupIndex);
  *((_DWORD *)this + 29) &= ~0x800u;
  if ( !v14 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    __writecr8(v7);
  }
  return result;
}
