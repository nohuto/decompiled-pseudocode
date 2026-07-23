/*
 * XREFs of KiAllocateIdleSearchStructures @ 0x1405EC5B4
 * Callers:
 *     KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405EC424 (KiAllocateAndStartBootProcessorSchedulerStructures.c)
 *     KiAllocateProcessorSchedulerStructures @ 0x1405EC84C (KiAllocateProcessorSchedulerStructures.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateIdleSearchStructures(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned __int16 v4; // ax
  __int64 v5; // r15
  __int64 v6; // r14
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  unsigned int i; // edi
  __int64 v11; // r15
  unsigned int v12; // esi
  __int64 v13; // r12
  _WORD *v14; // rax
  _WORD *v15; // r14
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+80h] [rbp+40h]
  __int16 v19; // [rsp+88h] [rbp+48h]
  __int16 v20; // [rsp+8Ah] [rbp+4Ah]

  v19 = 1;
  v20 = KiSubNodeCount - 1;
  v1 = 0;
  v3 = 0;
  v4 = *(_WORD *)(*(_QWORD *)(a1 + 192) + 138LL);
  v18 = v4;
  while ( v3 < 2 )
  {
    v5 = v3;
    v6 = (unsigned __int16)*(&v19 + v3);
    if ( !(_WORD)v6 )
      break;
    v17 = 0LL;
    LOBYTE(v17) = 3;
    *(_QWORD *)&v17 = v17 | 0x100;
    DWORD2(v17) = v4 | 0x80000000;
    v7 = (_DWORD *)ExAllocatePool3(72LL, 34 * v6 + 1064, 1196648779LL, &v17, 1);
    v8 = v7;
    if ( !v7 )
      return (unsigned int)-1073741670;
    memset_0(v7, 0, 34 * v6 + 1064);
    v9 = v8[4] & 0x7F;
    *(_QWORD *)v8 = 0LL;
    *((_WORD *)v8 + 528) = v6;
    *((_QWORD *)v8 + 2) = v9 | 0x80;
    ++v3;
    v4 = v18;
    *((_WORD *)v8 + 530) = 64;
    *(_QWORD *)(a1 + 8 * v5 + 37960) = v8;
  }
  for ( i = 0; i < 2; ++i )
  {
    v11 = i;
    v12 = (unsigned __int16)*(&v19 + i);
    if ( !(_WORD)v12 )
      break;
    v17 = 0LL;
    LOBYTE(v17) = 3;
    *(_QWORD *)&v17 = v17 | 0x100;
    v13 = 32LL * v12;
    DWORD2(v17) = v4 | 0x80000000;
    v14 = (_WORD *)ExAllocatePool3(72LL, v13 + 16, 1196648779LL, &v17, 1);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-1073741670;
    memset_0(v14, 0, v13 + 16);
    v4 = v18;
    v15[4] = v12;
    *(_QWORD *)(a1 + 8 * v11 + 37992) = v15;
  }
  return v1;
}
