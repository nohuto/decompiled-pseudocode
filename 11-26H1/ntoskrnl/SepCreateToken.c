/*
 * XREFs of SepCreateToken @ 0x140815004
 * Callers:
 *     SeMakeAnonymousLogonToken @ 0x140CDD2F0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CDD570 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CDD7D0 (SeMakeSystemToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 */

__int64 __fastcall SepCreateToken(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        void **a9,
        int a10,
        __int64 a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        void *a15,
        void *a16,
        void *a17)
{
  return SepCreateTokenEx(
           a1,
           0,
           0,
           a4,
           1,
           0,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           "*SYSTEM*",
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           1);
}
