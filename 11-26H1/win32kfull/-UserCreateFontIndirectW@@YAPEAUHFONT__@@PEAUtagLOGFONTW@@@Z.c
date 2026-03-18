/*
 * XREFs of ?UserCreateFontIndirectW@@YAPEAUHFONT__@@PEAUtagLOGFONTW@@@Z @ 0x140102088
 * Callers:
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 */

__int64 __fastcall UserCreateFontIndirectW(struct tagLOGFONTW *a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  _OWORD v6[5]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]
  int v8; // [rsp+78h] [rbp-10h]
  __int16 v9; // [rsp+7Ch] [rbp-Ch]

  v1 = *(_OWORD *)&a1->lfWeight;
  v6[0] = *(_OWORD *)&a1->lfHeight;
  v2 = *(_OWORD *)&a1->lfFaceName[2];
  v6[1] = v1;
  v3 = *(_OWORD *)&a1->lfFaceName[10];
  v6[2] = v2;
  v4 = *(_OWORD *)&a1->lfFaceName[18];
  v6[3] = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&a1->lfFaceName[26];
  v6[4] = v4;
  v7 = v3;
  v8 = *(_DWORD *)&a1->lfFaceName[30];
  v9 = 0;
  return GreCreateFontIndirectW(v6);
}
