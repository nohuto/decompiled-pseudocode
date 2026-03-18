/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1403FEAE8
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403FDED8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(const void **this, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int i; // edi
  unsigned __int64 v5; // rax
  void *v6; // rax
  const void *v7; // rsi
  __int64 result; // rax
  const void **v9; // rcx

  v2 = a2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5623;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SessionMutex.IsOwner()", 5623LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(this + 11)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5624;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ArrayMutex.IsOwner()", 5624LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 2 * *((_DWORD *)this + 20); (unsigned int)v2 >= i; i *= 2 )
    ;
  WdLogSingleEntry3(4LL, *((unsigned int *)this + 20), i, v2);
  WdLogGlobalForLineNumber = 5634;
  v5 = 8LL * i;
  if ( !is_mul_ok(i, 8uLL) )
    v5 = -1LL;
  v6 = (void *)operator new[](v5, 0x4B677844u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, this[6], 8LL * *((unsigned int *)this + 20));
    v9 = (const void **)this[6];
    if ( v9 != this + 7 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    this[6] = v7;
    result = 0LL;
    *((_DWORD *)this + 20) = i;
  }
  else
  {
    *((_DWORD *)this + 37) |= 1u;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 5641;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Unable to allocate new dxg session data array of size 0x%I64x",
      i,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  return result;
}
