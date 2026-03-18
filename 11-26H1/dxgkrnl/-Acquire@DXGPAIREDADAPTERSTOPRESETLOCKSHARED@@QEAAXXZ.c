/*
 * XREFs of ?Acquire@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14003E18C
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Acquire(DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx

  if ( !*((_BYTE *)this + 49) )
  {
    if ( !*((_BYTE *)this + 48) && !*((_BYTE *)this + 40) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 4) + 24LL));
      v2 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 3) = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v2 + 136, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 152));
      *((_BYTE *)this + 40) = 1;
    }
    if ( !*((_BYTE *)this + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
      v3 = *((_QWORD *)this + 1);
      *(_QWORD *)this = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v3 + 136, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 152));
      *((_BYTE *)this + 16) = 1;
    }
    *((_BYTE *)this + 49) = 1;
  }
}
