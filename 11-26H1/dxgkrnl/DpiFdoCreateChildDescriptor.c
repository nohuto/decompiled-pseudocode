/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x14023FC98
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x140243508 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoEnumChildDevices @ 0x1404290E4 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x140193AF0 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x14042C81C (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, int *a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  char *Pool2; // rax
  char *v12; // rdi
  int v13; // eax
  __int16 v14; // dx
  struct _KMUTANT *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  _QWORD *v18; // rdi
  _QWORD *v19; // rdx

  v6 = 0;
  if ( a3 || *a4 == 1 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 128LL, 1953656900LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x80uLL);
      v13 = *a4;
      *((_DWORD *)v12 + 14) = 1;
      *((_DWORD *)v12 + 6) = a2;
      v12[67] = a3;
      *((_DWORD *)v12 + 5) = a6;
      *(_OWORD *)(v12 + 4) = *(_OWORD *)a5;
      if ( v13 == 3 )
      {
        v14 = *(_WORD *)(a5 + 4);
        *((_DWORD *)v12 + 22) = *(_DWORD *)a5;
        v13 = 1;
        *((_DWORD *)v12 + 1) = 0x80000000;
        *((_DWORD *)v12 + 2) = 1;
        v12[12] = 0;
      }
      else
      {
        *(_DWORD *)(v12 + 94) = 0;
        v14 = 0;
      }
      *(_DWORD *)v12 = v13;
      *((_WORD *)v12 + 46) = v14;
      *((_DWORD *)v12 + 17) = 1;
      v15 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
      *((_QWORD *)v12 + 9) = v15;
      if ( v15 )
      {
        KeInitializeMutex(v15, 0);
        if ( a3 && *(_BYTE *)(a1 + 1156) == 1 )
          *((_QWORD *)v12 + 10) = DpiAcpiGetAcpiChildName(a1, a6);
        if ( *(_DWORD *)v12 == 1 )
        {
          v16 = *(_QWORD *)(a1 + 24);
          ++*(_DWORD *)(a1 + 3616);
          if ( DpiFdoIsMsBddAnchoredDevice(v16)
            && (v17 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5)) )
          {
            dword_1401691D4 = a2;
          }
        }
        v18 = v12 + 32;
        v19 = *(_QWORD **)(a1 + 3608);
        if ( *v19 != a1 + 3600 )
          __fastfail(3u);
        *v18 = a1 + 3600;
        v18[1] = v19;
        *v19 = v18;
        *(_QWORD *)(a1 + 3608) = v18;
      }
      else
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 20029;
        DpiFdoReleaseChildDescriptor(v12);
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v6 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 19975;
    }
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 19961;
  }
  return v6;
}
