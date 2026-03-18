/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1400CD500
 * Callers:
 *     <none>
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _POINTL *a2)
{
  struct REGION_CORE *v3; // r15
  Win32kRS *v4; // rdi
  LONG y; // ecx
  unsigned int v6; // esi
  struct SCAN *pScan_mut; // rdx
  int v8; // r9d
  LONG v10; // eax
  int v11; // r8d
  __int64 v12; // rcx

  v3 = qword_1402A10B0;
  v4 = (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v3 + 8, 2LL);
    v6 = (*(__int64 (__fastcall **)(Win32kRS *, struct _POINTL *))(*(_QWORD *)v3 + 112LL))(v4, a2);
    ExReleasePushLockSharedEx((char *)v3 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( a2->x < *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x1C) )
      return 1;
    y = a2->y;
    if ( y >= *((_DWORD *)v4 + 10) || a2->x >= *((_DWORD *)v4 + 9) || y < *((_DWORD *)v4 + 8) )
    {
      return 1;
    }
    else
    {
      v6 = (_DWORD)qword_1402A10B0 + 1;
      if ( qword_1402A10B0 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v4, (struct REGION_CORE *)a2);
      else
        pScan_mut = *(struct SCAN **)v4;
      v8 = *((_DWORD *)v4 + 6);
      while ( v8-- )
      {
        v10 = a2->y;
        if ( *((_DWORD *)pScan_mut + 1) > v10 )
          break;
        if ( *((_DWORD *)pScan_mut + 2) > v10 )
        {
          v11 = 0;
          while ( v11 != *(_DWORD *)pScan_mut )
          {
            v12 = v11++;
            if ( *((_DWORD *)pScan_mut + v12 + 3) > a2->x )
              return v6;
            v6 ^= 3u;
          }
        }
        pScan_mut = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
      }
    }
  }
  return v6;
}
