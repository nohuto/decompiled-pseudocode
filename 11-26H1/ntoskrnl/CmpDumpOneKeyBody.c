/*
 * XREFs of CmpDumpOneKeyBody @ 0x140B24AC8
 * Callers:
 *     CmpDumpKeyBodyList @ 0x140B24994 (CmpDumpKeyBodyList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 */

void __fastcall CmpDumpOneKeyBody(struct _KPROCESS *a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  _DWORD *v6; // rdi
  int v7; // r14d
  void *v8; // rcx
  NTSTATUS v9; // eax
  PEPROCESS v10; // rcx
  PEPROCESS Process; // [rsp+40h] [rbp+8h] BYREF

  Process = a1;
  if ( a4 )
  {
    v6 = *(_DWORD **)(a4 + 8);
    if ( *(_QWORD *)(a4 + 32) != a2 )
    {
      v7 = *a3 + 24;
      *(_DWORD *)(a4 + 16) += v7;
      if ( *(int *)(a4 + 20) >= 0 )
      {
        if ( (unsigned int)(v7 + *(_DWORD *)(a4 + 24)) > *(_DWORD *)a4 )
        {
          *(_DWORD *)(a4 + 20) = -2147483643;
        }
        else
        {
          *(_QWORD *)&v6[6 * *v6 + 2] = *(_QWORD *)(a2 + 24);
          LOWORD(v6[6 * *v6 + 4]) = *a3;
          HIWORD(v6[6 * *v6 + 4]) = *a3;
          *(_QWORD *)&v6[6 * *v6 + 6] = *(_QWORD *)(a4 + 40) - *a3;
          memmove(*(void **)&v6[6 * *v6 + 6], *((const void **)a3 + 1), *a3);
          *(_QWORD *)(a4 + 40) -= *a3;
          *(_DWORD *)(a4 + 24) += v7;
        }
      }
      ++*v6;
    }
  }
  else
  {
    v8 = *(void **)(a2 + 24);
    Process = 0LL;
    v9 = PsLookupProcessByProcessId(v8, &Process);
    v10 = Process;
    if ( v9 < 0 )
      v10 = 0LL;
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  }
}
