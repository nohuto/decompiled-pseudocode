/*
 * XREFs of ?Update@RefreshRateInfo@@QEAA_NAEBV1@@Z @ 0x1801CA9CC
 * Callers:
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x18029B1B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x1802A6050 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall RefreshRateInfo::Update(RefreshRateInfo *this, const struct RefreshRateInfo *a2)
{
  bool result; // al
  int v3; // r8d
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // r8d

  result = 0;
  if ( *(_DWORD *)a2 )
  {
    v3 = *((_DWORD *)a2 + 1);
    if ( v3 )
    {
      if ( *(_DWORD *)this != *(_DWORD *)a2 || *((_DWORD *)this + 1) != v3 )
      {
        *(_QWORD *)this = *(_QWORD *)a2;
        result = 1;
      }
      v4 = *((_QWORD *)a2 + 1);
      if ( *((_QWORD *)this + 1) != v4 )
      {
        *((_QWORD *)this + 1) = v4;
        result = 1;
      }
      v5 = *((_QWORD *)a2 + 2);
      if ( *((_QWORD *)this + 2) != v5 )
      {
        *((_QWORD *)this + 2) = v5;
        result = 1;
      }
      v6 = *((_DWORD *)a2 + 6);
      if ( *((_DWORD *)this + 6) == v6 )
      {
        if ( !result )
          return result;
      }
      else
      {
        *((_DWORD *)this + 6) = v6;
        result = 1;
      }
      *((_DWORD *)this + 7) = 0;
      *((_QWORD *)this + 4) = 0LL;
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  return result;
}
