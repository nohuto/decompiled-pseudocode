/*
 * XREFs of NtDCompositionGetStatistics @ 0x1400D0800
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x14004F230 (-QueryStats@CConnection@DirectComposition@@QEAA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPO.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetStatistics(void *Src, void *a2, unsigned int a3, __int64 a4, void *a5)
{
  unsigned int v9; // esi
  unsigned int v10; // ecx
  int v11; // ebx
  unsigned __int64 v12; // r12
  struct tagCOMPOSITION_TARGET_ID *v13; // rdi
  DirectComposition::CConnection *DefaultConnection; // r14
  unsigned int v15; // edx
  unsigned int i; // r14d
  unsigned int v19[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-100h]
  void *v22; // [rsp+60h] [rbp-F8h]
  void *v23; // [rsp+68h] [rbp-F0h]
  __int64 v24; // [rsp+70h] [rbp-E8h]
  void *v25; // [rsp+78h] [rbp-E0h]
  __int128 Srca; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-C8h]
  _BYTE v28[112]; // [rsp+A0h] [rbp-B8h] BYREF

  v22 = a2;
  v23 = a2;
  v9 = a3;
  v19[3] = a3;
  v10 = a3;
  v24 = a4;
  v25 = a5;
  v11 = 0;
  v12 = 0LL;
  v21 = 0LL;
  v13 = 0LL;
  v19[2] = 0;
  Srca = 0LL;
  v27 = 0LL;
  *(_QWORD *)v19 = 0LL;
  if ( Src && a2 && (a4 || !a3) )
  {
    v20 = 0LL;
    RtlCopyFromUser(&v20, Src, 8uLL);
    v12 = v20;
    v21 = v20;
    v10 = a3;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( v9 )
    {
      v9 = 256;
      if ( v10 <= 0x100 )
        v9 = a3;
      if ( v9 <= 4 )
      {
        v13 = (struct tagCOMPOSITION_TARGET_ID *)v28;
      }
      else
      {
        v13 = (struct tagCOMPOSITION_TARGET_ID *)Win32AllocPoolImpl(256LL, 28LL * v9, 0x61644344u);
        if ( !v13 )
          v11 = -1073741801;
      }
      *(_QWORD *)&v19[1] = v13;
    }
    if ( v11 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        if ( !DirectComposition::CConnection::QueryStats(
                DefaultConnection,
                v12,
                (struct tagCOMPOSITION_FRAME_STATS *)&Srca,
                v9,
                v13,
                v19) )
          v11 = -1073741275;
        DirectComposition::CConnection::Release(DefaultConnection, v15);
      }
      else
      {
        v11 = -1073741790;
      }
      KeLeaveCriticalRegion();
      if ( v11 >= 0 )
      {
        RtlCopyToUser(v22, &Srca, 0x18uLL);
        if ( a4 )
        {
          for ( i = 0; ; ++i )
          {
            v19[6] = i;
            if ( i >= v9 )
              break;
            RtlCopyToUser((void *)(a4 + 28LL * i), (char *)v13 + 28 * i, 0x1CuLL);
          }
        }
        if ( a5 )
          RtlCopyToUser(a5, v19, 4uLL);
      }
    }
  }
  if ( v13 && v13 != (struct tagCOMPOSITION_TARGET_ID *)v28 )
    GreDeleteFastMutex((char *)v13);
  return (unsigned int)v11;
}
