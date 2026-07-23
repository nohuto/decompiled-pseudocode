/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x1409683B0
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140950150 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x140968E04 (PiDqQueryEnumObject.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14096971C (FilterEvalImpliedAnd.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(__int64 a1, __int64 a2, bool *a3)
{
  PVOID v5; // rdi
  __int64 v7; // rdx
  PVOID *Pool2; // r14
  __int64 v9; // rax
  int v10; // r8d
  _DWORD *v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  PVOID *v14; // rdi
  __int64 v15; // rsi
  void *v16; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v21 = 0;
  v5 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *a3 = 0;
  v19 = 0LL;
  P = 0LL;
  v20 = 0LL;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v19 = Pool2;
    *(_QWORD *)&v20 = a2;
    *((_QWORD *)&v20 + 1) = a1;
    PiPnpRtlBeginOperation(&P, v7);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_DWORD *)(v9 + 80);
    v11 = *(_DWORD **)(v9 + 88);
    if ( v10 )
    {
      if ( (*v11 & 0xFF00000) != 0 )
        v12 = FilterEvalStrict(
                (unsigned int)PiDqPropertyCallback,
                (unsigned int)Handle,
                v10,
                (_DWORD)v11,
                (__int64)&v21);
      else
        v12 = FilterEvalImpliedAnd(
                (unsigned int)PiDqPropertyCallback,
                (unsigned int)Handle,
                v10,
                (_DWORD)v11,
                (__int64)&v21);
      v13 = v12;
      if ( v12 >= 0 )
        *a3 = v21 != 0;
    }
    else
    {
      v13 = -1073741811;
    }
    if ( DWORD2(v19) )
    {
      v14 = Pool2 + 5;
      v15 = DWORD2(v19);
      do
      {
        v16 = *(v14 - 2);
        if ( v16 )
          ExFreePoolWithTag(v16, 0x58706E50u);
        if ( *v14 )
          ExFreePoolWithTag(*v14, 0x58706E50u);
        v14 += 6;
        --v15;
      }
      while ( v15 );
    }
    ExFreePoolWithTag(Pool2, 0x58706E50u);
    v5 = P;
  }
  else
  {
    v13 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v5 )
    PiPnpRtlEndOperation(v5);
  return v13;
}
