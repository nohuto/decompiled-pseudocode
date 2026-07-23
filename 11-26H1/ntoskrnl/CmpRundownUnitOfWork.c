/*
 * XREFs of CmpRundownUnitOfWork @ 0x1408D6FC8
 * Callers:
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140ADE354 (UNLOCK_TRANSACTION_LIST.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall CmpRundownUnitOfWork(_QWORD *BugCheckParameter4)
{
  ULONG_PTR v1; // rsi
  unsigned int v3; // edx
  ULONG_PTR v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rbx

  v1 = BugCheckParameter4[2];
  if ( v1 )
  {
    BugCheckParameter4[2] = 0LL;
    v3 = *(_DWORD *)v1 & 0x7FFFFFFF;
    if ( v3 == 1 )
    {
      if ( *(_QWORD **)(v1 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v1, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      v12 = 0LL;
      if ( v3 )
      {
        while ( *(_QWORD **)(*(_QWORD *)(v1 + 8) + 8 * v12) != BugCheckParameter4 )
        {
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v3 )
            goto LABEL_27;
        }
      }
      else
      {
LABEL_27:
        if ( (_DWORD)v12 == v3 )
          KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v1, (ULONG_PTR)BugCheckParameter4);
      }
      v14 = v3 - 1;
      if ( (unsigned int)v12 < v3 - 1 )
      {
        v15 = 8LL * (unsigned int)(v12 + 1);
        v16 = 8 * v12;
        v17 = v14 - (unsigned int)v12;
        do
        {
          v18 = *(_QWORD *)(v1 + 8);
          v19 = *(_QWORD *)(v15 + v18);
          v15 += 8LL;
          *(_QWORD *)(v16 + v18) = v19;
          v16 += 8LL;
          --v17;
        }
        while ( v17 );
      }
      v20 = *(_DWORD *)v1 - 1;
      *(_DWORD *)v1 = v20;
      if ( v20 == 1 )
      {
        v21 = *(__int64 **)(v1 + 8);
        v22 = *v21;
        ExFreePoolWithTag(v21, 0x78494D43u);
        *(_QWORD *)(v1 + 8) = v22;
      }
    }
  }
  v4 = BugCheckParameter4[3];
  if ( v4 )
  {
    BugCheckParameter4[3] = 0LL;
    v5 = *(_DWORD *)v4 & 0x7FFFFFFF;
    if ( v5 == 1 )
    {
      if ( *(_QWORD **)(v4 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v4, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v4 = 0;
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( v5 )
      {
        while ( *(_QWORD **)(*(_QWORD *)(v4 + 8) + 8 * v13) != BugCheckParameter4 )
        {
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v5 )
            goto LABEL_36;
        }
      }
      else
      {
LABEL_36:
        if ( (_DWORD)v13 == v5 )
          KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v4, (ULONG_PTR)BugCheckParameter4);
      }
      v23 = v5 - 1;
      if ( (unsigned int)v13 < v23 )
      {
        v24 = 8LL * (unsigned int)(v13 + 1);
        v25 = 8 * v13;
        v26 = v23 - (unsigned int)v13;
        do
        {
          v27 = *(_QWORD *)(v4 + 8);
          v28 = *(_QWORD *)(v24 + v27);
          v24 += 8LL;
          *(_QWORD *)(v25 + v27) = v28;
          v25 += 8LL;
          --v26;
        }
        while ( v26 );
      }
      v29 = *(_DWORD *)v4 - 1;
      *(_DWORD *)v4 = v29;
      if ( v29 == 1 )
      {
        v30 = *(__int64 **)(v4 + 8);
        v31 = *v30;
        ExFreePoolWithTag(v30, 0x78494D43u);
        *(_QWORD *)(v4 + 8) = v31;
      }
    }
  }
  if ( (_QWORD *)*BugCheckParameter4 != BugCheckParameter4 )
  {
    LOCK_TRANSACTION_LIST();
    v6 = *BugCheckParameter4;
    if ( *(_QWORD **)(*BugCheckParameter4 + 8LL) != BugCheckParameter4 )
      goto LABEL_18;
    v7 = (_QWORD *)BugCheckParameter4[1];
    if ( (_QWORD *)*v7 != BugCheckParameter4 )
      goto LABEL_18;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    UNLOCK_TRANSACTION_LIST();
    BugCheckParameter4[7] = 0LL;
  }
  result = BugCheckParameter4 + 4;
  v9 = (_QWORD *)BugCheckParameter4[4];
  if ( v9 == BugCheckParameter4 + 4 )
    return result;
  v10 = BugCheckParameter4[6];
  if ( (_QWORD *)v9[1] != result || (v11 = (_QWORD *)BugCheckParameter4[5], (_QWORD *)*v11 != result) )
LABEL_18:
    __fastfail(3u);
  *v11 = v9;
  v9[1] = v11;
  result = (_QWORD *)CmpDereferenceKeyControlBlockUnsafe(v10);
  BugCheckParameter4[6] = 0LL;
  return result;
}
