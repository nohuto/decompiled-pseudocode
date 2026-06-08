/*
 * XREFs of RegisterHvIdleStates @ 0x14003DD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     RegisterHvCStates @ 0x14003D678 (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x14003DE6C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x14003E360 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  int v4; // edx
  int v5; // r9d

  v1 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( (v1 & 0x20E0000000000LL) != 0 )
  {
    v3 = RegisterHvLpiStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 10;
LABEL_16:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        v5,
        (__int64)&WPP_38d77d5c6a80325a869eb798b0edd88f_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 >= 0 && byte_140015F05 )
      v3 = RegisterVmIdleStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
