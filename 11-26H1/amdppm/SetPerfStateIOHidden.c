/*
 * XREFs of SetPerfStateIOHidden @ 0x14000C7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     WriteGenAddrHidden @ 0x1400039C4 (WriteGenAddrHidden.c)
 *     ReadGenAddrHidden @ 0x140003AF0 (ReadGenAddrHidden.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r8
  int GenAddrHidden; // eax
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(a1, (_BYTE *)(a2 + 12), v8);
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = GenAddrHidden;
          v11 = a4;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x18u,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
            v11,
            v12);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
