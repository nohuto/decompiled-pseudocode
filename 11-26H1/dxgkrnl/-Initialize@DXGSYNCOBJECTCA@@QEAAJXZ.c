/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x140401000
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z @ 0x1403517DC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  int v5; // eax

  Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL);
  v3 = 0LL;
  *((_QWORD *)this + 57) = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    v4 = (_QWORD *)(*((_QWORD *)this + 57) + 16LL);
    v4[1] = v4;
    *v4 = v4;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 57) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 57));
    v5 = *((_DWORD *)this + 105);
    if ( v5 == 3 || v5 == 5 )
    {
      v3 = *((_QWORD *)this + 29);
    }
    else if ( v5 == 7 )
    {
      v3 = *((_QWORD *)this + 38);
    }
    *(_QWORD *)(*((_QWORD *)this + 57) + 40LL) = v3;
    *(_QWORD *)(*((_QWORD *)this + 57) + 32LL) = v3;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2224;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
