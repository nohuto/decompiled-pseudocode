/*
 * XREFs of KiTpHandleTrap @ 0x1405FEEB0
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     KiTpWriteBreakpoint @ 0x1405FF148 (KiTpWriteBreakpoint.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiTpCompletion @ 0x140C5C010 (KiTpCompletion.c)
 */

bool __fastcall KiTpHandleTrap(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // r11
  bool v8; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v10; // rdx
  _KPROCESS *Process; // r8
  __int64 *i; // rdi
  bool v13; // cf
  bool v14; // zf
  int v15; // eax
  bool v16; // cl
  _KPROCESS *v17; // rax
  int v18; // eax
  int v19; // r12d
  int v20; // [rsp+20h] [rbp-38h] BYREF

  v6 = a1;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a3 || (KiDynamicTraceEnabled & 1) == 0) )
    return 0;
  v8 = 0;
  LOBYTE(v20) = 0;
  CurrentPrcb = 0LL;
  v10 = *(_QWORD *)(a2 + 248);
  Process = KeGetCurrentThread()->Process;
  _InterlockedAdd((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[80], 1u);
  for ( i = (__int64 *)*((_QWORD *)KsepShimDbLock.WaitBlock[1].SparePtr + ((v10 >> 4) & 0x3FFF)); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      if ( a3 == 1 )
      {
        RtlCopyFromUser((char *)&v20 + 1, (void *)v10, 1uLL);
        v13 = BYTE1(v20) < 0xCCu;
        v14 = BYTE1(v20) == 0xCC;
      }
      else
      {
        v13 = *(_BYTE *)v10 < 0xCCu;
        v14 = *(_BYTE *)v10 == 0xCC;
      }
      if ( v14 )
        v15 = 0;
      else
        v15 = v13 ? -1 : 1;
      if ( v15 )
        v8 = 1;
      goto LABEL_44;
    }
    if ( v10 == i[1] && (!*((_BYTE *)i + 50) || Process == (_KPROCESS *)i[2]) )
      break;
  }
  if ( (KiDynamicTraceMask & 4) != 0 )
  {
    LOBYTE(a4) = a3;
    if ( (int)KiTpCompletion((char *)i + 52, a1, a2, a4, v20) < 0 )
    {
      KiTpWriteBreakpoint(i, 0LL, 0LL);
      goto LABEL_44;
    }
    goto LABEL_35;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = (CurrentPrcb->PrcbFlagsReserved & 0x400) != 0;
    if ( CurrentPrcb->CombinedNmiMceActive )
      v16 = 1;
    if ( v16 )
    {
      CurrentPrcb = 0LL;
      LOBYTE(a4) = a3;
      v8 = (int)KiTpCompletion((char *)i + 52, v6, a2, a4, v20) >= 0;
      goto LABEL_44;
    }
    CurrentPrcb->PrcbFlagsReserved |= 0x400u;
  }
  if ( !(_BYTE)a4 )
    goto LABEL_40;
  v17 = (_KPROCESS *)i[2];
  if ( v17 && !*((_BYTE *)i + 50) && v17 != Process )
  {
    LOBYTE(a4) = a3;
    v18 = KiTpCompletion((char *)i + 52, v6, a2, a4, v20);
LABEL_41:
    v19 = v18;
    goto LABEL_42;
  }
  if ( *((_BYTE *)i + 24) )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a2, i[4]) )
    {
LABEL_35:
      v8 = 1;
      goto LABEL_44;
    }
    v6 = a1;
  }
  LOBYTE(a4) = a3;
  v19 = KiTpCompletion((char *)i + 52, v6, a2, a4, v20);
  if ( v19 < 0 )
  {
LABEL_40:
    v18 = KiTpWriteBreakpoint(i, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( *((_BYTE *)i + 25) )
    guard_dispatch_icall_no_overrides(a2, i[5]);
LABEL_42:
  if ( v19 >= 0 )
    v8 = 1;
LABEL_44:
  if ( CurrentPrcb )
    CurrentPrcb->PrcbFlagsReserved &= ~0x400u;
  _InterlockedDecrement((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[80]);
  return v8;
}
