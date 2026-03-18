/*
 * XREFs of ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1800ABFB0
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180182380 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  float v3; // xmm0_4
  bool v4; // zf
  int v5; // eax
  _DWORD v7[5]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+44h] [rbp-24h]
  BOOL v9; // [rsp+4Ch] [rbp-1Ch]

  v1 = (_QWORD *)((char *)this + 136);
  v2 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fmaxf(0.0, *((float *)this + 54))) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    return (unsigned int)-2003304438;
  }
  else if ( !*v1 )
  {
    v3 = fmaxf(1.0, *((float *)this + 53));
    v7[0] = *((_DWORD *)this + 49);
    v7[1] = *((_DWORD *)this + 50);
    v7[2] = *((_DWORD *)this + 48);
    v7[3] = *((_DWORD *)this + 51);
    v4 = *((_BYTE *)this + 220) == 0;
    *(float *)&v7[4] = v3;
    v8 = 0LL;
    v9 = !v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)g_DeviceManager + 144LL))(
           g_DeviceManager,
           v7,
           0LL,
           0LL,
           v1);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1D3u, 0LL);
  }
  return v2;
}
