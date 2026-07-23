/*
 * XREFs of IoSteerInterrupt @ 0x1407A1F50
 * Callers:
 *     <none>
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeIntSteerAssignCpuSet @ 0x1405F9F44 (KeIntSteerAssignCpuSet.c)
 */

__int64 __fastcall IoSteerInterrupt(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // dx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx

  v3 = -1073741823;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( !a1 || !a2 )
    goto LABEL_62;
  if ( !*(_DWORD *)a1 )
  {
    v4 = *(_DWORD *)a2;
    if ( *(int *)a2 < 2 && (v4 != 1 || *(_QWORD *)(a2 + 16)) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
        if ( v6 && (*(_DWORD *)(v6 + 396) & 0x20000) == 0 )
        {
          if ( *(_DWORD *)(a1 + 8) != 1 )
          {
            if ( *(_DWORD *)(a1 + 8) == 2 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL) + 112LL;
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) == 3 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) != 4 )
              return (unsigned int)-1073741637;
          }
          v7 = *(_QWORD *)(a1 + 24);
LABEL_21:
          v8 = *(_QWORD *)(v7 + 392);
          if ( *(_DWORD *)(v8 + 88) == *(_DWORD *)(v7 + 88) )
          {
            if ( v4 == 1 )
            {
              v9 = *(_QWORD *)(a2 + 16);
              v10 = *(_WORD *)(a2 + 8);
            }
            else
            {
              if ( v4 )
                return v3;
              v10 = 0;
              v9 = 0LL;
            }
            return (unsigned int)KeIntSteerAssignCpuSet(v8, v10, v9);
          }
LABEL_62:
          __fastfail(5u);
        }
        IoAddTriageDumpDataBlock(v5, (PVOID)*(unsigned __int16 *)(v5 + 2));
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        if ( v12 )
        {
          IoAddTriageDumpDataBlock(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
          v13 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL);
          if ( *v13 )
          {
            IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
          }
        }
        v14 = *(_QWORD *)(a1 + 16);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 312);
          if ( *(_QWORD *)(v15 + 40) )
          {
            v16 = *(_QWORD *)(v15 + 40);
            IoAddTriageDumpDataBlock(v16, (PVOID)0x388);
            if ( *(_WORD *)(v16 + 40) )
            {
              IoAddTriageDumpDataBlock(v16 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 48), (PVOID)*(unsigned __int16 *)(v16 + 40));
            }
            v17 = *(_QWORD *)(a1 + 16);
            v18 = v17 + 312;
            if ( v17 )
              v19 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
            else
              v19 = 0LL;
            if ( *(_WORD *)(v19 + 56) )
            {
              if ( v17 )
                v20 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
              else
                LODWORD(v20) = 0;
              IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
              v21 = *(_QWORD *)(a1 + 16);
              if ( v21 )
              {
                v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
                v23 = v22;
              }
              else
              {
                v22 = 0LL;
                v23 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
            }
            v24 = *(_QWORD *)(a1 + 16);
            v25 = v24 + 312;
            if ( v24 )
              v26 = *(_QWORD *)(*(_QWORD *)v25 + 40LL);
            else
              v26 = 0LL;
            if ( *(_QWORD *)(v26 + 16) )
            {
              v27 = v24 ? *(_QWORD *)(*(_QWORD *)v25 + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v27 + 16) + 56LL) )
              {
                if ( v24 )
                  v28 = *(_QWORD *)(*(_QWORD *)v25 + 40LL);
                else
                  v28 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v28 + 16) + 56, (PVOID)2);
                v29 = *(_QWORD *)(a1 + 16);
                if ( v29 )
                {
                  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 312) + 40LL);
                  v31 = v30;
                }
                else
                {
                  v30 = 0LL;
                  v31 = 0LL;
                }
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v31 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v30 + 16) + 56LL));
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)(a1 + 16), 0LL, 0LL);
    }
  }
  return (unsigned int)-1073741811;
}
