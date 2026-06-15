/*
 * XREFs of ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180045A20
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180044B60 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x180044CB0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180046224 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 *     _lambda_b3a8f3052f5fb17079f668791b666c16_::operator() @ 0x180046294 (_lambda_b3a8f3052f5fb17079f668791b666c16_--operator().c)
 */

void __fastcall CDeviceGraphObjectsStore::RemoveStaleObjects(CDeviceGraphObjectsStore *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 *j; // rbx
  unsigned int v11; // r14d
  char *v12; // rsi
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 *v16; // rbp
  __int64 v17; // rdi
  __int64 *m; // rbx
  __int64 *k; // rdi
  __int64 *i; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26[4]; // [rsp+28h] [rbp-20h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (__int64 *)*((_QWORD *)this + 9);
  v5 = (__int64 *)*((_QWORD *)this + 10);
  while ( v4 != v5 && !lambda_ce21942885de90a1a6198292e021f395_::operator()(v3, v4) )
    ++v4;
  if ( v4 != v5 )
  {
    for ( i = v4 + 1; i != v5; ++i )
    {
      if ( !lambda_ce21942885de90a1a6198292e021f395_::operator()(v3, i) )
      {
        v21 = 0LL;
        if ( &v25 != i )
        {
          v21 = *i;
          *i = 0LL;
        }
        v22 = *v4;
        *v4 = v21;
        v25 = v22;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
        ++v4;
      }
    }
  }
  v6 = (__int64 *)*((_QWORD *)this + 10);
  if ( v4 != v6 )
  {
    v7 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v6, *((_QWORD *)this + 10));
    v8 = (__int64 *)*((_QWORD *)this + 10);
    v9 = v7;
    for ( j = (__int64 *)v7; j != v8; ++j )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(j);
    *((_QWORD *)this + 10) = v9;
  }
  v11 = 0;
  v12 = (char *)this + 96;
  do
  {
    v13 = *(__int64 **)v12;
    v14 = (__int64 *)*((_QWORD *)v12 + 1);
    while ( v13 != v14 && !(unsigned __int8)lambda_b3a8f3052f5fb17079f668791b666c16_::operator()(v6, v13) )
      ++v13;
    if ( v13 != v14 )
    {
      for ( k = v13 + 1; k != v14; ++k )
      {
        if ( !(unsigned __int8)lambda_b3a8f3052f5fb17079f668791b666c16_::operator()(v6, k) )
        {
          v23 = 0LL;
          if ( v26 != k )
          {
            v23 = *k;
            *k = 0LL;
          }
          v24 = *v13;
          *v13 = v23;
          v26[0] = v24;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26);
          ++v13;
        }
      }
    }
    v6 = (__int64 *)*((_QWORD *)v12 + 1);
    if ( v13 != v6 )
    {
      v15 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v6, *((_QWORD *)v12 + 1));
      v16 = (__int64 *)*((_QWORD *)v12 + 1);
      v17 = v15;
      for ( m = (__int64 *)v15; m != v16; ++m )
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(m);
      *((_QWORD *)v12 + 1) = v17;
    }
    ++v11;
    v12 += 24;
  }
  while ( v11 < 5 );
  if ( v1 )
    LeaveCriticalSection(v1);
}
