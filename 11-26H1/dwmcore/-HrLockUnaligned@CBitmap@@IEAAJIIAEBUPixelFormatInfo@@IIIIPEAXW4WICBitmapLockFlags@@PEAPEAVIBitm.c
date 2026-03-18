/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E2F70
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800E7B00 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800E6210 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800E7024 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800E8278 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x18022535C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // r9d
  __int32 v17; // edi
  CBitmapLock *v18; // rax
  __int64 v19; // rdx
  CProjectedShadowReceiver *v20; // r14
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-68h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (a10 & 2) != 0 )
  {
    v14 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 116));
    v15 = v14;
    if ( v14 < 0 )
    {
      v23 = 492;
LABEL_4:
      v16 = v14;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v23, 0LL);
      return v15;
    }
    v17 = a10 & 1;
  }
  else
  {
    v17 = a10 & 1;
    if ( (a10 & 1) == 0 )
    {
      v15 = -2147024809;
      v16 = -2147024809;
      v23 = 500;
      goto LABEL_19;
    }
    v14 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 116));
    v15 = v14;
    if ( v14 < 0 )
    {
      v23 = 496;
      goto LABEL_4;
    }
  }
  v18 = (CBitmapLock *)DefaultHeap::AllocClear(0x98uLL);
  v20 = v18;
  if ( !v18 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CBitmapLock::CBitmapLock(v18, v19);
  *((_QWORD *)v20 + 13) = 0LL;
  *(_QWORD *)v20 = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBaseT<IBitmapLock,IBitmapLock,CMilObjectDeleter>'};
  *((_QWORD *)v20 + 2) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CProjectedShadowReceiver::AddRef(v20);
  v21 = CBitmapLockUnaligned::HrInit(v20, this, a2, a3, a4, a7, a8, a9, a10, a5, a6);
  v15 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x206u, 0LL);
    if ( (a10 & 2) != 0 )
    {
      *((_DWORD *)this + 29) = 0;
    }
    else if ( v17 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 29);
    }
    (*(void (__fastcall **)(CProjectedShadowReceiver *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  else
  {
    *a11 = v20;
  }
  return v15;
}
