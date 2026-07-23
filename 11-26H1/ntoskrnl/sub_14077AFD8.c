/*
 * XREFs of sub_14077AFD8 @ 0x14077AFD8
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     KeQueryTimeIncrement @ 0x14044EAA0 (KeQueryTimeIncrement.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077AFD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r8
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  __int64 v12; // rbp
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  ULONG TimeIncrement; // eax
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 Pool2; // rax
  __int64 v20; // r9
  _DWORD *v21; // rdx
  unsigned int j; // ecx
  unsigned int v23; // eax
  __int64 v24; // r10
  unsigned int v25; // eax
  unsigned __int64 v26; // r8
  unsigned int k; // ecx
  unsigned int v28; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

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
              Timeout.QuadPart = -270000000LL;
              v13 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout);
              if ( v13 >= 0 && v13 != 192 && v13 != 258 )
              {
                if ( stru_140EF4D40.Header.SignalState || !*(_DWORD *)&ExpPlatformBinaryLock.ApcStateFill[36] )
                {
                  v14 = MEMORY[0xFFFFF78000000320];
                  TimeIncrement = KeQueryTimeIncrement();
                  *(_DWORD *)&ExpPlatformBinaryLock.ApcStateFill[36] = 1;
                  ExpPlatformBinaryLock.StateSaveArea = (_XSAVE_FORMAT *)(v14 * TimeIncrement / 10000);
                  KeResetEvent(&stru_140EF4D40);
                }
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
                  *(_DWORD *)a4 = 0;
                  v20 = Pool2;
                  v21 = (_DWORD *)Pool2;
                  for ( j = 0; j < *(_DWORD *)a4; ++j )
                  {
                    v23 = *v21 + 4;
                    if ( *v21 >= 0xFFFFFFFC || (_DWORD *)((char *)v21 + v23) < v21 )
                      return (unsigned int)-1073741675;
                    v21 = (_DWORD *)((char *)v21 + v23);
                  }
                  if ( v21 + 1 >= v21 )
                  {
                    if ( (unsigned __int64)(v21 + 2) > v20 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      return (unsigned int)-1073741789;
                    *v21 = 4;
                    v21[1] = 0x10000000;
                    ++*(_DWORD *)a4;
                    v24 = *(_QWORD *)(a4 + 8);
                    if ( v24 )
                    {
                      v26 = *(_QWORD *)(a4 + 8);
                      for ( k = 0; k < *(_DWORD *)a4; ++k )
                      {
                        v28 = *(_DWORD *)v26 + 4;
                        if ( *(_DWORD *)v26 >= 0xFFFFFFFC || v26 + v28 < v26 )
                          return (unsigned int)-1073741675;
                        v26 += v28;
                      }
                      if ( v26 + 4 >= v26 )
                      {
                        v6 = 0;
                        if ( v26 + 12 <= v24 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        {
                          *(_DWORD *)v26 = 8;
                          *(_QWORD *)(v26 + 4) = v12;
                          ++*(_DWORD *)a4;
                          return v6;
                        }
                        return (unsigned int)-1073741789;
                      }
                    }
                    else
                    {
                      v25 = *(_DWORD *)(a4 + 4);
                      if ( v25 + 12 >= v25 )
                      {
                        *(_DWORD *)(a4 + 4) = v25 + 12;
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
