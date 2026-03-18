/*
 * XREFs of ?UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x140041B04
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1400206F4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     <none>
 */

void __fastcall CompositionSurfaceObject::UpdateStatsForIndependentFlip(
        CompositionSurfaceObject *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3,
        int a4)
{
  char *v5; // rbx
  __int64 *i; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1

  v5 = (char *)this + 48;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = PsGetCurrentThreadId();
  if ( *((_DWORD *)this + 40) )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 18); i != (__int64 *)((char *)this + 144); i = (__int64 *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        v10 = *(_OWORD *)a3;
        *((_BYTE *)i + 18) = 1;
        v11 = *((_OWORD *)a3 + 1);
        *((_DWORD *)i + 44) = 0;
        *((_OWORD *)i + 12) = v10;
        *((_DWORD *)i + 46) = a4;
        *((_OWORD *)i + 13) = v11;
        *((_DWORD *)i + 56) = 2;
        break;
      }
    }
  }
  if ( PsGetCurrentThreadId() == *((HANDLE *)v5 + 1) )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v5, 0LL);
  }
  KeLeaveCriticalRegion();
}
