/*
 * XREFs of NtDCompositionGetTargetStatistics @ 0x1400A9080
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1400A8B4C (-QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCO.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetTargetStatistics(void *Src, void *a2, void *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rsi
  DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned __int64 v9; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-C8h]
  __int128 v11; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B0h]
  int v13; // [rsp+50h] [rbp-A8h]
  __int128 v14; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-90h]
  int v16; // [rsp+70h] [rbp-88h]
  _BYTE Srca[80]; // [rsp+80h] [rbp-78h] BYREF

  v5 = 0;
  v6 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( Src && a2 )
  {
    v9 = 0LL;
    RtlCopyFromUser(&v9, Src, 8uLL);
    v6 = v9;
    v10 = v9;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0;
    RtlCopyFromUser(&v11, a2, 0x1CuLL);
    v14 = v11;
    v15 = v12;
    v16 = v13;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( DefaultConnection )
    {
      memset(Srca, 0, 0x48uLL);
      if ( DirectComposition::CConnection::QueryTargetStats(
             DefaultConnection,
             v6,
             (const struct tagCOMPOSITION_TARGET_ID *)&v14,
             (struct tagCOMPOSITION_TARGET_STATS *)Srca) )
      {
        RtlCopyToUser(a3, Srca, 0x48uLL);
      }
      else
      {
        v5 = -1073741275;
      }
      DirectComposition::CConnection::Release(DefaultConnection);
    }
    else
    {
      v5 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v5;
}
