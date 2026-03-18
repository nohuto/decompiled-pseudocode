/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1400A8350
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  struct SCAN *pScan; // rax
  int v6; // r8d
  struct SCAN *v7; // rdx
  __int64 v8; // r10
  LONG *v9; // rax
  unsigned __int64 v10; // rcx

  v3 = *(_QWORD *)this + 24LL;
  v4 = v3 & -(__int64)(*(_QWORD *)this != 0LL);
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 80LL))(v3 & -(__int64)(*(_QWORD *)this != 0LL));
  if ( a2->left < *(_DWORD *)((v3 & -(__int64)(*(_QWORD *)this != 0LL)) + 0x24)
    && a2->right > *(_DWORD *)((v3 & -(__int64)(*(_QWORD *)this != 0LL)) + 0x1C)
    && a2->top < *(_DWORD *)((v3 & -(__int64)(*(_QWORD *)this != 0LL)) + 0x28)
    && a2->bottom > *(_DWORD *)((v3 & -(__int64)(*(_QWORD *)this != 0LL)) + 0x20) )
  {
    pScan = REGION_CORE::get_pScan((REGION_CORE *)(v3 & -(__int64)(*(_QWORD *)this != 0LL)));
    v6 = *(_DWORD *)(v4 + 24);
    v7 = pScan;
    if ( v6 )
    {
      do
      {
        if ( a2->top < *((_DWORD *)v7 + 2) )
          break;
        v7 = (struct SCAN *)((char *)v7 + (unsigned int)(4 * *(_DWORD *)v7 + 16));
        --v6;
      }
      while ( v6 );
      while ( v6 && a2->bottom > *((_DWORD *)v7 + 1) )
      {
        v8 = *(unsigned int *)v7;
        v9 = (LONG *)((char *)v7 + 12);
        v10 = (unsigned __int64)v7 + 4 * v8 + 12;
        if ( (unsigned __int64)v7 + 12 < v10 )
        {
          while ( a2->left >= v9[1] )
          {
            v9 += 2;
            if ( (unsigned __int64)v9 >= v10 )
              goto LABEL_15;
          }
          if ( a2->right > *v9 )
            return 2LL;
        }
LABEL_15:
        v7 = (struct SCAN *)((char *)v7 + (unsigned int)(4 * v8 + 16));
        --v6;
      }
    }
  }
  return 1LL;
}
