/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEA_K@Z @ 0x1400D88F0
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x14020B208 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, unsigned __int64 *a2)
{
  unsigned int v2; // edi
  UMPDOBJ *v5; // rbx
  __int64 v6; // rax
  size_t Size; // [rsp+20h] [rbp-40h]
  UMPDOBJ *v9; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  void *v13; // [rsp+50h] [rbp-10h] BYREF

  v2 = 0;
  *(_WORD *)((char *)v10 + 1) = 0;
  HIBYTE(v10[0]) = 0;
  v11 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v9);
  v5 = v9;
  *(_WORD *)((char *)v10 + 1) = 0;
  HIBYTE(v10[0]) = 0;
  v11 = 0LL;
  if ( v9 )
  {
    if ( a1 )
    {
      v10[1] = 105;
      LOBYTE(v10[0]) = 0;
      v12 = *(_QWORD *)v9;
      v6 = -1LL;
      v13 = a1;
      do
        ++v6;
      while ( a1[v6] );
      if ( (unsigned __int64)(v6 + 1) < 0x7FFFFFFF )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, &v13, 2 * ((int)v6 + 1)) )
        {
          LODWORD(Size) = 8;
          if ( (unsigned int)UMPDOBJ::Thunk(v5, v10, 0x20u, a2, Size) != -1 )
            v2 = 1;
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v9);
  return v2;
}
