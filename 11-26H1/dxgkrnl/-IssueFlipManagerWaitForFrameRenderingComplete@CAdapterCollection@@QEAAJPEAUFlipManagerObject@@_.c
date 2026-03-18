/*
 * XREFs of ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A1848
 * Callers:
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CTokenManager@@UEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A13D0 (-IssueFlipManagerWaitForFrameRenderingComplete@CTokenManager@@UEAAJPEAUFlipManagerObject@@_KAEBU.c)
 * Callees:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x140037118 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z @ 0x1400A2384 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z.c)
 */

__int64 __fastcall CAdapterCollection::IssueFlipManagerWaitForFrameRenderingComplete(
        CAdapterCollection *this,
        struct FlipManagerObject *a2,
        unsigned __int64 a3,
        const struct _LUID *a4)
{
  CPushLockCriticalSection *v4; // rbp
  _QWORD **v6; // r15
  unsigned int v7; // esi
  _QWORD *i; // rdi

  v4 = (CAdapterCollection *)((char *)this + 40);
  v6 = (_QWORD **)((char *)this + 24);
  v7 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)v4 + 8) = 1;
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    if ( *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x2C)
      && CAdapter::IsDeviceActive((CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)))
      && a4->LowPart == *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x18)
      && a4->HighPart == *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x1C) )
    {
      v7 = CAdapter::IssueFlipManagerWaitForFrameRenderingComplete(
             (CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)),
             a2,
             a3);
      break;
    }
  }
  CPushLockCriticalSection::Release(v4);
  return v7;
}
