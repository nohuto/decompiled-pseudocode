/*
 * XREFs of DisplayCpcResourcePriorityRegisterDescriptor @ 0x140031228
 * Callers:
 *     Display_CPC @ 0x140031398 (Display_CPC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1400032E0 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000554C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ds @ 0x14000A0C4 (WPP_RECORDER_SF_Ds.c)
 *     DisplayGenAddr @ 0x140028678 (DisplayGenAddr.c)
 *     GetCpcResourceTypeName @ 0x1400321B4 (GetCpcResourceTypeName.c)
 */

__int64 __fastcall DisplayCpcResourcePriorityRegisterDescriptor(
        _QWORD *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4)
{
  _DWORD *v5; // rdx
  unsigned int i; // ebx
  const char *CpcResourceTypeName; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  const char **v10; // rbx
  __int64 v11; // rsi
  unsigned __int8 *v12; // rdi
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0xB9u,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        186,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
  }
  v5 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      a3 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        CpcResourceTypeName = (const char *)GetCpcResourceTypeName((unsigned int)v5[i + 1]);
        WPP_RECORDER_SF_Ds(*(_QWORD *)(v8 + 64), v9, v8, 0xBBu, v14, v9, CpcResourceTypeName);
      }
    }
    v5 = (_DWORD *)*a1;
  }
  v10 = (const char **)&off_140012348;
  v11 = 4LL;
  do
  {
    v12 = (unsigned __int8 *)a1 + *((unsigned int *)v10 - 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xBCu,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          *v10);
    }
    result = DisplayGenAddr(v12, "      ", a3, a4);
    v10 += 3;
    --v11;
  }
  while ( v11 );
  return result;
}
