/*
 * XREFs of MiLogNonStealNonPagedPoolWorker @ 0x1404591C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     MiLogNonStealNonPagedPoolEntries @ 0x1404594E0 (MiLogNonStealNonPagedPoolEntries.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void MiLogNonStealNonPagedPoolWorker()
{
  unsigned __int32 v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // r8
  unsigned int v5; // edx
  signed __int32 v6; // eax
  signed __int32 v7; // ecx
  unsigned __int64 v8; // rbx
  signed __int32 v9; // ecx
  bool v10; // zf
  signed __int32 v11; // eax
  void *v12; // rdi
  _QWORD **v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *i; // rcx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  __int64 *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  __int64 *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  int *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  __int64 *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]

  v0 = dword_140E2C750;
  v17 = 0LL;
  v1 = 0;
  while ( (v0 & 0x7FF) != 0 || (v0 & 0x3FF800) != 0 )
  {
    if ( (v0 & 0x400000) != 0 )
    {
      if ( (v0 & 0x7FF) == 0 )
        goto LABEL_16;
      v2 = qword_140E2C748;
      v3 = -2048;
      v4 = qword_140E2C748 + 8LL * (v0 & 0x7FF);
LABEL_7:
      MiLogNonStealNonPagedPoolEntries(&v17, v2, v4);
      v5 = v0 & v3 ^ (v0 & v3 ^ ((((v0 & v3) >> 22) - 1) << 22)) & 0x400000;
      v6 = _InterlockedCompareExchange(&dword_140E2C750, v5, v0);
      if ( v0 != v6 )
      {
        do
        {
          v7 = v6;
          v5 ^= (v6 ^ v5) & ((v6 & 0x400000) != 0 ? 4192256 : 2047);
          v6 = _InterlockedCompareExchange(&dword_140E2C750, v5, v6);
        }
        while ( v6 != v7 );
      }
      ++v1;
      v0 = v5;
      if ( v1 >= 4 )
        break;
    }
    else
    {
      if ( (v0 & 0x3FF800) != 0 )
      {
        v3 = -4192257;
        v2 = qword_140E2C748 + 0x2000;
        v4 = qword_140E2C748 + 0x2000 + 8 * (((unsigned __int64)v0 >> 11) & 0x7FF);
        goto LABEL_7;
      }
LABEL_16:
      v9 = v0 ^ (v0 ^ (((v0 >> 22) - 1) << 22)) & 0x400000;
      v11 = _InterlockedCompareExchange(&dword_140E2C750, v9, v0);
      v10 = v0 == v11;
      v0 = v11;
      if ( v10 )
        v0 = v9;
    }
  }
  if ( (BYTE8(v17) & 1) == 0 )
  {
    v8 = *((_QWORD *)&v17 + 1);
    goto LABEL_13;
  }
  if ( *((_QWORD *)&v17 + 1) != 1LL )
  {
    v8 = *((_QWORD *)&v17 + 1) ^ ((unsigned __int64)&v17 + 1);
LABEL_13:
    while ( v8 )
    {
      v12 = (void *)v8;
      if ( *(_DWORD *)stru_140E36558.FirstArgument > 5u
        && (*((_QWORD *)stru_140E36558.FirstArgument + 2) & 0x400000008000LL) != 0
        && (*((_QWORD *)stru_140E36558.FirstArgument + 3) & 0x400000008000LL) == *((_QWORD *)stru_140E36558.FirstArgument
                                                                                 + 3) )
      {
        v18 = *(unsigned int *)(v8 + 28);
        v27 = 8LL;
        v26 = &v18;
        v19 = *(unsigned int *)(v8 + 32);
        v28 = &v19;
        v20 = *(unsigned int *)(v8 + 36);
        v30 = &v20;
        v21 = *(unsigned int *)(v8 + 40);
        v32 = &v21;
        v22 = *(unsigned int *)(v8 + 44);
        v34 = &v22;
        v23 = *(unsigned int *)(v8 + 48);
        v36 = &v23;
        v16 = *(_DWORD *)(v8 + 24);
        v38 = &v16;
        v40 = &v24;
        v29 = 8LL;
        v31 = 8LL;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        v39 = 4LL;
        v24 = 0x1000000LL;
        v41 = 8LL;
        tlgWriteAgg(
          (int)stru_140E36558.FirstArgument,
          (int)&word_140058272,
          (int)stru_140E36558.FirstArgument,
          10,
          &v25);
      }
      v13 = *(_QWORD ***)(v8 + 8);
      v14 = v8;
      if ( v13 )
      {
        v8 = *(_QWORD *)(v8 + 8);
        for ( i = *v13; i; i = (_QWORD *)*i )
          v8 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v14 )
            break;
          v14 = v8;
        }
      }
      RtlRbRemoveNode((__int64)&v17, (__int64)v12);
      ExFreePoolWithTag(v12, 0);
    }
  }
  stru_140E2C770.Parameter = 0LL;
}
