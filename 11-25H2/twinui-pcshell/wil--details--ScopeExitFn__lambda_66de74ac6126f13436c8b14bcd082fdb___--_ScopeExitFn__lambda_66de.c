/*
 * XREFs of wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___ @ 0x1802CC82C
 * Callers:
 *     _CWin32ApplicationView::GetCloakableWindows_::_1_::dtor$1 @ 0x1806A8948 (_CWin32ApplicationView--GetCloakableWindows_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18008C828 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>(*(_QWORD *)a1 + 232LL);
  }
}
