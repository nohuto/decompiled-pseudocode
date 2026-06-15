/*
 * XREFs of sub_140060040 @ 0x140060040
 * Callers:
 *     sub_14006B0D0 @ 0x14006B0D0 (sub_14006B0D0.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140060644 @ 0x140060644 (sub_140060644.c)
 *     sub_140060654 @ 0x140060654 (sub_140060654.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140060040(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r14
  __int64 v6; // r12
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+50h] BYREF
  __int64 v15; // [rsp+88h] [rbp+58h] BYREF

  EnterCriticalSection(&stru_1400E86D8);
  v13 = &stru_1400E86D8;
  v5 = (_QWORD *)sub_140060644(v4);
  v6 = sub_140060654();
  v7 = 0;
  while ( v5 != (_QWORD *)v6 )
  {
    if ( *v5 == a1 )
    {
      v15 = 0LL;
      sub_1400125D4(&v15);
      v8 = 0LL;
      v15 = 0LL;
      v9 = v5[1];
      if ( v9 )
      {
        v10 = sub_1400B6010(v9);
        v8 = v15;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 >= 0 && v8 )
      {
        v14 = 0LL;
        sub_1400125D4(&v14);
        if ( (int)sub_1400B6010(v8) >= 0 )
        {
          v11 = v14;
          v14 = 0LL;
          *a2 = v11;
          sub_1400125D4(&v14);
          sub_1400125D4(&v15);
          goto LABEL_15;
        }
        sub_1400125D4(&v14);
      }
      sub_1400125D4(&v15);
    }
    v5 += 2;
  }
  v7 = -2147023728;
LABEL_15:
  sub_140018FF0(&v13);
  return v7;
}
