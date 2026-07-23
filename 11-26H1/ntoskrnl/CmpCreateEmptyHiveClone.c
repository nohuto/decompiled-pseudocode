/*
 * XREFs of CmpCreateEmptyHiveClone @ 0x140862384
 * Callers:
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 * Callees:
 *     CmpAllocateForNonPagedHive @ 0x1404FEF00 (CmpAllocateForNonPagedHive.c)
 *     HvHiveStartEmptyClone @ 0x1408630FC (HvHiveStartEmptyClone.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     CmpAllocate @ 0x140A8F2D0 (CmpAllocate.c)
 *     CmpHiveInitialize @ 0x140ABA0E0 (CmpHiveInitialize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateEmptyHiveClone(__int64 *a1, __int64 a2)
{
  void *Pool2; // rbp
  int started; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 160) & 0x2000000) != 0 )
      v6 = CmpAllocateForNonPagedHive(0x12E0u, 0);
    else
      v6 = CmpAllocate(4832LL, 0LL, 808537411LL);
    v7 = v6;
    if ( v6 )
    {
      CmpHiveInitialize(v6, Pool2);
      v8 = 0LL;
      *(_DWORD *)(v7 + 4120) = *(_DWORD *)(a2 + 4120) & 0xFFFEFFFF;
      v9 = 2LL;
      while ( (unsigned int)v8 < 6 )
      {
        v10 = *(_QWORD *)(a2 + 8 * v8 + 1544);
        if ( v10 )
        {
          started = ObDuplicateObject(
                      (_DWORD)PsInitialSystemProcess,
                      v10,
                      0,
                      (int)v7 + 8 * ((int)v8 + 193),
                      0,
                      512,
                      2,
                      0);
          if ( started < 0 )
            goto LABEL_21;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      v11 = (_QWORD *)(v7 + 1816);
      *(_DWORD *)(v7 + 1800) = *(_DWORD *)(a2 + 1800);
      *(_QWORD *)(v7 + 1808) = *(_QWORD *)(a2 + 1808);
      do
      {
        *v11 = *(_QWORD *)((char *)v11 + a2 - v7);
        ++v11;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)(v7 + 4144) = *(_QWORD *)(a2 + 4144);
      *(_QWORD *)(v7 + 4152) = *(_QWORD *)(a2 + 4152);
      *(_QWORD *)(v7 + 4192) = *(_QWORD *)(a2 + 4192);
      v12 = *(_QWORD *)(a2 + 4800);
      if ( v12 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v7 + 4800) = *(_QWORD *)(a2 + 4800);
      }
      started = HvHiveStartEmptyClone(v7, a2);
      if ( started >= 0 )
      {
        *a1 = v7;
        return 0;
      }
LABEL_21:
      CmpDestroyHive((PVOID)v7);
    }
    else
    {
      started = -1073741670;
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)started;
}
