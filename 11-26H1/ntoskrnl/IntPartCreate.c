/*
 * XREFs of IntPartCreate @ 0x140D08614
 * Callers:
 *     KiIntSteerInit @ 0x140CD1CE0 (KiIntSteerInit.c)
 * Callees:
 *     IntPartCriticalFailure @ 0x1405F5EE8 (IntPartCriticalFailure.c)
 *     IntpAllocateGroupContext @ 0x14071E598 (IntpAllocateGroupContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IntpInitClassContext @ 0x140D08400 (IntpInitClassContext.c)
 *     IntpMergeClassContexts @ 0x140D084F8 (IntpMergeClassContexts.c)
 *     IntpAssignProcessorsToPartitions @ 0x140D087AC (IntpAssignProcessorsToPartitions.c)
 *     IntpAllocateProcessorContext @ 0x140D088A8 (IntpAllocateProcessorContext.c)
 */

__int64 __fastcall IntPartCreate(__int64 a1, char a2, __int64 a3)
{
  char *GroupContext; // rsi
  int v5; // ebx
  _BYTE *v6; // r12
  unsigned __int8 v7; // bp
  ULONG_PTR inited; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rcx
  unsigned __int8 v11; // r10
  __int64 i; // r8
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned __int8 v16; // r15
  __int64 j; // rbp
  char *v18; // r13
  __int64 result; // rax
  unsigned __int8 v20; // [rsp+50h] [rbp+8h] BYREF
  char v21; // [rsp+51h] [rbp+9h]
  unsigned int v22; // [rsp+60h] [rbp+18h] BYREF
  int v23; // [rsp+64h] [rbp+1Ch]

  v23 = HIDWORD(a3);
  v21 = BYTE1(a1);
  v22 = 0;
  v20 = 0;
  GroupContext = 0LL;
  v5 = 0;
  v6 = (_BYTE *)IntpAllocateProcessorContext(a1, &v20);
  if ( !v6 )
  {
    v5 = -1073741670;
LABEL_27:
    ExFreePoolWithTag(GroupContext, 0x5049654Bu);
    GroupContext = 0LL;
    goto LABEL_28;
  }
  if ( (a2 & 1) != 0 || v20 <= 0x10u )
  {
    v7 = 1;
  }
  else
  {
    v7 = 4;
    if ( v20 <= 0x20u )
      v7 = 2;
  }
  inited = IntpInitClassContext(v6, v20, &v22);
  v9 = (_BYTE *)inited;
  if ( !inited )
    goto LABEL_10;
  IntpMergeClassContexts(inited, v22, v7);
  v11 = 0;
  for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
  {
    v13 = (unsigned __int8)v9[24 * i + 1];
    if ( (_BYTE)v13 )
    {
      v10 = v7;
      v14 = v13 / v7;
      v9[24 * i + 16] = v14;
      if ( !(_BYTE)v14 )
        IntPartCriticalFailure(0x1002uLL, (unsigned __int8)v9[24 * i]);
      v11 += v14;
    }
  }
  GroupContext = (char *)IntpAllocateGroupContext(v10, v11);
  if ( GroupContext )
  {
    v16 = 0;
    for ( j = 0LL; (unsigned int)j < v22; j = (unsigned int)(j + 1) )
    {
      v18 = &v9[24 * j];
      if ( v18[1] )
      {
        LOBYTE(v15) = v18[16];
        v5 = IntpAssignProcessorsToPartitions(&v9[24 * j], &GroupContext[16 * v16 + 8], v15);
        if ( v5 < 0 )
          break;
        v16 += v18[16];
      }
    }
  }
  else
  {
LABEL_10:
    v5 = -1073741670;
  }
  ExFreePoolWithTag(v6, 0x5049654Bu);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x5049654Bu);
  if ( v5 < 0 )
    goto LABEL_27;
LABEL_28:
  result = (unsigned int)v5;
  KiInterruptPartitions = (__int64)GroupContext;
  return result;
}
