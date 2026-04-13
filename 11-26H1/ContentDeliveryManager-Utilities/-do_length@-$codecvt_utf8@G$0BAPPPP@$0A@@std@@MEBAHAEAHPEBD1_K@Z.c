/*
 * XREFs of ?do_length@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1_K@Z @ 0x18006B440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_length(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int16 v11; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v12[6]; // [rsp+52h] [rbp-1Eh] BYREF
  _BYTE *v13; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+98h] [rbp+28h] BYREF

  v8 = 0LL;
  v15 = *a2;
  while ( v8 < a5 && a3 != a4 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v11 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *, __int64, __int64, __int64 *, __int16 *, _BYTE *, _BYTE **))(*(_QWORD *)a1 + 48LL))(
           a1,
           &v15,
           a3,
           a4,
           &v14,
           &v11,
           v12,
           &v13);
    if ( v9 )
    {
      if ( v9 == 3 )
        return (unsigned int)(a4 + v8 - a3);
      return (unsigned int)v8;
    }
    if ( v13 == v12 )
      ++v8;
    a3 = v14;
  }
  return (unsigned int)v8;
}
