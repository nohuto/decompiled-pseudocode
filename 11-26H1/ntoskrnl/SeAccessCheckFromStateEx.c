/*
 * XREFs of SeAccessCheckFromStateEx @ 0x14047B7C0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 */

bool __fastcall SeAccessCheckFromStateEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        char a8,
        unsigned int *a9,
        int *a10)
{
  int v10; // eax
  __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-18h]
  __int64 v15; // [rsp+78h] [rbp-10h]

  v14 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    v10 = *(_DWORD *)(a3 + 196);
    v12 = a3;
    LODWORD(v13) = v10;
  }
  return SeAccessCheckWithHint(a1, 0, (int *)&v12, 1, a4, a5, a6, a7, a8, a9, a10);
}
