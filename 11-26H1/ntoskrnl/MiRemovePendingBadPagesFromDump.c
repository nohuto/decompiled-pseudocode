/*
 * XREFs of MiRemovePendingBadPagesFromDump @ 0x1406F66E4
 * Callers:
 *     MmGetDumpRange @ 0x1406FB5A4 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiRemovePendingBadPagesFromDump(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  _QWORD *i; // rcx
  unsigned int *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r14

  v1 = a1;
  if ( qword_140E2EC88 )
  {
    v2 = 0LL;
    if ( qword_140E2EC98 )
    {
      v9 = (unsigned int *)MmPhysicalMemoryBlock;
      if ( MmPhysicalMemoryBlock )
      {
        v10 = 0;
        if ( *(_DWORD *)MmPhysicalMemoryBlock )
        {
          do
          {
            v11 = *(_QWORD *)&v9[4 * v10 + 4];
            v12 = *(_QWORD *)&v9[4 * v10 + 6];
            v13 = 48 * v11 - 0x21FFFFFFFFE0LL;
            while ( v12 )
            {
              if ( (*(_BYTE *)(v13 + 3) & 0x40) != 0 )
              {
                if ( *(int *)v13 < 0 )
                {
                  guard_dispatch_icall_no_overrides(v1, v11);
                  v1 = a1;
                }
                if ( ++v2 == qword_140E2EC88 )
                {
                  v10 = *v9 - 1;
                  break;
                }
              }
              --v12;
              ++v11;
              v13 += 48LL;
            }
            ++v10;
          }
          while ( v10 < *v9 );
        }
      }
    }
    else
    {
      v3 = (_QWORD *)qword_140E2EC80;
      v4 = 0LL;
      while ( v3 )
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
      }
      while ( v4 )
      {
        v5 = v4[3];
        if ( *(int *)(v5 + 32) < 0 )
        {
          guard_dispatch_icall_no_overrides(v1, (v5 + 0x220000000000LL) / 48);
          v1 = a1;
        }
        v6 = (_QWORD **)v4[1];
        v7 = v4;
        if ( v6 )
        {
          v4 = (_QWORD *)v4[1];
          for ( i = *v6; i; i = (_QWORD *)*i )
            v4 = i;
        }
        else
        {
          while ( 1 )
          {
            v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v4 || (_QWORD *)*v4 == v7 )
              break;
            v7 = v4;
          }
        }
      }
    }
  }
}
