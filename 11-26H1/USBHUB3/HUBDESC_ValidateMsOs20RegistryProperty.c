/*
 * XREFs of HUBDESC_ValidateMsOs20RegistryProperty @ 0x14003FEA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20RegistryProperty(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // edx

  v5 = 1;
  if ( *a3 >= 0xDu )
  {
    v7 = a3[3];
    v8 = *a3;
    if ( v8 >= v7 + 11 )
    {
      if ( !(_WORD)v7 || (v7 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x15Bu,
            (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
            v7);
        v6 = 171LL;
      }
      else
      {
        v9 = *(unsigned __int16 *)((char *)a3 + v7 + 8);
        if ( v8 >= v9 + v7 + 10 )
        {
          if ( (_WORD)v9 )
          {
            v10 = a3[2];
            if ( (_WORD)v10 && v10 <= 7 )
            {
              *(_DWORD *)a2 |= 0x40u;
              return v5;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x15Eu,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                a3[2]);
            v6 = 174LL;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x15Du,
                (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
                0);
            v6 = 173LL;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              0x15Cu,
              (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
              v9);
          v6 = 172LL;
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x15Au,
          (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
          v7);
      v6 = 170LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x159u,
        (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids,
        *a3);
    v6 = 169LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v6);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), v11, 5, 351, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
  }
  return v5;
}
