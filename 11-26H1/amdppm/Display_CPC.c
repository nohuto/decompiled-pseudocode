/*
 * XREFs of Display_CPC @ 0x14002C024
 * Callers:
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x140006208 (WPP_RECORDER_SF_s.c)
 *     GetCpcRegisterDefinitionTable @ 0x1400066D0 (GetCpcRegisterDefinitionTable.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002BBF8 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     DisplayGenAddr @ 0x14002BD68 (DisplayGenAddr.c)
 */

void __fastcall Display_CPC(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  const char **v4; // rdi
  __int64 v5; // rbp
  unsigned __int8 *v6; // rsi
  unsigned int *v7; // rdx
  unsigned int i; // edi
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF
  const char **v10; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 )
  {
    v10 = 0LL;
    v9 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          153,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            154,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              155,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              *(_DWORD *)a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              156,
              (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
              *(_DWORD *)(a1 + 4));
          }
        }
      }
    }
    GetCpcRegisterDefinitionTable(a1, &v10, &v9);
    if ( v9 )
    {
      v4 = v10;
      v5 = v9;
      do
      {
        v6 = (unsigned __int8 *)(a1 + *(unsigned int *)v4);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x9Du,
            (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
            v4[1]);
        DisplayGenAddr(v6, "  ", v2, v3);
        v4 += 3;
        --v5;
      }
      while ( v5 );
    }
    if ( *(_QWORD *)(a1 + 536) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          158,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
      v7 = *(unsigned int **)(a1 + 536);
      for ( i = 0; i < *v7; ++i )
      {
        DisplayCpcResourcePriorityRegisterDescriptor(&v7[26 * i + 2], i);
        v7 = *(unsigned int **)(a1 + 536);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          159,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    }
  }
}
