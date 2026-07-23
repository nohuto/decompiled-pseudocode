/*
 * XREFs of MiProcessVaContiguityInformation @ 0x1407104C0
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiThreadIdealNode @ 0x1402F0BA4 (MiThreadIdealNode.c)
 *     MiVadPagesTradable @ 0x14035E780 (MiVadPagesTradable.c)
 *     MiConvertLargeActivePageToChain @ 0x1404035D0 (MiConvertLargeActivePageToChain.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x14087D814 (MiVadSupportsPhysicalContiguityQuery.c)
 */

__int64 __fastcall MiProcessVaContiguityInformation(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rsi
  int v6; // ebx
  struct _LIST_ENTRY **p_Blink; // r12
  _QWORD *v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // r13
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // r14
  ULONG_PTR v13; // rax
  unsigned int v14; // r9d
  unsigned int VadCacheAttribute; // eax
  unsigned int v16; // edi
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int8 CurrentIrql; // r12
  __int64 LargePage; // rax
  __int64 v21; // r13
  int VaRangePhysicallyContiguous; // eax
  unsigned int v23; // ebx
  unsigned int v26; // [rsp+44h] [rbp-65h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-61h]
  __int64 v28; // [rsp+50h] [rbp-59h]
  _QWORD *v29; // [rsp+58h] [rbp-51h]
  struct _LIST_ENTRY **v30; // [rsp+60h] [rbp-49h]
  __int64 v31; // [rsp+68h] [rbp-41h]
  unsigned __int64 v32; // [rsp+70h] [rbp-39h]
  unsigned __int64 *v33; // [rsp+78h] [rbp-31h]
  _OWORD v34[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+7h]
  int v36; // [rsp+B8h] [rbp+Fh]

  v35 = 0LL;
  v36 = 0;
  memset(v34, 0, sizeof(v34));
  v5 = 0LL;
  v6 = 0;
  v26 = 0;
  v27 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v30 = p_Blink;
  v8 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8LL * *((unsigned __int16 *)p_Blink + 87));
  v28 = a3;
  v29 = v8;
  v9 = MiPageSizes[a3];
  v10 = v9 << 12;
  v31 = v9 << 12;
  MiInitializeDemandCoalesceContext(v34, v9, 1uLL, 1);
  if ( (int)MiAcquireNonPagedResources((ULONG *)v8, MiPageSizes[v28], 1024LL, 6LL) < 0 )
    return (unsigned int)-1073741670;
  v11 = &a1[2 * a2];
  v33 = v11;
LABEL_3:
  if ( a1 >= v11 )
  {
    v23 = 0;
  }
  else
  {
    if ( !(a1[1] % v10) )
    {
      v12 = *a1;
      if ( (*a1 & ~(v10 - 1)) == *a1 )
      {
        if ( v5 )
        {
          if ( v12 >= (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12
            && v12 <= (((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF) )
          {
LABEL_15:
            if ( v6 )
              v16 = v6 - 1;
            else
              v16 = MiThreadIdealNode((__int64)p_Blink, 0LL);
            v17 = v12 + a1[1];
            v32 = v17;
            while ( 1 )
            {
              if ( v12 >= v17 )
              {
                v11 = v33;
                a1 += 2;
                goto LABEL_3;
              }
              if ( !(unsigned int)MiQueryVaPhysicalContiguity((__int64)p_Blink, v12, a3, 1) )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql != 2 )
                  __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v18) = 2;
                  KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
                }
                LargePage = MiGetLargePage(v29, v12, a3, v16, v27, 0x14u, v34, 0LL);
                v21 = LargePage;
                if ( LargePage )
                  MiConvertLargeActivePageToChain(LargePage);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                __writecr8(CurrentIrql);
                if ( !v21 )
                {
                  v23 = -1073741801;
                  goto LABEL_39;
                }
                p_Blink = v30;
                VaRangePhysicallyContiguous = MiMakeVaRangePhysicallyContiguous((__int64)v30, v12, a3, v21);
                v10 = v31;
                v26 = VaRangePhysicallyContiguous;
              }
              v17 = v32;
              v12 += v10;
            }
          }
          MiUnlockAndDereferenceVadShared(v5);
        }
        v13 = MiObtainReferencedVadEx(*a1, 2LL, (int *)&v26);
        v5 = v13;
        if ( v13 )
        {
          if ( v12 + a1[1] - 1 > (((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF) )
          {
            v23 = -1073741800;
          }
          else
          {
            if ( (unsigned int)MiVadSupportsPhysicalContiguityQuery(*(unsigned int *)(v13 + 48))
              && MiVadPagesTradable(v5) )
            {
              VadCacheAttribute = MiGetVadCacheAttribute(v14);
              v6 = (*(_DWORD *)(v5 + 48) >> 10) & 0x7F;
              v27 = VadCacheAttribute;
              goto LABEL_15;
            }
            v23 = -1073741637;
          }
          goto LABEL_40;
        }
        v23 = v26;
        goto LABEL_41;
      }
    }
    v23 = -1073741811;
  }
LABEL_39:
  if ( v5 )
LABEL_40:
    MiUnlockAndDereferenceVadShared(v5);
LABEL_41:
  MiReleaseNonPagedResources((__int64)v29, MiPageSizes[v28]);
  return v23;
}
