/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x14039FDC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DxgkThreadCallout(ReferenceCounted **a1, char a2)
{
  struct DXGTHREAD *DxgThread; // rax
  __int64 result; // rax
  ReferenceCounted *v5; // rcx
  ReferenceCounted *v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( a2 != 1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      ReferenceCounted::Release(v5);
      --dword_140168C3C;
      *a1 = 0LL;
    }
    return 0LL;
  }
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v6) >= 0 && (DxgThread = v6) != 0LL
    || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v6 = DxgThread) != 0LL) )
  {
    ++dword_140168C44;
    ++dword_140168C3C;
    _InterlockedIncrement((volatile signed __int32 *)DxgThread + 2);
    *a1 = v6;
    return 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 464;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to create DXGTHREAD for current thread.",
    464LL,
    0LL,
    0LL,
    0LL,
    0LL);
  result = 3221225495LL;
  *a1 = 0LL;
  return result;
}
