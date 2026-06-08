/*
 * XREFs of SetPerfStateIO @ 0x14000C720
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1400021A0 (ReadGenAddr.c)
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     WriteGenAddr @ 0x140003B54 (WriteGenAddr.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  int GenAddr; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v5 = 0;
  WriteGenAddr((unsigned __int8 *)a1, a2);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 )
    {
      GenAddr = ReadGenAddr(a1 + 12, v6, v7);
      if ( GenAddr != (_DWORD)a3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = GenAddr;
          v10 = a3;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x17u,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
            v10,
            v11);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v5;
}
