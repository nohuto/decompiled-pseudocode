/*
 * XREFs of ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180052720
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18005231C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 *     ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18005269C (-DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV-$optional@ULastUpData@ShellEdgyRecognizer@@@std@@.c)
 * Callees:
 *     ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x1800527D0 (-GetRectForLocation@ShellEdgyRecognizer@@AEAA-AUtagRECT@@U2@W4EdgyLocation@1@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall ShellEdgyRecognizer::HitTestEdgyRegion(__int64 a1, POINT a2)
{
  __m128i *v2; // rdi
  unsigned __int32 v5; // esi
  __m128i si128; // [rsp+20h] [rbp-58h] BYREF
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  RECT rc; // [rsp+40h] [rbp-38h] BYREF

  v2 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
    if ( v2 == (__m128i *)&v8 )
      return 0LL;
    v5 = v2->m128i_i32[0];
    if ( (v2->m128i_i32[0] & *(_DWORD *)(a1 + 128)) != 0 )
    {
      v8 = *(_OWORD *)(a1 + 80);
      ((void (__fastcall *)(__int64, RECT *, __int128 *, _QWORD, __int64, __int64))ShellEdgyRecognizer::GetRectForLocation)(
        a1,
        &rc,
        &v8,
        v5,
        si128.m128i_i64[0],
        si128.m128i_i64[1]);
      if ( PtInRect(&rc, a2) )
        break;
    }
    v2 = (__m128i *)((char *)v2 + 4);
  }
  return v5;
}
