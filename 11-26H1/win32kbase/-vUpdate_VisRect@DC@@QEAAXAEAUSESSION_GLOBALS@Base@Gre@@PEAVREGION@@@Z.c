/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVREGION@@@Z @ 0x140037830
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140017E8C (-PentryFromPobj@DC@@QEAAPEAU_ENTRY@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct Gre::Base::SESSION_GLOBALS *a2, struct REGION *a3)
{
  struct _ENTRY *v5; // rdi
  int v6; // edx
  int v7; // r8d
  _DWORD *v8; // r9
  unsigned __int64 v9; // xmm0_8
  int v10; // ecx
  struct REGION *v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = DC::PentryFromPobj(this, a2);
  if ( (*((_BYTE *)v5 + 15) & 4) != 0 )
  {
    if ( !a3
      || (v11 = a3,
          *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)&v11),
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v11) == 1) )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_140265508;
    }
    else
    {
      v6 = *((_DWORD *)this + 258);
      v7 = *((_DWORD *)this + 259);
      v8 = (_DWORD *)*((_QWORD *)this + 122);
      v9 = _mm_srli_si128(*(__m128i *)((char *)a3 + 52), 8).m128i_u64[0];
      v10 = HIDWORD(*(_QWORD *)((char *)a3 + 52)) - v7;
      v8[30] = *(_OWORD *)((char *)a3 + 52) - v6;
      v8[31] = v10;
      v8[32] = v9 - v6;
      v8[33] = HIDWORD(v9) - v7;
    }
    *((_BYTE *)v5 + 15) &= ~4u;
  }
}
