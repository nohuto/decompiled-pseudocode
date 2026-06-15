/*
 * XREFs of ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180028D64
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002E7BC (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18002ED8C (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSecurityDesc::MakeSelfRelative(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rax
  void *v5; // rdi
  int Error; // ebx
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+48h] [rbp+10h] BYREF
  DWORD v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v9 = 0;
    v7 = 0;
    if ( !GetSecurityDescriptorControl(v2, (PSECURITY_DESCRIPTOR_CONTROL)&v7, &v9) )
      ATL::AtlThrowImpl(-2147467259);
    if ( v7 >= 0 )
    {
      v3 = (void *)*((_QWORD *)this + 1);
      dwBufferLength = 0;
      MakeSelfRelativeSD(v3, 0LL, &dwBufferLength);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v4 = malloc(dwBufferLength);
      v5 = v4;
      if ( !v4 )
        ATL::AtlThrowImpl(-2147024882);
      if ( !MakeSelfRelativeSD(*((PSECURITY_DESCRIPTOR *)this + 1), v4, &dwBufferLength) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v5);
        ATL::AtlThrowImpl(Error);
      }
      (*(void (__fastcall **)(ATL::CSecurityDesc *))(*(_QWORD *)this + 8LL))(this);
      *((_QWORD *)this + 1) = v5;
    }
  }
}
