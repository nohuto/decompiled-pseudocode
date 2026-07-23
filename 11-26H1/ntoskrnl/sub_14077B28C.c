/*
 * XREFs of sub_14077B28C @ 0x14077B28C
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077B28C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r8
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  __int64 v12; // rbp
  NTSTATUS v13; // eax
  NTSTATUS v14; // esi
  NTSTATUS v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 Pool2; // rax
  int v20; // esi
  __int64 v21; // r9
  _DWORD *v22; // rdx
  unsigned int j; // ecx
  unsigned int v24; // eax
  __int64 v25; // r10
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  unsigned int k; // ecx
  unsigned int v29; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v7 = *(unsigned int **)(a1 + 8);
        if ( v7 )
        {
          if ( *(_DWORD *)a1 > 3u )
          {
            for ( i = 0; ; ++i )
            {
              v9 = *v7;
              v10 = v7 + 1;
              if ( i >= 3 )
                break;
              if ( v10 < v7 )
                return (unsigned int)-1073741675;
              v7 = (unsigned int *)((char *)v10 + v9);
              if ( (unsigned int *)((char *)v10 + v9) < v10 )
                return (unsigned int)-1073741675;
            }
            if ( v10 >= v7 )
            {
              v11 = 0LL;
              if ( (_DWORD)v9 )
                v11 = v10;
              if ( (_DWORD)v9 != 8 )
                return (unsigned int)-1073741789;
              v12 = *(_QWORD *)v11;
              Interval.QuadPart = -35000000LL;
              do
              {
                v13 = KeDelayExecutionThread(1, 1u, &Interval);
                v14 = v13;
              }
              while ( v13 == 257 );
              if ( v13 >= 0 && v13 != 192 )
              {
                Interval.QuadPart = -270000000LL;
                do
                {
                  v15 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, &Interval);
                  v14 = v15;
                }
                while ( v15 == 257 );
                if ( v15 >= 0 && v15 != 192 && v15 != 258 )
                  KeReleaseMutex(&Mutex, 0);
              }
              v16 = *(_DWORD *)(a2 + 32);
              if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
              {
                v17 = *(_DWORD *)(a2 + 16) + 52;
                if ( v17 >= *(_DWORD *)(a2 + 16) + 48 )
                {
                  v18 = v17 + v16;
                  v6 = v17 + v16 < v17 ? 0xC0000095 : 0;
                  if ( v18 < v17 )
                    return v6;
                  *(_DWORD *)(a4 + 4) = 20;
                  Pool2 = ExAllocatePool2(0x100uLL);
                  if ( !Pool2 )
                    return (unsigned int)-1073741801;
                  *(_QWORD *)(a4 + 8) = Pool2;
                  v20 = v14 | 0x10000000;
                  *(_DWORD *)a4 = 0;
                  v21 = Pool2;
                  v22 = (_DWORD *)Pool2;
                  for ( j = 0; j < *(_DWORD *)a4; ++j )
                  {
                    v24 = *v22 + 4;
                    if ( *v22 >= 0xFFFFFFFC || (_DWORD *)((char *)v22 + v24) < v22 )
                      return (unsigned int)-1073741675;
                    v22 = (_DWORD *)((char *)v22 + v24);
                  }
                  if ( v22 + 1 >= v22 )
                  {
                    if ( (unsigned __int64)(v22 + 2) > v21 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      return (unsigned int)-1073741789;
                    *v22 = 4;
                    v22[1] = v20;
                    ++*(_DWORD *)a4;
                    v25 = *(_QWORD *)(a4 + 8);
                    if ( v25 )
                    {
                      v27 = *(_QWORD *)(a4 + 8);
                      for ( k = 0; k < *(_DWORD *)a4; ++k )
                      {
                        v29 = *(_DWORD *)v27 + 4;
                        if ( *(_DWORD *)v27 >= 0xFFFFFFFC || v27 + v29 < v27 )
                          return (unsigned int)-1073741675;
                        v27 += v29;
                      }
                      if ( v27 + 4 >= v27 )
                      {
                        v6 = 0;
                        if ( v27 + 12 <= v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        {
                          *(_DWORD *)v27 = 8;
                          *(_QWORD *)(v27 + 4) = v12;
                          ++*(_DWORD *)a4;
                          return v6;
                        }
                        return (unsigned int)-1073741789;
                      }
                    }
                    else
                    {
                      v26 = *(_DWORD *)(a4 + 4);
                      if ( v26 + 12 >= v26 )
                      {
                        *(_DWORD *)(a4 + 4) = v26 + 12;
                        ++*(_DWORD *)a4;
                        return 0;
                      }
                      *(_DWORD *)(a4 + 4) = -1;
                    }
                  }
                  return (unsigned int)-1073741675;
                }
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
