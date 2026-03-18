/*
 * XREFs of Isoch_Stage_Find @ 0x140013B30
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x140015948 (WPP_RECORDER_SF_DDqDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 */

__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *v4; // rbx
  __int64 *i; // rsi
  __int64 v9; // r8
  __int64 v10; // r10
  char v11; // cl
  int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rbx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // edx
  int v20; // edx
  __int64 v21; // rdx

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 392);
  for ( i = *(__int64 **)(a1 + 392); ; i = (__int64 *)*i )
  {
    if ( v4 == i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = HIDWORD(*(_QWORD *)a3);
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v21,
          14,
          19,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          HIBYTE(*(_DWORD *)(a2 + 12)),
          HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
          BYTE4(*(_QWORD *)a3),
          v3);
      }
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v20 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LOBYTE(v20) = 5;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v20,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        18,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        i[3]);
    }
    v9 = HIDWORD(*(_QWORD *)a3);
    v10 = *(unsigned int *)(i[6] + 128);
    if ( v10 == v9 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = *(_DWORD *)(a2 + 12);
    v18 = HIBYTE(v17);
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v18,
      v9,
      20,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      SHIBYTE(v17),
      BYTE2(v17) & 0x1F,
      v10,
      v9,
      v3);
  }
  v11 = *((_BYTE *)i + 130);
  v12 = *((unsigned __int8 *)i + 132);
  *((_BYTE *)i + 133) = v12;
  *((_BYTE *)i + 134) = v11;
  if ( v11 )
  {
    v13 = v12 * (unsigned int)*((unsigned __int8 *)i + 128);
    v14 = v12 + 1;
LABEL_12:
    *((_BYTE *)i + 134) = v11 - 1;
    v15 = (__int64)i + v13 + 144;
    *((_BYTE *)i + 133) = v14 % *((unsigned __int8 *)i + 129);
    goto LABEL_13;
  }
  v15 = 0LL;
LABEL_13:
  while ( v15 )
  {
    if ( v3 <= *(_DWORD *)(v15 + 44) )
    {
      if ( !v3 || v3 > *(_DWORD *)(v15 + 48) - 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v19 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
            LOBYTE(v19) = 5;
            WPP_RECORDER_SF_DDDD(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v19,
              14,
              21,
              (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
              HIBYTE(*(_DWORD *)(a2 + 12)),
              HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
              *(_DWORD *)(v15 + 48),
              v3 + 1);
          }
        }
        *((_DWORD *)i + 25) = v3 + 1;
        *(_DWORD *)(v15 + 48) = v3 + 1;
      }
      return v15;
    }
    v11 = *((_BYTE *)i + 134);
    if ( v11 )
    {
      v13 = *((unsigned __int8 *)i + 133) * (unsigned int)*((unsigned __int8 *)i + 128);
      v14 = *((unsigned __int8 *)i + 133) + 1;
      goto LABEL_12;
    }
    v15 = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  WPP_RECORDER_SF_DDqDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    i[3],
    HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
    22,
    (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
    HIBYTE(*(_DWORD *)(a2 + 12)),
    HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
    i[3],
    BYTE4(*(_QWORD *)a3),
    v3);
  return 0LL;
}
