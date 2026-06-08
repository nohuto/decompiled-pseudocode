/*
 * XREFs of PepQueryUpdateWpsTable @ 0x14003AF3C
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 *     PepWpsUpdateWorker @ 0x14003B200 (PepWpsUpdateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     PepQueryWpsTable @ 0x14003B02C (PepQueryWpsTable.c)
 */

__int64 __fastcall PepQueryUpdateWpsTable(__int64 a1)
{
  int WpsTable; // ebx
  int v2; // edx
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 i; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-10h]

  WpsTable = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 280), 0x33u) && (_BYTE)word_140015FC0 )
  {
    WpsTable = PepQueryWpsTable();
    if ( WpsTable >= 0 )
    {
      v3 = qword_140015FC8;
      v4 = 0LL;
      v5 = qword_140015FD0;
      for ( i = qword_140015FD8; (unsigned int)v4 < *v3; *(_BYTE *)(i + 4 * v8 + 8) = v3[2 * v7 + 7] )
      {
        v7 = 3 * v4;
        v8 = 3 * v4;
        *(_BYTE *)(v5 + 2 * v4) = BYTE1(v3[6 * v4 + 4]);
        *(_BYTE *)(v5 + 2 * v4 + 1) = v3[6 * v4 + 4];
        v4 = (unsigned int)(v4 + 1);
        *(_DWORD *)(i + 4 * v8) = v3[2 * v7 + 5];
        *(_DWORD *)(i + 4 * v8 + 4) = v3[2 * v7 + 6];
      }
      if ( qword_140015F50 )
        qword_140015F50();
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = WpsTable;
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        3,
        14,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids,
        v10);
    }
  }
  return (unsigned int)WpsTable;
}
