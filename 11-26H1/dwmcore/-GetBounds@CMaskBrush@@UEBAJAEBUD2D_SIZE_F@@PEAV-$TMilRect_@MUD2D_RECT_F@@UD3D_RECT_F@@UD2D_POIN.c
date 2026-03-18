/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801954E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 120);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xADu, 0LL);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 112);
      if ( v9 )
      {
        v20 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 192LL))(v9, a2, &v20);
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB2u, 0LL);
        }
        else
        {
          v11 = *a3;
          v12 = *(float *)&v20;
          if ( *(float *)&v20 > *a3 )
          {
            *(_DWORD *)a3 = v20;
            v11 = v12;
          }
          v13 = a3[1];
          v14 = *((float *)&v20 + 1);
          if ( *((float *)&v20 + 1) > v13 )
          {
            a3[1] = *((float *)&v20 + 1);
            v13 = v14;
          }
          v15 = a3[2];
          v16 = *((float *)&v20 + 2);
          if ( v15 > *((float *)&v20 + 2) )
          {
            a3[2] = *((float *)&v20 + 2);
            v15 = v16;
          }
          v17 = a3[3];
          v18 = *((float *)&v20 + 3);
          if ( v17 > *((float *)&v20 + 3) )
          {
            a3[3] = *((float *)&v20 + 3);
            v17 = v18;
          }
          if ( v15 <= v11 || v17 <= v13 )
          {
            *((_QWORD *)a3 + 1) = 0LL;
            *(_QWORD *)a3 = 0LL;
          }
        }
      }
    }
  }
  else
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return v4;
}
