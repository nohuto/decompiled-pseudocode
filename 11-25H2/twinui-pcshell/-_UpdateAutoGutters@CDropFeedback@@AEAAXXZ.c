/*
 * XREFs of ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x18051C7F4
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18051C2D0 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659804 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDropFeedback::_UpdateAutoGutters(CDropFeedback *this, __int64 a2, enum DEVICE_SCALE_FACTOR a3)
{
  struct tagSIZE v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r13d
  unsigned int v8; // r15d
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  int v12; // esi
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **); // rbx
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **); // rbx
  int v17; // eax
  ImmersiveApplicationLayout *v18; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF

  v4 = (struct tagSIZE)*((unsigned int *)this + 22);
  LODWORD(v18) = *((_DWORD *)this + 20) - *((_DWORD *)this + 18);
  HIDWORD(v18) = *((_DWORD *)this + 21) - *((_DWORD *)this + 19);
  v5 = ImmersiveApplicationLayout::ComputeGutterWidth(v18, v4, a3);
  v6 = *((_QWORD *)this + 16);
  v7 = v5;
  v19 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 136LL))(v6);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &v19);
  v8 = 0;
  if ( v19 )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)this + 16);
      v20 = 0LL;
      v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v9 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
      if ( v10(v9, v8, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v20) >= 0 )
        break;
LABEL_39:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
      if ( ++v8 >= v19 )
        return;
    }
    v21 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v20 + 120LL))(v20, &v21);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 104LL))(v20) & 0x100000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 96LL))(v20);
      if ( !v11 || v11 == 3 )
      {
        v12 = 24576;
        goto LABEL_9;
      }
    }
    v12 = 0;
LABEL_9:
    if ( v11 == 1 )
    {
      if ( v8 )
      {
        v13 = *((_QWORD *)this + 16);
        v18 = 0LL;
        v14 = *(int (__fastcall **)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v13 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
        if ( v14(v13, v8 - 1, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v18) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(ImmersiveApplicationLayout *))(*(_QWORD *)v18 + 96LL))(v18) == 1
            || (v22 = 0LL,
                (*(void (__fastcall **)(ImmersiveApplicationLayout *, __int128 *))(*(_QWORD *)v18 + 120LL))(v18, &v22),
                v7 + DWORD2(v22) != (_DWORD)v21) )
          {
            v12 |= 0x2000u;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
      }
      else if ( (int)v21 > *((_DWORD *)this + 18) )
      {
        v12 |= 0x2000u;
      }
      if ( v8 + 1 >= v19 )
      {
        if ( SDWORD2(v21) < *((_DWORD *)this + 20) )
          v12 |= 0x4000u;
      }
      else
      {
        v15 = *((_QWORD *)this + 16);
        v18 = 0LL;
        v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v15 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
        if ( v16(v15, v8 + 1, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v18) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(ImmersiveApplicationLayout *))(*(_QWORD *)v18 + 96LL))(v18) == 1
            || (v22 = 0LL,
                (*(void (__fastcall **)(ImmersiveApplicationLayout *, __int128 *))(*(_QWORD *)v18 + 120LL))(v18, &v22),
                (_DWORD)v22 - v7 != DWORD2(v21)) )
          {
            v12 |= 0x4000u;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
      }
    }
    else if ( !v11 || v11 == 3 )
    {
      if ( (*(double (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20) == 0.0 )
      {
        v12 = 98304;
      }
      else
      {
        if ( !v8 && (int)v21 <= *((_DWORD *)this + 18) )
        {
          v12 &= ~0x2000u;
          if ( *((_BYTE *)this + 124) )
            v12 |= 0x8000u;
        }
        if ( v8 == v19 - 1 && SDWORD2(v21) >= *((_DWORD *)this + 20) )
        {
          v12 &= ~0x4000u;
          if ( *((_BYTE *)this + 124) )
            v12 |= 0x10000u;
        }
      }
    }
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 104LL))(v20);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 112LL))(v20, v12 | v17 & 0xFFFE1FFF);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 184LL))(v20);
    goto LABEL_39;
  }
}
