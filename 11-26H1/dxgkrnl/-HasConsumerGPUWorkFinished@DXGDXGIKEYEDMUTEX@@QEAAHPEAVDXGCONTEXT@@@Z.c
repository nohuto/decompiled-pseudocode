/*
 * XREFs of ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1402BE088
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B1274 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1402BE124 (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(DXGDXGIKEYEDMUTEX *this, struct DXGCONTEXT *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ecx
  int v6; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 2);
    v4 = *((_DWORD *)this + 24);
    v6 = 0;
    IsFenceObjectSignaled(v4, *(struct DXGPROCESS **)(v3 + 40), a2, &v6);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 710;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Should be called with a non-NULL DXGCONTEXT",
      710LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
