/*
 * XREFs of ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402FAE34
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1403BDB78 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x140412DB8 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 * Callees:
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x140078760 (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(
        DripsBlockerTrackingHelper *this,
        const char *a2,
        struct _EPROCESS *a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  const char *ProcessImageFileName; // rcx
  const CHAR *v9; // rax
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  char *v13; // rcx
  __int64 v14; // rax
  char v15; // r9
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi

  if ( a3 )
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(a3);
  else
    ProcessImageFileName = "ExternalActivation";
  if ( !a4 && a5 || a5 > 0x7FFFFFFFuLL )
  {
    v10 = -1073741811;
    if ( !a5 )
      goto LABEL_32;
    goto LABEL_38;
  }
  v9 = File;
  if ( ProcessImageFileName )
    v9 = ProcessImageFileName;
  v10 = 0;
  if ( a5 )
  {
    v11 = 2147483646LL;
    v12 = a5;
    v13 = a4;
    v14 = v9 - a4;
    do
    {
      if ( !v11 )
        break;
      v15 = v13[v14];
      if ( !v15 )
        break;
      *v13 = v15;
      --v11;
      ++v13;
      --v12;
    }
    while ( v12 );
    v16 = v13 - 1;
    if ( v12 )
      v16 = v13;
    *v16 = 0;
    v10 = v12 == 0 ? 0x80000005 : 0;
  }
  else
  {
    if ( !*v9 )
      goto LABEL_32;
    v10 = a4 != 0LL ? -2147483643 : -1073741811;
  }
  if ( v10 >= 0 )
    goto LABEL_16;
  if ( a5 )
  {
LABEL_38:
    *a4 = 0;
    return (unsigned int)v10;
  }
LABEL_32:
  if ( v10 < 0 )
    return (unsigned int)v10;
LABEL_16:
  if ( !a2 || (v10 = RtlStringCbCatA(a4, a5, "-"), v10 >= 0) && (v10 = RtlStringCbCatA(a4, a5, a2), v10 >= 0) )
  {
    if ( a6 )
    {
      if ( a4 && a5 <= 0x7FFFFFFFuLL )
      {
        v17 = a5;
        if ( a5 )
        {
          do
          {
            if ( !*a4 )
              break;
            ++a4;
            --v17;
          }
          while ( v17 );
        }
        v10 = v17 == 0 ? 0xC000000D : 0;
        if ( v17 )
          v18 = a5 - v17;
        else
          v18 = 0LL;
        if ( v17 )
        {
          *a6 = v18;
          return (unsigned int)v10;
        }
      }
      else
      {
        v10 = -1073741811;
      }
      *a6 = 0LL;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 856;
    }
  }
  return (unsigned int)v10;
}
