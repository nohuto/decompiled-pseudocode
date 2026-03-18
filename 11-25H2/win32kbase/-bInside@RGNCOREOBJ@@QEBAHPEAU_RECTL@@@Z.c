/*
 * XREFs of ?bInside@RGNCOREOBJ@@QEBAHPEAU_RECTL@@@Z @ 0x1400DC7C0
 * Callers:
 *     CddEngRectInRgn @ 0x1401D29B0 (CddEngRectInRgn.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::bInside(Win32kRS **this, struct _RECTL *a2)
{
  struct REGION_CORE *v2; // r14
  Win32kRS *v4; // rsi
  struct SCAN *v6; // rdx
  unsigned int v7; // edi
  int v9; // r8d
  __int64 v10; // r9
  LONG *v11; // rax
  unsigned __int64 v12; // rcx

  v2 = qword_1402A10B0;
  v4 = *this;
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v7 = (*(__int64 (__fastcall **)(Win32kRS *, struct _RECTL *))(*(_QWORD *)v2 + 120LL))(v4, a2);
    ExReleasePushLockSharedEx((char *)v2 + 8, 2LL);
    KeLeaveCriticalRegion();
    return v7;
  }
  else
  {
    if ( a2->left < *((_DWORD *)v4 + 9)
      && a2->right > *((_DWORD *)v4 + 7)
      && a2->top < *((_DWORD *)v4 + 10)
      && a2->bottom > *((_DWORD *)v4 + 8) )
    {
      v6 = qword_1402A10B0 ? Win32kRS::RegionCore_get_pScan_mut(*this, (struct REGION_CORE *)a2) : *(struct SCAN **)v4;
      v9 = *((_DWORD *)*this + 6);
      if ( v9 )
      {
        do
        {
          if ( a2->top < *((_DWORD *)v6 + 2) )
            break;
          v6 = (struct SCAN *)((char *)v6 + (unsigned int)(4 * *(_DWORD *)v6 + 16));
          --v9;
        }
        while ( v9 );
        while ( v9 && a2->bottom > *((_DWORD *)v6 + 1) )
        {
          v10 = *(unsigned int *)v6;
          v11 = (LONG *)((char *)v6 + 12);
          v12 = (unsigned __int64)v6 + 4 * v10 + 12;
          if ( (unsigned __int64)v6 + 12 < v12 )
          {
            while ( a2->left >= v11[1] )
            {
              v11 += 2;
              if ( (unsigned __int64)v11 >= v12 )
                goto LABEL_22;
            }
            if ( a2->right > *v11 )
              return 2LL;
          }
LABEL_22:
          v6 = (struct SCAN *)((char *)v6 + (unsigned int)(4 * v10 + 16));
          --v9;
        }
      }
    }
    return 1LL;
  }
}
