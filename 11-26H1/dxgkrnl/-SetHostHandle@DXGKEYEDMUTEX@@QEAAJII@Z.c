/*
 * XREFs of ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1401FE66C
 * Callers:
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140230F54 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::SetHostHandle(DXGKEYEDMUTEX *this, int a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  v6 = operator new(0x18uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 20) = a3;
    DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
    v8 = (_QWORD *)((char *)this + 40);
    v9 = *((_QWORD *)this + 5);
    if ( *(DXGKEYEDMUTEX **)(v9 + 8) != (DXGKEYEDMUTEX *)((char *)this + 40) )
      __fastfail(3u);
    *v7 = v9;
    v7[1] = v8;
    *(_QWORD *)(v9 + 8) = v7;
    *v8 = v7;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6488;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXG_HOST_HANDLE_MAP",
      6488LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
