/*
 * XREFs of RtlpModuleEnumeratorCallback @ 0x1800FB5A0
 * Callers:
 *     <none>
 * Callees:
 *     NtLockVirtualMemory @ 0x180161110 (NtLockVirtualMemory.c)
 */

void __fastcall RtlpModuleEnumeratorCallback(PLDR_DATA_TABLE_ENTRY a1, PVOID a2, BOOLEAN *a3)
{
  int *DllBase; // rcx
  __int64 v6; // rax
  __int16 v7; // dx
  unsigned int v8; // r11d
  _DWORD *v9; // rdx
  unsigned int i; // r8d
  char *v11; // r10
  int v12; // eax
  unsigned __int64 v13; // r9

  DllBase = (int *)a1->DllBase;
  if ( *(_WORD *)DllBase == 23117 )
  {
    v6 = DllBase[15];
    if ( *(int *)((char *)DllBase + v6) == 17744 )
    {
      v7 = *(_WORD *)((char *)DllBase + v6 + 20);
      if ( v7 )
      {
        v8 = *(unsigned __int16 *)((char *)DllBase + v6 + 6);
        if ( (_WORD)v8 )
        {
          if ( v7 == 240 )
          {
            v9 = (int *)((char *)DllBase + v6 + 264);
            for ( i = 0; i < v8; ++i )
            {
              v11 = (char *)DllBase + (unsigned int)v9[3];
              v12 = v9[2];
              if ( !v12 )
                v12 = v9[4];
              v13 = (unsigned __int64)&v11[v12 + 4095] & 0xFFFFFFFFFFFFF000uLL;
              if ( *(_QWORD *)a2 < v13 && *(_QWORD *)a2 >= (unsigned __int64)v11 )
              {
                *((_QWORD *)a2 + 2) = v11;
                *((_QWORD *)a2 + 3) = v13 - (_QWORD)v11;
                *((_DWORD *)a2 + 2) = NtLockVirtualMemory(
                                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                        (PVOID *)a2 + 2,
                                        (PSIZE_T)a2 + 3,
                                        1u);
                *a3 = 1;
                return;
              }
              v9 += 10;
            }
          }
        }
      }
    }
  }
}
