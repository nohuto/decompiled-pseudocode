/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001032C
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F840 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?OnClientGlassUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18000FC80 (-OnClientGlassUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     _o_ceilf_0 @ 0x18008EEAC (_o_ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // eax
  __m128i v7; // xmm2
  CTopLevelWindow *v8; // rcx
  __m128i v9; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)((char *)a2 + 284) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 73) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 74) == 0x7FFFFFFF )
  {
    v7 = *(__m128i *)((char *)a2 + 284);
    v5 = *((_DWORD *)a2 + 73);
    v3 = _mm_cvtsi128_si32(v7);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
    v4 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  }
  else
  {
    v3 = (int)o_ceilf_0((float)*((int *)a2 + 71) * *((float *)a2 + 83));
    v9.m128i_i32[0] = v3;
    v4 = (int)o_ceilf_0((float)*((int *)a2 + 72) * *((float *)a2 + 83));
    v9.m128i_i32[1] = v4;
    v5 = (int)o_ceilf_0((float)*((int *)a2 + 73) * *((float *)a2 + 83));
    v9.m128i_i32[2] = v5;
    v6 = (int)o_ceilf_0((float)*((int *)a2 + 74) * *((float *)a2 + 83));
    v9.m128i_i32[3] = v6;
    v7 = v9;
  }
  if ( *((_DWORD *)a2 + 24) != v3
    || *((_DWORD *)a2 + 25) != v4
    || *((_DWORD *)a2 + 26) != v5
    || *((_DWORD *)a2 + 27) != v6 )
  {
    v8 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    *((__m128i *)a2 + 6) = v7;
    if ( v8 )
      CTopLevelWindow::OnClientGlassUpdated(v8, (__int64)a2);
  }
}
