/*
 * XREFs of WmipPrepareForWnodeAD @ 0x140A0EB90
 * Callers:
 *     WmipQueryAllData @ 0x140A0DCD8 (WmipQueryAllData.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipPrepareForWnodeAD(__int64 a1, _OWORD *a2, _DWORD *a3, volatile signed __int64 ***a4, _BYTE *a5)
{
  __int64 v5; // rdi
  volatile signed __int64 ***v6; // r14
  _DWORD *v7; // r15
  int v8; // ebx
  bool v9; // zf
  unsigned int v10; // r13d
  volatile signed __int64 **v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  ULONG_PTR v14; // rdi
  __int64 v16; // rbx
  volatile signed __int64 **Pool2; // rax
  volatile signed __int64 **v18; // r15
  volatile signed __int64 **v19; // r12
  volatile signed __int64 **v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  volatile signed __int64 **v22; // [rsp+80h] [rbp+8h]

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
  v20 = *a4;
  v11 = *a4;
  v12 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v13 = v5 + 56;
  v14 = *(_QWORD *)(v5 + 56);
  v21 = v13;
  if ( v14 == v13 )
    goto LABEL_11;
  while ( v8 >= 0 )
  {
    if ( (*(_DWORD *)(v14 + 16) & 0x89000) == 0 )
    {
      WmipReferenceEntry(v14);
      v8 = 0;
      v22 = v11;
      if ( (_DWORD)v12 != v10 )
      {
LABEL_8:
        v22[v12] = (volatile signed __int64 *)v14;
        v12 = (unsigned int)(v12 + 1);
        goto LABEL_9;
      }
      v16 = v10;
      if ( 2 * (unsigned __int64)v10 > 0xFFFFFFFF )
      {
        v19 = v11;
      }
      else
      {
        Pool2 = (volatile signed __int64 **)ExAllocatePool2(0x100uLL);
        v18 = Pool2;
        v19 = v11;
        if ( Pool2 )
        {
          memmove(Pool2, v11, 8LL * v10);
          v8 = 0;
          v22 = v18;
          v11 = v18;
          v10 *= 2;
          goto LABEL_18;
        }
      }
      if ( v10 )
      {
        do
        {
          WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v11++);
          --v16;
        }
        while ( v16 );
      }
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v14);
      v11 = 0LL;
      v8 = -1073741670;
LABEL_18:
      if ( v19 != v20 )
        ExFreePoolWithTag(v19, 0);
      if ( v8 < 0 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_9:
    v14 = *(_QWORD *)v14;
    if ( v14 == v21 )
      break;
  }
  v6 = a4;
  v7 = a3;
LABEL_11:
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( !(_DWORD)v12 )
    return (unsigned int)-1073741055;
  *v7 = v12;
  *v6 = v11;
  return (unsigned int)v8;
}
