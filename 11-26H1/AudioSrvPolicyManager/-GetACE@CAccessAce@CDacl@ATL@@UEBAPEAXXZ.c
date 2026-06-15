/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180022860
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  char *v1; // rbx
  size_t v4; // rsi
  char *v5; // rax
  __int64 v6; // rax
  DWORD LengthSid; // eax
  __int64 v8; // rdx
  size_t v9; // r14
  size_t v10; // rsi
  void *v11; // rcx

  v1 = (char *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v4 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 16LL))(this);
    v5 = (char *)malloc(v4);
    v1 = v5;
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v5, 0, (unsigned int)v4);
    v1[1] = *((_BYTE *)this + 132);
    v6 = *(_QWORD *)this;
    *((_WORD *)v1 + 1) = v4;
    *v1 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessAce *))(v6 + 24))(this);
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    LengthSid = GetLengthSid((char *)this + 16);
    v9 = v4 - 8;
    v10 = LengthSid;
    v11 = v1 + 8;
    if ( !LengthSid )
      goto LABEL_9;
    if ( v1 == (char *)-8LL )
      goto LABEL_10;
    if ( this != (ATL::CDacl::CAccessAce *)-16LL && v9 >= LengthSid )
    {
      memcpy_0(v11, (char *)this + 16, LengthSid);
LABEL_9:
      *((_QWORD *)this + 17) = v1;
      return v1;
    }
    memset_0(v11, 0, v9);
    if ( this == (ATL::CDacl::CAccessAce *)-16LL )
    {
LABEL_10:
      *(_DWORD *)_o__errno(v11, v8) = 22;
    }
    else
    {
      if ( v9 >= v10 )
LABEL_12:
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)_o__errno(v11, v8) = 34;
    }
    invalid_parameter_noinfo();
    goto LABEL_12;
  }
  return v1;
}
