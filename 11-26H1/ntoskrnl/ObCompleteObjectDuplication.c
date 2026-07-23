/*
 * XREFs of ObCompleteObjectDuplication @ 0x1409BB650
 * Callers:
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1409BB0A8 (AlpcpQueryHandleInformationMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpFilterOperation @ 0x14044D740 (ObpFilterOperation.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1408F4924 (ObpPreInterceptHandleDuplicate.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     ObpCallPostOperationCallbacks @ 0x1409BB9AC (ObpCallPostOperationCallbacks.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     EtwTraceDuplicateHandle @ 0x140AD3AE0 (EtwTraceDuplicateHandle.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 *a4,
        int *a5)
{
  __int64 v9; // rax
  unsigned int *v10; // r15
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int8 v12; // r12
  int v13; // esi
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 Handle; // r15
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  int *v22; // rcx
  int v23; // eax
  __int64 v24; // r9
  struct _KLOCK_ENTRIES *v25; // r9
  struct _KLOCK_ENTRIES *v27; // r9
  int v28; // [rsp+48h] [rbp-21h] BYREF
  __int64 v29; // [rsp+50h] [rbp-19h]
  _QWORD v30[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v32; // [rsp+70h] [rbp+7h]
  __int64 v33; // [rsp+78h] [rbp+Fh]
  __int64 v34; // [rsp+80h] [rbp+17h]
  int v35; // [rsp+88h] [rbp+1Fh]
  int v36; // [rsp+8Ch] [rbp+23h]
  int *v37; // [rsp+90h] [rbp+27h]
  int v38; // [rsp+E0h] [rbp+77h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable(a2);
  v10 = (unsigned int *)v9;
  if ( v9 )
  {
    v11 = (struct _KLOCK_ENTRIES *)a1[2];
    v38 = *((_DWORD *)a1 + 6);
    v12 = v9 == ObpKernelHandleTable;
    v13 = ObpIncrementHandleCountEx(2u, (__int64)&v38, (struct _KPROCESS *)a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v30[1] = v30;
      v30[0] = v30;
      v29 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v38, (struct _KLOCK_ENTRIES *)*((unsigned int *)a1 + 9), (_DWORD *)a1 + 7);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
          ObpDecrementHandleCount2((PRKPROCESS)a2, v15, 0LL, v27);
          v13 = -1073741670;
        }
        v19 = Handle | 0xFFFFFFFF80000000uLL;
        if ( v12 != 1 )
          v19 = Handle;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
        if ( (_QWORD *)v30[0] != v30 )
        {
          v20 = a1[2];
          v37 = &v28;
          v32 = v20;
          v31[1] = v12;
          v21 = *(unsigned __int8 *)(v20 - 24);
          v34 = 0LL;
          v36 = 0;
          v31[0] = 2;
          v35 = v13;
          v33 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v21 ^ (unsigned __int8)((unsigned __int16)(v20 - 48) >> 8)];
          v28 = v38;
          ObpCallPostOperationCallbacks(v31, v30);
        }
        if ( v13 >= 0 )
        {
          v22 = a5;
          v23 = v38;
          *a4 = v19;
          *v22 = v23;
        }
        if ( (xmmword_140FC0C10 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], v19, a1[2], *(_DWORD *)(*a1 + 464), *(_DWORD *)(a2 + 464), v29);
        return (unsigned int)v13;
      }
      v24 = *a1;
      v28 = v38;
      v13 = ObpPreInterceptHandleDuplicate(v17, v12, &v28, v24, a2, (__int64)v30);
      if ( v13 >= 0 )
      {
        if ( !v12 )
          v38 = v28;
        goto LABEL_4;
      }
      ObpDecrementHandleCount2((PRKPROCESS)a2, v15, 0LL, v25);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
