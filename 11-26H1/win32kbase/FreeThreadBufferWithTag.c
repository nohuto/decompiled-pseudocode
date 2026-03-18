/*
 * XREFs of FreeThreadBufferWithTag @ 0x140041C20
 * Callers:
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x140010C50 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 *     FreeTmpBuffer @ 0x1400113B0 (FreeTmpBuffer.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1401646C0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x14017BFA0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?MultiUserGreDeleteXLATE@@YAXXZ @ 0x140186794 (-MultiUserGreDeleteXLATE@@YAXXZ.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B83EC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1400B8AC0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1401B4E50 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 */

void __fastcall FreeThreadBufferWithTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdi
  int v9; // ecx
  _QWORD *v10; // rcx
  int v11; // ecx
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  NSInstrumentation::CPointerHashTable *v14; // rcx
  struct W32_PUSH_LOCK *v15; // rcx
  void *v16; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp+10h]

  v4 = (_QWORD *)(a1 - 32);
  if ( a1 != 32 )
  {
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v4[1] = v4;
    *v4 = v4;
    UserSessionState = W32GetUserSessionState(v6, a2, a3, a4);
    v8 = UserSessionState;
    v17 = v4;
    v9 = *(_DWORD *)(UserSessionState + 72016);
    if ( !v9 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72136));
      goto LABEL_6;
    }
    v11 = v9 - 1;
    if ( !v11 )
    {
      v12 = v4 - 2;
      v13 = *((_DWORD *)v4 - 4);
      _InterlockedIncrement64((volatile signed __int64 *)(UserSessionState + 72136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v12);
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(v8 + 72024),
        (const void *)v13);
      return;
    }
    if ( v11 == 1 )
    {
      v14 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72104);
      if ( v14 )
      {
        if ( ((unsigned __int16)v4 & 0xFFFu) >= 0x10uLL )
        {
          v16 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v14, v4 - 2, &v16) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v8 + 72120));
            _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72152));
            v10 = v4 - 2;
            goto LABEL_7;
          }
        }
      }
      v15 = *(struct W32_PUSH_LOCK **)(v8 + 72112);
      if ( v15 && (v16 = 0LL, (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v15)) )
      {
        NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v8 + 72120));
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72152));
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72136));
      }
LABEL_6:
      v10 = v4;
LABEL_7:
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>(v10);
    }
  }
}
