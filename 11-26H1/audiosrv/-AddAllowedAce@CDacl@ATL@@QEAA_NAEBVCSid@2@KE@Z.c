/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x1800730D8
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180072AF0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x180042A48 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x1800731C4 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800AFB80 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, unsigned int a3)
{
  ATL::CDacl *v5; // rbx
  bool result; // al
  ATL::CDacl::CAccessAce *v7; // rax
  unsigned __int8 v8; // r9
  bool v9; // [rsp+20h] [rbp-28h]
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = this;
  result = ATL::CSid::IsValid(a2);
  if ( result )
  {
    if ( *((_BYTE *)v5 + 16) )
    {
      (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)v5 + 16LL))(v5);
      *((_BYTE *)v5 + 16) = 0;
    }
    v10[0] = 0LL;
    v7 = (ATL::CDacl::CAccessAce *)operator new(0x98uLL);
    try
    {
      v10[1] = v7;
      if ( v7 )
        v7 = (ATL::CDacl::CAccessAce *)ATL::CDacl::CAccessAce::CAccessAce(v7, a2, a3, v8, v9);
      v10[0] = v7;
    }
    catch ( ... )
    {
      v5 = this;
      v7 = (ATL::CDacl::CAccessAce *)v10[0];
    }
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (char *)v5 + 24,
      v10);
    free(*((void **)v5 + 1));
    *((_QWORD *)v5 + 1) = 0LL;
    if ( v10[0] )
      (**(void (__fastcall ***)(_QWORD, __int64))v10[0])(v10[0], 1LL);
    return 1;
  }
  return result;
}
