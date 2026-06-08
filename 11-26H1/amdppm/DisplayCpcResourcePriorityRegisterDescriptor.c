/*
 * XREFs of DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002BBF8
 * Callers:
 *     Display_CPC @ 0x14002C024 (Display_CPC.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_Ds @ 0x140007750 (WPP_RECORDER_SF_Ds.c)
 *     DisplayGenAddr @ 0x14002BD68 (DisplayGenAddr.c)
 *     GetCpcResourceTypeName @ 0x14002DAC8 (GetCpcResourceTypeName.c)
 */

__int64 __fastcall DisplayCpcResourcePriorityRegisterDescriptor(_QWORD *a1, char a2)
{
  _DWORD *v3; // rdx
  unsigned int i; // ebx
  const char *CpcResourceTypeName; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  const char **v8; // rbx
  __int64 v9; // rsi
  char *v10; // rdi
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        185,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        186,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
  }
  v3 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      CpcResourceTypeName = (const char *)GetCpcResourceTypeName((unsigned int)v3[i + 1]);
      WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 0xBBu, v12, v7, CpcResourceTypeName);
    }
    v3 = (_DWORD *)*a1;
  }
  v8 = (const char **)&off_140010248;
  v9 = 4LL;
  do
  {
    v10 = (char *)a1 + *((unsigned int *)v8 - 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xBCu,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          *v8);
    }
    result = DisplayGenAddr(v10, "      ");
    v8 += 3;
    --v9;
  }
  while ( v9 );
  return result;
}
