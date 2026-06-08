/*
 * XREFs of PepQueryUpdateWpsTable @ 0x14003C200
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 *     PepWpsUpdateWorker @ 0x14003C4D0 (PepWpsUpdateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     PepQueryWpsTable @ 0x14003C2F0 (PepQueryWpsTable.c)
 */

__int64 __fastcall PepQueryUpdateWpsTable(__int64 a1)
{
  int WpsTable; // ebx
  __int64 v2; // rcx
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 i; // r10
  __int64 v7; // rdx
  int v9; // [rsp+28h] [rbp-10h]

  WpsTable = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 280), 0x33u) && (_BYTE)word_140019B90 )
  {
    WpsTable = PepQueryWpsTable();
    if ( WpsTable >= 0 )
    {
      v3 = qword_140019B98;
      v4 = 0LL;
      v5 = qword_140019BA0;
      for ( i = qword_140019BA8; (unsigned int)v4 < *v3; *(_BYTE *)(i + 4 * v2 + 8) = v3[2 * v7 + 7] )
      {
        v7 = 3 * v4;
        v2 = 3 * v4;
        *(_BYTE *)(v5 + 2 * v4) = BYTE1(v3[6 * v4 + 4]);
        *(_BYTE *)(v5 + 2 * v4 + 1) = v3[6 * v4 + 4];
        v4 = (unsigned int)(v4 + 1);
        *(_DWORD *)(i + 4 * v2) = v3[2 * v7 + 5];
        *(_DWORD *)(i + 4 * v2 + 4) = v3[2 * v7 + 6];
      }
      if ( qword_140019B20 )
        qword_140019B20(v2);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = WpsTable;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids,
        v9);
    }
  }
  return (unsigned int)WpsTable;
}
