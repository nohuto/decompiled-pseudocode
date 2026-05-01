/*
 * XREFs of ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1804322A4
 * Callers:
 *     _lambda_007bba039c8197a809a146c2afd83a5a_::operator() @ 0x18042CB84 (_lambda_007bba039c8197a809a146c2afd83a5a_--operator().c)
 *     _lambda_087a70eddc18843aa31de864cf62f380_::operator() @ 0x18042CC58 (_lambda_087a70eddc18843aa31de864cf62f380_--operator().c)
 *     _lambda_bcb0b569c925f2594c0329e0195fd877_::operator() @ 0x18042E39C (_lambda_bcb0b569c925f2594c0329e0195fd877_--operator().c)
 *     _lambda_e759eedb746c46c8de126f42e1c523fe_::operator() @ 0x18042EC50 (_lambda_e759eedb746c46c8de126f42e1c523fe_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180430D4C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::SetDesiredPosition(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  float v9; // xmm1_4
  char v10; // bp
  float v11; // xmm1_4
  _OWORD *v12; // r8
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, _OWORD *); // rax
  char v16; // si
  _OWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  *(_BYTE *)(a1 + 504) = 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = *(float *)a2;
    if ( *(float *)(a1 + 488) == *(float *)a2 && *(float *)(a1 + 492) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)(a1 + 492) = *(_DWORD *)(a2 + 4);
      *(float *)(a1 + 488) = v9;
    }
  }
  v10 = 0;
  if ( (a3 & 2) != 0 )
  {
    v11 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 496) == v11 && *(float *)(a1 + 500) == *(float *)(a2 + 12) )
    {
      a3 &= ~2u;
    }
    else
    {
      v10 = 1;
      *(_DWORD *)(a1 + 500) = *(_DWORD *)(a2 + 12);
      *(float *)(a1 + 496) = v11;
    }
  }
  v12 = (_OWORD *)(a1 + 512);
  v13 = *(_OWORD *)(a1 + 528);
  v17[0] = *(_OWORD *)(a1 + 512);
  v18 = *(_QWORD *)(a1 + 544);
  v17[1] = v13;
  if ( a4 )
  {
    v14 = *(_QWORD *)a1;
    *v12 = *(_OWORD *)a4;
    v15 = *(__int64 (__fastcall **)(__int64, _OWORD *))(v14 + 152);
    *(_OWORD *)(a1 + 528) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 544) = *(_QWORD *)(a4 + 32);
    v16 = v15(a1, v17);
  }
  else
  {
    v16 = 0;
  }
  if ( (a3 & 3) != 0 || v16 )
  {
    LOBYTE(v12) = v16;
    LOBYTE(v8) = v10;
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 160LL))(a1, v8, v12);
    WindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v16) && !*(_BYTE *)(a1 + 564) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
  }
}
