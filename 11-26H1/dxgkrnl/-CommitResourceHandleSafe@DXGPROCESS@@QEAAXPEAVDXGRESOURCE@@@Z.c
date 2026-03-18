/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140074670
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned int v9; // eax

  v2 = (char *)this + 248;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 248));
  v5 = *((unsigned int *)a2 + 4);
  v6 = (*((_DWORD *)a2 + 4) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)this + 74) )
  {
    v7 = *((_QWORD *)this + 35);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60)
      && (*(_DWORD *)(v7 + 16 * v6 + 8) & 0x1F) != 0 )
    {
      v8 = 16 * ((v5 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v8 + v7 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)this + 35) + v8 + 8) &= ~0x2000u;
    }
  }
  v9 = (*((_DWORD *)a2 + 4) >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)this + 74) )
    *(_DWORD *)(16LL * v9 + *((_QWORD *)this + 35) + 8) &= ~0x4000u;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
