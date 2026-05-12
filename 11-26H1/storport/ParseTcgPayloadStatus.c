/*
 * XREFs of ParseTcgPayloadStatus @ 0x14013729C
 * Callers:
 *     ParseTcgReceivedPayload @ 0x140137430 (ParseTcgReceivedPayload.c)
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     ParseToken @ 0x1401375C4 (ParseToken.c)
 *     TcglibpMapStatus @ 0x140137B18 (TcglibpMapStatus.c)
 *     WPP_SF_Dd @ 0x140137C1C (WPP_SF_Dd.c)
 */

__int64 __fastcall ParseTcgPayloadStatus(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  __int64 *v7; // r14
  unsigned int v8; // ebp
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8

  v2 = ParseToken(a1 + 56, a1 + 80);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_DWORD *)(v3 + 8);
    if ( v4 != 5 )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        return (unsigned int)-1073741435;
      v6 = 17;
LABEL_6:
      WPP_SF_d((__int64)v5->AttachedDevice, v6, (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids, v4);
      return (unsigned int)-1073741435;
    }
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 != 3 )
    {
      v5 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        return (unsigned int)-1073741435;
      v6 = 18;
      goto LABEL_6;
    }
    v7 = *(__int64 **)(v3 + 16);
    v8 = 0;
    while ( v8 < 3 )
    {
      if ( v7 )
      {
        v9 = *((_DWORD *)v7 + 2);
        if ( v9 == 8 )
        {
          if ( !v8 )
          {
            v10 = *((unsigned __int8 *)v7 + 16);
            *(_BYTE *)(a1 + 88) = v10;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x14u,
                (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
                v10);
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0x13u,
              (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
              v9);
          v2 = -1073741435;
        }
        v7 = (__int64 *)*v7;
        ++v8;
        if ( v2 >= 0 )
          continue;
      }
      if ( v2 < 0 )
        return (unsigned int)v2;
      break;
    }
    if ( *(_BYTE *)(a1 + 88) )
    {
      v11 = TcglibpMapStatus(a1);
      v2 = v11;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_Dd(WPP_GLOBAL_Control->AttachedDevice, 21LL, v12, *(unsigned __int8 *)(a1 + 88), v11);
    }
  }
  return (unsigned int)v2;
}
