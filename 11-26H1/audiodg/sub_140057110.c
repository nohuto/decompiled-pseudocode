/*
 * XREFs of sub_140057110 @ 0x140057110
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140057110(__int64 a1, int a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
  v12 = v6;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *(_DWORD *)(a1 - 8 + 256) )
    {
      if ( a2 != 4 || *(_DWORD *)(a1 + 296) )
      {
        v10 = sub_140024510(*(_QWORD *)(a1 + 152) + 16LL, v7);
        v8 = sub_1400B6010(**(_QWORD **)(*(_QWORD *)v10 + 32LL));
        if ( v8 >= 0 )
        {
          v8 = sub_1400B6010(0LL);
          sub_1400B6010(0LL);
        }
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 112) )
        {
          v9 = sub_140049338(72LL, (__int64)&unk_1400C75FC);
          if ( !v9 )
          {
            v8 = -2147024882;
            goto LABEL_14;
          }
          *(_QWORD *)v9 = off_1400BB1E8;
          *(_QWORD *)(v9 + 8) = a1 - 8;
          *(_QWORD *)(v9 + 16) = 0LL;
          *(_QWORD *)(v9 + 24) = 0LL;
          *(_QWORD *)(v9 + 32) = 0LL;
          *(_QWORD *)(v9 + 40) = 0LL;
          *(_QWORD *)(v9 + 48) = 0LL;
          *(_DWORD *)(v9 + 56) = 10;
          *(_DWORD *)(v9 + 64) = 0;
          *(_QWORD *)(a1 + 112) = v9;
        }
        v8 = sub_1400B6010(*(_QWORD *)(a1 + 112));
      }
    }
    else
    {
      v8 = -2005139437;
    }
  }
  else
  {
    v8 = -2147467261;
  }
LABEL_14:
  sub_140018FF0(&v12);
  return (unsigned int)v8;
}
