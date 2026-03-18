/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18000FA10
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     _CBrushDrawListGenerator::GenerateDrawListWorker_::_22_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x18018AC70 (_CBrushDrawListGenerator--GenerateDrawListWorker_--_22_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int i; // ebp
  __int64 v3; // rcx
  int DrawListPrimitive; // eax
  unsigned int v5; // ebx
  _QWORD *v7; // rdx
  int v8; // esi
  char *v9; // r14
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ebp

  for ( i = *((_DWORD *)a1 + 46); i < *((_DWORD *)a1 + 44); ++i )
  {
    v3 = *((_QWORD *)a1 + i + 17);
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 3LL) )
      break;
  }
  if ( i == *((_DWORD *)a1 + 44) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(*(CBrushDrawListGenerator **)a1, a1);
    v5 = DrawListPrimitive;
    if ( DrawListPrimitive >= 0 )
      return 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0x166u, 0LL);
    return v5;
  }
  else
  {
    v7 = *(_QWORD **)a1;
    v8 = *((_DWORD *)a1 + 46);
    v9 = (char *)a1 + 8 * i;
    v10 = *((_QWORD *)v9 + 17);
    *((_DWORD *)a1 + 46) = i;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v10 + 32LL))(
            v10,
            *v7,
            &CBrushDrawListGenerator::GenerateDrawListWorker_::_22_::_lambda_1_::_lambda_invoker_cdecl_,
            a1);
    *((_QWORD *)v9 + 17) = v10;
    v12 = v11;
    *((_DWORD *)a1 + 46) = v8;
    if ( v11 >= 0 )
      return 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1A6u, 0LL);
    return v12;
  }
}
