/*
 * XREFs of sub_14006F488 @ 0x14006F488
 * Callers:
 *     sub_14006F900 @ 0x14006F900 (sub_14006F900.c)
 *     sub_1400BBFCC @ 0x1400BBFCC (sub_1400BBFCC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14006F488(void *Src, size_t Size, _OWORD *a3)
{
  unsigned int v3; // edi
  size_t v4; // rsi
  _QWORD *v7; // rbx
  void *v8; // rax
  _QWORD *v9; // rax

  v3 = 0;
  v4 = (unsigned int)Size;
  v7 = (_QWORD *)sub_1400143E0(64LL, 40LL, 1213423954LL, 0LL);
  if ( !v7 )
    return (unsigned int)-1073741670;
  v8 = (void *)sub_1400143E0(64LL, v4, 1213423954LL, 0LL);
  v7[2] = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(v7, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  v7[1] = v7;
  *v7 = v7;
  memmove(v8, Src, v4);
  *(_OWORD *)(v7 + 3) = *a3;
  v9 = (_QWORD *)qword_140169498;
  if ( *(PVOID **)qword_140169498 != &qword_140169490 )
    __fastfail(3u);
  *v7 = &qword_140169490;
  v7[1] = v9;
  *v9 = v7;
  qword_140169498 = (__int64)v7;
  return v3;
}
