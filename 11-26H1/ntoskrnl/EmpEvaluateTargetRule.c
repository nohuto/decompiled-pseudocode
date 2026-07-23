/*
 * XREFs of EmpEvaluateTargetRule @ 0x14046D670
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x1405B7804 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x14046D9BC (EmpEvaluateNodeLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  char *v5; // r13
  __int64 v6; // r15
  char *v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // esi
  char *Pool2; // rdi
  __int64 v11; // r10
  unsigned int v12; // r9d
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebp
  unsigned __int64 v15; // rcx
  char *v16; // r15
  unsigned int v17; // r11d
  int v18; // esi
  unsigned int v19; // ebp
  unsigned int v20; // edx
  char *v21; // r8
  __int64 v22; // rax
  unsigned int i; // eax
  int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-B8h]
  __int64 v30; // [rsp+30h] [rbp-A8h]
  __int64 v31; // [rsp+40h] [rbp-98h]
  __int64 v32; // [rsp+58h] [rbp-80h]
  int v33; // [rsp+60h] [rbp-78h]
  unsigned int v34; // [rsp+64h] [rbp-74h]
  char *v35; // [rsp+68h] [rbp-70h]
  unsigned __int64 v36; // [rsp+70h] [rbp-68h]
  __int64 v37; // [rsp+78h] [rbp-60h]
  unsigned int v38; // [rsp+E0h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 16);
  v37 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = *(unsigned int *)(v37 + 44);
  v7 = 0LL;
  v8 = *(unsigned int *)(v37 + 40);
  v9 = 1;
  v33 = *(_DWORD *)(v37 + 44);
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v35 = Pool2;
  v11 = (__int64)Pool2;
  v12 = Pool2 != 0LL ? 0x1000 : 0;
  v38 = v12;
  if ( !__PAIR64__(v6, v8) )
  {
    LODWORD(v36) = 1;
    v16 = 0LL;
    v34 = 0;
    v17 = 0;
LABEL_11:
    v18 = v33;
    v19 = v33 + v8;
    while ( 1 )
    {
      v20 = 0;
      if ( (_DWORD)v8 )
      {
        v21 = v5;
        do
        {
          v22 = v17 * v19 + v20++;
          v21 += 8;
          *((_QWORD *)v21 - 1) = *((_QWORD *)EmpStringTable + *(unsigned int *)(v4 + 4 * v22));
        }
        while ( v20 < (unsigned int)v8 );
      }
      for ( i = v8; i < v19; *(_DWORD *)&v16[4 * v25] = v24 )
      {
        v24 = *(_DWORD *)(v4 + 4LL * (v17 * v19 + i));
        v25 = i - (unsigned int)v8;
        ++i;
      }
      LODWORD(v32) = 1;
      LODWORD(v31) = 0;
      LODWORD(v30) = a3;
      LODWORD(v29) = v18;
      v9 = EmpEvaluateNodeLink(*(_QWORD *)(v37 + 96), (_DWORD)v5, v8, (_DWORD)v7, v29, a2, v30, 0LL, v31, v11, v38, v32);
      if ( v9 - 1 <= 1 )
        break;
      v11 = (__int64)v35;
      v17 = v34 + 1;
      v34 = v17;
      if ( v17 >= (unsigned int)v36 )
        break;
      v18 = v33;
    }
    goto LABEL_19;
  }
  v36 = *(unsigned int *)(a1 + 24) / (unsigned __int64)(v6 + v8);
  if ( (_DWORD)v8 )
  {
    v13 = 8 * v8;
    if ( Pool2 && v12 >= v13 )
    {
      v11 = (__int64)&Pool2[v13];
      v14 = v12 - v13;
      v35 = &Pool2[v13];
      v38 = v12 - v13;
      v5 = Pool2;
    }
    else
    {
      v14 = Pool2 != 0LL ? 0x1000 : 0;
      v5 = (char *)ExAllocatePool2(0x100uLL);
      v35 = Pool2;
      v11 = (__int64)Pool2;
      v38 = v14;
      if ( !v5 )
        goto LABEL_29;
    }
  }
  else
  {
    v14 = Pool2 != 0LL ? 0x1000 : 0;
  }
  if ( (_DWORD)v6 )
  {
    v15 = (4 * v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v11 && v14 >= v15 )
    {
      v7 = (char *)v11;
      v11 += v15;
      v35 = (char *)v11;
      v38 = v14 - v15;
    }
    else
    {
      v28 = ExAllocatePool2(0x100uLL);
      v11 = (__int64)v35;
      v7 = (char *)v28;
      v38 = v14;
      if ( !v28 )
        goto LABEL_34;
    }
  }
  v16 = v7;
  v17 = 0;
  v34 = 0;
  if ( (_DWORD)v36 )
    goto LABEL_11;
LABEL_19:
  if ( !v7 )
  {
LABEL_34:
    v26 = Pool2 != 0LL ? 0x1000 : 0;
    goto LABEL_23;
  }
  if ( !Pool2 || v7 < Pool2 || (v26 = Pool2 != 0LL ? 0x1000 : 0, v7 >= &Pool2[v26]) )
  {
    ExFreePoolWithTag(v7, 0x76654D45u);
    goto LABEL_34;
  }
LABEL_23:
  if ( v5 )
  {
    if ( Pool2 && v5 >= Pool2 && v5 < &Pool2[v26] )
      goto LABEL_30;
    ExFreePoolWithTag(v5, 0x76654D45u);
  }
LABEL_29:
  if ( Pool2 )
LABEL_30:
    ExFreePoolWithTag(Pool2, 0x76654D45u);
  return v9;
}
