/*
 * XREFs of MxCreatePfnsForPtes @ 0x140CFC580
 * Callers:
 *     MxWalkBootPageTables @ 0x140CFE990 (MxWalkBootPageTables.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MxCreatePfn @ 0x140CFC1B4 (MxCreatePfn.c)
 *     MxIsRegularMemory @ 0x140CFDFE0 (MxIsRegularMemory.c)
 */

__int64 __fastcall MxCreatePfnsForPtes(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // r12
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 LeafVa; // r13
  int SystemRegionType; // eax
  int v11; // edx
  __int64 *v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 IsRegularMemory; // rax
  BOOL v19; // [rsp+20h] [rbp-98h]
  __int64 *v20; // [rsp+28h] [rbp-90h]
  __int64 *v21; // [rsp+30h] [rbp-88h]
  unsigned __int64 ContainingPageTable; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+40h] [rbp-78h]
  _QWORD v24[4]; // [rsp+48h] [rbp-70h] BYREF
  int v25; // [rsp+68h] [rbp-50h]
  int v26; // [rsp+6Ch] [rbp-4Ch]
  BOOL v27; // [rsp+70h] [rbp-48h]
  int v28; // [rsp+74h] [rbp-44h]
  int v29; // [rsp+C8h] [rbp+10h]
  int v30; // [rsp+D8h] [rbp+20h]

  v3 = *a2;
  v4 = a2;
  v5 = a3;
  v6 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    v21 = *(__int64 **)(a1 + 184);
    v23 = *v21;
    v7 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)a2);
    v8 = 48 * ContainingPageTable - 0x220000000000LL;
    LeafVa = MiGetLeafVa((unsigned __int64)v4);
    SystemRegionType = MiGetSystemRegionType(LeafVa);
    v30 = SystemRegionType;
    v11 = 0;
    v29 = 0;
    v19 = SystemRegionType == 3;
    v12 = v4 + 1;
    v20 = v4 + 1;
    if ( !(_DWORD)v5 || (v3 & 0x80u) != 0LL )
    {
      if ( (v21[1] & 2) != 0 )
      {
        v13 = v3 & 0xFFFFFFFFFFFFF7FBuLL | 0x800;
        if ( (v3 & 0x42) == 0 )
          v13 = v3 & 0xFFFFFFFFFFFFFFFBuLL;
        v6 = v13 | 0x20;
        if ( (v13 & 0x20) != 0 )
          v6 = v13;
        if ( ((v6 >> 8) & 1) != BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) )
          v6 = ((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ (v6 ^ ((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8)) & 0xFFFFFFFFFFFFFEFFuLL;
        if ( v6 != v3 )
          MiWriteValidPteNewProtection(v4, v6);
        v12 = v4 + 1;
        v11 = 0;
      }
      if ( (_DWORD)v5 )
      {
        v11 = 1;
        v29 = 1;
        v14 = 1LL;
        if ( (int)v5 > 0 )
        {
          v15 = v5;
          do
          {
            v14 <<= 9;
            --v15;
          }
          while ( v15 );
        }
        v4 = (__int64 *)(((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v12 = &v4[v14];
        v20 = v12;
      }
      SystemRegionType = v30;
    }
    if ( v4 < v12 )
    {
      v16 = 48 * v7 - 0x21FFFFFFFFE0LL;
      while ( 1 )
      {
        if ( SystemRegionType == 3 )
          goto LABEL_25;
        IsRegularMemory = MxIsRegularMemory(v23, v7);
        v12 = v20;
        if ( IsRegularMemory )
          break;
LABEL_27:
        v11 = v29;
        ++v7;
        SystemRegionType = v30;
        v16 += 48LL;
        if ( ++v4 >= v12 )
          goto LABEL_28;
      }
      v11 = v29;
LABEL_25:
      if ( (v21[1] & 2) != 0 )
      {
        v27 = v19;
        v28 = 0;
        v24[0] = v7;
        v24[1] = v4;
        v24[2] = v6;
        v24[3] = ContainingPageTable;
        v25 = v5;
        v26 = v11;
        MxCreatePfn((__int64)v24);
        v12 = v20;
      }
      goto LABEL_27;
    }
LABEL_28:
    if ( (v21[1] & 2) != 0 )
    {
      MiIncreaseUsedPtesInPfn(v8, 1);
      *(_QWORD *)(v8 + 24) = (*(_QWORD *)(v8 + 24) + 1LL) ^ (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0xC000000000000000uLL;
    }
  }
  else if ( v3 )
  {
    *a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  return 0LL;
}
