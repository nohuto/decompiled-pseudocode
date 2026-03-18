/*
 * XREFs of ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1401609D8
 * Callers:
 *     NtUserSetDesktopVisualInputSink @ 0x1401BF950 (NtUserSetDesktopVisualInputSink.c)
 *     ?UnInitialize@CDesktopInputSink@@SAXXZ @ 0x1402136C8 (-UnInitialize@CDesktopInputSink@@SAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Clear@CDesktopInputSink@@AEAA?AU_LUID@@XZ @ 0x14019F968 (-Clear@CDesktopInputSink@@AEAA-AU_LUID@@XZ.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x140213544 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x14023DA94 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x14023E0E0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 */

bool __fastcall CDesktopInputSink::SetDesktopInputSink(void *a1, const struct _LUID *a2)
{
  bool v4; // bp
  void *v5; // rdi
  CPushLock *v6; // rsi
  struct _LUID v7; // rbx
  struct _LUID v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  v5 = 0LL;
  v6 = *(CPushLock **)(W32GetUserSessionState(a1, a2) + 19128);
  CPushLock::AcquireLockExclusive(v6);
  v7 = **(struct _LUID **)&CDesktopInputSink::Clear(v6);
  v9 = v7;
  if ( a1 )
  {
    v4 = CDesktopInputSink::Set(v6, a1, a2);
    if ( v4 )
    {
      v5 = (void *)*((_QWORD *)v6 + 2);
      ObReferenceObjectByPointer(v5, 3u, ExCompositionObjectType, 0);
    }
  }
  CPushLock::ReleaseLock(v6);
  if ( v7.LowPart || v9.HighPart )
    InputObjectMap::RemoveMapping(&v9, 1LL);
  if ( v5 )
  {
    InputObjectMap::AddMapping(a2, (const struct CompositionInputObject *)v5);
    ObfDereferenceObject(v5);
  }
  return v4;
}
