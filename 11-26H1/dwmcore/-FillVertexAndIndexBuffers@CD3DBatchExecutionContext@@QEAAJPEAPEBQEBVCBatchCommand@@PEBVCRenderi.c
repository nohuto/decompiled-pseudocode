/*
 * XREFs of ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x180170530
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18025F064 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
        CD3DBatchExecutionContext *this,
        const struct CBatchCommand *const **a2,
        const struct CRenderingEffect *a3)
{
  const struct CRenderingEffect *v3; // r9
  unsigned int v6; // edi
  __int64 v7; // rsi
  _QWORD *v8; // r15
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int i; // ebx
  int v14; // eax

  v3 = a3;
  v6 = 0;
  if ( a3 )
  {
    v7 = *((_QWORD *)this + 6);
    v8 = *a2;
    if ( v7 )
    {
      for ( i = 0; i < *(_DWORD *)(v7 + 24); ++i )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, CD3DBatchExecutionContext *, _QWORD, const struct CRenderingEffect *))(**(_QWORD **)(v7 + 8) + 40LL))(
                *(_QWORD *)(v7 + 8),
                this,
                v8[i + 1],
                v3);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x53u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1B2u, 0LL);
          break;
        }
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, _QWORD))(*(_QWORD *)a3 + 40LL))(
             a3,
             this,
             *v8);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1B7u, 0LL);
    }
  }
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 + 24);
    dword_1803DE344 += v11;
    ++dword_1803DE340;
    *a2 += v11;
    *((_QWORD *)this + 6) = 0LL;
  }
  return v6;
}
