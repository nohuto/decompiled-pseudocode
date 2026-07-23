/*
 * XREFs of IopMemQueryConflict @ 0x1407A95C0
 * Callers:
 *     <none>
 * Callees:
 *     ArbQueryConflict @ 0x14078BCA0 (ArbQueryConflict.c)
 *     IopIsPciRootBus @ 0x1407A9390 (IopIsPciRootBus.c)
 */

__int64 __fastcall IopMemQueryConflict(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  NTSTATUS IsPciRootBus; // r10d
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 i; // rcx
  char v11; // al
  unsigned __int64 v12; // rax
  bool v13; // cf
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  result = ArbQueryConflict(a1, a2);
  if ( (int)result >= 0 )
  {
    IsPciRootBus = IopIsPciRootBus(*(PDEVICE_OBJECT *)a2, &v14);
    if ( IsPciRootBus >= 0 && v14 )
    {
      v5 = 0LL;
      v6 = **(_DWORD **)(a2 + 16);
      v7 = **(_QWORD **)(a2 + 24);
      if ( v6 )
      {
        v8 = ArbMmConfigRange;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 24 * v5 + 8);
          if ( ArbMmConfigRange )
            break;
LABEL_18:
          v5 = (unsigned int)(v5 + 1);
LABEL_19:
          if ( (unsigned int)v5 >= v6 )
            goto LABEL_20;
        }
        for ( i = ArbMmConfigRange + 8; ; i += 32LL )
        {
          if ( i >= 32 * (unsigned __int64)*(unsigned int *)(v8 + 4) + ArbMmConfigRange + 8 )
            goto LABEL_18;
          v11 = *(_BYTE *)(i + 1);
          if ( v11 == 3 || v11 == 7 )
          {
            v12 = *(_QWORD *)(i + 16);
            v13 = v9 < v12;
            if ( v9 > v12 )
            {
              if ( *(_QWORD *)(i + 24) < v9 )
                continue;
              v13 = v9 < v12;
            }
            if ( !v13 || *(_QWORD *)(v7 + 24 * v5 + 16) >= v12 )
            {
              *(_OWORD *)(v7 + 24 * v5) = *(_OWORD *)(v7 + 24LL * --v6);
              *(_QWORD *)(v7 + 24 * v5 + 16) = *(_QWORD *)(v7 + 24LL * v6 + 16);
              goto LABEL_19;
            }
          }
        }
      }
LABEL_20:
      **(_DWORD **)(a2 + 16) = v6;
      return (unsigned int)IsPciRootBus;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
