/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x18013AA24
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18013A5DC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x18013A9FC (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(CScrollAnimation *this, float a2)
{
  char v2; // dl
  float v4; // xmm0_4
  struct CChainingHelper *ChainingHelper; // rax
  __int64 v6; // rdx

  v2 = *((_BYTE *)this + 396);
  if ( (v2 & 1) != 0 )
  {
    v4 = (float)(int)((__PAIR64__((float)(a2 - *((float *)this + 96)) > 0.0, a2 - *((float *)this + 96))
                     - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 98) = v4;
    *((_BYTE *)this + 396) = (v4 == 0.0) | v2 & 0xFE;
    if ( v4 != 0.0 )
    {
      ChainingHelper = CScrollAnimation::TryGetChainingHelper(this);
      if ( ChainingHelper )
      {
        v6 = 3LL * *((int *)this + 71);
        *((_BYTE *)ChainingHelper + 4 * v6) |= 4u;
        *((_DWORD *)ChainingHelper + v6 + 2) = -805306369;
        *((_BYTE *)ChainingHelper + 36) |= 2u;
      }
    }
  }
}
