/*
 * XREFs of HandleFullWindowDestruction @ 0x1400397D0
 * Callers:
 *     <none>
 * Callees:
 *     HandleInputDestDestruction @ 0x140039868 (HandleInputDestDestruction.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall HandleFullWindowDestruction(__int64 a1)
{
  _OWORD v3[7]; // [rsp+20h] [rbp-89h] BYREF
  _OWORD v4[7]; // [rsp+90h] [rbp-19h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( a1 )
  {
    LODWORD(v3[0]) = 4;
    *(_QWORD *)&v3[5] = a1;
    HIDWORD(v3[5]) = 2;
  }
  v4[0] = v3[0];
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  v4[4] = v3[4];
  v4[5] = v3[5];
  v4[6] = v3[6];
  return HandleInputDestDestruction(v4);
}
