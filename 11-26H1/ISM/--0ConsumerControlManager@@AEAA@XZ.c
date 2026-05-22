/*
 * XREFs of ??0ConsumerControlManager@@AEAA@XZ @ 0x1800E4F50
 * Callers:
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E51E4 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 * Callees:
 *     ??0?$atomic@PEAX@std@@QEAA@QEAX@Z @ 0x1800683C4 (--0-$atomic@PEAX@std@@QEAA@QEAX@Z.c)
 */

ConsumerControlManager *__fastcall ConsumerControlManager::ConsumerControlManager(ConsumerControlManager *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  ConsumerControlManager *result; // rax

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &ConsumerControlManager::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 11) = 0LL;
  std::atomic<void *>::atomic<void *>((__int64)this + 96, 0LL);
  *(_BYTE *)(v1 + 104) = v2;
  result = (ConsumerControlManager *)v1;
  *(_QWORD *)(v1 + 112) = v2;
  *(_QWORD *)(v1 + 120) = v2;
  *(_QWORD *)(v1 + 128) = v2;
  return result;
}
