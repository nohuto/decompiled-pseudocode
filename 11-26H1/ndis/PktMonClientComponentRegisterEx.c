/*
 * XREFs of PktMonClientComponentRegisterEx @ 0x140060690
 * Callers:
 *     PktMonClientComponentRegister @ 0x140060620 (PktMonClientComponentRegister.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PktMonClientComponentRegisterEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (_QWORD)xmmword_14011F760 )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    if ( (_QWORD)xmmword_14011F760 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v9 = -1073741816;
      }
      else
      {
        *(_DWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 24) = a1 + 16;
        *(_QWORD *)(a1 + 16) = a1 + 16;
        LOWORD(v12) = 48;
        *((_QWORD *)&v12 + 1) = a1;
        *(_QWORD *)&v13 = a2;
        *((_QWORD *)&v13 + 1) = a3;
        *(_QWORD *)&v14 = a4 | 0x300000000LL;
        DWORD2(v14) = 4;
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(*((_QWORD *)&xmmword_14011F760 + 1) + 8LL))(
                 xmmword_14011F760,
                 &v12,
                 a1 + 40);
          if ( !v9 )
          {
            *(_DWORD *)(a1 + 52) = a5;
            *(_DWORD *)(a1 + 48) = a4;
            v11 = PktMonCompList;
            if ( *(__int64 **)(PktMonCompList + 8) != &PktMonCompList )
              __fastfail(3u);
            ++PktMonCompCount;
            *(_QWORD *)a1 = PktMonCompList;
            *(_QWORD *)(a1 + 8) = &PktMonCompList;
            *(_QWORD *)(v11 + 8) = a1;
            PktMonCompList = a1;
          }
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
        else
        {
          v9 = -1073741738;
        }
      }
    }
    else
    {
      v9 = -1073741661;
    }
    KeReleaseMutex(&PktMonCompMutex, 0);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v9;
}
