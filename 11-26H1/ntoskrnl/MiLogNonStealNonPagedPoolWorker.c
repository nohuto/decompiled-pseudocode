/*
 * XREFs of MiLogNonStealNonPagedPoolWorker @ 0x140450A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     MiLogNonStealNonPagedPoolEntries @ 0x140450D60 (MiLogNonStealNonPagedPoolEntries.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MiLogNonStealNonPagedPoolWorker()
{
  unsigned __int32 v0; // ebx
  unsigned int v1; // edi
  int v2; // esi
  unsigned int v3; // edx
  signed __int32 v4; // eax
  signed __int32 v5; // ecx
  unsigned __int64 Min; // rbx
  signed __int32 v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax
  _RTL_BALANCED_NODE *v10; // rdi
  _QWORD **v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *i; // rcx
  int Tree; // [rsp+38h] [rbp-D0h] BYREF
  _RTL_RB_TREE Tree_8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  __int64 *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int64 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  int *p_Tree; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]

  v0 = dword_140E2C8D0;
  Tree_8 = 0LL;
  v1 = 0;
  while ( (v0 & 0x7FF) != 0 || (v0 & 0x3FF800) != 0 )
  {
    if ( (v0 & 0x400000) != 0 )
    {
      if ( (v0 & 0x7FF) == 0 )
        goto LABEL_16;
      v2 = -2048;
LABEL_7:
      MiLogNonStealNonPagedPoolEntries(&Tree_8);
      v3 = v0 & v2 ^ (v0 & v2 ^ ((((v0 & v2) >> 22) - 1) << 22)) & 0x400000;
      v4 = _InterlockedCompareExchange(&dword_140E2C8D0, v3, v0);
      if ( v0 != v4 )
      {
        do
        {
          v5 = v4;
          v3 ^= (v4 ^ v3) & ((v4 & 0x400000) != 0 ? 4192256 : 2047);
          v4 = _InterlockedCompareExchange(&dword_140E2C8D0, v3, v4);
        }
        while ( v4 != v5 );
      }
      ++v1;
      v0 = v3;
      if ( v1 >= 4 )
        break;
    }
    else
    {
      if ( (v0 & 0x3FF800) != 0 )
      {
        v2 = -4192257;
        goto LABEL_7;
      }
LABEL_16:
      v7 = v0 ^ (v0 ^ (((v0 >> 22) - 1) << 22)) & 0x400000;
      v9 = _InterlockedCompareExchange(&dword_140E2C8D0, v7, v0);
      v8 = v0 == v9;
      v0 = v9;
      if ( v8 )
        v0 = v7;
    }
  }
  if ( (*(_BYTE *)&Tree_8.0 & 1) == 0 )
  {
    Min = (unsigned __int64)Tree_8.Min;
    goto LABEL_13;
  }
  if ( Tree_8.Min != (_RTL_BALANCED_NODE *)1 )
  {
    Min = (unsigned __int64)Tree_8.Min ^ ((unsigned __int64)&Tree_8.Root + 1);
LABEL_13:
    while ( Min )
    {
      v10 = (_RTL_BALANCED_NODE *)Min;
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
        && (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000008000LL) != 0
        && (*((_QWORD *)stru_140E366D8.FirstArgument + 3) & 0x400000008000LL) == *((_QWORD *)stru_140E366D8.FirstArgument
                                                                                 + 3) )
      {
        v16 = *(unsigned int *)(Min + 28);
        v25 = 8LL;
        v24 = &v16;
        v17 = *(unsigned int *)(Min + 32);
        v26 = &v17;
        v18 = *(unsigned int *)(Min + 36);
        v28 = &v18;
        v19 = *(unsigned int *)(Min + 40);
        v30 = &v19;
        v20 = *(unsigned int *)(Min + 44);
        v32 = &v20;
        v21 = *(unsigned int *)(Min + 48);
        v34 = &v21;
        Tree = *(_DWORD *)(Min + 24);
        p_Tree = &Tree;
        v38 = &v22;
        v27 = 8LL;
        v29 = 8LL;
        v31 = 8LL;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 4LL;
        v22 = 0x1000000LL;
        v39 = 8LL;
        tlgWriteAgg(
          (int)stru_140E366D8.FirstArgument,
          (int)&byte_140059265,
          (int)stru_140E366D8.FirstArgument,
          10,
          &v23);
      }
      v11 = *(_QWORD ***)(Min + 8);
      v12 = Min;
      if ( v11 )
      {
        Min = *(_QWORD *)(Min + 8);
        for ( i = *v11; i; i = (_QWORD *)*i )
          Min = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          Min = *(_QWORD *)(Min + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !Min || *(_QWORD *)Min == v12 )
            break;
          v12 = Min;
        }
      }
      RtlRbRemoveNode(&Tree_8, v10);
      ExFreePoolWithTag(v10, 0);
    }
  }
  stru_140E2C8F0.Parameter = 0LL;
}
