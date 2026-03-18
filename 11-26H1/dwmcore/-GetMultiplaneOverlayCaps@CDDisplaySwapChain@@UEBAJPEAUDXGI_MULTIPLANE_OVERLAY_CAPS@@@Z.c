/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1801C0420
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetMultiplaneOverlayCaps(
        CDDisplaySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  bool v25; // cc
  double v26; // xmm0_8
  float v28; // xmm1_4
  char v29; // [rsp+30h] [rbp-49h] BYREF
  char v30; // [rsp+31h] [rbp-48h] BYREF
  _BYTE v31[6]; // [rsp+32h] [rbp-47h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  __int64 v33; // [rsp+40h] [rbp-39h] BYREF
  double v34; // [rsp+48h] [rbp-31h] BYREF
  double v35; // [rsp+50h] [rbp-29h] BYREF
  double v36; // [rsp+58h] [rbp-21h] BYREF
  double v37[5]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v38; // [rsp+88h] [rbp+Fh]
  char v39; // [rsp+E0h] [rbp+67h] BYREF
  char v40; // [rsp+E8h] [rbp+6Fh] BYREF
  char v41; // [rsp+F0h] [rbp+77h] BYREF
  char v42; // [rsp+F8h] [rbp+7Fh] BYREF

  v38 = 0LL;
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  v32 = 0LL;
  *((_QWORD *)a2 + 4) = v38;
  *((_DWORD *)a2 + 10) = 0;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 50);
  v33 = 0LL;
  (**v4)(v4, &GUID_b6b31777_4fc1_5c06_8257_f709b82e1e63, &v33);
  v5 = v33;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v7 = v6(v5, &v32);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xFBu, 0LL);
  }
  else
  {
    v34 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
    v37[0] = 0.0;
    v9 = (*(__int64 (__fastcall **)(__int64, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(*(_QWORD *)v32 + 48LL))(v32, a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x102u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 56LL))(v32, (char *)a2 + 4);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x103u, 0LL);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 64LL))(v32, (char *)a2 + 8);
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x104u, 0LL);
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v32 + 72LL))(v32, &v34);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x105u, 0LL);
          }
          else
          {
            v13 = v32;
            *((float *)a2 + 4) = v34;
            v14 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v13 + 80LL))(v13, &v35);
            v8 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x107u, 0LL);
            }
            else
            {
              v15 = v32;
              v39 = 0;
              v40 = 0;
              v41 = 0;
              *((float *)a2 + 5) = v35;
              v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v15 + 88LL))(v15, 0LL, &v39);
              v8 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x10Eu, 0LL);
              }
              else
              {
                v17 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v32 + 88LL))(v32, 2LL, &v41);
                v8 = v17;
                if ( v17 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x10Fu, 0LL);
                }
                else
                {
                  v18 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v32 + 88LL))(v32, 1LL, &v40);
                  v8 = v18;
                  if ( v18 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x110u, 0LL);
                  }
                  else
                  {
                    v42 = 0;
                    *((_DWORD *)a2 + 3) |= (v39 != 0) | (v40 != 0 ? 2 : 0) | (v41 != 0 ? 4 : 0);
                    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 45) + 56LL))(
                            *((_QWORD *)this + 45),
                            2LL,
                            &v42);
                    v8 = v19;
                    if ( v19 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x117u, 0LL);
                    }
                    else
                    {
                      v29 = 0;
                      v30 = 0;
                      v31[0] = 0;
                      *((_DWORD *)a2 + 3) |= v42 != 0 ? 0x40000 : 0;
                      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v32 + 96LL))(v32, 0LL, &v29);
                      v8 = v20;
                      if ( v20 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x11Eu, 0LL);
                      }
                      else
                      {
                        v21 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v32 + 96LL))(
                                v32,
                                2LL,
                                v31);
                        v8 = v21;
                        if ( v21 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x11Fu, 0LL);
                        }
                        else
                        {
                          v22 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v32 + 96LL))(
                                  v32,
                                  1LL,
                                  &v30);
                          v8 = v22;
                          if ( v22 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x120u, 0LL);
                          }
                          else
                          {
                            v23 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v32 + 104LL))(v32, &v36);
                            v8 = v23;
                            if ( v23 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x122u, 0LL);
                            }
                            else
                            {
                              v24 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v32 + 112LL))(v32, v37);
                              v8 = v24;
                              if ( v24 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x123u, 0LL);
                              }
                              else
                              {
                                v25 = *((_DWORD *)a2 + 1) <= 1u;
                                *((_DWORD *)a2 + 8) |= (v29 != 0) | (v30 != 0 ? 2 : 0) | (v31[0] != 0 ? 4 : 0);
                                if ( !v25 )
                                  *((_DWORD *)a2 + 3) |= 0x20u;
                                if ( *((_DWORD *)a2 + 2) )
                                  *((_DWORD *)a2 + 3) |= 0x40u;
                                v26 = v36;
                                if ( v36 > 1.0 )
                                {
                                  v28 = v37[0];
                                  *((_DWORD *)a2 + 6) = 1;
                                  *((_DWORD *)a2 + 8) = 1024;
                                  *((float *)a2 + 10) = v28;
                                  *((float *)a2 + 9) = v26;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return v8;
}
