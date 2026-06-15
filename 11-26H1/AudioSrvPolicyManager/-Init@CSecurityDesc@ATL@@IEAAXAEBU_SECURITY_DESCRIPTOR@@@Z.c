/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18001E4CC
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18002ED8C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  unsigned int v3; // edi
  void *v5; // rax
  __int64 v6; // rdx
  int Error; // ebx
  __int64 v8; // rcx
  void *v9; // rcx
  int v10; // ebx
  WORD pControl; // [rsp+40h] [rbp+8h] BYREF
  size_t Size; // [rsp+48h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  dwRevision = 0;
  LODWORD(Size) = GetSecurityDescriptorLength(a2);
  v5 = malloc((unsigned int)Size);
  *((_QWORD *)this + 1) = v5;
  if ( !v5 )
    ATL::AtlThrowImpl(-2147024882);
  pControl = 0;
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(Error);
  }
  v8 = 0x8000LL;
  if ( (pControl & 0x8000u) != 0 )
  {
    if ( (_DWORD)Size )
    {
      if ( *((_QWORD *)this + 1) )
      {
        v9 = (void *)*((_QWORD *)this + 1);
        if ( a2 )
        {
          memcpy_0(v9, a2, (unsigned int)Size);
          goto LABEL_12;
        }
        memset_0(v9, 0, (unsigned int)Size);
      }
      v3 = 22;
      *(_DWORD *)_o__errno(v8, v6) = 22;
      invalid_parameter_noinfo();
    }
LABEL_12:
    ATL::AtlCrtErrorCheck(v3);
    return;
  }
  if ( !MakeSelfRelativeSD(a2, *((PSECURITY_DESCRIPTOR *)this + 1), (LPDWORD)&Size) )
  {
    v10 = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(v10);
  }
}
