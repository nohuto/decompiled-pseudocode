/*
 * XREFs of WmipEnumerateGuids @ 0x1408295D8
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 */

__int64 __fastcall WmipEnumerateGuids(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v9; // r14d
  __int64 *v10; // r8
  __int64 *i; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 **j; // r8
  __int64 result; // rax

  v7 = 0LL;
  v8 = 0;
  v9 = (a3 - 8) / 0x24u;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v10 = (__int64 *)WmipGEHeadPtr;
  for ( i = *(__int64 **)WmipGEHeadPtr; i != v10; i = (__int64 *)*i )
  {
    ++v8;
    if ( (unsigned int)v7 < v9 )
    {
      v12 = 9 * v7;
      v7 = (unsigned int)(v7 + 1);
      *(_OWORD *)&a2[v12 + 2] = *(_OWORD *)(i + 9);
    }
  }
  if ( a1 == 2244960 )
  {
    v13 = (_QWORD *)*v10;
    v8 = 0;
    v7 = 0LL;
    if ( (__int64 *)*v10 != v10 )
    {
      do
      {
        ++v8;
        if ( (unsigned int)v7 < v9 )
        {
          v14 = 9 * v7;
          *(_QWORD *)&a2[v14 + 6] = 2LL;
          LOBYTE(a2[v14 + 10]) = 0;
          *(_QWORD *)&a2[v14 + 8] = 0LL;
          for ( j = (__int64 **)v13[7]; j != v13 + 7; j = (__int64 **)*j )
          {
            if ( ((_DWORD)j[2] & 0x8000) != 0 )
              a2[9 * v7 + 6] = 3;
            if ( ((_DWORD)j[2] & 0x6000) != 0 )
              LOBYTE(a2[9 * v7 + 10]) = 1;
            if ( ((_DWORD)j[2] & 0x81000) == 0x81000 )
            {
              a2[9 * v7 + 6] = 0;
              break;
            }
          }
          if ( v13[14] == -1LL && v13[15] )
          {
            LOBYTE(a2[9 * v7 + 10]) = 1;
            a2[9 * v7 + 7] = *((unsigned __int16 *)v13 + 60);
            a2[9 * v7 + 8] = *((unsigned __int8 *)v13 + 122);
            a2[9 * v7 + 9] = *((_DWORD *)v13 + 31);
          }
          v7 = (unsigned int)(v7 + 1);
        }
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != (_QWORD *)WmipGEHeadPtr );
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  *a2 = v8;
  *a4 = 36 * v7 + 8;
  result = 0LL;
  a2[1] = v7;
  return result;
}
