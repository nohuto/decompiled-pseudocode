/*
 * XREFs of ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Release@CRegion@@UEBAJXZ @ 0x1401287B0 (-Release@CRegion@@UEBAJXZ.c)
 *     ?SetFullRegion@CRegion@@UEAAXXZ @ 0x14014B4C0 (-SetFullRegion@CRegion@@UEAAXXZ.c)
 *     CddEngDeleteRgn @ 0x140183890 (CddEngDeleteRgn.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNCOREOBJ::vDeleteRGNCOREOBJ(char ***this, __int64 a2, __int64 a3, __int64 a4)
{
  char **v5; // rcx
  char *v6; // rcx
  char **v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // rdi
  int v10; // ecx
  char **v11; // rcx
  int v12; // ecx
  char **v13; // rcx
  unsigned int v14; // ebx
  NSInstrumentation::CPointerHashTable *v15; // rcx
  struct W32_PUSH_LOCK *v16; // rcx
  void *v17; // [rsp+40h] [rbp+8h] BYREF
  char **v18; // [rsp+48h] [rbp+10h]

  v5 = *this;
  if ( v5 )
  {
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      (*(void (**)(void))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))();
    }
    else
    {
      v6 = *v5;
      if ( v6 )
        GreDeleteFastMutex(v6, a2, a3, a4);
    }
    v7 = *this;
    if ( !*this )
      goto LABEL_10;
    UserSessionState = W32GetUserSessionState(v6, a2, a3, a4);
    v9 = UserSessionState;
    v18 = v7;
    v10 = *(_DWORD *)(UserSessionState + 72016);
    if ( v10 )
    {
      v12 = v10 - 1;
      if ( !v12 )
      {
        v13 = v7 - 2;
        v14 = *((_DWORD *)v7 - 4);
        _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v13);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v9 + 72024),
          (const void *)v14);
        goto LABEL_10;
      }
      if ( v12 != 1 )
        goto LABEL_10;
      v15 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72104);
      if ( v15 )
      {
        if ( ((unsigned __int16)v7 & 0xFFFu) >= 0x10uLL )
        {
          v17 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v15, v7 - 2, &v17) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v9 + 72120));
            _InterlockedIncrement64((volatile signed __int64 *)(v9 + 72152));
            v11 = v7 - 2;
            goto LABEL_9;
          }
        }
      }
      v16 = *(struct W32_PUSH_LOCK **)(v9 + 72112);
      if ( v16 && (v17 = 0LL, (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v16)) )
      {
        NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v9 + 72120));
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 72152));
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 72136));
      }
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72136));
    }
    v11 = v7;
LABEL_9:
    _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v11);
LABEL_10:
    *this = 0LL;
  }
}
