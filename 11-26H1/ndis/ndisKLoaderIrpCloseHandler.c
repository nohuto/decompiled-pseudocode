/*
 * XREFs of ndisKLoaderIrpCloseHandler @ 0x1400DF208
 * Callers:
 *     ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x14008C490 (-ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ??_GProxyFileObject@@QEAAPEAXI@Z @ 0x140147FF8 (--_GProxyFileObject@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ndisKLoaderIrpCloseHandler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // edx

  v2 = *(_QWORD **)(*(_QWORD *)(a2 + 48) + 24LL);
  if ( !v2 || *(_DWORD *)v2 != 183160574 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 184);
  *(_OWORD *)(v3 - 72) = *(_OWORD *)v3;
  *(_OWORD *)(v3 - 56) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(v3 - 40) = *(_OWORD *)(v3 + 32);
  *(_QWORD *)(v3 - 24) = *(_QWORD *)(v3 + 48);
  *(_BYTE *)(v3 - 69) = 0;
  v4 = IoSynchronousCallDriver(v2[2], a1);
  ProxyFileObject::`scalar deleting destructor'(v2, v5);
  return v4;
}
