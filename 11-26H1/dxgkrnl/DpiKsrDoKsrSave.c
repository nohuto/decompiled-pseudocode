/*
 * XREFs of DpiKsrDoKsrSave @ 0x140252278
 * Callers:
 *     DpiSriovDetach @ 0x140249E40 (DpiSriovDetach.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x14025124C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpSaveMemoryForHotUpdateCB @ 0x140251E20 (DpSaveMemoryForHotUpdateCB.c)
 */

__int64 DpiKsrDoKsrSave()
{
  int updated; // r14d
  struct _MDL *v1; // rdi
  int v2; // r9d
  PMDL PagesForMdl; // rax
  _DWORD *MappedSystemVa; // rsi
  __int128 v6; // [rsp+58h] [rbp-9h] BYREF
  PVOID BaseAddress[2]; // [rsp+68h] [rbp+7h]
  __int64 v8; // [rsp+78h] [rbp+17h]
  _OWORD v9[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v10; // [rsp+B0h] [rbp+4Fh]

  v6 = 0LL;
  v8 = 0LL;
  updated = 0;
  *(_OWORD *)BaseAddress = 0LL;
  v1 = 0LL;
  DpIterateFdoContexts((int (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v6);
  if ( (int)v8 >= 0 )
  {
    v2 = DWORD2(v6);
    if ( DWORD2(v6) )
    {
      DWORD2(v6) += 29;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v2 + 4124) & 0xFFFFF000, MmCached, 0x24u);
      v1 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          MappedSystemVa = PagesForMdl->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
        BaseAddress[0] = MappedSystemVa;
        if ( MappedSystemVa )
        {
          MappedSystemVa[1] = DWORD1(v6);
          *MappedSystemVa = DWORD2(v6);
          BaseAddress[1] = (char *)MappedSystemVa + 29;
          BaseAddress[0] = (char *)MappedSystemVa + 29;
          DWORD1(v6) = 0;
          DpIterateFdoContexts((int (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v6);
          if ( __PAIR64__(DWORD1(v6), DWORD2(v6)) == *(_QWORD *)MappedSystemVa )
          {
            v9[1] = (unsigned __int64)v1;
            v9[0] = 0LL;
            v10 = 0LL;
            v9[2] = 0LL;
            updated = DpSaveMemoryForHotUpdateCB(0LL, (int *)v9);
            if ( updated < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1175;
            }
          }
        }
        else
        {
          updated = -1073741670;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1139;
        }
      }
      else
      {
        updated = -1073741670;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1129;
      }
    }
  }
  if ( BaseAddress[0] )
    MmUnmapLockedPages(BaseAddress[0], v1);
  if ( (int)v8 >= 0 )
  {
    if ( updated >= 0 )
    {
      LOBYTE(word_140169378) = 1;
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 305637) = 1;
    }
    else
    {
      if ( v1 )
      {
        MmFreePagesFromMdl(v1);
        ExFreePoolWithTag(v1, 0);
      }
      dword_14016938C = updated;
    }
  }
  else
  {
    dword_14016938C = v8;
  }
  return DxgkLogInternalTriageEvent(
           0LL,
           65538,
           -1,
           (__int64)L"KSR Save routine has completed with status %1",
           (int)v8,
           0LL,
           0LL,
           0LL,
           0LL);
}
