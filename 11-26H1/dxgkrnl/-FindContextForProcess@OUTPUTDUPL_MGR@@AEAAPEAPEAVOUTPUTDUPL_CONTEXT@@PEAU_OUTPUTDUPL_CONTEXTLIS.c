/*
 * XREFs of ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x14036B6E4
 * Callers:
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1401ED1DC (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x14036B408 (-GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x14036B558 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x14040F02C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct OUTPUTDUPL_CONTEXT **__fastcall OUTPUTDUPL_MGR::FindContextForProcess(
        OUTPUTDUPL_MGR *this,
        struct _OUTPUTDUPL_CONTEXTLIST *a2,
        struct _EPROCESS *a3,
        unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rsi
  unsigned int i; // edi
  __int64 CurrentProcess; // rax
  bool v12; // zf

  if ( !DXGFASTMUTEX::IsOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1735;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContextList->Mutex.IsOwner()", 1735LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a4 )
    *a4 = -1;
  v9 = (__int64 *)*((_QWORD *)a2 + 6);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 2) )
      return 0LL;
    if ( *v9 )
    {
      CurrentProcess = PsGetCurrentProcess(v8);
      v8 = *v9;
      v12 = *(_QWORD *)(*v9 + 24) == CurrentProcess;
    }
    else
    {
      v12 = a3 == 0LL;
    }
    if ( v12 )
      break;
    ++v9;
  }
  if ( a4 )
    *a4 = i;
  return (struct OUTPUTDUPL_CONTEXT **)v9;
}
