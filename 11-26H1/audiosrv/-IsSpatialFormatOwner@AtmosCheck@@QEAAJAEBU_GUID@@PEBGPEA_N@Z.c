/*
 * XREFs of ?IsSpatialFormatOwner@AtmosCheck@@QEAAJAEBU_GUID@@PEBGPEA_N@Z @ 0x180156710
 * Callers:
 *     ?IsSpatialFormatOwner@CPolicyConfig@@UEAAHU_GUID@@PEBG@Z @ 0x18010C140 (-IsSpatialFormatOwner@CPolicyConfig@@UEAAHU_GUID@@PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall AtmosCheck::IsSpatialFormatOwner(
        AtmosCheck *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        bool *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  char *v10; // rbx
  char *v11; // rsi
  const OLECHAR *v12; // rcx
  HRESULT v13; // eax
  unsigned int v14; // edi
  LPCWCH *v15; // rdi
  LPCWCH *v16; // rbx
  GUID pclsid; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0;
  if ( !a3 )
  {
    v7 = -2147024809;
    v8 = 936LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !*((_BYTE *)this + 96) )
  {
    v7 = -2147418113;
    v8 = 937LL;
    goto LABEL_3;
  }
  v10 = (char *)this + 272;
  v11 = (char *)this + 664;
  while ( 1 )
  {
    if ( v10 == v11 )
      return 0LL;
    v12 = (const OLECHAR *)*((_QWORD *)v10 + 3);
    pclsid = 0LL;
    v13 = CLSIDFromString(v12, &pclsid);
    v14 = v13;
    if ( v13 < 0 )
      break;
    if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&a2->Data1 && *(_QWORD *)pclsid.Data4 == *(_QWORD *)a2->Data4 )
    {
      v15 = (LPCWCH *)*((_QWORD *)v10 + 4);
      v16 = (LPCWCH *)*((_QWORD *)v10 + 5);
      if ( v15 != v16 )
      {
        while ( !*v15 || CompareStringOrdinal(*v15, -1, a3, -1, 1) != 2 )
        {
          v15 += 2;
          if ( v15 == v16 )
            return 0LL;
        }
        *a4 = 1;
      }
      return 0LL;
    }
    v10 += 56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3AE,
    (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
