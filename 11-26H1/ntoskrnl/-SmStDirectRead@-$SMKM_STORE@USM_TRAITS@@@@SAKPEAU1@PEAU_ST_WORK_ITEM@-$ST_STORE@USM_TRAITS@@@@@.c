/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14030FDD0
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140280DD0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402107C8 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x140262E00 (KeExpandKernelStackAndCalloutEx.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030FF4C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  __int64 Context; // rax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int128 v9; // xmm1
  __int128 Parameter; // [rsp+30h] [rbp-98h] BYREF
  __int128 v11; // [rsp+40h] [rbp-88h]
  __int128 v12; // [rsp+50h] [rbp-78h]
  __int128 v13; // [rsp+60h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Parameter = 0LL;
  v11 = 0LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 3056) )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 3056), &ApcState);
    v2 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v6 = Context;
    if ( Context )
    {
      v7 = *a2;
      *(_QWORD *)&Parameter = a1;
      *((_QWORD *)&Parameter + 1) = a2;
      v12 = v7;
      *(_QWORD *)&v11 = Context;
      v13 = a2[1];
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
             &Parameter,
             0x2000uLL,
             0,
             0LL) < 0 )
      {
        ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v6);
        v2 = 3;
      }
      else if ( DWORD2(v11) )
      {
        v2 = 6;
      }
      else
      {
        v9 = v13;
        *a2 = v12;
        a2[1] = v9;
      }
    }
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  }
  return v2 >> 2;
}
