/*
 * XREFs of HalpInterruptRegisterLine @ 0x14059D844
 * Callers:
 *     HalpApicDescribeLines @ 0x1405A3A38 (HalpApicDescribeLines.c)
 *     HalpApicDescribeLocalLines @ 0x1405A3AC8 (HalpApicDescribeLocalLines.c)
 *     HalpPicDiscover @ 0x1405A4984 (HalpPicDiscover.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpInterruptRegisterLine(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  int v4; // edi
  int v5; // r12d
  ULONG_PTR *v6; // rax
  ULONG_PTR *v7; // rsi
  int v8; // eax
  int v9; // ecx
  ULONG_PTR *v10; // rax
  ULONG_PTR *v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  unsigned int i; // eax
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  _DWORD *MemoryInternal; // rax
  _DWORD *v18; // rdi
  int v19; // r8d
  int v20; // r10d
  int v21; // eax
  int v22; // r9d
  ULONG_PTR *v23; // rsi
  ULONG_PTR **v24; // rax
  int v25; // eax
  int v26; // ecx

  v1 = 0;
  if ( !HalpInterruptRegistrationAllowed || KeGetPcr()->Prcb.Number )
  {
    HalpInterruptRegistrationProblem = 2;
    return (unsigned int)-1073741431;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 < v3 && (v5 = *(_DWORD *)(a1 + 12)) != 0 )
    {
      v6 = HalpInterruptLookupController(*(_DWORD *)a1);
      v7 = v6;
      if ( v6 )
      {
        if ( v5 != 6 )
        {
          v8 = *((_DWORD *)v6 + 75);
          v9 = *((_DWORD *)v7 + 74);
          if ( v9 != v8 && v4 < v8 && v3 > v9 )
          {
            v10 = (ULONG_PTR *)v7[33];
            while ( v10 != v7 + 33 )
            {
              v11 = v10;
              v10 = (ULONG_PTR *)*v10;
              if ( v4 < *((_DWORD *)v11 + 6) && v3 > *((_DWORD *)v11 + 5) )
              {
                HalpInterruptRegistrationProblem = 20;
                return (unsigned int)-1073741182;
              }
            }
          }
        }
        v12 = *(_DWORD *)(a1 + 24);
        if ( v12 == -1 || !HalpInterruptFindLinesForGsiRange(v12, v12 + v3 - v4) )
        {
          v13 = v3 - v4;
          if ( *((_DWORD *)v7 + 60) == 2 && v12 != -1 )
          {
            for ( i = 0; i < HalpInterruptIoApicCount; ++i )
            {
              if ( *(_DWORD *)(HalpInterruptIoApic + 16LL * i) == *(_DWORD *)a1
                && v13 > *(_DWORD *)(HalpInterruptIoApic + 16LL * i + 12) )
              {
                _mm_lfence();
                v13 = *(_DWORD *)(HalpInterruptIoApic + 16LL * i + 12);
                break;
              }
            }
          }
          if ( v5 == 7 )
            v15 = (((v13 + 31) >> 3) + 7) & 0xFFFFFFF8;
          else
            v15 = 0;
          v16 = v15 + 8 * (v13 + 8 * v13 + 11);
          MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(v16, 1u);
          v18 = MemoryInternal;
          if ( MemoryInternal )
          {
            memset_0(MemoryInternal, 0, v16);
            if ( v15 )
            {
              v18[18] = v13;
              *((_QWORD *)v18 + 10) = v18 + 22;
            }
            v19 = *(_DWORD *)(a1 + 4);
            v20 = *(_DWORD *)(a1 + 12);
            v21 = *(_DWORD *)(a1 + 24);
            v18[5] = v19;
            v18[7] = v21;
            v22 = v19 + v13;
            v18[6] = v19 + v13;
            v18[8] = v20;
            if ( v20 == 7 )
            {
              *((_QWORD *)v18 + 7) = *(_QWORD *)(a1 + 32);
              v18[16] = *(_DWORD *)(a1 + 40);
              v18[9] = *(_DWORD *)(a1 + 16);
            }
            *((_QWORD *)v18 + 5) = (char *)v18 + v15 + 88;
            *((_QWORD *)v18 + 6) = (char *)&v18[14 * v13 + 22] + v15;
            if ( v20 == 6 )
            {
              v23 = v7 + 35;
              v18[4] = *(_DWORD *)(a1 + 20);
            }
            else
            {
              v18[4] = *((_DWORD *)v7 + 64);
              v25 = *((_DWORD *)v7 + 75);
              v26 = *((_DWORD *)v7 + 74);
              if ( v26 == v25 )
              {
                *((_DWORD *)v7 + 74) = v19;
                *((_DWORD *)v7 + 75) = v18[6];
              }
              else if ( v19 >= v26 )
              {
                if ( v22 > v25 )
                  *((_DWORD *)v7 + 75) = v22;
              }
              else
              {
                *((_DWORD *)v7 + 74) = v19;
              }
              v23 = v7 + 33;
            }
            v24 = (ULONG_PTR **)v23[1];
            if ( *v24 != v23 )
              __fastfail(3u);
            *(_QWORD *)v18 = v23;
            *((_QWORD *)v18 + 1) = v24;
            *v24 = (ULONG_PTR *)v18;
            v23[1] = (ULONG_PTR)v18;
            HalpInterruptRegistrationProblem = 0;
          }
          else
          {
            HalpInterruptRegistrationProblem = 22;
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          HalpInterruptRegistrationProblem = 21;
          return (unsigned int)-1073741182;
        }
      }
      else
      {
        HalpInterruptRegistrationProblem = 19;
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      HalpInterruptRegistrationProblem = 18;
      return (unsigned int)-1073741811;
    }
  }
  return v1;
}
