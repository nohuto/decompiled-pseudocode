/*
 * XREFs of ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x18016D470
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18025F064 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetRenderingEffectState(
        CD3DBatchExecutionContext *this,
        const struct CRenderingEffect *a2)
{
  int v4; // r15d
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rdi
  int v8; // edx
  int v9; // r8d
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v4 = 2;
  if ( *((_QWORD *)this + 5) && !*((_BYTE *)this + 72) )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 3) + 304LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      2LL,
      1LL,
      &v13);
    v14 = *(_QWORD *)(*((_QWORD *)this + 3) + 592LL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 2) + 128LL))(
      *((_QWORD *)this + 2),
      1LL,
      1LL,
      &v14);
    *((_BYTE *)this + 72) = 1;
  }
  v5 = (*(__int64 (__fastcall **)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, char *))(*(_QWORD *)a2 + 32LL))(
         a2,
         this,
         (char *)this + 60);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x188u, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v7 + 120) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 552LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 552LL),
        *(_QWORD *)(v7 + 112),
        0LL,
        0LL,
        v7 + 128,
        0,
        0);
      *(_BYTE *)(v7 + 120) = 0;
    }
    v8 = *((_DWORD *)this + 15);
    if ( v8 >= 0 )
    {
      HIDWORD(v13) = 0;
      v9 = v8 & 4;
      LOBYTE(v13) = v9 != 0;
      v14 = v9 != 0;
      *(_DWORD *)((char *)&v13 + 1) = (v8 & 8) != 0;
      v10 = (v8 & 1) == 0;
      BYTE2(v13) = (v8 & 2) != 0;
      v11 = 4LL;
      if ( !v10 )
        v4 = 4;
      HIDWORD(v13) = v4;
      HIDWORD(v14) = v4;
      if ( (v9 != 0) != *((_BYTE *)this + 64) || HIDWORD(v13) != *((_DWORD *)this + 17) )
      {
        if ( HIDWORD(v13) == 2 )
        {
          v11 = v9 != 0 ? 2 : 0;
        }
        else if ( HIDWORD(v13) == 4 )
        {
          v11 = 3LL;
          if ( !v9 )
            v11 = 1LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 136LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v11 + 1536));
        *((_QWORD *)this + 8) = v14;
        *((_BYTE *)this + 73) = 1;
      }
    }
  }
  return v6;
}
