/*
 * XREFs of ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x14019B544
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 */

void __fastcall DrvSetSharedDevLock(struct _MDEV *a1)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  struct _ERESOURCE *v5; // rcx
  signed __int32 v6; // ett

  for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
  {
    v3 = *(_QWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 7 * i + 5);
    v5 = (struct _ERESOURCE *)v4[6];
    v4[3] = *(_QWORD *)a1;
    if ( v5 != *(struct _ERESOURCE **)(v3 + 48) )
    {
      if ( (v4[5] & 0x10000) == 0 )
      {
        GreDeleteSemaphore(v5);
        _m_prefetchw(v4 + 5);
        do
          v6 = *((_DWORD *)v4 + 10);
        while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 10, v6 | 0x10000, v6) );
      }
      v4[6] = *(_QWORD *)(v3 + 48);
    }
  }
}
