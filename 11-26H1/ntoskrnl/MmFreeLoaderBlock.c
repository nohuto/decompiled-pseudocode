/*
 * XREFs of MmFreeLoaderBlock @ 0x140CF858C
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MmFreeLoaderBlock()
{
  _RTL_RB_TREE *v0; // rsi
  unsigned int v1; // r14d
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *i; // rax
  __int64 j; // rdi
  __int64 *v8; // rax
  int v9; // eax
  __int64 *v10; // rax
  unsigned __int64 PoolMm; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-18h]
  _QWORD *v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-8h]

  v24 = (__int64 *)&v23;
  v0 = (_RTL_RB_TREE *)(KeLoaderBlock_0 + 352);
  v23 = &v23;
  v1 = 0;
  v22 = (__int64 *)&v21;
  v21 = &v21;
  v2 = *(_QWORD *)(KeLoaderBlock_0 + 360);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      goto LABEL_27;
    v3 = v2 ^ ((unsigned __int64)v0 | 1);
  }
  else
  {
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 360);
  }
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = v3;
      if ( v4 )
      {
        for ( i = *(_QWORD **)v4; i; i = (_QWORD *)*i )
          v4 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(v3 + 16); ; j = *(_QWORD *)(v4 + 16) )
        {
          v4 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v4 || *(_QWORD *)v4 == v5 )
            break;
          v5 = v4;
        }
      }
      if ( *(_QWORD *)(v3 + 40) )
      {
        if ( *(_DWORD *)(v3 + 24) == 19 )
        {
          RtlRbRemoveNode(v0, (PRTL_BALANCED_NODE)v3);
          v8 = v24;
          if ( (_QWORD **)*v24 != &v23 )
            goto LABEL_30;
          *(_QWORD *)(v3 + 8) = v24;
          *(_QWORD *)v3 = &v23;
          *v8 = v3;
          v24 = (__int64 *)v3;
        }
        v9 = *(_DWORD *)(v3 + 24);
        if ( v9 == 7 || v9 == 21 || v9 == 14 )
        {
          RtlRbRemoveNode(v0, (PRTL_BALANCED_NODE)v3);
          v10 = v22;
          if ( (_QWORD **)*v22 != &v21 )
LABEL_30:
            __fastfail(3u);
          *(_QWORD *)(v3 + 8) = v22;
          *(_QWORD *)v3 = &v21;
          ++v1;
          *v10 = v3;
          v22 = (__int64 *)v3;
        }
      }
      v3 = v4;
    }
    while ( v4 );
    if ( v23 != &v23 )
      MiPageBootRegistry(&v23);
  }
LABEL_27:
  if ( v21 != &v21 )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               16LL * v1,
               1649241421,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v12 = (_QWORD *)PoolMm;
    if ( PoolMm )
    {
      v13 = v21;
      v14 = (_QWORD *)PoolMm;
      while ( v13 != &v21 )
      {
        *v14 = v13[4];
        v14[1] = v13[5];
        v14 += 2;
        v13 = (_QWORD *)*v13;
      }
      v15 = v14 - 2;
      if ( (unsigned __int64)v15 >= PoolMm )
      {
        do
        {
          v16 = (_QWORD *)(48LL * *v15 - 0x21FFFFFFFFF8LL);
          v17 = v15[1];
          v18 = *v16 | 0x8000000000000000uLL;
          while ( --v17 )
          {
            v16 += 6;
            v18 += 8LL;
            if ( (*v16 | 0x8000000000000000uLL) != v18 )
            {
              v19 = *(_QWORD *)(48LL * *v15 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
              v20 = (__int64)(v18 - v19) >> 3;
              MiDeleteBootRange(v19, v20);
              v15[1] -= v20;
              *v15 += v20;
              v15 += 2;
              if ( v20 )
                goto LABEL_40;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *v15 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, v15[1]);
LABEL_40:
          v15 -= 2;
        }
        while ( v15 >= v12 );
      }
      ExFreePoolWithTag(v12, 0);
    }
  }
}
