/*
 * XREFs of WmipPrepareForWnodeAD @ 0x1409B6B68
 * Callers:
 *     WmipQueryAllData @ 0x1409B5A18 (WmipQueryAllData.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B6D18 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipPrepareForWnodeAD(__int64 a1, _OWORD *a2, _DWORD *a3, volatile signed __int64 ***a4, _BYTE *a5)
{
  __int64 v5; // rdi
  volatile signed __int64 ***v6; // r14
  _DWORD *v7; // r15
  int v8; // ebx
  bool v9; // zf
  unsigned int v10; // r12d
  __int64 v11; // rbp
  volatile signed __int64 **v12; // rsi
  __int64 v13; // rax
  ULONG_PTR v14; // rdi
  volatile signed __int64 **v15; // r14
  __int64 v17; // r14
  volatile signed __int64 **Pool2; // rax
  volatile signed __int64 **v19; // r13
  volatile signed __int64 **v20; // r15
  volatile signed __int64 **v21; // [rsp+30h] [rbp-58h]
  volatile signed __int64 **v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 56);
  v6 = a4;
  v7 = a3;
  if ( !v5 || !*(_DWORD *)(v5 + 36) )
    return (unsigned int)-1073741055;
  v8 = 0;
  v9 = (*(_DWORD *)(v5 + 16) & 1) == 0;
  *a2 = *(_OWORD *)(v5 + 72);
  if ( !v9 )
  {
    *a5 = 1;
    return (unsigned int)v8;
  }
  v10 = *a3;
  *a5 = 0;
  v11 = 0LL;
  v22 = *a4;
  v12 = *a4;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v13 = v5 + 56;
  v14 = *(_QWORD *)(v5 + 56);
  v23 = v13;
  if ( v14 == v13 )
    goto LABEL_11;
  while ( v8 >= 0 )
  {
    if ( (*(_DWORD *)(v14 + 16) & 0x89000) == 0 )
    {
      WmipReferenceEntry(v14);
      v8 = 0;
      v21 = v12;
      v15 = v12;
      if ( (_DWORD)v11 != v10 )
      {
LABEL_8:
        v15[v11] = (volatile signed __int64 *)v14;
        v11 = (unsigned int)(v11 + 1);
        goto LABEL_9;
      }
      v17 = v10;
      if ( 2 * (unsigned __int64)v10 > 0xFFFFFFFF )
      {
        v20 = v12;
      }
      else
      {
        Pool2 = (volatile signed __int64 **)ExAllocatePool2(0x100uLL);
        v19 = Pool2;
        v20 = v12;
        if ( Pool2 )
        {
          memmove(Pool2, v12, 8LL * v10);
          v10 *= 2;
          v15 = v19;
          v12 = v19;
          goto LABEL_18;
        }
      }
      if ( v10 )
      {
        do
        {
          WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v12++);
          --v17;
        }
        while ( v17 );
      }
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v14);
      v15 = v21;
      v12 = 0LL;
      v8 = -1073741670;
LABEL_18:
      if ( v20 != v22 )
        ExFreePoolWithTag(v20, 0);
      if ( v8 < 0 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_9:
    v14 = *(_QWORD *)v14;
    if ( v14 == v23 )
      break;
  }
  v6 = a4;
  v7 = a3;
LABEL_11:
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( !(_DWORD)v11 )
    return (unsigned int)-1073741055;
  *v7 = v11;
  *v6 = v12;
  return (unsigned int)v8;
}
