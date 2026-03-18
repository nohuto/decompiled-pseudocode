/*
 * XREFs of FindNSObj @ 0x14003F6A0
 * Callers:
 *     FindNSObjMainNoLock @ 0x14003F584 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 * Callees:
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x14000A9F0 (GetObjectPathNoLock.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     FindNSObj @ 0x14003F6A0 (FindNSObj.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  int v8; // r13d
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  __int64 *v12; // r14
  _BYTE *ObjectPathNoLock; // rax
  size_t v14; // rsi
  _BYTE *v15; // rbp
  __int64 v16; // rcx
  __int64 *v17; // r15
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r14
  _QWORD *v25; // rdi
  unsigned int NSObj; // eax
  unsigned int Size; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v29 = a1;
  v6 = a6;
  v8 = a4;
  v9 = -1073741772;
  if ( !a2 || (a6 & 1) != 0 && a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3 )
    return v9;
  if ( a1 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_23:
    v24 = (_QWORD *)(a2 + 24);
    v25 = *(_QWORD **)(a2 + 24);
    while ( v24 != v25 )
    {
      NSObj = FindNSObj(a1, (_DWORD)v25, a3, v8, a5, v6);
      v9 = NSObj;
      if ( NSObj != -1073741772 )
      {
        if ( NSObj )
          break;
      }
      v25 = (_QWORD *)*v25;
      v6 = a6;
      LODWORD(a3) = v30;
      a1 = v29;
    }
    return v9;
  }
  v10 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
    return 3221225621LL;
  v12 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, v11);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v14 = -1LL;
  v15 = ObjectPathNoLock;
  v16 = -1LL;
  do
    ++v16;
  while ( ObjectPathNoLock[v16] );
  Size = v16 + *(_DWORD *)(a5 + 24) + 1;
  v17 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, Size);
  if ( v17 && v12 )
  {
    memset(v12, 0, v11);
    memset(v17, 0, Size);
    v18 = *(_DWORD *)(a5 + 24);
    if ( v18 )
      memmove(v17, *(const void **)(a5 + 32), v18);
    v19 = *(_QWORD *)(a5 + 8);
    v20 = *(_DWORD *)(v19 + 24);
    if ( v20 )
      memmove(v12, *(const void **)(v19 + 32), v20);
    do
      ++v14;
    while ( v15[v14] );
    memmove((char *)v17 + *(unsigned int *)(a5 + 24), v15, v14);
    v21 = 49;
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      v21 = 48;
    *((_BYTE *)v12 + *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL)) = v21;
    if ( *(_DWORD *)(a5 + 24) )
      HeapFree(*(_QWORD **)(a5 + 32));
    v22 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v22 + 24) )
      HeapFree(*(_QWORD **)(v22 + 32));
    ++*(_QWORD *)(a5 + 16);
    v9 = 0;
    *(_DWORD *)(a5 + 24) = Size;
    v23 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)(a5 + 32) = v17;
    *(_QWORD *)(v23 + 32) = v12;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = v11;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    a1 = v29;
    LODWORD(a3) = v30;
    v6 = a6;
    goto LABEL_23;
  }
  return 3221225626LL;
}
