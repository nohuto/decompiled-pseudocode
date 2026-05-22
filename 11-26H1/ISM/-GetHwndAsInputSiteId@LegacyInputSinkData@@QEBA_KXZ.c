/*
 * XREFs of ?GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ @ 0x18002DBE0
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18002D8CC (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180099060 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

unsigned __int64 __fastcall LegacyInputSinkData::GetHwndAsInputSiteId(LegacyInputSinkData *this)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int v4; // ecx
  const char **i; // r14
  __int64 v6; // rbx
  bool v7; // cl
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  const char *v11[2]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v12; // [rsp+38h] [rbp-49h] BYREF
  __int128 v13; // [rsp+48h] [rbp-39h]
  __int128 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+68h] [rbp-19h]
  _BYTE v16[64]; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  LODWORD(v1) = 0;
  v3 = 0LL;
  v4 = 1;
  do
    *((_DWORD *)v11 + v3++) = v4++;
  while ( v3 < 4 );
  for ( i = v11; i != (const char **)&v12; i = (const char **)((char *)i + 4) )
  {
    switch ( *(_DWORD *)i )
    {
      case 1:
        v6 = (unsigned int)(*(_DWORD *)i - 1 + 40);
        break;
      case 2:
        v6 = 104LL;
        break;
      case 3:
        v6 = 168LL;
        break;
      case 4:
        v6 = 232LL;
        break;
      case 5:
        v6 = 296LL;
        break;
      default:
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0xB7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
          "Invalid input type provided.",
          v11[0]);
    }
    v7 = *((_BYTE *)this + v6 + 56) == 0;
    if ( *(_DWORD *)i == 5 )
      v7 = 1;
    if ( v7 )
    {
      v12 = 0LL;
      v15 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      memset_0(v16, 0, sizeof(v16));
      if ( *((_BYTE *)this + 8) > 1u )
        std::_Throw_bad_variant_access();
      NtQueryCompositionInputQueueAndTransform(*(_QWORD *)this, *(unsigned int *)i, &v12, v16);
      v8 = v13;
      *(_OWORD *)((char *)this + v6) = v12;
      v9 = v14;
      *(_OWORD *)((char *)this + v6 + 16) = v8;
      *(_QWORD *)&v8 = v15;
      *(_OWORD *)((char *)this + v6 + 32) = v9;
      *(_QWORD *)((char *)this + v6 + 48) = v8;
      if ( !*((_BYTE *)this + v6 + 56) )
        *((_BYTE *)this + v6 + 56) = 1;
    }
    else if ( !*((_BYTE *)this + v6 + 56) )
    {
      std::_Throw_bad_optional_access();
    }
    if ( *(_DWORD *)((char *)this + v6) == 2 || *(_DWORD *)((char *)this + v6) == 3 )
      return (unsigned int)*(_QWORD *)((char *)this + v6 + 8);
  }
  return (unsigned int)v1;
}
