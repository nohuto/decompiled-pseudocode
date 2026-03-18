/*
 * XREFs of ACPIEnumerateTables @ 0x1400D3898
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x14003D280 (ACPIEnumMapTableHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIEnumerateTables(_DWORD *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rax
  int v6; // edx
  unsigned int v7; // r8d
  _DWORD **v8; // r9
  __int64 v9; // r10
  _DWORD *v10; // rax

  v4 = 0;
  v5 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  if ( v5 && (v6 = *v5) != 0 )
  {
    v7 = 4 * v6;
    if ( a2 )
    {
      if ( *a2 >= v7 )
      {
        if ( v6 )
        {
          v8 = (_DWORD **)(v5 + 2);
          v9 = *v5;
          do
          {
            v10 = *v8++;
            *a1++ = *v10;
            --v9;
          }
          while ( v9 );
        }
        *a2 = v7;
      }
      else
      {
        *a2 = v7;
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        30,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  return v4;
}
