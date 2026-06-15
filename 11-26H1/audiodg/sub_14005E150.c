/*
 * XREFs of sub_14005E150 @ 0x14005E150
 * Callers:
 *     <none>
 * Callees:
 *     sub_14005E0E8 @ 0x14005E0E8 (sub_14005E0E8.c)
 *     sub_14005E544 @ 0x14005E544 (sub_14005E544.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005E150(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( a2 )
    {
      return 2147746064LL;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 72) )
      {
        v6 = (_QWORD *)(a1 + 80);
        if ( !*(_QWORD *)(a1 + 80) )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
          if ( !*(_DWORD *)(a1 + 72) && !*v6 )
          {
            v10 = 0LL;
            v7 = sub_14005E544(&v10);
            *(_DWORD *)(a1 + 72) = v7;
            if ( v7 >= 0 )
            {
              v8 = v10;
              v9 = sub_1400B6010(v10);
              *(_DWORD *)(a1 + 72) = v9;
              if ( v9 < 0 )
                sub_14005E0E8(v8);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
        }
      }
      result = *(unsigned int *)(a1 + 72);
      if ( !(_DWORD)result )
        return sub_1400B6010(*(_QWORD *)(a1 + 80));
    }
  }
  return result;
}
