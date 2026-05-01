/*
 * XREFs of _lambda_c876813055a0f8eb90a291ca9ab0fec3_::_lambda_c876813055a0f8eb90a291ca9ab0fec3_ @ 0x18055C0E4
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3_____lambda_c876813055a0f8eb90a291ca9ab0fec3___ @ 0x18055B948 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c876813055a0f.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c876813055a0f8eb90a291ca9ab0fec3_::_lambda_c876813055a0f8eb90a291ca9ab0fec3_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *a2;
  v3 = a2 + 9;
  *a2 = 0LL;
  *(_QWORD *)a1 = v2;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 1);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 3);
  v4 = a2[5];
  a2[5] = 0LL;
  *(_QWORD *)(a1 + 40) = v4;
  v5 = a2[6];
  a2[6] = 0LL;
  *(_QWORD *)(a1 + 48) = v5;
  v6 = a2[7];
  a2[7] = 0LL;
  *(_QWORD *)(a1 + 56) = v6;
  v7 = a2[8];
  a2[8] = 0LL;
  *(_QWORD *)(a1 + 64) = v7;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( (__int64 *)(a1 + 72) != a2 + 9 )
  {
    *(_QWORD *)(a1 + 72) = *v3;
    *v3 = 0LL;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 80) = a2[10];
  *(_QWORD *)(a1 + 88) = a2[11];
  a2[10] = 0LL;
  a2[11] = 0LL;
  *(_DWORD *)(a1 + 96) = *((_DWORD *)a2 + 24);
  v8 = a2[13];
  a2[13] = 0LL;
  *(_QWORD *)(a1 + 104) = v8;
  return a1;
}
