/*
 * XREFs of ?GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180512F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804BF800 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CoverWindowAcc::GetPropertyValue(CoverWindowAcc *this, int a2, struct tagVARIANT *a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  const unsigned __int16 *v10; // rcx
  int inited; // edi
  __int64 v12; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  __int128 v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+30h] [rbp-40h]
  DOUBLE prgn[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  VariantInit(a3);
  v6 = a2 - 30001;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      a3->vt = 3;
      if ( *((_QWORD *)this + 5) )
        a3->lVal = 50026;
      else
        a3->lVal = 50032;
      return 0LL;
    }
    v8 = v7 - 2;
    if ( v8 )
    {
      v9 = v8 - 6;
      if ( v9 )
      {
        if ( v9 == 6 )
        {
          a3->vt = 11;
          a3->iVal = 0;
        }
        return 0LL;
      }
      v10 = &LocaleName;
      if ( *((_QWORD *)this + 9) )
        v10 = (const unsigned __int16 *)*((_QWORD *)this + 9);
      inited = InitVariantFromString(v10, a3);
      if ( inited >= 0 )
        return 0LL;
      v12 = 147LL;
    }
    else
    {
      inited = InitVariantFromString(&LocaleName, a3);
      if ( inited >= 0 )
        return 0LL;
      v12 = 151LL;
    }
    goto LABEL_21;
  }
  v14 = *((_QWORD *)this + 1);
  v17 = 0LL;
  v18 = 0LL;
  v15 = (*(__int64 (__fastcall **)(char *, __int128 *))(v14 + 40))((char *)this + 8, &v17);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v15);
    return v16;
  }
  *(_OWORD *)prgn = v17;
  v20 = v18;
  inited = InitVariantFromDoubleArray(prgn, 4u, a3);
  if ( inited < 0 )
  {
    v12 = 176LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)inited);
  }
  return (unsigned int)inited;
}
