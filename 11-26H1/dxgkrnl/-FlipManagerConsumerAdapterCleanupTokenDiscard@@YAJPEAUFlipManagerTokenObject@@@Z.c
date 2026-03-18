/*
 * XREFs of ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x14006BD58
 * Callers:
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1400614C4 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     DxgkCleanupPresentHistoryInternal @ 0x140414260 (DxgkCleanupPresentHistoryInternal.c)
 * Callees:
 *     ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x140022CCC (-UnlockAndRelease@CFlipManagerToken@@QEAAXXZ.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x140022CFC (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1400A42B4 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 */

__int64 __fastcall FlipManagerConsumerAdapterCleanupTokenDiscard(char *Object)
{
  int v2; // edi
  CFlipManagerToken *v3; // rbx
  CFlipManagerToken *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = FlipManagerTokenObject::LockForWrite(Object, &v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    v2 = FlipManagerObject::NotifyAdapterCleanupTokenDiscard(*((FlipManagerObject **)v5 + 11), *((_QWORD *)v5 + 12));
    CFlipManagerToken::UnlockAndRelease(v3);
  }
  ObfDereferenceObject(Object);
  return (unsigned int)v2;
}
