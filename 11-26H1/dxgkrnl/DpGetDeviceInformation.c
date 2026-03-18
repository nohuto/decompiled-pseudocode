/*
 * XREFs of DpGetDeviceInformation @ 0x1403ED050
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpGetDeviceInformation(__int64 a1, _QWORD *a2)
{
  int RegistryValues; // edi
  __int64 v4; // rbx
  int v6; // eax
  _DWORD *v7; // r14
  _QWORD v8[14]; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+B8h] [rbp+67h] BYREF

  RegistryValues = 0;
  if ( a1 && a2 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && ((v6 = *(_DWORD *)(v4 + 20), v6 == 3) || v6 == 2) )
    {
      if ( KeGetCurrentIrql() )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 828;
      }
      memset(a2, 0, 0x50uLL);
      *a2 = *(_QWORD *)(v4 + 48);
      a2[1] = *(_QWORD *)(v4 + 152);
      a2[4] = *(_QWORD *)(v4 + 1312);
      a2[5] = DpGlobals;
      a2[6] = *(&DpGlobals + 1);
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v4 + 528);
      a2[7] = *(_QWORD *)(v4 + 768);
      a2[8] = *(_QWORD *)(v4 + 760);
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL) >= 0x104Eu && *(_BYTE *)(v4 + 1156) == 1 )
      {
        memset(v8, 0, sizeof(v8));
        v9 = 0;
        LODWORD(v8[1]) = 288;
        v8[2] = L"DockingState";
        LODWORD(v8[4]) = 0x4000000;
        v7 = a2 + 9;
        v8[5] = &v9;
        v8[3] = v7;
        LODWORD(v8[6]) = 4;
        RegistryValues = RtlQueryRegistryValuesEx(2LL, L"IDConfigDB\\CurrentDockInfo", v8, 0LL, 0LL);
        if ( RegistryValues < 0 )
        {
          WdLogSingleEntry1(2LL);
          RegistryValues = 0;
          *v7 = v9;
          WdLogGlobalForLineNumber = 876;
        }
      }
    }
    else
    {
      RegistryValues = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 818;
    }
  }
  else
  {
    RegistryValues = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 805;
  }
  return (unsigned int)RegistryValues;
}
