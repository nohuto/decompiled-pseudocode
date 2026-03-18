/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x140245108
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14006611C (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  unsigned int v5; // edx
  __int16 v8; // ax
  _DWORD *Pool2; // rax
  __int64 v10; // r14
  _DWORD *v11; // rsi
  int v12; // edi
  UINT v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(unsigned __int16 *)(a2 + 92);
  v17 = v2;
  memset(&v16, 0, sizeof(v16));
  if ( v5 <= 0x7C )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1270;
    return 3221225485LL;
  }
  *(_WORD *)(a2 + 94) = v5 - 124;
  if ( (unsigned __int16)(v5 - 124) < 0x80u )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1285;
    return 3221225485LL;
  }
  v8 = (v5 - 124) & 0xFF80;
  *(_WORD *)(a2 + 94) = v8;
  if ( v8 + 124 != (_WORD)v5 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1294;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 92), 1953656900LL);
  v10 = 0LL;
  v11 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, *(unsigned __int16 *)(a2 + 92));
    v12 = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
    if ( v12 >= 0 )
    {
      *(_QWORD *)&v16.Type = 0LL;
      v16.pInputData = &v17;
      v13 = *(unsigned __int16 *)(a2 + 92);
      *(&v16.InputDataSize + 1) = 0;
      v16.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
      *(_OWORD *)&v16.OutputDataSize = 0LL;
      v16.OutputDataSize = v13;
      v16.InputDataSize = 4;
      v16.pOutputData = v11;
      v12 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v3 + 4032), &v16);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
      if ( v12 >= 0 )
      {
        **(_DWORD **)(a2 + 104) = *v11;
        v14 = *(_QWORD *)(a2 + 104);
        *(_OWORD *)(v14 + 8) = *(_OWORD *)(v11 + 2);
        *(_OWORD *)(v14 + 24) = *(_OWORD *)(v11 + 6);
        *(_OWORD *)(v14 + 40) = *(_OWORD *)(v11 + 10);
        *(_QWORD *)(v14 + 56) = *((_QWORD *)v11 + 7);
        *(_DWORD *)(*(_QWORD *)(a2 + 104) + 64LL) = v11[16];
        v15 = *(_QWORD *)(a2 + 104);
        *(_OWORD *)(v15 + 68) = *(_OWORD *)(v11 + 17);
        *(_OWORD *)(v15 + 84) = *(_OWORD *)(v11 + 21);
        *(_OWORD *)(v15 + 100) = *(_OWORD *)(v11 + 25);
        *(_DWORD *)(v15 + 116) = v11[29];
        do
        {
          *(_BYTE *)(v10 + *(_QWORD *)(a2 + 104) + 120) = *((_BYTE *)v11 + v10 + 120);
          ++v10;
        }
        while ( v10 < 4 );
        memmove(*(void **)(a2 + 112), v11 + 31, *(unsigned __int16 *)(a2 + 94));
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1348;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1330;
    }
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v12 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1311;
  }
  return (unsigned int)v12;
}
