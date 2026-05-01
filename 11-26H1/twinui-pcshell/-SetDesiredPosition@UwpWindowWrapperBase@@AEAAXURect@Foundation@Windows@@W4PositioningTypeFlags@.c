/*
 * XREFs of ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18017E8D8
 * Callers:
 *     _lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator() @ 0x18017E814 (_lambda_c5527e6a5cdcf12967d2d97adb21a98f_--operator().c)
 *     _lambda_909b11586af9f9b22b39a9a889554953_::operator() @ 0x180445D7C (_lambda_909b11586af9f9b22b39a9a889554953_--operator().c)
 *     _lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9_::operator() @ 0x1804464BC (_lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9_--operator().c)
 * Callees:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18017EC68 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetDesiredPosition(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  float v10; // xmm1_4
  char v11; // bp
  float v12; // xmm1_4
  _OWORD *v13; // r8
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64 *, _OWORD *); // rax
  char v17; // si
  _OWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[35] + 224LL))(a1[35]);
  *((_BYTE *)a1 + 488) = 1;
  if ( (a3 & 1) != 0 )
  {
    v10 = *(float *)a2;
    if ( *((float *)a1 + 118) == *(float *)a2 && *((float *)a1 + 119) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      result = *(unsigned int *)(a2 + 4);
      *((_DWORD *)a1 + 119) = result;
      *((float *)a1 + 118) = v10;
    }
  }
  v11 = 0;
  if ( (a3 & 2) != 0 )
  {
    v12 = *(float *)(a2 + 8);
    if ( *((float *)a1 + 120) == v12 && *((float *)a1 + 121) == *(float *)(a2 + 12) )
    {
      a3 &= ~2u;
    }
    else
    {
      result = *(unsigned int *)(a2 + 12);
      v11 = 1;
      *((_DWORD *)a1 + 121) = result;
      *((float *)a1 + 120) = v12;
    }
  }
  v13 = a1 + 62;
  v14 = *((_OWORD *)a1 + 32);
  v18[0] = *((_OWORD *)a1 + 31);
  v19 = a1[66];
  v18[1] = v14;
  if ( a4 )
  {
    v15 = *a1;
    *v13 = *(_OWORD *)a4;
    v16 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v15 + 160);
    *((_OWORD *)a1 + 32) = *(_OWORD *)(a4 + 16);
    a1[66] = *(_QWORD *)(a4 + 32);
    result = v16(a1, v18);
    v17 = result;
  }
  else
  {
    v17 = 0;
  }
  if ( (a3 & 3) != 0 || v17 )
  {
    LOBYTE(v13) = v17;
    LOBYTE(v9) = v11;
    (*(void (__fastcall **)(__int64 *, __int64, _OWORD *))(*a1 + 168))(a1, v9, v13);
    result = UwpWindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v17) && !*((_BYTE *)a1 + 548) )
      return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 224))(a1);
  }
  return result;
}
