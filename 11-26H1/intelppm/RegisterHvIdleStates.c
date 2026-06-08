/*
 * XREFs of RegisterHvIdleStates @ 0x14003E960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     RegisterHvCStates @ 0x14003E288 (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x14003EA7C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x14003EF70 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  unsigned __int16 v4; // r9

  v1 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( (v1 & 0x20E0000000000LL) != 0 )
  {
    v3 = RegisterHvLpiStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_16:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v4,
        (__int64)&WPP_38d77d5c6a80325a869eb798b0edd88f_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 >= 0 && byte_140019AD5 )
      v3 = RegisterVmIdleStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
