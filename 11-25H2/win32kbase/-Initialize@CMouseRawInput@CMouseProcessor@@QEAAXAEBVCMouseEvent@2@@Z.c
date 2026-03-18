/*
 * XREFs of ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1400C85A0
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::CMouseRawInput::Initialize(
        CMouseProcessor::CMouseRawInput *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v4; // ecx
  __int64 v5; // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  unsigned int v8; // ecx
  __int16 v9; // dx

  *((_BYTE *)this + 68) = 0;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0uLL;
  *((_QWORD *)this + 7) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  v4 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL);
  *((_BYTE *)this + 69) = (v4 & 0x10) != 0;
  if ( (v4 & 0x10) == 0 )
  {
    *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 96LL);
    *((_QWORD *)this + 3) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL);
    v5 = *((_QWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)v5;
    *((_QWORD *)this + 7) = *(_QWORD *)(v5 + 16);
    v6 = (_DWORD *)*((_QWORD *)a2 + 1);
    *((_DWORD *)this + 3) = v6[11] + v6[19];
    LODWORD(v5) = v6[12] + v6[20];
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 4) = v5;
    v7 = (_DWORD *)*((_QWORD *)a2 + 1);
    if ( (v7[30] & 0x20) != 0 && ((v7[28] - 4) & 0xFFFFFFFB) == 0 )
      v8 = (unsigned __int8)v7[10] | 0xFF515700;
    else
      v8 = v7[10];
    *((_DWORD *)this + 5) = v8;
    *((_WORD *)this + 2) = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
    *((_WORD *)this + 3) = (*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)this + 2) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    v9 = *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL) & 0xF;
    *(_WORD *)this = v9;
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x200) != 0 )
    {
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 4) = 0;
      *(_WORD *)this = v9 & 0xFFFC;
    }
    if ( *((_DWORD *)this + 10) )
      *((_DWORD *)this + 16) |= 1u;
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 0x20) != 0 )
      *((_DWORD *)this + 16) |= 2u;
  }
}
