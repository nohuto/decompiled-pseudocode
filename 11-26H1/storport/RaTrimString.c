/*
 * XREFs of RaTrimString @ 0x140039BB8
 * Callers:
 *     RaGetUnitPerfCounterIdString @ 0x140039668 (RaGetUnitPerfCounterIdString.c)
 *     ATAShimGetMsftId @ 0x1400C4C30 (ATAShimGetMsftId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaTrimString(unsigned int a1, unsigned __int16 *a2, struct _STRING *a3)
{
  unsigned int v3; // ebx
  int v7; // esi
  __int64 v8; // rbp
  __int64 v9; // r14
  int i; // ebp
  int v11; // ebp
  __int64 v12; // r14
  const char *Pool2; // r8
  unsigned __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rdx
  char v17; // r9
  char *v18; // rcx

  v3 = 0;
  if ( *a2 )
  {
    v7 = 0;
    v8 = 0LL;
    do
    {
      if ( !isspace(*(char *)(*((_QWORD *)a2 + 1) + v8)) )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < *a2 );
    v9 = *a2;
    for ( i = *a2 - 1; --v9 >= 0 && isspace(*(char *)(v9 + *((_QWORD *)a2 + 1))); --i )
      ;
    if ( v7 <= i )
    {
      v11 = i - v7;
      v12 = v11 + 2;
      Pool2 = (const char *)ExAllocatePool2(64LL, v12, a1);
      if ( Pool2 )
      {
        if ( (unsigned __int64)(v12 - 1) <= 0x7FFFFFFE )
        {
          v14 = v11 + 1LL;
          if ( v14 > 0x7FFFFFFE )
          {
            *Pool2 = 0;
          }
          else
          {
            v15 = (char *)Pool2;
            v16 = *((_QWORD *)a2 + 1) + v7 - (_QWORD)Pool2;
            do
            {
              if ( !v14 )
                break;
              v17 = v15[v16];
              if ( !v17 )
                break;
              *v15 = v17;
              --v14;
              ++v15;
              --v12;
            }
            while ( v12 );
            v18 = v15 - 1;
            if ( v12 )
              v18 = v15;
            *v18 = 0;
          }
        }
        RtlInitAnsiString(a3, Pool2);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v3;
}
