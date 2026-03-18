/*
 * XREFs of ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180080090
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180080DE4 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18016E690 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x180175B10 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CExpressionManager::UpdateExpressionsWorker(CExpressionManager *this, char a2)
{
  char v2; // bp
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdi
  CBaseExpression *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx
  char *v10; // rdi
  CBaseExpression *v11; // rcx
  __int64 Elapsed; // rax
  unsigned int v13; // ebx
  char *v14; // rdi
  char *v15; // r14
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  char v22; // [rsp+40h] [rbp-38h]
  int v23; // [rsp+41h] [rbp-37h]
  __int16 v24; // [rsp+45h] [rbp-33h]
  char v25; // [rsp+47h] [rbp-31h]

  v2 = 0;
  v4 = 0;
  if ( *((_BYTE *)this + 418) )
  {
    v21 = *((_QWORD *)this + 2);
    v20 = 0LL;
    v22 = a2;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( CCommonRegistryData::LogExpressionPerfStats )
      QpcStopwatch::Start((QpcStopwatch *)&v20);
    v9 = 0;
    v10 = (char *)this + 32 * *((unsigned int *)this + 51);
    *((_BYTE *)this + 416) = 3;
    if ( *((_DWORD *)v10 + 58) )
    {
      do
      {
        v11 = *(CBaseExpression **)(*((_QWORD *)v10 + 26) + 8LL * v9);
        if ( v11 )
          CBaseExpression::InsertInOrder(v11, (const struct ExpressionWalkContext *)&v21);
        ++v9;
      }
      while ( v9 < *((_DWORD *)v10 + 58) );
    }
    *((_DWORD *)v10 + 58) = 0;
    *((_DWORD *)this + 51) = 1 - *((_DWORD *)this + 51);
    *((_BYTE *)this + 418) = 0;
    *((_BYTE *)this + 416) = 2;
    if ( CCommonRegistryData::LogExpressionPerfStats )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v20);
      CExpressionPerformanceCounter::AddDurationSample((char *)this + 128, 2LL, Elapsed);
    }
  }
  v5 = 0;
  v6 = 32LL * *((unsigned int *)this + 51);
  *(_QWORD *)((char *)this + 420) = 0LL;
  if ( *(_DWORD *)((char *)this + v6 + 232) )
  {
    do
    {
      v7 = *(CBaseExpression **)(*(_QWORD *)((char *)this + v6 + 208) + 8LL * v5);
      if ( v7 )
      {
        v8 = *((_QWORD *)this + 2);
        v20 = 0LL;
        CBaseExpression::CalculateValue(
          v7,
          (CExpressionManager *)((char *)this + 24),
          v8,
          (struct CalculateValueResult *)&v20);
        v2 |= v20;
      }
      else
      {
        ++v4;
      }
      ++v5;
    }
    while ( v5 < *(_DWORD *)((char *)this + v6 + 232) );
  }
  *((_BYTE *)this + 417) = v2;
  if ( v4 > 0x100 )
  {
    v13 = 0;
    v14 = (char *)this + 32 * *((unsigned int *)this + 51);
    v15 = (char *)this + 32 * (unsigned int)(1 - *((_DWORD *)this + 51));
    if ( *((_DWORD *)v14 + 58) )
    {
      do
      {
        v16 = *(_QWORD *)(*((_QWORD *)v14 + 26) + 8LL * v13);
        v20 = v16;
        if ( v16 )
        {
          v17 = *((_DWORD *)v15 + 58);
          v18 = v17 + 1;
          if ( (unsigned int)v18 < v17 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
          }
          else if ( (unsigned int)v18 > *((_DWORD *)v15 + 57) )
          {
            v19 = DynArrayImpl<1>::AddMultipleAndSet(v15 + 208, 8LL, v18, &v20);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC2u, 0LL);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)v15 + 26) + 8LL * v17) = v16;
            *((_DWORD *)v15 + 58) = v18;
          }
        }
        ++v13;
      }
      while ( v13 < *((_DWORD *)v14 + 58) );
    }
    *((_DWORD *)v14 + 58) = 0;
    *((_DWORD *)this + 51) = 1 - *((_DWORD *)this + 51);
  }
}
