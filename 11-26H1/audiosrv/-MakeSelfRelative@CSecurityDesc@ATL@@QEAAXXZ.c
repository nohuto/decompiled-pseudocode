/*
 * XREFs of ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180085080
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180072AF0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x18008694C (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800B8D04 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x1800B8D2C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSecurityDesc::MakeSelfRelative(PSECURITY_DESCRIPTOR *this)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  void *v3; // rax
  void *v4; // rdi
  int Error; // ebx
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, (unsigned __int16 *)&v6) )
      ATL::AtlThrowImpl(-2147467259);
    if ( v6 >= 0 )
    {
      v2 = this[1];
      dwBufferLength = 0;
      MakeSelfRelativeSD(v2, 0LL, &dwBufferLength);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v3 = malloc(dwBufferLength);
      v4 = v3;
      if ( !v3 )
        ATL::AtlThrowImpl(-2147024882);
      if ( !MakeSelfRelativeSD(this[1], v3, &dwBufferLength) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v4);
        ATL::AtlThrowImpl(Error);
      }
      (*((void (__fastcall **)(PSECURITY_DESCRIPTOR *))*this + 1))(this);
      this[1] = v4;
    }
  }
}
