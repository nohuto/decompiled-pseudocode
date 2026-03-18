/*
 * XREFs of ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2274
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B2384 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B23D4 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 */

void __fastcall UmfdEscEngUnmapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2, __int64 a3)
{
  struct W32_PUSH_LOCK *v4; // rbx
  ULONG_PTR v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  NSInstrumentation::CPrioritizedWriterLock *v10; // rsi
  unsigned int v11; // edi
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  char v16; // di
  __int64 v17; // rdx

  v4 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24248LL);
  GreAcquirePushLockShared(v4);
  v5 = 0LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6, v8) + 96);
  v10 = *(NSInstrumentation::CPrioritizedWriterLock **)(v9 + 24168);
  if ( v10 )
  {
    v11 = *((_DWORD *)a1 + 2);
    NSInstrumentation::CPrioritizedWriterLock::AcquireShared(*(NSInstrumentation::CPrioritizedWriterLock **)(v9 + 24168));
    v12 = *((_QWORD *)v10 + 5);
    if ( !v12 )
      goto LABEL_8;
    v13 = *((_QWORD *)v10 + 6);
    v14 = 0LL;
    v15 = *((_QWORD *)v10 + 5);
    do
    {
      if ( *(_DWORD *)(v13 + 16 * ((v15 >> 1) + v14)) < v11 )
      {
        v14 += (v15 >> 1) + 1;
        v15 += -1LL - (v15 >> 1);
      }
      else
      {
        v15 >>= 1;
      }
    }
    while ( v15 );
    if ( v14 < v12 && (v17 = v13 + 16 * v14, *(_DWORD *)v17 == v11) && v17 )
    {
      v5 = *(_QWORD *)(v17 + 8);
      v16 = 1;
    }
    else
    {
LABEL_8:
      v16 = 0;
    }
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v10);
    if ( v16 )
      EngUnmapFontFileFD(v5);
  }
  if ( v4 )
    GreReleasePushLockShared(v4);
}
