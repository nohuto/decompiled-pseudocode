/*
 * XREFs of _CBrushDrawListGenerator::GenerateDrawListWorker_::_22_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x18018AC70
 * Callers:
 *     <none>
 * Callees:
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18000EDA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18000FA10 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker_::_22_::_lambda_1_::_lambda_invoker_cdecl_(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rax
  char v6; // bp
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // eax
  unsigned int DrawListWorker; // ebp
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-28h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 8))(a1, 3LL) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 80LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(a2 + 184) < *(_DWORD *)(a2 + 180) )
      {
        v5 = *a1;
        v6 = 0;
        v16 = 0;
        v15 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v5 + 8))(a1, 2LL) )
        {
          v7 = a1[7];
          *(_QWORD *)&v15 = v7;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          v8 = a1[8];
          *((_QWORD *)&v15 + 1) = v8;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          v6 = *((_BYTE *)a1 + 72);
          v16 = v6;
        }
        else
        {
          v8 = *((_QWORD *)&v15 + 1);
          v7 = v15;
        }
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 16LL))(v4, *(unsigned int *)(a2 + 184));
        if ( v7 )
          v11 = v7 == *(_QWORD *)v9;
        else
          v11 = v8 == *(_QWORD *)(v9 + 8);
        if ( !v11 || v6 != *(_BYTE *)(v9 + 16) )
        {
          v12 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a2 + 8), v10);
          DrawListWorker = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x18Cu, 0LL);
            CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v15);
            return DrawListWorker;
          }
        }
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 184) + 136) = a1;
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2);
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 184) + 136) = 0LL;
  return DrawListWorker;
}
