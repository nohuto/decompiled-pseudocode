/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1400254D4
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140023FB0 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140025570 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 * Callees:
 *     ??0CFlipManagerToken@@QEAA@XZ @ 0x1400A0F74 (--0CFlipManagerToken@@QEAA@XZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        _QWORD *a2,
        struct IDxgkCompositionObject **a3)
{
  __int64 v3; // r11
  struct DxgkCompositionObject *v4; // r9
  _QWORD *v5; // r10
  CFlipManagerToken *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax

  v3 = 0LL;
  v4 = a1;
  v5 = a2;
  v6 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( v6 )
    CFlipManagerToken::CFlipManagerToken(v6);
  *a3 = v6;
  *((_DWORD *)v4 + 16) = v3;
  *((_QWORD *)v4 + 13) = *v5;
  v7 = v5[1];
  *v5 = v3;
  *((_QWORD *)v4 + 15) = v7;
  v8 = v5[3];
  v5[1] = v3;
  *((_QWORD *)v4 + 16) = v8;
  *((_QWORD *)v4 + 18) = v5[4];
  v9 = v5[6];
  *((_QWORD *)v4 + 17) = v9;
  *((_BYTE *)v4 + 155) = v9 != 0;
  *((_QWORD *)v4 + 14) = v5[5];
  LOBYTE(v9) = *((_BYTE *)v5 + 16);
  v5[5] = v3;
  *((_BYTE *)v4 + 152) = v9;
  result = 0LL;
  *((_BYTE *)v4 + 154) = 1;
  return result;
}
