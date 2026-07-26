/*
 * XREFs of ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x14013A858
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14009A748 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x14009A8C8 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(
        const struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a1,
        unsigned __int8 *a2)
{
  const struct _GUID *v2; // rax
  int v3; // r10d
  __int64 v5; // r8
  const struct _GUID *v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-58h]

  v2 = (const struct _GUID *)&unk_1400F9FA0;
  v3 = *((unsigned __int8 *)a1 + 5);
  v5 = v3 | (*((unsigned __int8 *)a1 + 4) << 16);
  while ( 1 )
  {
    v6 = &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids;
    if ( v2 == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      break;
    if ( (_DWORD)v5 == v2->Data1 )
    {
      LOBYTE(v6) = v2->Data2;
      if ( HIBYTE(v2->Data2) == 1 )
      {
        v7 = *(unsigned __int8 *)a1;
        if ( (_BYTE)v7 == 0xC7 && *((_WORD *)a1 + 1) >= 0x78u && *((_BYTE *)a1 + 1) )
        {
          *a2 = (unsigned __int8)v6;
          return 0LL;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)v6, v7, 0xFu, v9);
          return 3221291013LL;
        }
      }
      break;
    }
    v2 = (const struct _GUID *)((char *)v2 + 8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)v6,
      v5,
      0xEu,
      v9,
      *((_BYTE *)a1 + 4),
      v3,
      (unsigned __int16 *)a1 + 8);
  return 3221291012LL;
}
