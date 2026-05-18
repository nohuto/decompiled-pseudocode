/*
 * XREFs of sub_180038320 @ 0x180038320
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180012F84 @ 0x180012F84 (sub_180012F84.c)
 *     sub_18001FA2C @ 0x18001FA2C (sub_18001FA2C.c)
 *     sub_180038300 @ 0x180038300 (sub_180038300.c)
 */

__int64 __fastcall sub_180038320(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  void *v12; // r15
  unsigned __int64 v13; // r12
  char *v14; // r14
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // r8
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    v4 = 0LL;
    if ( sub_18001FA2C(0xFFFF, a2) )
      return sub_180038300(a2);
    v6 = std::wstreambuf::pptr(a1);
    v7 = std::wstreambuf::epptr(a1);
    v8 = v7;
    if ( v6 && v6 < v7 )
    {
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v6 + 2;
      return a2;
    }
    v9 = std::wstreambuf::eback(a1);
    v11 = 32LL;
    v12 = (void *)v9;
    if ( !v6 || (v4 = (__int64)(v8 - v9) >> 1, v4 < 0x20) )
    {
LABEL_13:
      v20 = v11;
      v13 = 2 * v4;
      v14 = (char *)sub_180012F84(v10, &v20);
      memcpy(v14, v12, 2 * v4);
      *(_QWORD *)(a1 + 104) = &v14[2 * v4 + 2];
      std::wstreambuf::setp(a1, v14, &v14[2 * v4], &v14[2 * v11]);
      v15 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v16 = v14;
        v17 = v14;
      }
      else
      {
        v18 = *(char **)(a1 + 104);
        v19 = std::wstreambuf::gptr(a1);
        v16 = v18;
        v15 = a1;
        v17 = &v14[2 * ((v19 - (__int64)v12) >> 1)];
      }
      std::wstreambuf::setg(v15, v14, v17, v16);
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        sub_18000E26C(v12, v13);
      *(_DWORD *)(a1 + 112) |= 1u;
      *(_WORD *)std::wstreambuf::_Pninc(a1) = a2;
      return a2;
    }
    if ( v4 < 0x3FFFFFFF )
    {
      v11 = 2 * v4;
      goto LABEL_13;
    }
    v11 = 0x7FFFFFFFLL;
    if ( v4 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFLL;
}
