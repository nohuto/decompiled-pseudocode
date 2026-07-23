/*
 * XREFs of CmpLockIXLockIntent @ 0x1408C2E70
 * Callers:
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v7; // rsi
  _QWORD *Pool2; // rax
  __int64 i; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax

  v3 = *a1;
  if ( !*a1 )
  {
    *a1 = 1;
    *((_QWORD *)a1 + 1) = a2;
    goto LABEL_9;
  }
  if ( v3 >= 0 )
  {
    if ( v3 == 1 )
    {
      v7 = *((_QWORD *)a1 + 1);
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v7 + 56), *(_QWORD *)(a2 + 56), a3) )
        return 1;
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return 0;
      *((_QWORD *)a1 + 1) = Pool2;
      *Pool2 = v7;
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned __int8)CmEqualTrans(
                                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * i) + 56LL),
                                *(_QWORD *)(a2 + 56),
                                a3) )
          return 1;
      }
      v10 = (_QWORD *)ExAllocatePool2(0x100uLL);
      v11 = v10;
      if ( !v10 )
        return 0;
      memmove(v10, *((const void **)a1 + 1), 8LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
      v12 = *a1;
      *((_QWORD *)a1 + 1) = v11;
      v11[v12] = a2;
    }
    ++*a1;
LABEL_9:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), *(_QWORD *)(a2 + 56), a3) != 0;
}
