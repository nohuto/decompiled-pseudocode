/*
 * XREFs of ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180068C20
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::BeginAppend(CD3DDynamicAppendBuffer *this, unsigned int a2, int a3)
{
  unsigned int v4; // r12d
  __int64 v5; // r14
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // r13d
  int v10; // eax
  int v11; // edi
  __int64 result; // rax
  CD2DContext *v13; // rax
  int v14; // eax
  int v15; // ecx
  int v16; // r9d
  _OWORD v17[4]; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+18h]

  v4 = *((_DWORD *)this + 10) - *((_DWORD *)this + 9);
  v5 = *(_QWORD *)this;
  v7 = -2003304307;
  v8 = a2 - *((_DWORD *)this + 9) % a2;
  v9 = v8 % a2;
  v17[0] = 0LL;
  v19 = v8 % a2 + a3 * a2;
  if ( *(_DWORD *)(v5 + 1124) )
  {
    v11 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xA2Au, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _OWORD *))(**(_QWORD **)(v5 + 552) + 112LL))(
            *(_QWORD *)(v5 + 552),
            *((_QWORD *)this + 1),
            0LL,
            5 - (unsigned int)(v4 < v19),
            0,
            v17);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xA30u, 0LL);
  }
  if ( *(_DWORD *)(v5 + 1124) || v11 != -2005532292 && v11 != -2147024882 && v11 != -2005270523 )
    goto LABEL_8;
  v13 = (CD2DContext *)(v5 + 16);
  if ( !*(_DWORD *)(v5 + 440) )
    goto LABEL_8;
  if ( v11 != -2005270523 )
  {
LABEL_18:
    CD2DContext::TempDisableHardwareProtection(v13);
    goto LABEL_8;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 544) + 312LL))(*(_QWORD *)(v5 + 544));
  v15 = *(_DWORD *)(v5 + 1124);
  if ( v14 == -2005270480 )
  {
    v13 = (CD2DContext *)(v5 + 16);
    if ( v15 )
      goto LABEL_18;
    *(_DWORD *)(v5 + 1124) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v5 + 16));
LABEL_8:
    if ( v11 >= 0 )
      goto LABEL_9;
    goto LABEL_22;
  }
  if ( !v15 )
    *(_DWORD *)(v5 + 1124) = -2005270523;
LABEL_22:
  if ( *(_DWORD *)(v5 + 1124) )
  {
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6Cu, 0LL);
    return v7;
  }
LABEL_9:
  v18 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v11, 0LL, &v18) )
  {
    v16 = v18;
    if ( v18 == -2003304307 )
    {
      if ( v11 >= 0 )
        v11 = -2003304307;
      if ( !*(_DWORD *)(v5 + 1124) )
        *(_DWORD *)(v5 + 1124) = v11;
    }
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB71u, 0LL);
  }
  v7 = v11;
  if ( v11 < 0 )
    goto LABEL_23;
  result = (unsigned int)v11;
  *((_QWORD *)this + 3) = *(_QWORD *)&v17[0];
  *((_DWORD *)this + 8) = a2;
  if ( v4 < v19 )
    *((_DWORD *)this + 9) = 0;
  else
    *((_DWORD *)this + 9) += v9;
  return result;
}
