/*
 * XREFs of SeCaptureAtomTableCallout @ 0x1404AEFD4
 * Callers:
 *     PsConvertToGuiThread @ 0x1409FC500 (PsConvertToGuiThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

LONG_PTR SeCaptureAtomTableCallout()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v4; // rax
  signed __int64 v5; // r8
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  signed __int64 v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v7) = 0;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v1 = PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &v10, &v8, &v9, 0LL);
  v2 = (_QWORD *)v1;
  if ( (*(_DWORD *)(v1 + 200) & 0x4000) != 0 && !*(_QWORD *)(*(_QWORD *)(v1 + 1080) + 48LL) )
  {
    v4 = CurrentThread->ApcState.Process[1].Padding[3];
    if ( !v4 || (*(_DWORD *)(v4 + 544) & 0x20) == 0 )
    {
      v7 = 0LL;
      v6 = 0LL;
      PsInvokeWin32Callout(2LL, &v6, 0LL, 0LL);
      v5 = v7;
      if ( v7 && !_InterlockedCompareExchange64((volatile signed __int64 *)(v2[135] + 48LL), v7, 0LL) )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 4));
    }
  }
  return ObfDereferenceObjectWithTag(v2, 0x74726853u);
}
