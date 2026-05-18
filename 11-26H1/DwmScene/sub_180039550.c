/*
 * XREFs of sub_180039550 @ 0x180039550
 * Callers:
 *     sub_180039294 @ 0x180039294 (sub_180039294.c)
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180039384 @ 0x180039384 (sub_180039384.c)
 *     sub_180039C48 @ 0x180039C48 (sub_180039C48.c)
 *     sub_180039D58 @ 0x180039D58 (sub_180039D58.c)
 *     sub_18003A014 @ 0x18003A014 (sub_18003A014.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180039550(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, unsigned __int64))
{
  __int64 *v9; // rbp
  __int64 *v13; // rax
  __int64 *v14; // r8
  __int64 v15; // r12
  __int64 v16; // r15
  bool v17; // zf
  __int64 *v18; // rcx
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]

  if ( a2 != a3 )
  {
    v9 = a3;
    while ( a1 != a2 )
    {
      if ( a8((__int64)a2, (unsigned __int64)a1) )
      {
        v13 = a2 - 2;
        do
        {
          v14 = v9;
          v15 = a5;
          v16 = (__int64)v9;
          --a5;
          v9 -= 2;
          if ( a2 == v9 )
          {
            v19 = *a2;
            v20 = a2[1];
            *a2 = 0LL;
            a2[1] = 0LL;
            sub_18003A014(a1, a2, v14);
            v18 = a1;
LABEL_18:
            sub_180011F5C(v18, &v19);
            if ( v20 )
              sub_180010EC8(v20);
            return;
          }
          v17 = ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, __int64 *))a8)(v9, v13, v14) == 0;
          v13 = a2 - 2;
        }
        while ( v17 );
        if ( a4 == 1 )
        {
          v19 = *a1;
          v20 = a1[1];
          *a1 = 0LL;
          a1[1] = 0LL;
          v18 = (__int64 *)unknown_libname_7(a2, v16, a1);
          goto LABEL_18;
        }
        if ( a4 > v15 || a4 > a7 )
        {
          if ( v15 > a7 )
            sub_180039384((__int64)a1, (__int64)a2, v16, a4, v15, a6, a7, a8);
          else
            sub_180039D58((_DWORD)a1, (_DWORD)a2, v16, a6, (__int64)a8);
        }
        else
        {
          sub_180039C48((_DWORD)a1, (_DWORD)a2, v16, a6, (__int64)a8);
        }
        return;
      }
      a1 += 2;
      --a4;
    }
  }
}
