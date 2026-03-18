/*
 * XREFs of NtDCompositionGetTargetStatistics @ 0x1400EFD80
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x14004F378 (-QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCO.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetTargetStatistics(void *Src, void *a2, void *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rsi
  DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned int v8; // edx
  unsigned __int64 v10; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-C8h]
  __int128 v12; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B0h]
  int v14; // [rsp+50h] [rbp-A8h]
  __int128 v15; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-90h]
  int v17; // [rsp+70h] [rbp-88h]
  _BYTE Srca[80]; // [rsp+80h] [rbp-78h] BYREF

  v5 = 0;
  v6 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  if ( Src && a2 )
  {
    v10 = 0LL;
    RtlCopyFromUser(&v10, Src, 8uLL);
    v6 = v10;
    v11 = v10;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    RtlCopyFromUser(&v12, a2, 0x1CuLL);
    v15 = v12;
    v16 = v13;
    v17 = v14;
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
             (const struct tagCOMPOSITION_TARGET_ID *)&v15,
             (struct tagCOMPOSITION_TARGET_STATS *)Srca) )
      {
        RtlCopyToUser(a3, Srca, 0x48uLL);
      }
      else
      {
        v5 = -1073741275;
      }
      DirectComposition::CConnection::Release(DefaultConnection, v8);
    }
    else
    {
      v5 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v5;
}
