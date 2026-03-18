/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402490FC
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiDxgkDdiStopDevice @ 0x140255B18 (DpiDxgkDdiStopDevice.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x140255BE0 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rcx
  bool IsPostDevice; // r15
  PHYSICAL_ADDRESS *v9; // rbx
  PVOID ContiguousMemory; // rax
  PHYSICAL_ADDRESS *v11; // rcx
  char v12; // al
  __int64 v13; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  int v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+4Ch] [rbp-34h]
  int v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+54h] [rbp-2Ch]
  int v23; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+5Ch] [rbp-24h]
  __int64 v25; // [rsp+60h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = -1073741637;
  v6 = *(_QWORD *)(v2 + 40);
  IsPostDevice = DpiFdoIsPostDevice(a1);
  v9 = (PHYSICAL_ADDRESS *)&xmmword_140169088;
  if ( !IsPostDevice )
    v9 = (PHYSICAL_ADDRESS *)&xmmword_140169130;
  if ( g_OSTestSigningEnabled && *(_BYTE *)(v2 + 2716) && !IsPostDevice && DpiFdoIsMsBddAnchoredDevice(v7) )
  {
    ContiguousMemory = BaseAddress;
    if ( BaseAddress
      || (ContiguousMemory = MmAllocateContiguousMemory(0x300000uLL, (PHYSICAL_ADDRESS)-1LL),
          (BaseAddress = ContiguousMemory) != 0LL) )
    {
      v9->LowPart = 1024;
      v9->HighPart = 768;
      v9[1].LowPart = 4096;
      v9[1].HighPart = 22;
      v9[2] = MmGetPhysicalAddress(ContiguousMemory);
      v9[3].LowPart = dword_1401691D4;
      DpiDxgkDdiStopDevice(v6, *(_QWORD *)(v2 + 48));
      v5 = 0;
    }
  }
  else
  {
    v12 = *(_BYTE *)(v2 + 4040);
    if ( (v12 & 4) != 0 )
    {
      *(_BYTE *)(v2 + 4040) = v12 & 0xFB;
      if ( *(_DWORD *)(v6 + 136) >= 0x3003u )
      {
        if ( *(_QWORD *)(v6 + 736) )
        {
          v9[3].HighPart = 0;
          v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
                 v6,
                 *(_QWORD *)(v2 + 48),
                 (unsigned int)dword_1401691D4,
                 v9);
          if ( v5 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 13420;
            v11 = (PHYSICAL_ADDRESS *)&xmmword_140169098 + 1;
            if ( !IsPostDevice )
              v11 = (PHYSICAL_ADDRESS *)&xmmword_140169140 + 1;
            goto LABEL_11;
          }
          if ( v9->LowPart )
          {
            if ( *(_BYTE *)(v2 + 1153) )
              goto LABEL_10;
            dword_14016921C = 2;
          }
          else
          {
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 13432;
            *(_OWORD *)&v9->LowPart = 0LL;
            *(_OWORD *)&v9[2].LowPart = 0LL;
            v9[3].LowPart = -3;
            dword_14016921C = 0;
          }
          v11 = (PHYSICAL_ADDRESS *)&xmmword_140169098 + 1;
          if ( !IsPostDevice )
            v11 = (PHYSICAL_ADDRESS *)&xmmword_140169140 + 1;
          goto LABEL_24;
        }
      }
    }
  }
LABEL_10:
  v11 = v9 + 3;
  if ( v5 < 0 )
  {
LABEL_11:
    *(_OWORD *)&v9->LowPart = 0LL;
    *(_OWORD *)&v9[2].LowPart = 0LL;
    v11->LowPart = -1;
    memset(&v9[4], 0, 0x80uLL);
    if ( !*(_BYTE *)(v2 + 1153) )
      dword_14016921C = 0;
    goto LABEL_28;
  }
LABEL_24:
  if ( v11->LowPart != dword_1401691D4 )
    memset(&v9[4], 0, 0x80uLL);
LABEL_28:
  if ( DpiFdoIsPostDevice(qword_140169128) )
  {
    *((_OWORD *)&DpGlobals + 55) = *(_OWORD *)((char *)&DpGlobals + 712);
    *((_OWORD *)&DpGlobals + 56) = *(_OWORD *)((char *)&DpGlobals + 728);
    *((_OWORD *)&DpGlobals + 57) = *(_OWORD *)((char *)&DpGlobals + 744);
    *((_OWORD *)&DpGlobals + 58) = *(_OWORD *)((char *)&DpGlobals + 760);
    *((_OWORD *)&DpGlobals + 59) = *(_OWORD *)((char *)&DpGlobals + 776);
    *((_OWORD *)&DpGlobals + 60) = *(_OWORD *)((char *)&DpGlobals + 792);
    *((_OWORD *)&DpGlobals + 61) = *(_OWORD *)((char *)&DpGlobals + 808);
    *((_OWORD *)&DpGlobals + 62) = *(_OWORD *)((char *)&DpGlobals + 824);
    *((_OWORD *)&DpGlobals + 63) = *(_OWORD *)((char *)&DpGlobals + 840);
    *((_OWORD *)&DpGlobals + 64) = *(_OWORD *)((char *)&DpGlobals + 856);
  }
  if ( DpiFdoIsMsBddAnchoredDevice(a1) )
    dword_1401691D0 = 2;
  v16 = 0LL;
  v20 = 0;
  v17 = 0LL;
  v13 = *(_QWORD *)(v2 + 2696);
  v16 = 0LL;
  v24 = 0;
  v25 = v13;
  v15[0] = 30;
  v15[1] = 72;
  v19 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v21 = 98;
  v22 = a2;
  v23 = v5;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, *(_QWORD *)(v2 + 5888));
  return (unsigned int)v5;
}
