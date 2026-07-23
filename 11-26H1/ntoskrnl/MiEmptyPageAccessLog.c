/*
 * XREFs of MiEmptyPageAccessLog @ 0x1402B1B9C
 * Callers:
 *     MiPeriodicTrimWorkingSet @ 0x1403C3C80 (MiPeriodicTrimWorkingSet.c)
 *     MiDrainOldAccessBuffers @ 0x1403C4E00 (MiDrainOldAccessBuffers.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 *     MiAllocateAccessLog @ 0x14048F0B8 (MiAllocateAccessLog.c)
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     MiSwizzleInvalidPte @ 0x1402B1EF0 (MiSwizzleInvalidPte.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r9
  _QWORD *v7; // r15
  __int64 *v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 PrototypePteDirect; // rax
  __int64 v14; // r10
  __int16 v15; // r11
  int v16; // ebp
  __int64 **v17; // r14
  unsigned __int64 v18; // r13
  __int64 v19; // rbp
  ULONG_PTR v20; // rax
  __int64 *v21; // rsi
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD v30[2]; // [rsp+20h] [rbp-78h]
  unsigned __int64 v31; // [rsp+28h] [rbp-70h]
  _QWORD *v32; // [rsp+30h] [rbp-68h]
  unsigned __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned int SessionId; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v37; // [rsp+B0h] [rbp+18h]
  BOOL v38; // [rsp+B8h] [rbp+20h]

  v30[1] = 3;
  v2 = 0;
  v30[0] = 0;
  v3 = a2;
  v4 = a2[7];
  v33 = v4;
  v38 = KeGetCurrentIrql() == 2;
  if ( v4 <= 1 || (*(_DWORD *)(v4 + 1532) & 0x1000) != 0 )
    SessionId = -1;
  else
    SessionId = PsGetSessionIdEx(v4);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (unsigned __int64)(v3 + 8);
    v7 = (_QWORD *)*v3;
    v8 = (__int64 *)(v3[4] - 8LL);
    v9 = 0xFFFFF68000000000uLL;
    v32 = (_QWORD *)*v3;
    if ( v8 >= v3 + 8 )
    {
      if ( v4 <= 1 )
      {
        do
        {
          v28 = *v8;
          if ( (*v8 & 0x1FF) == 0 )
          {
            v29 = v28 >> 10 << 28 >> 16;
            *v8 = v29;
            *(_DWORD *)v8 = (v29 & 0xFFFFFDFF ^ ((((unsigned __int64)v28 >> 9) & 1) << 9)) & 0xFFFFF3FF | 0x400;
          }
          --v8;
        }
        while ( (unsigned __int64)v8 >= v6 );
        goto LABEL_25;
      }
      do
      {
        v9 = *v8 & 0x1FF;
        v10 = (unsigned __int64)*v8 >> 9;
        v11 = *v8 >> 10;
        v37 = v9;
        if ( (_WORD)v9 )
        {
          v12 = MiSwizzleInvalidPte(((v11 & 0x3FFFFFFFFFFLL | (2 * (v11 & 0x400000000000LL))) << 12) | 0x400);
          PrototypePteDirect = MiGetPrototypePteDirect(v12);
          v34 = PrototypePteDirect;
          if ( (_WORD)v9 == v15 )
          {
            v5 += (PrototypePteDirect - v14) >> 3 << 12 << v30[(v5 >> 10) & 1];
          }
          else
          {
            v24 = *(_QWORD *)(v3[6] - 8LL * (unsigned __int16)v9);
            v25 = *(_DWORD *)(*(_QWORD *)v24 + 56LL);
            v2 ^= ((unsigned __int16)v2 ^ (unsigned __int16)(32 * v25)) & 0x400;
            v26 = MiStartingOffset(v24, PrototypePteDirect, SessionId);
            v6 = (unsigned __int64)(v3 + 8);
            v27 = v26 << v30[((unsigned __int64)v2 >> 10) & 1];
            HIDWORD(v31) = HIDWORD(v27);
            LODWORD(v31) = v37 | v27 & 0xFFFFFA00 | (32 * (v25 & 0x20));
            v5 = v31;
          }
          *v8 = v5;
          v16 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((_WORD)v10 << 9)) & 0x200;
        }
        else
        {
          v23 = v11 << 28 >> 16;
          *v8 = v23;
          v16 = (v23 & 0xFFFFFDFF ^ ((v10 & 1) << 9)) & 0xFFFFF3FF | 0x400;
        }
        *(_DWORD *)v8-- = v16;
      }
      while ( (unsigned __int64)v8 >= v6 );
      v7 = v32;
      v4 = v33;
    }
    if ( v4 > 1 )
    {
      v17 = (__int64 **)(v3[5] + 8LL);
      if ( (unsigned __int64)v17 <= v3[6] - 8LL )
      {
        v18 = v3[6] - 8LL;
        do
        {
          v19 = **v17;
          v20 = MiReferenceControlAreaFileWithTag(v19, 1666411853LL, v38);
          v21 = *(__int64 **)(v20 + 24);
          ObFastDereferenceObjectDeferDelete((signed __int64 *)(v19 + 64), v20, 0x63536D4Du);
          *v17++ = v21;
        }
        while ( (unsigned __int64)v17 <= v18 );
        v7 = v32;
        v4 = v33;
      }
      if ( !ObReferenceObjectSafeWithTag(v4, 0x4C416D4Du) )
        break;
    }
LABEL_25:
    MiQueuePageAccessLog(a1, v3, v9);
    v3 = v7;
    if ( !v7 )
      return;
  }
  v22 = v3;
  while ( 1 )
  {
    ExFreePoolWithTag(v22, 0);
    v22 = v7;
    if ( !v7 )
      break;
    v7 = (_QWORD *)*v7;
  }
}
