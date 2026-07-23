/*
 * XREFs of IovpLocalCompletionRoutine @ 0x140C4B580
 * Callers:
 *     <none>
 * Callees:
 *     VfEnabledOnKernel @ 0x1404783A0 (VfEnabledOnKernel.c)
 *     IovLogIrpMdlEvent @ 0x140533384 (IovLogIrpMdlEvent.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     IovAiDecrementRemoveIrp @ 0x140645BD0 (IovAiDecrementRemoveIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IovpCompleteRequest2 @ 0x140C4B8AC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140C4B918 (IovpCompleteRequest5.c)
 *     VfPendingMoreProcessingRequired @ 0x140C4BF10 (VfPendingMoreProcessingRequired.c)
 *     IovpCompleteRequest3 @ 0x140C4C080 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140C4C10C (IovpCompleteRequest4.c)
 *     ViIoCallbackSnapState @ 0x140C4C190 (ViIoCallbackSnapState.c)
 *     VfIoCompletionCheckState @ 0x140C4CBE0 (VfIoCompletionCheckState.c)
 */

__int64 __fastcall IovpLocalCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // r12d
  __int64 v6; // r13
  char v8; // r15
  char v9; // r14
  __int64 v10; // rdx
  void *v11; // r15
  __int64 (__fastcall *v12)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // r14
  unsigned int v13; // ebp
  char v15; // al
  char v16; // al
  char v18; // [rsp+78h] [rbp+10h]
  char v19; // [rsp+80h] [rbp+18h]

  v4 = *a3;
  v5 = a1;
  v6 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(v4 + 1) = *((_BYTE *)a3 + 33);
  *(_BYTE *)(v4 + 2) = *((_BYTE *)a3 + 34);
  *(_BYTE *)(v4 + 3) = *((_BYTE *)a3 + 35) | *(_BYTE *)(v4 + 3) & 2;
  *(_QWORD *)(v4 + 8) = a3[5];
  *(_QWORD *)(v4 + 16) = a3[6];
  *(_QWORD *)(v4 + 24) = a3[7];
  *(_QWORD *)(v4 + 32) = a3[8];
  *(_QWORD *)(v4 + 48) = a3[10];
  *(_QWORD *)(v4 + 56) = a3[3];
  *(_QWORD *)(v4 + 64) = a3[1];
  v8 = *(_BYTE *)(a2 + 67);
  v9 = *(_BYTE *)(a2 + 66) + 1;
  v18 = v9;
  v19 = v8;
  IovpCompleteRequest2(a2, a3[2]);
  if ( *(_BYTE *)v4 != 22 )
  {
    v16 = *(_BYTE *)(v4 + 3) & 2;
    *(_WORD *)(v4 + 1) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 3) = v16 | 0x10;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  v10 = *(_QWORD *)(v4 + 56);
  if ( v10 )
  {
    IovpCompleteRequest3(a2, v10, a3[2]);
    if ( (MmVerifierData & 0x10) != 0 && ViIoCallbacksInitialized )
      v11 = (void *)ViIoCallbackSnapState();
    else
      v11 = 0LL;
    v12 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))(v4 + 56);
    if ( (unsigned int)VfPendingMoreProcessingRequired(v5, a2, v4, (_DWORD)v12, *(_QWORD *)(v4 + 64)) )
    {
      v13 = -1073741802;
      v12 = VfPendingMoreProcessingRequired;
    }
    else
    {
      if ( v6 && (VfRuleClasses & 0x20000000000000LL) != 0 && VfEnabledOnKernel() )
        IovAiInsertObject(a2);
      v13 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v6 && (VfRuleClasses & 0x20000000000000LL) != 0 && VfEnabledOnKernel() && IovAiDecrementRemoveIrp(a2, v6) )
        IovLogIrpMdlEvent(v6, a2, (__int64)v12);
    }
    if ( v11 )
      VfIoCompletionCheckState(v11, (__int64)v12);
    IovpCompleteRequest4(a2, v13, v12, a3[2]);
    v9 = v18;
    v8 = v19;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v13 = (unsigned int)VfPendingMoreProcessingRequired(v5, a2, v4, 0, *(_QWORD *)(v4 + 64)) != 0 ? 0xC0000016 : 0;
  }
  IovpCompleteRequest5(a3[2]);
  if ( v13 != -1073741802 && v8 != v9 )
  {
    *a3 = v4 + 72;
    a3[1] = *(_QWORD *)(v4 + 136);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v4 + 72);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v4 + 88);
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v4 + 104);
    *((_OWORD *)a3 + 5) = *(_OWORD *)(v4 + 120);
    a3[12] = *(_QWORD *)(v4 + 136);
    v15 = *(_BYTE *)(v4 + 75);
    if ( *(int *)(a2 + 48) >= 0 )
    {
      if ( (v15 & 0x40) != 0 )
        goto LABEL_37;
    }
    else if ( v15 < 0 )
    {
      goto LABEL_37;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v15 & 0x20) == 0 )
    {
      a3[3] = 0LL;
      *(_BYTE *)(v4 + 75) |= 0xE0u;
LABEL_27:
      *(_QWORD *)(v4 + 136) = a3;
      *(_QWORD *)(v4 + 128) = IovpLocalCompletionRoutine;
      return v13;
    }
LABEL_37:
    a3[3] = *(_QWORD *)(v4 + 128);
    goto LABEL_27;
  }
  return v13;
}
