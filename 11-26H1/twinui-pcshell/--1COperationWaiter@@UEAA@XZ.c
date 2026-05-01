/*
 * XREFs of ??1COperationWaiter@@UEAA@XZ @ 0x1801A825C
 * Callers:
 *     ??_GCOperationWaiter@@UEAAPEAXI@Z @ 0x1801A8220 (--_GCOperationWaiter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 */

void __fastcall COperationWaiter::~COperationWaiter(COperationWaiter *this)
{
  CAutoHandle<void *>::~CAutoHandle<void *>((char *)this + 40);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
