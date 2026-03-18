/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x140120010
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _POINTL *a2)
{
  __int64 v3; // r8
  REGION_CORE *v4; // rdi
  unsigned int v5; // ebx
  LONG y; // ecx
  struct SCAN *pScan; // rax
  int v9; // r9d
  struct SCAN *i; // rdx
  LONG v12; // eax
  int v13; // r8d
  __int64 v14; // rcx

  v3 = *(_QWORD *)this + 24LL;
  v4 = (REGION_CORE *)(v3 & -(__int64)(*(_QWORD *)this != 0LL));
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 72LL))(v3 & -(__int64)(*(_QWORD *)this != 0LL));
  }
  else
  {
    if ( a2->x < *(_DWORD *)((v3 & -(__int64)(*(_QWORD *)this != 0LL)) + 0x1C) )
      return 1;
    y = a2->y;
    if ( y >= *((_DWORD *)v4 + 10) || a2->x >= *((_DWORD *)v4 + 9) || y < *((_DWORD *)v4 + 8) )
    {
      return 1;
    }
    else
    {
      v5 = 1;
      pScan = REGION_CORE::get_pScan(v4);
      v9 = *((_DWORD *)v4 + 6);
      for ( i = pScan; v9--; i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
      {
        v12 = a2->y;
        if ( *((_DWORD *)i + 1) > v12 )
          break;
        if ( *((_DWORD *)i + 2) > v12 )
        {
          v13 = 0;
          while ( v13 != *(_DWORD *)i )
          {
            v14 = v13++;
            if ( *((_DWORD *)i + v14 + 3) > a2->x )
              return v5;
            v5 ^= 3u;
          }
        }
      }
    }
  }
  return v5;
}
