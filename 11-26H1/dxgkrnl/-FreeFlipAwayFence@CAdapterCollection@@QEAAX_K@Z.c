/*
 * XREFs of ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x1400A1584
 * Callers:
 *     ?ConfirmFrame@CTokenManager@@UEAAXAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140062F10 (-ConfirmFrame@CTokenManager@@UEAAXAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 * Callees:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x140037118 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x1400A1AF0 (--_GCFlipAwayFence@@QEAAPEAXI@Z.c)
 */

void __fastcall CAdapterCollection::FreeFlipAwayFence(CAdapterCollection *this)
{
  CPushLockCriticalSection *v1; // rsi
  _QWORD **v2; // r14
  _QWORD *i; // rbx
  unsigned int v4; // edx
  CFlipAwayFence *v5; // rcx

  v1 = (CAdapterCollection *)((char *)this + 40);
  v2 = (_QWORD **)((char *)this + 24);
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    if ( *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x2C) )
    {
      if ( CAdapter::IsDeviceActive((CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL))) )
      {
        v5 = *(CFlipAwayFence **)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x68);
        if ( v5 != (CFlipAwayFence *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 104) )
        {
          CFlipAwayFence::`scalar deleting destructor'(v5, v4);
          break;
        }
      }
    }
  }
  CPushLockCriticalSection::Release(v1);
}
